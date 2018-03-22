#include<stdio.h>
void sort(int *x,int n);
int main ( )
{int *p,i,a[10];
 p=a;
 for (i=0;i<10;i++)  scanf("%d",p++);
 p=a;
 sort(a,10);
 for(i=0;i<10;i++)  printf("%4d",*p++);
 printf("\n");
 return 0;
 }
void sort(int *x,int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n-1;j++)
		if(x[i]>x[k]) k=j;
		if(k!=i)
		{
			t=x[i];x[i]=x[k];x[k]=t;
		 } 
	} 
	
}
