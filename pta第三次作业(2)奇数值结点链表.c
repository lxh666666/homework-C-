#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}
   struct ListNode *readlist(){
        struct ListNode *head=NULL,*p=NULL,*q=NULL;
         int data;
         p=q=(struct ListNode *)malloc(sizeof(struct ListNode));
        scanf("%d",&p->data);
        while(p->data!=-1){
            if(head==NULL){
                head=p;
              }else{
                q->next=p;
            }
            q=p;
            p=(struct ListNode *)malloc(sizeof(struct ListNode));
            scanf("%d",&p->data);
        }
        q->next=NULL; 
        return(head);
     }
    struct ListNode *getodd( struct ListNode **L ){
         struct ListNode *head=NULL,*q=NULL,*p,*m=NULL,*h=NULL;
            if(*L!=NULL){
                for(head=*L;head!=NULL;head=head->next){
                    if(head->data%2!=0){
                        if(h==NULL){
                            h=head;
                        }else{
                            p->next=head;
                        }
                        p=head;
                    }else{
                        if(q==NULL){
                            q=head;
                        }else{
                            m->next=head;
                        }
                        m=head;
                    }
                }
                p->next=NULL;
                if(m!=NULL)
                m->next=NULL;
                *L=q;
            }else{
                return NULL;
            }
            return(h);
        }
