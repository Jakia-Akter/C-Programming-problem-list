
#include <stdio.h>

int stack[100], top=-1;

void push(int x){ stack[++top]=x; }
int pop(){ return stack[top--]; }

void insert_bottom(int x){
    if(top==-1){
        push(x);
        return;
    }
    int t = pop();
    insert_bottom(x);
    push(t);
}

void reverse(){
    if(top==-1) return;
    int t = pop();
    reverse();
    insert_bottom(t);
}

int main(){
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        push(x);
    }
    reverse();
    while(top!=-1) printf("%d ",pop());
    return 0;
}
