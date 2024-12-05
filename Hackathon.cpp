#include<stdio.h>
int main(){
	int choice, n, isprime, position, value, second_max, check, chan, le;
	int arr[100];
	int max=arr[0];
	do{
		printf("----Menu---- \n");
		printf("1.Nhap phan tu \n");
		printf("2.In gia tri cac phan tu \n");
		printf("3.Cac so hoan hao trong mang la \n");
		printf("4.Gia tri lon thu 2 \n");
		printf("5.Them phan tu \n");
		printf("6.Xoa phan tu \n");
		printf("7.Sap xep theo thu tu tang dan \n");
		printf("8.Tim kiem gia tri \n");
		printf("9. Sap xep gia tri theo chan le \n");
		printf("10.Dao nguoc thu tu cac phan tu trong mang \n");
		printf("11.Thoat\n");
		
		printf("Lua chon cua ban la :");
		scanf("%d",&choice);
		switch(choice){
			case 1:// nhap 
				printf("Nhap so phan tu :");
				scanf("%d",&n);
				for(int i =0; i<n ;i++){
					printf("Nhap gia tri thu %d:",i+1);
					scanf("%d",&arr[i]);
				}
				printf("\n");
				break;
			case 2:// in mang
				printf("Mang da nhap la :");
				for(int i=0; i<n ;i++){
					printf("%d\t",arr[i]);
				}
				printf("\n");
				break;
			case 3:// so hoan hao 
				printf("Cac so hoan hao trong mang: ");
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
			case 4:// gia tri lon thu 2
				for(int i=0; i<n ; i++){
					if(max < arr[i]){
						max= arr[i];
					}
					if(second_max < max && second_max > arr[i]){
						second_max = arr[i];
						i++;
						break;
					}
				}
				printf("Gia tri lon thu 2 la : ");
				for(int i=0; i<n ;i++){
					printf("%d", second_max);
				}
				printf("\n");
				break;
			case 5://them phan tu
				printf("Nhap vi tri muon them (0 den %d): ", n);
				scanf("%d",&position);
				printf("Nhap gia tri muon them:");
				scanf("%d",&value);
				if(position>=0 && position < n ){
					for(int i =n; i>position ; i--){
						arr[i]=arr[i-1];
					}
					arr[position]=value;
					n++;
					printf("Mang moi sau khi them la:");
					for(int i=0; i<n ;i++){
						printf("%d\t",arr[i]);
					}
				}
				else
				{
					printf("Loi du lieu \n");
				}
				printf("\n");
				break;
			case 6:// xoa phan tu 
				printf("Nhap vi tri muon xoa(0 den %d): ",n-1);
				scanf("%d",&position);
				if(position >=0 && position <n){
					for(int i = position ; i<n-1 ; i--){
						arr[i]=arr[i+1];
					}
					n--;
					printf("Mang moi sau khi xoa la :");
					for(int i=0; i<n ;i++){
						printf("%d\t",arr[i]);
					}
				}
				else{
					printf("loi du lieu\n");
				}
				printf("\n");
				break;
			case 7:// sap xep tang dan
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
			case 8:// tim kiem gia tri
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
				if(position <n && position >=0 &&position==check)
				{
					printf("%d nam o vi tri thu %d trong mang \n ", check, position+1);
					break;
				}
				else
				{
					printf("Khong tim thay \n");
					break;
				}
				printf("\n");
				break;
			case 9:// sap xep theo chan le
			
				
				
				printf("\n");
				break;
			case 10:// dao nguoc thu tu 
				break;
			case 11:// thoat
				printf("Thoat chuong trinh.Khong hen gap lai\n");
				break;
			default:
				printf("Loi du lieu \n");
		}
	}while(choice!=0);
	
	
	return 0;
}

