#include<stdio.h>
int mystrlen(char *src)
{
	int cnt=0;
 for(int i=0;src[i]!='\0';i++)
	 cnt++;
 return cnt;
}
int main()
{
	char src[20];
	int value;
	printf("enter which string u want to find length \n");
	scanf("%s",src);
	printf("which i enter string = %s\n",src);
	value=mystrlen(src);
	printf("length=%d\n",value);
}
