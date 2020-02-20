#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head = NULL;
struct Node *ptr = head;

void insert(int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    if(head->prev!=NULL)
    head->prev = new_node;
    head = new_node;
}
void displayNode(int ch)
{
    if (ch == 1)
    {
        cout << ptr->data << " ";
        ptr = ptr->prev;
        if (ptr->prev == NULL)
            ptr->prev = head;
    }
    else
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
        if (ptr->next == NULL)
            ptr->next = head;
    }
}
void insertValues(int n)
{
    int num;
    cout << "Enter the elements of the link list: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        insert(num);
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements you want to enter: " << endl;
    cin >> n;
    insertValues(n);
    cout << "Enter the number of elements to be displayed: " << endl;
    int num;
    cin >> num;
    ptr = head;
    cout << "How do you want to traverse-\n1,Forward\n2.Backward" << endl;
    int ch;
    cin >> ch;
    while (num > 0)
    {
        num--;
        displayNode(ch);
    }
    cout << "\n";
    return 0;
}