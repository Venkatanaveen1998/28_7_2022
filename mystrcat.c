#include<stdio.h>
#include<string.h>
char mystrcat(char *src,char *dest,int n)
{
	int i,j;
	for(i=n,j=0;dest[j]!='\0';i++,j++)
	{
		src[i]=dest[j];
	}
	src[i]='\0';
}
int main()
{
char src[20],dest[10];
printf("enter source string \n");
scanf("%s",src);
printf("enter dest string \n");
scanf("%s",dest);
int n=strlen(src);
mystrcat(src,dest,n);
printf("%s",src);
}
