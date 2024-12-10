#include<stdio.h>
int kiemTraSoHoanHao(int n){
	if(n<=0){
		return 0;
	}
	int tong=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			tong+=i;
		}
	}
	if(tong == n){
		return 1;
	}else{
		return 0;
	}

}
int main(){
	int a,b;
	printf("Moi nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Moi nhap so thu hai: ");
	scanf("%D",&b);
	if(kiemTraSoHoanHao(a)){
		printf("%d day ko phai so hoan hao\n",a);
	}else{
		printf("%d day la so hoan hao\n",a);
	}
	if(kiemTraSoHoanHao(b)){
		printf("%d day ko phai so hoan hao \n",b);
	}else{
		printf("%d day la so hoan hao\n",b);
	}
	return 0;
}
