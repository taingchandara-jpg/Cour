#include <iostream>
using namespace std;
// class employee{
//     private:
//         string name;
//     public:
//     int age;
//     char gender;
//         employee(string name_, int age, char gender_){
//             name=name_;
//             this->age=age;
//             gender=gender_;
//         }
//     void print(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//         cout<<"Gender: "<<gender<<endl;
//         cout<<"==========================\n\n";
//     }
// };
class box{
    public:
    int data;
    box* next;

    box(int data){
        this->data=data;
        next=nullptr;
    }
};
class SLL{
    public:
    int SIZE;
    box* head;
    box* tail;

    SLL(){
        SIZE=0;
        head=nullptr;
        tail=nullptr;
    }
    void addBegin(int newData){
        box* mybox=new box(newData);
        if(SIZE==0){
            head=mybox;
            tail=mybox;
            SIZE++;
        }else{
            mybox->next=head;
            head=mybox;
            SIZE++;
        }
    }
    void print(){
        box* t=head;
        while(t!=nullptr){
            cout<<t->data<<" ";
            t=t->next;
        }
    }
};

int main(){
    // employee e1("Sok",20,'M');
    // employee e2("Hout",20,'M');
    // employee e3("Dara",20,'M');

    // e1.print();
    // e2.print();
    // e3.print();
    SLL mylist;
    mylist.addBegin(10);
    mylist.addBegin(20);
    mylist.addBegin(30);

    mylist.print();
    return 0;
}