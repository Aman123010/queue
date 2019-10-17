#include <stdio.h>
#include <stdlib.h>
#define max 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int queue[max];
void enqueue(int);
void dequeue();
void display();
int rear = -1;
int front = -1;

int main() {

int select, data; 
int i;

while(1){
printf("Enter 1: Enqueue or 2:Dequeue  ");

scanf("%d",&select);

switch(select){
case 1:
printf("\nEnter data: ");
scanf("%d", &data);
enqueue(data);
break;
case 2:
dequeue();
break;
default:
printf("Wrong choice!!!");

}
display();

}
return 0;
}

void enqueue (int data){
if (rear == max-1)
printf("Queue is full");
else{
rear = rear +1;
queue[rear]=data;
if (front == -1)
front =0;
}

}

void dequeue(){
if (front == -1)
printf("Queue is empty");
else
{
queue[front] = 0;
front = front + 1;
}

}

void display(){
int i;
if (front == -1)

printf("Queue empty");
else{
for (i=front;i<=rear;i++)
printf("%d\t", queue[i]);
printf("\n");

}

}
