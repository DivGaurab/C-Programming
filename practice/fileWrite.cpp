#include<stdio.h>
int main(){
	FILE *fp;
	char det[100];
	fp = fopen("text.txt","w");
	printf("Enter some text: ");
	gets(det);
	fprintf(fp,"%s",det);
	fclose(fp);
	return 0;
}
