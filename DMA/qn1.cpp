//1.WAP using DMA and pointer to read n numbers from user and display sum and average.
#include<stdio.h>
#include<stdlib.h>
int main(){
	int sum=0, n, i, avg;
	int *p;
	printf("Enter number of Element: \n");
	scanf("%d",&n);
	p=(int *) malloc(n*sizeof(int));
	printf("Enter elements: \n");
	for(i=0; i<n; i++){
		
		scanf("%d",p+i);
		sum=sum+*(p+i);
	}
	avg = sum/n;
	free(p);
	printf("Sum: %d\n",sum);
	printf("Average: %d",avg);
	return 0;
}
