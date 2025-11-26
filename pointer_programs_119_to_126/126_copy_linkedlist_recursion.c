#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* copy(struct Node* head){
    if(head==NULL) return NULL;
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = head->data;
    newNode->next = copy(head->next);
    return newNode;
}

int main(){
    int n;
    scanf("%d",&n);
    struct Node *head=NULL, *tail=NULL;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        struct Node *nn = malloc(sizeof(struct Node));
        nn->data=x; nn->next=NULL;
        if(!head) head=tail=nn;
        else{ tail->next=nn; tail=nn; }
    }
    struct Node *copyHead = copy(head);
    struct Node *p=copyHead;
    while(p){ printf("%d ", p->data); p=p->next; }
    return 0;
}