#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int value;
    struct node* next;
    struct node* previous;
}node;
node* head = NULL;
node* tail = NULL;
int size = 0;
void in_fr(int value)
{
    if (head == NULL)
    {
        head = malloc(sizeof(node));
        head->value = value;
        head->next = NULL;
        head->previous = NULL;
        tail = head;
        size++;
    }
    else
    {
        node* new_node = malloc(sizeof(node));
        new_node->value = value;
        new_node->next = head;
        new_node->next->previous = new_node;
        head = new_node;
        new_node->previous = NULL;
        size++;
    }
}

int de_fr()
{
    int value;
    if (head == NULL)
    {
        printf("List Empty\n");
        return 0;
    }
else
{
    node* temp = head;
    value = temp->value;
    head = head->next;
    free(temp);
    if (head != NULL)
        head->previous = NULL;
    size--;
    if (size == 0)
        tail = NULL;
    return value;
}}
void in_re(int value)
{
    if (tail == NULL)
    {
        tail = malloc(sizeof(node));
        tail->value = value;
        tail->next = NULL;
        tail->previous = NULL;
        head = tail;
        size++;
    }
    else
    {
        node* new_node = malloc(sizeof(node));
        new_node->value = value;
        tail->next = new_node;
        new_node->previous = tail;
        tail = new_node;
        new_node->next = NULL;
        size++;
    }
}

int de_re()
{
    int value=0;
    if (tail == NULL)
    {
        printf("List Empty\n");
        return 0;
    }
else
 {
    node* temp = tail;
    value = temp->value;
    tail = tail->previous;
    free(temp);
    if (tail != NULL)
        tail->next = NULL;
    size--;
    if (size == 0)
        head = NULL;
    return value;
 }

}
int main()
{
    int n;
    int r,z;
    int ch;
    while(1)
    {
        printf("DEQUE DOUBLY LINKED LIST OPERATIONS ARE\n");
        printf("1.Insert at front\n2.Insert at rear\n3.Delete at front\n4.Delete at rear\n5.Exit\n");
        printf("Enter Your Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:in_fr(n);
                    printf("Enter n value:");
                    scanf("%d",&n);
                    break;
            case 2:in_re(n);
                    printf("Enter n value:");
                    scanf("%d",&n);
                    break;
            case 3:de_fr();
                    r=de_fr();
                    printf("%d\n",r);
                    break;
            case 4:de_re();
                    z=de_re();
                    printf("%d\n",z);
                    break;
            case 5:exit(0);break;
            default:printf("Enter the correct option\n");
            break;
        }
    }
}

