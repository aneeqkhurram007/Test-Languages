#include <iostream>
using namespace std;
class LinkedList
{
public:
    int data;
    LinkedList *next;
};
LinkedList *insertItem(LinkedList *head, int data)
{
    LinkedList *ptr = new LinkedList();
    ptr->data = data;
    LinkedList *p = head;
    if (head->data == NULL)
    {
        head = ptr;
    }
    else
    {
        while (p->next != NULL)
        {
            p = p->next;
        }
        ptr->next = NULL;
        p->next = ptr;
    }
    return head;
}
void traversal(LinkedList *head)
{
    LinkedList *p = head;
    while (true)
    {
        cout << p->data << " ";
        if (p->next == NULL)
        {
            return;
        }
        p = p->next;
    }
}
void bubbleSort(LinkedList *head)
{
    LinkedList *p = head;
    while (true)
    {
        LinkedList *temp = p;
        while (true)
        {
            if (p->data > temp->data)
            {
                int ctemp = p->data;
                p->data = temp->data;
                temp->data = ctemp;
            }

            if (temp->next == NULL)
            {
                break;
            }
            temp = temp->next;
        }

        if (p->next == NULL)
        {
            return;
        }
        p = p->next;
    }
}
int main()
{
    LinkedList *head = new LinkedList();
    for (int i = 0; i < 10; i++)
    {
        head = insertItem(head, 10 - i);
    }
    cout << "Before bubble Sort" << endl;
    traversal(head);
    cout << "\nAfter buuble Sort" << endl;
    bubbleSort(head);
    traversal(head);

    return 0;
}