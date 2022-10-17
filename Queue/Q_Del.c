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
     printf("Enter the element in queue to see the deleted element later press 1 else 0\n");  
     scanf("%d",&i);  
     if(i==1)  
      insert();  
      else  
      break;  
    }    
      delete();  
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
   delete()  
{  
    if (front == - 1 || front > rear)  
    {  
        printf("Queue Underflow \n");  
        return ;  
    }  
    else  
    {  
        printf("Element deleted from queue is : %d\n", queue_array[front]);  
        front = front + 1;  
    }  
}  
     
     
     
    display()  
{  
    int i;  
    if (front == - 1)  
        printf("Queue is empty \n");  
    else  
    {  
        printf("Queue is : \n");  
        for (i = front; i <= rear; i++)  
            printf("%d ", queue_array[i]);  
        printf("\n");  
    }  
}  