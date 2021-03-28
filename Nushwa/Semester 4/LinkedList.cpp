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

    // if (head == NULL)
    // {
    //     head = ptr;
    // }
    // else
    // {
    // LinkedList *p = head;

    // while (p->next != NULL)
    // {
    //     p = p->next;
    // }
    // ptr->next = p->next;
    // p->next = ptr;

    // return head;
}
void traversal(LinkedList *head)
{
    LinkedList *p = head;
    while (p->next != NULL)
    {
        cout << p->data << " ";
    }
}
int main()
{
    int data;
    LinkedList *head = new LinkedList();
    head->next = NULL;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter data # " << i + 1 << " : ";
        cin >> data;
        head = insertItem(head, data);
    }
    traversal(head);
    return 0;
}