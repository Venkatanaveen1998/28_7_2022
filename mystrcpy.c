#include<stdio.h>
#include<string.h>
void mystrcpy(char *src,char *dest,int n)
{
	int i;
	for(i=0;src[i]!='\0';i++)
		dest[i]=src[i];
	dest[i]='\0';
}

int main()
{
	char src[20],dest[20];
	printf("enter source string \n");
	scanf("%s",src);
	int n=strlen(src);
	mystrcpy(src,dest,n);
	printf("%s",dest);
}
