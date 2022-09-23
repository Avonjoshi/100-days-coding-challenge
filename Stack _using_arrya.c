#include<stdio.h>
#include<stdlib.h>

#define size 5

int a[size];
int i=-1,j;
void push(int n);
void pop();
void display();
void reverse();

void main(){
    int ch,n;
    while (1)
    {
        printf("\n----STACK----\n");
        printf("\n1.To Push an element");
        printf("\n2.To Pop an element");
        printf("\n3.To Display ");
        printf("\n4.To Reverse The Stack");
        printf("\n5.To Exit\n");

        printf("Enter you choice:\t");
        scanf("%d",&ch);

        switch(ch){
            case 1: printf("\nEnter an Element:\t");
                    scanf("%d",&n);
                    push(n);break;
            case 2: pop();break;

            case 3: display();break;

            case 4: reverse();break;

            case 5: exit(0);break;

            default:printf("\nEnter a valid choice");
        }
    }
}

void push(int n){
    if(i==size-1){
        printf("\nThe stack is Full\n");
    }
    else{
        i=i+1;
        a[i]=n;
    }
}

void pop(){
    if(i==-1){
        printf("\nThe Stack is Empty\n");
    }
    else{
        printf("\nThe poped value is %d",a[i]);
        i=i-1;
    }
}

void display(){
    if(i==-1){
        printf("\nThe Stack is Empty");
    }
    else{
        for(j=i;j>=0;--j)
        {
            printf("\n%d",a[j]);
        }
    }
}
void reverse(){
    if(i==-1)
    {
        printf("\n The stack is Empty");
    }
    else{
        for(j=0;j<=i;j++){
            printf("\n%d",a[j]);
        }
    }
    
}