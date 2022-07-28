#include<stdio.h>
#include<string.h>
int mystrcmp(char *str1,char *str2,int n)
{
	int i,cnt=0;
	for(i=0;str1[i]!='\0';i++)
		if(str1[i]==str2[i]) cnt++;
	if(cnt==n)
		return 1;
}
int main()
{
	char str1[20],str2[20];
	int n,m,s;
	printf("enter first string \n");
	scanf("%s",str1);
	printf("enter second string \n");
	scanf("%s",str2);
	n=strlen(str1);
	m=strlen(str2);
	if(n==m)
		s=mystrcmp(str1,str2,n);
	if(s==1) printf("same strings");
	else printf("not same strings");
}
