#include<stdio.h>
int main()
{
	int n, choice ,position , value, isprime ,check, temp; 
	int arr[100];
	int count=0;
	int max1=-1, max2=-1, min1, min2;
	
	do {
		printf("----Menu----\n");
		printf("1.nhap so luong va gia tri cho cac phan tu\n ");
		printf("2.In mang \n");
		printf("3.Dem so luong so hoan hao \n");
		printf("4.Dem so nguyen to \n");
		printf("5.Tim gia tri lon thu 2\n ");
		printf("6.Tim gia tri nho thu 2\n");
		printf("7.Them phan tu \n ");
		printf("8.Xoa phan tu \n");
		printf("9.Sap xep tang dan \n");
		printf("10.Sap xep giam dan \n");
		printf("11.Tim kiem phan tu\n ");
		printf("12.Xoa phan tu trung lap va xoa phan tu doc nhat\n");
		printf("13.Sap xep phan tu so chan truoc, so le sau \n");
		printf("14.Dao nguoc mang \n");
		printf("15.Thoat\n");
		
		printf("Lua chon cua ban la :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so luong phan tu :");
				scanf("%d",&n);
				for(int i=0; i<n ; i++){
					printf("Nhap phan tu thu %d:",i+1);
					scanf("%d",&arr[i]);
				}
				printf("\n");
				break;
			case 2:
				printf("mang da nhap la :");
				for(int i=0; i<n ; i++){
					printf("%d\t",arr[i]);
				}
				printf("\n");
				break;
			case 3://Dem so luong so hoan hao
				
			    for (int i = 0; i < n; i++) {
			        int num = arr[i];
			        int sum = 0;
			
			        // tinh cac uoc cua num
			        for (int j = 1; j <= num / 2; j++) {
			            if (num % j == 0) {
			                sum += j;
			            }
			        }
			
			        // kiem tra tung gia tri co bang num ko 
			        if (sum == num && num != 0) {
			            count++;
			        }
			    }
			
			    printf("so luong so hoan hao trong mang la: %d\n", count);
				break;
			case 4://Dem so nguyen to 
				printf("Cac so nguyen to trong mang: ");
                for (int i = 0; i < n; i++) {
                    isprime = 1;
                    if (arr[i] <= 1) {
                        isprime = 0;
                    } else {
                        for (int j = 2; j * j <= arr[i]; j++) {
                            if (arr[i] % j == 0) {
                                isprime = 0;
                                break;
                            }
                        }
                    }
                    if (isprime) {
                        printf("%d\t", arr[i]);
                    }
                }
                printf("\n");
                break;
				break;
			case 5://Tim gia tri lon thu 2	
			    for (int i = 0; i < n; i++) {
			        //cap nhap max1 va max2 
			        if (arr[i] > max1) {
			            max2 = max1; // cap nhap max2 truoc khi cap nhap max1
			            max1 = arr[i];
			        } else if (arr[i] > max2 && arr[i] != max1) {
			            max2 = arr[i];
			        }
			    }
			
			    if (max2 != -1) {
			        printf("Gia tri lon thu 2 trong mang la: %d\n", max2);
			    } else {
			        printf("khong co gia tri thu 2\n");
			    }
				printf("\n");
				break;
			case 6://Tim gia tri nho thu 2
				
			    for (int i = 0; i < n; i++) {
			        // cap nhap min 1 va min 2
			        if (arr[i] < max1) {
			            min2 = min1; // cap nhap min 2 truoc min 1
			            min1 = arr[i];
			        } else if (arr[i] < min2 && arr[i] != min1) {
			            min2 = arr[i];
			        }
			    }
			
			    if (min2 != -1) {
			        printf("Gia tri nho thu 2 trong mang la: %d\n", min2);
			    } else {
			        printf("ko co gia tri nho thu 2 trong mang\n");
			    }
				break;
			case 7:// them phan tu
				printf("Nhap vi tri muon them (0 den %d):",n-1);
				scanf("%d",&position);
				printf("Nhap gia tri muon them :");
				scanf("%d",&value);
				if(position >=0 && position <n ){
					for(int i=n; i>position ; i--){
						arr[i]=arr[i-1];
					}
					arr[position]=value;
					n++;
					printf("Mang moi la : ");
					for(int i=0; i<n ; i++){
						printf("%d\t",arr[i]);
					}
				}
				else{
					printf("Loi du lieu");
				}
				printf("\n");
				break;
			case 8://xoa phan tu
				printf("Nhap vi tri can xoa(0 den %d): ", n-1);
				scanf("%d",&position);
				if(position>=0 && position<n ){
					for(int i=position-1 ; i<n-1; i++){
						arr[i]= arr[i+1];
					}
					n--;
					printf("Mang moi la : ");
					for(int i=0; i<n-1 ; i++){
						printf("%d\t",arr[i]);
					}
				}
					else{
					printf("Loi du lieu");
				}
				printf("\n");
				break;
			case 9:// sap xep tang dan
				for (int i = 1; i < n; i++) {
                    int key = arr[i];
                    int j = i - 1;
                    while (j >= 0 && arr[j] > key) {
                        arr[j + 1] = arr[j];
                        j--;
                    }
                    arr[j + 1] = key;
                }
                printf("Mang sau khi sap xep chen: ");
                for (int i = 0; i < n; i++) {
                    printf("%d\t", arr[i]);
                }
                printf("\n");
                break;
			case 10://sap xep giam dan
				for (int i = 1; i < n; i++) {
                    int key = arr[i];
                    int j = i - 1;
                    while (j >= 0 && arr[j] < key) {
                        arr[j + 1] = arr[j];
                        j--;
                    }
                    arr[j + 1] = key;
                }
                printf("Mang sau khi sap xep chen: ");
                for (int i = 0; i < n; i++) {
                    printf("%d\t", arr[i]);
                }
                printf("\n");
                printf("\n");
				break;
			case 11://tim kiem phan tu
				printf("Nhap gia tri muon tim :");
				scanf("%d", &check);
				for(int i=0; i<n ;i++)
				{
					if(check == arr[i])
					{
						position= i;
						break;
					}
				}
				if(position != -1)
				{
					printf("%d nam o vi tri thu %d trong mang \n ", check, position+1);
					break;
				}
				else
				{
					printf("Khong tim thay ");
					break;
				}
				break;
			case 12://xoa phan tu trung lap in phan tu doc nhat
			    // dem so lan xuat hien cua tung phan tu 
			    for (int i=0;i<n;i++){
			        for (int j = i + 1;j<n;j++){
			            if (arr[i] == arr[j]) {
			                for (int k = j;k<n - 1;k++){
			                    arr[k] = arr[k + 1];
			                }
			                n--; 
			            }else{
			                j++; 
			            }
			        }
			    }
			    printf("Cac phan tu duy nhat trong mang la:\n");
			    for (int i=0;i<n;i++) {
			        printf("%d ", arr[i]);
			    }
			    printf("\n");
				break;
			case 13://sap xep va hien thi so chan dung truoc , so le dung sau
				for (int i = 0; i < n; i++) {
			        for (int j = 0; j < n - 1; j++) {
			            if (arr[j] % 2 != 0 && arr[j + 1] % 2 == 0) {
			                temp = arr[j];
			                arr[j] = arr[j + 1];
			                arr[j + 1] = temp;
			            }
			        }
			    }
			
			    // sap xep so chan theo thu tu tang dan
			    for (int i = 0; i < n; i++) {
			        for (int j = 0; j < n - 1; j++) {
			            if (arr[j] % 2 == 0 && arr[j] > arr[j + 1]) {
			                temp = arr[j];
			                arr[j] = arr[j + 1];
			                arr[j + 1] = temp;
			            }
			        }
			    }
			
			    //sap xep so le theo thu tu tang dan
			    for (int i = 0; i < n; i++) {
			        for (int j = 0; j < n - 1; j++) {
			            if (arr[j] % 2 != 0 && arr[j] > arr[j + 1]) {
			                temp = arr[j];
			                arr[j] = arr[j + 1];
			                arr[j + 1] = temp;
			            }
			        }
			    }
			    printf("Mang sau khi sap xep la: ");
			    for (int i = 0; i < n; i++) {
			        printf("%d\t", arr[i]);
			    }
				break;
			case 14://sap xep dao nguoc
				for (int i = 0; i < n / 2; i++) {
			        temp = arr[i];
			        arr[i] = arr[n - i - 1];
			        arr[n - i - 1] = temp;
			    }
			    printf("Mang sau khi dao nguoc la: ");
			    for (int i = 0; i < n; i++) {
			        printf("%d\t", arr[i]);
			    }
			    printf("\n"); 
				break;
			case 15:
				printf("Thoat");
				break;
			default:
				printf("Loi du lieu\n");
		}
	}while(choice !=0&& choice<16);
	return 0; 
 } 
