#include <stdio.h>
struct student					
{
int num;
char name[15];
float score[3];
float sum;
};
void calc(struct student *p,int n);	 
void sort(struct student *p,int n);
int main()
{
struct student stu[5];
int i,j;
float f;
for(i=0;i<5;i++)
{
	scanf("%d%s",&stu[i].num,stu[i].name);
	for(j=0;j<3;j++)
	{ 
    	scanf("%f",&f);
		stu[i].score[j]=f;
	}
}
calc(stu,5);
sort(stu,5);
for(i=0;i<5;i++)
{
	printf("%5d%15s",stu[i].num,stu[i].name);
	printf("  %.1f  %.1f  %.1f  %.1f\n",stu[i].score[0],stu[i].score[1],stu[i].score[2], stu[i].sum);
}
return 0;
}
void calc(struct student *p,int n)
{
   int i;
   for(i=1;i<n;i++,p++){
   		p->sum=p->score[0]+p->score[1]+p->score[2];
   	
}
  }
void sort(struct student *p,int n)
{   
    struct student t;
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
		if(p->sum<(p+j)->sum){
			t=*(p+j);*(p+j)=*p;*p=t; 
		}
	}
	}
} 
