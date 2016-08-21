#include<stdlib.h>
#include"stack.h"

struct Node{
    int item;
    struct Node *next;
};
static struct Node *first = NULL;
static int n = 0;
void push(int item)
{
    struct Node *oldfirst = first;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->item = item;
    first->next = oldfirst;
    n++;
} 
int pop()
{
    int item = first->item;
    first = first->next;
    n--;
    return item;
}
int isEmpty()
{
    return first == NULL;
}
int size()
{
    return n;
}
    









