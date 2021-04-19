#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head;

void display()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("nth to display");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("Data: %d\n", temp->data);
            temp = temp->next;
        }
    }
}
void createList()
{
    struct node *node, *temp, *newNode;
    int num;
    node = (struct node *)malloc(sizeof(struct node));

    if (node == NULL)
    {
        printf("No memory allocated");
    }
    else
    {
        int n;
        printf("how many nodes you want to enter? \n");
        scanf("%d", &n);
        printf("What do you want to store in the node 1: \n");
        scanf("%d", &num);

        node->data = num;
        node->next = NULL;
        head = node;
        temp = head;

        int i;

        for (i = 2; i <= n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if (node == NULL)
            {
                printf("No memory allocated");
            }
            else
            {
                printf("What do you want to store in the node %d : \n", i);
                scanf("%d", &num);

                newNode->data = num;
                newNode->next = NULL;
                temp->next = newNode;
                temp = temp->next;
            }
        }
    }
}

void deleteEnd()
{
    struct node *temp, *tmp;
    temp = head;
    tmp = head->next;

    if (head == NULL)
    {
        printf("no elements");
    }
    else
    {
        printf("Deleting from the end: \n");

        while (tmp->next != NULL)
        {
            temp = temp->next;
            tmp = tmp->next;
        }
        temp->next = NULL;
        free(tmp);
    }
}

int main()
{
    createList();
    display();
    deleteEnd();
    display();
    return 0;
}