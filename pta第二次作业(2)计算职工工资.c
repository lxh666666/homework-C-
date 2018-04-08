#include <stdio.h>
struct student {
  char name[11];
 double c1;
double c2;
 double c3;
};
int main()
{
 struct student s[1000];
 int n,i;
 double  p;
 scanf("%d\n",&n);
 for(i=0;i<n;i++){
  scanf("%s %lf %lf %lf",s[i].name,&s[i].c1,&s[i].c2,&s[i].c3);
  p=s[i].c1+s[i].c2-s[i].c3;
  printf ("%s %.2lf\n",s[i].name,p); 
  p=0;
 }

 return 0;
}
