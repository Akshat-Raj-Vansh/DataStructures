#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* link;
};

class LinkedList{
    Node* head;
    public:
        LinkedList(){
            head = NULL;
        }
        void insertion(int, int);
        void deletion(int);
        void display();
};

void LinkedList:: insertion(int item, int position){
    Node* newNode = new Node();
    newNode->value = item;
    if(position == 0)
    {
    newNode->link = head;
    head = newNode;
    }else if(position == -1){
        Node* temp = new Node();
        while(temp!=NULL){
            if(temp-> link == NULL){
                temp->link = newNode;
                newNode->link = NULL;
                break;
            }
            temp = temp->link;
        }
    }
    else{
        Node* temp = new Node();
        while(temp!=NULL && temp->value>=item){
            if(temp-> value < item && (temp->link)->value >item ){
                newNode->link = temp->link;
                temp->link = newNode;
                break;
            }
            temp = temp->link;
        }
    }
}
void LinkedList:: deletion(int item){
Node* ptr = head;
Node* save = ptr;
while(ptr!=NULL){
    if(ptr->value == item){
        save->link = ptr->link;
    }
    save =ptr;
    ptr = ptr->link;
    }
}
void LinkedList:: display(){
Node* ptr = head;
while(ptr!=NULL){
    cout<<ptr->value<<" "<<endl;
    ptr= ptr->link;
    }
    cout<<endl;
}

int main(){
    LinkedList ob;
    int ch;
    int item;
    int pos=0;
    while(true){
    cin.ignore();
    cout<<"Choose\n1.Insertion\n2.Deletion\n3.Display"<<endl;
    cin>>ch;
    pos = 0;
    item = 0;
    cin.ignore();
    switch (ch)
    {  
    case 1: cout<<"Enter the item to be inserted: "<<endl;
            cin>>item;
              cin.ignore();
            cout<<"Where do you want to insert the element?\n0 for Top\n-1 for the Last\n2 for Auto"<<endl; 
            ob.insertion(item, pos);
            break;

    case 2: cout<<"Enter the item to be deleted: "<<endl;
            cin>>item;
              cin.ignore();
        break;
    }
    }
}