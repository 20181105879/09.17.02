#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();

int main()
{
    struct ListNode *p, *head = NULL;
    
    head = createlist();
    for ( p = head; p != NULL; p = p->next )
        printf("%d ", p->data);
    printf("\n");
    
    return 0;
}
struct ListNode *createlist()
{
    struct ListNode *head,*newhead,*p;
    newhead=head=(struct ListNode *)malloc(sizeof(struct ListNode));
    head->next=NULL;
    int n;
    scanf("%d",&n);
    while (1) {
        if(n==-1)
        {
            break;
        }
        p=(struct ListNode *)malloc(sizeof(struct ListNode));
        p->data=n;
        p->next=head->next;
        head->next=p;
      scanf("%d",&n);
        
    }
    return  head->next;
}
