//WAP to save table of user input in table.txt.
#include<stdio.h>
int main(){
	FILE *fp;
	char ch;
	fp=fopen("table.txt","r");
	while(ch!=EOF){
		ch = fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}

