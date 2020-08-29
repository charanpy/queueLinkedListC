#include <stdio.h>
#include<stdlib.h>

struct node{
        int data;
        struct node *next;
};
struct node *front=0,*rear=0;

void enqueue(){
        int n,i=0;
        printf("enter noof elem");
        scanf("%d",&n);
        while(i<n){
        int x;
printf("enter value");
scanf("%d",&x);
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=0;
        if(front==0 && rear==0){
                front=rear=newnode;
        }
        else{
                rear->next=newnode;
                rear=newnode;
        }
        i++;
        }
}
void dequeue(){
        struct node *temp;
        temp=front;
        if(front ==0 &&rear==0){
                printf("Underflow");
        }
        else{
                front=front->next;
                free(temp);
        }
}

void display(){
        struct node *temp;
        if(rear==0 && front==0){
                printf("Empty");
        }
        else{
                temp=front;
                while(temp !=0){
                printf("%d",temp->data);
                temp=temp->next;
        }
        
        }
}
void peek(){
        if(front==0 && rear ==0){
                printf("Empty");
        }
        else{
                printf("\n%d",front->data);
        }
}
int main() {
        enqueue();
        display();
        dequeue();
        printf("After deleting");
        display();
        peek();
  return 0;
}