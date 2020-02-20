<<<<<<< HEAD
#include <iostream>
#include <string>
using namespace std;

struct father{
    string name;
    int age;
};
struct mother{
    string name;
    int age;
};
struct student{
    string name;
    int id;
    struct father F;
    struct mother M;
};

void display(struct student* S){
    cout<<"DETAILS"<<endl;
    cout<<"Name of the student: "<<S->name<<endl;
    cout<<"ID of the student: "<<S->id<<endl;
    cout<<"Name of the father: "<<S->F.name<<endl;
    cout<<"Age of the father: "<<S->F.age<<endl;
    cout<<"Name of the mother: "<<S->M.name<<endl;
    cout<<"Age of the mother: "<<S->M.age<<endl;
}

void getDetails(struct student* S){
    cout<<"Enter the name of the student"<<endl;
    cin>>S->name;
    cout<<"Enter the ID of the student"<<endl;
    cin>>S->id;
    cout<<"Enter the name of the father"<<endl;
    cin>>S->F.name;
    cout<<"Enter the age of the father"<<endl;
    cin>>S->F.age;
    cout<<"Enter the name of the mother"<<endl;
    cin>>S->M.name;
    cout<<"Enter the age of the mother"<<endl;
    cin>>S->M.age;
}

int main(){
    cout<<"Enter the number of students"<<endl;
    int n;
    cin>>n;
    
    struct student S[n];
    for(int i=0;i<n;i++)
    {
    getDetails(&S[i]);
    }
    cout<<"Enter the ID of the student you want to know the details of"<<endl;
    int ID;
    cin>>ID;
    for(int i=0; i<n; i++){
        if(S[i].id==ID)
            display(&S[i]);
    }
}

=======
#include <iostream>
#include <string>
using namespace std;

struct father{
    string name;
    int age;
};
struct mother{
    string name;
    int age;
};
struct student{
    string name;
    int id;
    struct father F;
    struct mother M;
};

void display(struct student* S){
    cout<<"DETAILS"<<endl;
    cout<<"Name of the student: "<<S->name<<endl;
    cout<<"ID of the student: "<<S->id<<endl;
    cout<<"Name of the father: "<<S->F.name<<endl;
    cout<<"Age of the father: "<<S->F.age<<endl;
    cout<<"Name of the mother: "<<S->M.name<<endl;
    cout<<"Age of the mother: "<<S->M.age<<endl;
}

void getDetails(struct student* S){
    cout<<"Enter the name of the student"<<endl;
    cin>>S->name;
    cout<<"Enter the ID of the student"<<endl;
    cin>>S->id;
    cout<<"Enter the name of the father"<<endl;
    cin>>S->F.name;
    cout<<"Enter the age of the father"<<endl;
    cin>>S->F.age;
    cout<<"Enter the name of the mother"<<endl;
    cin>>S->M.name;
    cout<<"Enter the age of the mother"<<endl;
    cin>>S->M.age;
}

int main(){
    cout<<"Enter the number of students"<<endl;
    int n;
    cin>>n;
    
    struct student S[n];
    for(int i=0;i<n;i++)
    {
    getDetails(&S[i]);
    }
    cout<<"Enter the ID of the student you want to know the details of"<<endl;
    int ID;
    cin>>ID;
    for(int i=0; i<n; i++){
        if(S[i].id==ID)
            display(&S[i]);
    }
}

>>>>>>> c4282030614eb84474bb38b8c1ffedc1e0230e86
