#include <stdio.h>
struct student {
    char num[6];
    char name[11];
    float grade;
};
int main()
{
    struct student s[1000];
    int N,i;
    float grade;
    float average=0;
     scanf("%d\n",&N);
    for(i=0;i<N;i++){
       scanf("%s %s %f",s[i].num,s[i].name,&s[i].grade);
       average=average+s[i].grade;
    }
    average=average/N*1.0;
    printf("%.2f\n",average);
    for(i=0;i<N;i++){
        if(s[i].grade<average){
            printf("%s %s\n",s[i].name,s[i].num);
        }
    }

 }
