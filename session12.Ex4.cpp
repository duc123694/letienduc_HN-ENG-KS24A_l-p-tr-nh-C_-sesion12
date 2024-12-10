#include<stdio.h>
void findMaxValue(int arr[],int size){
	int maxValue=arr[0];
	printf("So lon nhat trong mang la ");
	for(int i=0;i<size;i++){
		if(maxValue<arr[i]){
			maxValue=arr[i];
		}
	}
	printf(" %d",maxValue);
}
int main(){
	int number[]={1,2,3,4,5};
	int size=sizeof(number)/sizeof(int);
    findMaxValue(number,size);
	return 0;
}
