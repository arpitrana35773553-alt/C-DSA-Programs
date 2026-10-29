#include <iostream>
using namespace std;
class Queue{
    public:
    Queue * head;
    Queue * tail;
    Queue(){
        head = nullptr;
        tail = nullptr;
    }
    bool empty(){
        return head == nullptr;
    }
    int front(){
        if(empty){
        cout << "Queue is empty";
        return -1;
        }
        return head -> next;
        
    }
    int back(){
        if(empty){
            cout << ="Queue is empty ";
        }
    }

};



































