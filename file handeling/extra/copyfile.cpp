//WAP to copy from source file to destination file.
#include<stdio.h>
int main(){
	FILE *a, *b;
	char info[30];
	a=fopen("sourcefile.txt","w");
	printf("Enter some information: ");
	gets(info);
	fprintf(a,"%s",info);
	fclose(a);
	
	a=fopen("sourcefile.txt","r");
	b=fopen("destinationfile.txt","w");
	char ch;
	while(fscanf(a, "%c",&ch)!=EOF){
		fprintf(b,"%c",ch);
	}
	printf("File copied!!!!");
	fclose(a);
	fclose(b);
	return 0;
}
