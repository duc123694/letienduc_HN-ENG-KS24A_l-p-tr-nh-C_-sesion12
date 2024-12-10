#include<stdio.h>
int kiemTraSoNguyenTo(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			return 0;;
		}
	}
	return 1;	
}
int main(){
	int count=0;
	int a,b;
	printf("Moi nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Moi nhap so thu hai: ");
	scanf("%d",&b);
	  if (kiemTraSoNguyenTo(a)) {
        printf("%d la so nguyen to.\n", a);
    } else {
        printf("%d khong phai la so nguyen to.\n", a);
    }
    if (kiemTraSoNguyenTo(b)) {
        printf("%d la so nguyen to.\n", b);
    } else {
        printf("%d khong phai la so nguyen to.\n", b);
    }

    return 0;
}
