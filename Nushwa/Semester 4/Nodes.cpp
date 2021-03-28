#include <iostream>
using namespace std;

class Nodes
{
public:
    int data;
    Nodes *next;
};
Nodes *create(Nodes *head)
{

    Nodes *newnode = new Nodes();
    cout << "Enter data: ";
    cin >> newnode->data;
    Nodes *ptr = head;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;
    }
    cout << newnode->data << " Inserted." << endl;
    return head;
}

void total(Nodes *head)
{
    Nodes *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    cout << "The total number of nodes in a list are: " << count << endl;
}

void display(Nodes *head)
{
    Nodes *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int choice;
    Nodes *head = NULL;

    do
    {
        cout << "MENU\n1-Create\n2-Display\n3-Total Count\n0 to end" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            head = create(head);
            break;
        case 2:
            display(head);
            break;
        case 3:
            total(head);
            break;

        default:
            break;
        }
    } while (choice != 0);

    return 0;
}
