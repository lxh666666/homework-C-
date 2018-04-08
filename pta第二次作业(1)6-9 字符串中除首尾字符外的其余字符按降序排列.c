#include <stdio.h>
int fun(char *s,int num);
int main()
{
 char s[10];
 gets(s);
 fun(s,7);
 printf("%s",s);
 return 0;
 }
int fun(char *s,int num)
{
    int i,j,t;
    for(i=1;i<num-1;i++)
    {
        for(j=num-2;j>i;j--)
        {
            if(*(s+j)>*(s+j-1))
            {
                t=*(s+j);*(s+j)=*(s+j-1);*(s+j-1)=t;
         }
        }
    }
}
