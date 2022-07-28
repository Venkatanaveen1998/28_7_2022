#include<stdio.h>
#include<string.h>
char mystrrev(char *str,int n)
{
	int i,j;char temp;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}
int main()
{
	char str[20];
	printf("enter the string \n");
	scanf("%s",str);
       int n=strlen(str);
	mystrrev(str,n);
	printf("%s",str);
}
