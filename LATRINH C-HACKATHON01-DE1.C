#include<stdio.h>

int main(){
	int arr[100];
	int chose;
	int n,e;
	int min,max,index,value;
	int sum = 0;
	int flag = 0;
	do{
		printf("Menu\n");
		printf("1. Nhap so phan tu va gia tri phan tu cho mang\n");
		printf("2. In ra cac phan tu theo mang dang(arr[0] = 1,arr[1] = 5..)\n");
		printf("3. Tim gia tri nho nhat va lon nhat trong mang\n");
		printf("4. In ra tong cua tat ca cac phan tu\n");
		printf("5. Them mot phan tu vao cuoi mang, phan tu moi them vao mang phai do nguoi dung nhap vao\n");
		printf("6. Xoa phan tu tai vi tri cu the(do nguoi dung nhap vi tri)\n");
		printf("7. Sap xep theo thu tu giam dan (Bubble sort)\n");
		printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong (Linear search)\n");
		printf("9. In ra toan bo so nguyen trong mang.\n a. Neu khong co so nguyen to nao thi hien thi ra la khong co so nguyen nao trong mang.\n b. Neu co so nguyen to trong mang thi hien toan bo so nguyen to trong do ra\n");
		printf("10. Sap xep mang theo thu tu tang dan(Selection sort)\n");
		printf("11. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				printf("1. Nhap so phan tu va gia tri phan tu cho mang\n");
				printf("Moi ban nhap phan tu :");
				scanf("%d",&n);
				
				for(int i = 0;i < n;i++){
					printf("Phan tu thu %d gia tri %d: ",i,arr[i]);
					scanf("%d",&arr[i]);
			    }
				break;
			case 2:
				printf("2. In ra cac phan tu theo mang dang(arr[0] = 1,arr[1] = 5..)\n");
				for(int i = 0;i < n;i++){
					printf("%d\t",arr[i]);
				}
				printf("\n");
				break;
			case 3:
				printf("3. Tim gia tri nho nhat va lon nhat trong mang\n");
				min = arr[0];
				max = arr[0];
				
				for(int i = 0;i < n;i++){
					if(arr[i] < min){
						min = arr[i];
					}
				}
				for(int i = 0;i < n;i++){
					if(arr[i] > max){
						max = arr[i];
					}
				}
				printf("Gia tri nho nhat %d\n",min);
				printf("Gia tri lon nhat %d\n",max);
				break;
			case 4:
				printf("4. In ra tong cua tat ca cac phan tu\n");
				for(int i = 0;i < n;i++){
					sum += arr[i];
				}
				printf("Tong tat ca phan tu %d",sum);
				printf("\n");
				break;
			case 5:
				printf("5. Them mot phan tu vao cuoi mang, phan tu moi them vao mang phai do nguoi dung nhap vao\n");
				printf("Moi ban nhap vao so phan tu: ");
	            scanf("%d",&n);
	
	            for(int i = 0;i < n;i++){
        		printf("Moi ban nhap phan tu thu %d: ",i+1);
        		scanf("%d",&arr[i]);
            	}
            	
            	printf("Moi ban nhap vi tri muon them: ");
            	scanf("%d",&index);
            	printf("Moi ban nhap gia tri muon them: ");
            	scanf("%d",&value);
	
            	if( index > n -1){
        		    index = value;
        	    	index < n -1;
            	}
            	for(int i = n;i > index;i--){
            		arr[i] = arr[i - 1];
            	}
            	arr[index] = value;
            	for(int i = 0; i < n + 1;i++){
        	    	printf("%d",arr[i]);
            	}
            	printf("\n");
				break;
			case 6:
				printf("6. Xoa phan tu tai vi tri cu the(do nguoi dung nhap vi tri)\n");
				printf("Moi ban nhap vao so phan tu: ");
	            scanf("%d",&n);
	
	            for(int i = 0;i < n;i++){
        		printf("Moi ban nhap phan tu thu %d: ",i+1);
        		scanf("%d",&arr[i]);
            	}
            	
            	printf("Moi ban nhap vi tri muon xoa: ");
            	scanf("%d",&index);
            	printf("Moi ban nhap gia tri muon xoa: ");
            	scanf("%d",&value);
	
            	for(int i = n;i < n - 1;i--){
            		arr[i] = arr[i - 1];
            	}
            	
            	for(int i = 0; i < n - 1;i++){
        	    	printf("%d",arr[i]);
            	}
            	printf("\n");
				break;
			case 7:
				printf("7. Sap xep theo thu tu giam dan (Bubble sort)\n");
				for(int i = 0;i < n;i++){
	            	for(int j = 0;j < (n - 1 - i);j++){	
			            if(arr[j + 1] > arr[j]){
			            	int temp = arr[j];
			            	arr[j] = arr[j + 1];
			            	arr[j + 1] = temp;
		            	}
            		}
            	}
            	printf("\nMang da sap xep: ");
            	for(int i = 0;i < n;i++){
	        	printf("%d\t",arr[i]);
        	}
          	printf("\n");
				break;
			case 8:
				printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong (Linear search)\n");
				printf("Moi ban nhap vao mot phan tu: ");
				scanf("%d",&n);
				printf("moi ban nhap gia tri can tim: ");
            	scanf("%d",&e);
            	for(int i = 0;i< n;i++){
            		if(arr[i] == e){
            			printf("\nphan tu %d co vi tri la %d\t",e,i);
            			flag = i;
            		}
            	}
            	if(flag == -1){
            		printf("khong tim thay phan tu  trong mang",e);
            }
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
				break;
		}
	}while(chose != 11);
	
	return 0;
}
