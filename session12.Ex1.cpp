#include<stdio.h>
int tinhTong(int a, int b){
	return a+b;
}
int main(){
	int a;
	printf("Moi nhap so thu nhat: ");
	scanf("%d",&a);
	int b;
	printf("Moi nhap so thu hai: ");
	scanf("%d",&b);
    tinhTong(a,b);
    printf("Tong cua hai so %d va %d la %d",a,b,tinhTong(a,b));
	return 0;
}
