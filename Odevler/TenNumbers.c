//AKIF
//C program to input 10 numbers from user and display 10 numbers using array.

include <stdio.h>

int main(){
	int intArray[10];
	int sum=0,i,j;
	
	for(i=0;i<10;i++){
		printf("enter the number:");
		scanf("%d",&intArray[i]);
	}
	for(j=0;j<10;j++){
		printf("%d",intArray[j]);
	}
	


	
}
