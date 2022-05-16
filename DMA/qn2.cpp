/*  C Program to Sort n numbers in ascending order using pointers  */
#include<stdio.h>
#include<stdlib.h>
int main(){
        int n,*p,i,j,temp;
        printf("How many numbers u want to Sort: ");
        scanf("%d",&n);
        p=(int *) malloc(sizeof(int));
        for(i=0;i<n;i++)
        {
            printf("Enter Number %d: \n",i+1);
            scanf("%d",p+i);
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(*(p+i)<*(p+j)){
                    temp=*(p+i);
                    *(p+i)=*(p+j);
                    *(p+j)=temp;
                }
            }
        }
        printf("The Sorted Numbers are: \n");
        for(i=0;i<n;i++){
            printf(" %d ",*(p+i));
		}
return 0;
}
