#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* link;
};

class Queue{
    Node* front;
    Node* rear;
        public: Queue(){
        front = NULL;
        rear = NULL;
        }
        void insertion(int);
        void deletion();
        void display();
};
void Queue:: insertion(int ele){
    Node* ptr = new Node;
    ptr->value = ele;
    if(front==NULL && rear==NULL){
     front = ptr;
     rear = ptr;
    }
    else{
      rear->link = ptr;
      rear = ptr;
    }
}

void Queue:: deletion(){
    int item;
    if(front==NULL)
    {
        cout<<"Underflow"<<endl;
        return;
    }
    item = front->value;
    cout<<"Deleting: "<<item<<endl;
    front = front->link;
}

void Queue:: display(){
    cout<<"Inside Display Method"<<endl;
    Node* ptr = front;
    while(ptr!=NULL){
        cout<<ptr->value<<endl;
        ptr = ptr->link;
    }
}

int main(){
Queue queue;
START:
cout<<"Choose\n1.Insertion 2.Deletion 3.Display"<<endl;
int ch;
int ele;
cin>>ch;
switch (ch)
{
case 1: cout<<"Enter the element to be inserted: ";
        cin>>ele;
        queue.insertion(ele);
        break;
case 2: queue.deletion();
        break;
case 3: queue.display();
        break;
default:cout<<"Invalid choice"<<endl;
        break;
}
goto START;
}
