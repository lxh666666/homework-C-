#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}
char *match( char *s, char ch1, char ch2 ){

  
    int i=0,j=0,k=0,len=0;  
    char *p=NULL;  
  
    len = strlen(s);  
  
    for(i=0;i<len;i++){  
        if(s[i]==ch1){  
            p=&s[i];  
            for(j=i;j<len;j++){  
                if(s[j]!=ch2){  
                    printf("%c", s[j]);  
                }  
                if(s[j]==ch2){  
                    printf("%c\n", s[j]);  
                    return p;  
                }     
            }  
            printf("\n");  
            return p;  
        }  
    }  
    printf("\n");  
    return p;  
}  

