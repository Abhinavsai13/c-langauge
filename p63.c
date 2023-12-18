#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}n;
n* head=NULL;
n* tail=NULL;
int c=0;
n* insert(){
    int pos;
    n* ptr=malloc(sizeof(n));
    ptr->next=NULL;
    ptr->prev=NULL;
    scanf("%d %d",&ptr->data,&pos);
    if(head==NULL){
        return ptr;
    }
    else{
        if(pos==1){
            ptr->next=head;
            head->prev=ptr;
            head=ptr;
            return head;
        }
        else{
            n* temp=head;
            n* prev=NULL;
            for(int i=1;i<pos;i++){
                prev=temp;
                temp=temp->next;
            }
            ptr->prev=prev;
            prev->next=ptr;
            ptr->next=temp;
            temp->prev=ptr;

            return head;
        }
    }
}
void traversal(){
    n* temp=head;
    while(temp->next!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("%d->",temp->data);
    printf("\n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        printf(" ");
        temp=temp->prev;
    }
}
void main () {
    int ch;
    while(1){
        scanf("%d",&ch);
        switch(ch){
            case 1:
            head=insert();
            break;

            case 2:
            // head=delete();
            break;

            case 3:
            traversal();
            break;

            case 4:
            exit(0);
        }
    }
}