// Whap to find given number is Armstrong or not
#include<stdio.h>
int main(){
	int num, dig, ans=0, backup;
	printf("Enter a number: ");
	scanf("%d",&num);
	backup = num;
	while(num>0){
		dig = num%10;
		ans = ans+(dig*dig*dig);
		num = num/10;
	}
	if(backup == ans){
		printf("%d is Armstrong",backup);
	}
	else{
		printf("%d is not Armstrong", backup);
	}
	return 0;
}
