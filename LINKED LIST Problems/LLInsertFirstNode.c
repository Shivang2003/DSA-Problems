#include <stdio.h>
#include <stdlib.h>

struct node{
    int num;
    struct node *link;
};

void InsertFirstNode(){
    int ch;
    struct node *nw, *start, *tmp;
    do{
        nw = (struct node*)malloc(sizeof(struct node));
        if(nw==NULL){
            printf("Memory is not available");
            
        }
        printf("Enter the item into the node: ");
        scanf("%d", &nw->num);
        nw->link = NULL;
        nw->link = start;
        start = nw;
        printf("Enter choice\n1. Continue\n0. Stop\n");
        scanf("%d", &ch);
    }
    while(ch!=0);
    
    if(nw == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = nw;
        while(tmp != NULL)
        {
            printf("\nData = %d\n", tmp->num);       
            tmp = tmp->link;                     
        }
    }
}



int main() {
    InsertFirstNode();
    
    
    return 0;
}