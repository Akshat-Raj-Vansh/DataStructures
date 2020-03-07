#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
struct Node *ptr = head;

void insert(int new_data)
{
    struct Node *new_node = new Node;
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
void displayNode()
{
    cout << ptr->data << " ";
    ptr = ptr->next;
    if (ptr->next == NULL)
        ptr->next = head;
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
void searchValue(int item)
{
    struct Node *temp = head;
    int flag = 0;
    while(temp!=NULL && temp->data>=item){
        if(temp->data == item){
            cout<<"Element Found at address "<<temp<<endl;
            flag = 1;
            break;
        }
        temp = temp->next;
    }
    if(flag==0)
        cout<<"Element Not Present!"<<endl;
}
int main()
{
    int n;
    cout << "Enter the number of elements you want to enter: " << endl;
    cin >> n;
    insertValues(n);
    int item;
    cout << "Enter the element to be searched: "<<endl;
    cin >> item;
    searchValue(item);
    return 0;
}