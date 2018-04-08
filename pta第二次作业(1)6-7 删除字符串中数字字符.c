#include "stdio.h"
void delnum(char *s);
int main ()
{ char item[80];
gets(item);
 delnum(item);
 printf("%s\n",item);
 return 0;
}
void delnum(char *s)
{
    int i,j=0;
    char *b=s;
    for(i=0;*(s+i)!='\0';i++){
        if(*(s+i)<'0'||*(s+i)>'9'){
         *(b+j)=*(s+i);
         j++;
     }
    }
        *(b+j)='\0';
}
