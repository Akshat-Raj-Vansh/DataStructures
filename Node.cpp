#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
    node *ptr;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
        ptr = NULL;
    }

    void add_node(int n)
    {
      //  node *tmp = new node;
        ptr = new node;
        ptr->data = n;
        ptr->next = NULL;

        if(head == NULL)
        {
            head = ptr;
            tail = ptr;
        }
        else
        {
            tail->next = ptr;
            tail = tail->next;
        }
    }

    void delete_node(){
        
    }

    void delete_node(int item){
        node *tmp = new node;
        ptr = head;
        while(ptr!=NULL){
            if(ptr->data==item){
                tmp->next = ptr->next;
             }
             tmp = ptr;
             ptr= ptr->next;
        }
    }
    bool search(int item){
        while(ptr!=NULL){
            if(ptr->data==item){
                return true;
             }
             ptr= ptr->next;
        }
        return false;
    }
    void display(){
       // node *tmp = new node;
        ptr= head;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(3);
    a.display();
    a.delete_node(2);
    a.display();
    return 0;
}