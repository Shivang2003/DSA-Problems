#include <stdio.h>  
  
#define MAX 50  
int queue_array[MAX];  
int rear = - 1;  
int front = - 1;  
main()  
{  
    int i=0;  
    while(1)  
    {  
     printf("If you want to enter the element in queue press 1 else 0\n");  
     scanf("%d",&i);  
     if(i==1)  
      insert();  
      else  
      break;  
    }    
      display();  
}  
insert()  
{  
    int add_item;  
    if (rear == MAX - 1)  
    printf("Queue Overflow \n");  
    else  
    {  
        if (front == - 1)  
        /*If queue is initially empty */  
        front = 0;  
        printf("Inset the element in queue : ");  
        scanf("%d", &add_item);  
        rear = rear + 1;  
        queue_array[rear] = add_item;  
    }  
}   
    display()  
{  
    int i;  
    if (front == - 1)  
        printf("Queue is empty \n");  
    else  
    {     printf("Queue is : \n");  
        for (i = front; i <= rear; i++)  
            printf("%d ", queue_array[i]);  
        printf("\n");  
    }  
} 