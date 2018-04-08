#include<stdio.h>
int fun(char *str,char *substr);
int main()
{ char str[81]="asdasasdfgasdaszx67asdmklo",substr[4]="asd";
 int n;
 n=fun(str,substr);
 printf("n=%d\n",n);
 return 0;
}
int fun(char *str,char *substr)
{
  int i,j=0,count=0;
for(i=0;str[i]!='\0';i++){
    if(str[i]==substr[j]&&str[i+1]==substr[j+1]&&str[i+2]==substr[j+2])
    count++; 
}
return count; 
}
