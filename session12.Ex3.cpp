#include<stdio.h>
int tinhGiaiThua(int n){
	int ketQua=1;
	if(n<=0){
		return -1;
	}
	for(int i=1;i<=n;i++){
		ketQua*=i;
	}
	return ketQua;
}
int main(){
	int n;
	printf("Moi nhap so: ");
	scanf("%d",&n);
	int giaiThua=tinhGiaiThua(n);
	if(giaiThua==-1){
		printf("Giai thua cua so am nen ko ton tai \n");
	}else{
		printf("Giai thua cua so %d la %d",n,giaiThua);
	}
	return 0;
}
