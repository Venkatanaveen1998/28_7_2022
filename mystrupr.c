#include<stdio.h>
char mystrlwr(char *str)
{
        int i;
        for(i=0;str[i]!='\0';i++)
        {
                if((str[i]>=97)&&(str[i]<=122))
                        str[i]=str[i]-32;
                
        }
}
int main()
{
        char str[20];
        printf("enter the string \n");
        scanf("%s",str);
        mystrlwr(str);
        printf("%s",str);
}
