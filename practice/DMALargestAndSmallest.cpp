// WAP to find lasgest and smallest number of list using DMA
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *fp, i, j, n;
	printf("Enter how many number do you want to store.");
	scanf("%d",&n);
	fp = (int*) malloc(n*sizeof(n));
	printf("Enter a numbers: ");
	for(i=0; i<n; i++){
		scanf("%d",fp+i);
	}
	for(i=0; i<n; i++){
		if(*(fp+0)<*(fp+i)){
			*(fp+0)=*(fp+i);
		}
	}
	printf("Greatest Number: %d\n",*(fp+0));
	
	for(i=0; i<n; i++){
		if(*(fp+0)>*(fp+i)){
			*(fp+0)=*(fp+i);
		}
	}
	printf("Smallest Number: %d\n",*(fp+0));
	return 0;
}
