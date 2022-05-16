//sum of two metrix m*n;
#include<stdio.h>
int main(){
	int n, m, i, j;
	printf("Enter rows and colums: ");
	scanf("%d%d",&n,&m);
	int A[n][m], B[n][m], sum[n][m];
	printf("Enter Elements of A: ");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nEnter Elements of B: ");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d",&B[i][j]);
		}
	}
	
	
	
	printf("Element of A is: \n");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf("Element of B is: \n");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			sum[n][m]=A[n][m]+B[n][m];
		}
	}
	
	printf("The sum is: \n");
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d\t",sum[n][m]);
		}
		printf("\n");
	}
	return 0;
}
