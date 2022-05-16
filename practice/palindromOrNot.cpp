//WAP to find given number is palindrom or not
#include<stdio.h>
int main(){
	int num, backup, dig, rev=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	backup = num;
	while(num>0){
		dig = num%10;
		rev = (rev*10)+dig;
		num = num/10;
	}
	if(backup == rev){
		printf("%d is palindrom",backup);	
	}
	else{
		printf("%d is not palindrom",backup);
	}
	
	return 0;
}
