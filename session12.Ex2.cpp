#include<stdio.h>
void Value(int arr[],int size){
	printf("Gia tri cua mang la: ");
	for(int i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
}
int main(){
	int number[]={1,2,3,4,5};
	int size=sizeof(number)/sizeof(int);
	Value(number,size);
	return 0;
}
