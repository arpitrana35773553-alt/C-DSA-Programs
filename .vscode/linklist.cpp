#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};
int main(){
    Node * head = new Node(20);
    Node * n2 = new Node(30);
    Node * n3 = new Node(40);
    Node * n4 = new Node(50);

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = nullptr;


    
    Node * newNode = new Node(5);
    newNode->next = head;
    head = newNode;
    Node* current = head;

    while(current != nullptr){
        cout << current->data <<" ";
        current = current->next;
    }

  
    Node * newNode1 = new Node(50);
    Node * temp = head;
    while(temp != nullptr && temp -> next != nullptr){
        cout << temp -> data;
        temp = temp-> next;
    }
    

}

#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};
int main(){
    Node * head = new Node(20);
    Node * n2 = new Node(30);
    Node * n3 = new Node(40);
    Node * n4 = new Node(50);

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = nullptr;


  
    // Node * newNode = new Node(60);
    Node * temp = head;
    // while(temp != nullptr ){
    //     temp = temp-> next;
    // }
    // temp->next = newNode;
    // newNode->next = nullptr;

    Node* current = head;
    Node* prevnode = nullptr;
    Node* nextnode = nullptr;
    while(current != nullptr){
        nextnode = current->next;
        current->next = prevnode;
        prevnode = current;
        current = nextnode;
    }
    head = prevnode;

    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
//HEADER LINK LIST IS A TYPE OF LINK LIST WHERE THERE IS A DUMMY NODE AT BEGINNING AND THE HEAD OF THIS LINK LIST IS ALWAYS HEADER'S NEXT

//CIRCULAR LINK LIST
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};
int main(){

    Node * header = new Node(20);
    Node * n1 = new Node(10);
    Node * n2 = new Node(30);
    Node * n3 = new Node(40);
    Node * n4 = new Node(50);
    int h = -1;
    Node *n5 = new Node(h);

    header->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = header;
    Node * temp = header;
    temp = header-> next;
    while(temp != header){
        cout << temp->data<<" ";
        temp = temp->next;
    }
    

}

#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};
int main(){

    Node * header = new Node(20);
    Node * n1 = new Node(10);
    Node * n2 = new Node(30);
    Node * n3 = new Node(40);
    Node * n4 = new Node(50);

    header->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = header;

    int value = 30;
    Node * newnode = new Node(value);
    Node * temp = header;
    temp = header->next;
    while(temp->next != header){
        temp = temp->next;
        newnode->next = header;

    }
     while (temp != header) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}

#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int value){
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
int main(){

    Node * header = new Node(10);
    Node * n1 = new Node(20);
    Node * n2 = new Node(30);
    Node * n3 = new Node(40);
    Node * n4 = new Node(50);

    header->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = nullptr;
    int nvalue = 20;
    int value = 25;
    Node* temp = header;
    while(temp->data != nvalue){
        temp = temp->next;
        Node * newnode = new Node(value);
        newnode->next = temp->next;
        newnode-> prev = temp;
        temp->next->prev = newnode;
        temp->next = newnode;
    }
    
    Node* current = header;

    while(current != nullptr){
        cout << current->data <<" ";
        current = current->next;
    }
}


