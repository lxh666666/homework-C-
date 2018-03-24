#include<stdio.h>
void input(int *arr,int n);
void max_min(int *arr,int n);
void output(int *arr,int n);
int main()
{ int a[10];
input(a,10);
 max_min(a,10);
 output(a,10);
 return 0;
}
void input(int *arr,int n){
        int i;
        for(i=0;i<n;i++){
            scanf("%d",arr+i);
        }
    } 
    void max_min(int *arr,int n){
        int min=arr[0],max=arr[0];
        int i,temp;
        int indexm=0,indexn=0;
        for(i=0;i<n;i++){
            if(min>*(arr+i)){
                min=*(arr+i);
                indexn=i;
            } 
            if(max<*(arr+i)){
                max=*(arr+i);
                indexm=i;
            }
        }
        temp=*(arr+0);*(arr+0)=*(arr+indexn);*(arr+indexn)=temp;
        temp=*(arr+n-1);*(arr+n-1)=*(arr+indexm);*(arr+indexm)=temp;
    }
    void output(int *arr,int n){
        int i;
        for(i=0;i<n;i++){
            printf("%3d",*(arr+i));
        }
    }
