#include <stdio.h>
#include <stdlib.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};

struct stud_node *createlist();
struct stud_node *deletelist( struct stud_node *head, int min_score );

int main()
{
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    scanf("%d", &min_score);
    head = deletelist(head, min_score);
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

  struct stud_node *createlist(){
        struct stud_node *head=NULL,*p=NULL,*ptr=NULL;
        p=ptr=(struct stud_node *)malloc(sizeof(struct stud_node));
        int num;
        char name[20];
        int score;
        scanf("%d",&p->num);
        while(p->num!=0){
            scanf("%s %d",p->name,&p->score);
            if(head==NULL){
                head=p;
            }else{
                p->next=p;
            }
            ptr=p;
        p=(struct stud_node *)malloc(sizeof(struct stud_node));
        scanf("%d",&p->num);
        }
        ptr->next=NULL; 
        return (head);
    }
    struct stud_node *deletelist( struct stud_node *head, int min_score ){
        struct stud_node *p,*ptr,*a;
        int i;
        if(p!=NULL){
            for(a=head;a!=NULL;a=a->next){
                p=head;
                while(min_score<=p->score&&p->next!=NULL){
                    ptr=p;p=p->next;
                }
                if(min_score>p->score){
                    if(p==head){
                        head=p->next;
                    }else{
                        ptr->next=p->next;
                    }
                }
            }
        }
        return (head);
    }
