#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int item;
    struct Node *next;
};
struct Node2
{
    int item2;
    struct Node2 *next2;
};

static struct Node *first = NULL;

static struct Node2 *first2 = NULL;

void push(int item)
{
    struct Node *oldfirst = first;
    first = (struct Node*)malloc(sizeof(struct Node));
    first -> item = item;
    first -> next = oldfirst;
}
 
void push1(int item2)
{
    struct Node2 *oldfirst2 = first2;
    first2 = (struct Node2 *)malloc(sizeof(struct Node2));
    first2 -> item2 = item2;
    first2 -> next2 = oldfirst2;
}

int pop()
{
    int item = first -> item;
    first = first -> next;
    return item;
}
int pop1()
{
    int item2 = first2 -> item2;
    first2 = first2 -> next2;
    return item2;
}

int main()
{
    int n, i, item;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&item);
        push(item);
    }
    printf("List :\n");
    for(i = 0; i < n; i++)
    {
        int p = pop();
        printf("%d->",p);
        push1(p);
              
    }
    printf("\n");
    printf("Reverse List :\n");
    for(i = 0; i < n; i++)
    {
        printf("%d->",pop1());
    }
    return 0;
}
