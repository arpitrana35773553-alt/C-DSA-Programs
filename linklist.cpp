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

////CREATING A LINKED LIST 
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
int main(){
    Node * head = new Node(10);
    Node * n1 = new Node(20);
    Node * n2 = new Node(30);
    Node * n3 = new Node(40);
    Node * n4 = new Node (50);
    
    head -> next = n1;
    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = n4;
    n4 -> next = nullptr;

    Node *temp = head;
    while(temp != nullptr){
        cout << temp -> data << "  ";
        temp = temp -> next;
    }
}


//ADDING NEW NODE AT THE START OF THE LINKED LIST 
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
int main(){
    Node * head = new Node(10);
    Node * n1 = new Node(20);
    Node * n2 = new Node(30);
    Node * n3 = new Node(40);
    Node * n4 = new Node (50);
    Node * nextnode = new Node(25);
    
    head -> next = n1;
    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = n4;
    n4 -> next = nullptr;


    ////ADDING NEWNODE AT START
    Node * newnode = new Node(5);
    newnode -> next = head;
    head = newnode;

    
    nextnode -> next = n1 -> next;
    n1 -> next = nextnode;


    ////ADDING NEW NODE AT END 
    Node * lastnode = new Node(60);
    Node * temp1 = head;
    while(temp1 -> next != nullptr){
        temp1 = temp1 -> next;
    }
    temp1 -> next = lastnode;

    Node *temp = head;
    while(temp != nullptr){
        cout << temp -> data << "  ";
        temp = temp -> next;
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
    Node * head = new Node(10);
    Node * n1 = new Node(20);
    Node * n2 = new Node(30);
    Node * n3 = new Node(40);
    Node * n4 = new Node(50);

    head -> next = n1;
    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = n4;
    n4 -> next = nullptr;

    // Node * temp1 = head;
    // head = head -> next;
    // delete temp1;

    
////DELETING AN ELEMENT FROM THE LIST 
    Node * temp1 = n1 -> next;
    Node * del = temp1 -> next;
    temp1 -> next = del -> next;
    delete del;  


    Node * temp = head;
    while(temp != nullptr){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }   
}



//SEARCHING A VALUE IN LINKED LIST 
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
    Node * head = new Node(1);
    Node * n1 = new Node(2);
    Node * n2 = new Node(3);
    Node * n3 = new Node(4);
    Node * n4 = new Node(5);
    Node * n5 = new Node(6);

    head -> next = n1;
    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = n4;
    n4 -> next = n5;
    n5 -> next = nullptr;

    int target;
    cout << "Enter target value: ";
    cin >> target;

    bool found = false;
    Node * temp = head;
    while(temp != nullptr){
        if(temp -> data == target){
            found = true;
            break;
        }
        temp = temp -> next;
    }
    if(found){
        cout << "Target Value Found";
    }else{
        cout << "Target Value Not Found";
    }
}


//DOUBLY LINKED LIST//////////////////


////INSERTION
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
    Node * head = new Node(1);
    Node * n1 = new Node(10);
    Node * n2 = new Node(20);
    Node * n3 = new Node(30);
    Node * n4 = new Node(40);
    Node * n5 = new Node(50);

    head -> next = n1;
    head -> prev = nullptr;
    n1 -> next = n2;
    n1 -> prev = head;
    n2 -> next = n3;
    n2 -> prev = n1;
    n3 -> next = n4;
    n3 -> prev = n2;
    n4 -> next = n5;
    n4 -> prev = n3;
    n5 -> next = nullptr;
    n5 -> prev = n4;


    ////INSERTION AT STARTING
    Node * newnode = new Node(5);
    newnode -> next =  head;
    head -> prev = newnode;
    head = newnode;


    Node * temp1 = head;
    while(temp1 != nullptr){
        cout << temp1 -> data <<" ";
        temp1 = temp1 -> next;
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
    Node * head = new Node(10);
    Node * n1 = new Node(20);
    Node * n2 = new Node(30);
    Node * n3 = new Node(40);
    Node * n4 = new Node(50);
    Node * n5 = new Node(60);

    head -> next = n1;
    head -> prev = nullptr;
    n1 -> next = n2;
    n1 -> prev = head;
    n2 -> next = n3;
    n2 -> prev = n1;
    n3 -> next = n4;
    n3 -> prev = n2;
    n4 -> next = n5;
    n4 -> prev = n3;
    n5 -> next = nullptr;
    n5 -> prev = n4;


    ////INSERTION IN MIDDLE
    Node * newnode = new Node(35);
    Node * temp = n2 -> next;
    n2 -> next = newnode;
    newnode -> next = temp;
    newnode -> prev = n2;

    Node * temp1 = head;
    while(temp1 != nullptr){
        cout << temp1 -> data <<" ";
        temp1 = temp1 -> next;
    }
}


//////DELETION///////////
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
    Node * head = new Node(10);
    Node * n1 = new Node(20);
    Node * n2 = new Node(30);
    Node * n3 = new Node(40);
    Node * n4 = new Node(50);
    Node * n5 = new Node(60);

    head -> next = n1;
    head -> prev = nullptr;
    n1 -> next = n2;
    n1 -> prev = head;
    n2 -> next = n3;
    n2 -> prev = n1;
    n3 -> next = n4;
    n3 -> prev = n2;
    n4 -> next = n5;
    n4 -> prev = n3;
    n5 -> next = nullptr;
    n5 -> prev = n4;

    /////DELETING FIRST ELEMENT
    Node * temp = head;
    head = head -> next;
    head -> prev = nullptr;
    delete temp;


    Node * temp1 = head;
    while(temp1 != nullptr){
        cout << temp1 -> data <<" ";
        temp1 = temp1 -> next;
    }
}


///////DELETING A NODE FROM MIDDLE
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
    Node * head = new Node(10);
    Node * n1 = new Node(20);
    Node * n2 = new Node(30);
    Node * n3 = new Node(40);
    Node * n4 = new Node(50);
    Node * n5 = new Node(60);

    head -> next = n1;
    head -> prev = nullptr;
    n1 -> next = n2;
    n1 -> prev = head;
    n2 -> next = n3;
    n2 -> prev = n1;
    n3 -> next = n4;
    n3 -> prev = n2;
    n4 -> next = n5;
    n4 -> prev = n3;
    n5 -> next = nullptr;
    n5 -> prev = n4;

    ////DELETING FROM MIDDLE 
    Node * temp = n3;
    temp -> prev -> next = temp -> next;
    temp -> next -> prev = temp -> prev;
    delete temp;


    /////DELETING FROM THE END
    Node * temp2 = n5;
    n5 -> prev -> next = nullptr;
    delete temp2;
    
    Node * temp1 = head;
    while(temp1 != nullptr){
        cout << temp1 -> data <<" ";
        temp1 = temp1 -> next;
    }
}



#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

int main(){
    Node * head = new Node(1);
    Node * n1 = new Node(2);
    Node * n2 = new Node(4);
    Node * n3 = new Node(2);
    Node * n4 = new Node(2);
    Node * n5 = new Node(4);

    head -> next = n1;
    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = n4;
    n4 -> next = n5;
    n5 -> next = nullptr;

    Node *temp=head;
while(temp!=nullptr){
    Node *temp1=temp->next;
    Node *prev=temp;
        while(temp1!=nullptr){
            if(temp->data==temp1->data){
                prev->next=temp1->next;
                temp1=temp1->next;
                }else{
                    prev=temp1;
                    temp1=temp1->next;
                }
        }
    temp=temp->next;
}


    Node * temp1 = head;
    while(temp1 != nullptr){
        cout << temp1 -> data << " ";
        temp1 = temp1 -> next;
    }

}


////INSERTING AT THE END
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void printList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 10);
    insertAtEnd(head, 30);
    insertAtEnd(head, 20);

    printList(head);

    return 0;
}



//TAKING INPUT IN A LINKED LIST
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    Node * head = nullptr;
    Node * tail = nullptr;
    for(int i = 0;i < n;i++){
        int value;
        cin >> value;
        Node * newnode = new Node(value);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            tail = newnode;
        }
    }

    Node * temp = head;
    while(temp != nullptr){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}


////INSERTING AT GIVEN INDEX NODE
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
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    Node * head = nullptr;
    Node * tail = nullptr;
    
    for(int i = 0;i < n;i++){
        int value;
        cin >> value;

        Node * newnode = new Node(value);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            tail = newnode;
        }
    }

    int element;
    cout << "Enter the element to enter: ";
    cin >> element;
    int idx;
    cout << "Enter the node index to insert element: ";
    cin >> idx;
    int count = 1;
    Node * temp = head;
    Node * newnode = new Node(element);
    while(temp != nullptr){
        if(idx == 1){
            newnode -> next = temp;
            head = newnode;
            tail = newnode;
            break;
        }
        if(temp -> next == nullptr){
            temp -> next = newnode;
            tail = newnode;
            break;
        }
        if(count == idx - 1){
            Node * nextnode = temp -> next;
            temp -> next = newnode;
            newnode -> next = nextnode;
            break;
        }else{
            count++;
            temp = temp -> next;
        }
    }

    Node * temp1 = head;
    while(temp1 != nullptr){
        cout << temp1 -> data <<" ";
        temp1 = temp1 -> next;
    }
}


#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};


///DELETING ALL COPIES OF A TARGET ELEMENT
int main(){
    int n;
    cout << "Enter the number of Nodes: ";
    cin >> n;
    Node * head = nullptr;
    Node * tail = nullptr;
    for(int i = 0;i < n;i++){
        int value;
        cin >> value;
        
        Node * newnode = new Node(value);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            tail = newnode;
        }
    }
    int target;
    cout << "Enter the target element: ";
    cin >> target;

    while(head != nullptr && head->data == target){
        Node *del = head;
        head = head->next;
        delete del;
    }

    Node *temp = head;
    while(temp != nullptr && temp->next != nullptr){
        if(temp->next->data == target){
            Node *del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }else{
            temp = temp->next;
        }
    }

    Node * temp1 = head;
    while(temp1 != nullptr){
        cout << temp1 -> data << " ";
        temp1 = temp1 -> next;
    }

}

////REVERSING A LIST
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

void reverseList(Node*& head){
    Node * current = head;
    Node * prev = nullptr;
    Node * next = nullptr;

    while(current != nullptr){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main(){
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    Node * head = nullptr;
    Node * tail = nullptr;

    for(int i = 0;i < n;i++){
        int value;
        cin >> value;

        Node * newnode = new Node(value);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            tail = newnode;
        }
    }

    reverseList(head);

    Node * temp = head;
    while(temp != nullptr){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    
}


#include <iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
void del(Node *&head,int value){
    if(head -> data == value){
        Node * del = head;
        head = head -> next;
        delete del;
    }
    Node * temp = head;
    while(temp -> next != nullptr){
        if(temp -> next -> data == value){
            Node * del = temp -> next;
            temp -> next = temp -> next -> next;
            delete del;
        }else{
            temp = temp -> next;
        }
    }
}
int main(){
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    Node * head = nullptr;
    Node * tail = nullptr;
    for(int i = 0;i < n;i++){
        int value;
        cin >> value;
        Node * newnode = new Node(value);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            tail = newnode;

        }
    }
}

////INSERTING AT BEGINNING
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node * prev;
    Node * next;
    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
void insertAtBeginning(Node * &head,Node * &tail){
    int value;
    cout << "Enter the value to insert: ";
    cin >> value;
    Node * newnode = new Node(value);
    if(head == nullptr){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode -> next = head;
    head -> prev = newnode;
    head = newnode;
}
int main(){
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    Node * head = nullptr;
    Node * tail = nullptr;
    for(int i = 0;i < n;i++){
        int value;
        cin >> value;
        Node * newnode = new Node(value);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            newnode -> prev = tail;
            tail = newnode;
        }
    }
    insertAtBeginning(head,tail);
    Node * temp = head;
    while(temp != nullptr){
        cout << temp-> data << "  ";
        temp = temp -> next;
    }
}


///INSERT AT A POSITION
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node * prev;
    Node * next;
    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
void insertAtPosition(Node*& head,Node*& tail,int value,int position){
    Node* newNode=new Node(value);

    if(position<=1){
        newNode->next=head;

        if(head!=nullptr)
            head->prev=newNode;
        else
            tail=newNode;

        head=newNode;
        return;
    }

    Node* temp=head;

    for(int i=1;i<position-1 && temp!=nullptr;i++)
        temp=temp->next;

    if(temp==nullptr){
        delete newNode;
        return;
    }

    newNode->next=temp->next;
    newNode->prev=temp;

    if(temp->next!=nullptr)
        temp->next->prev=newNode;
    else
        tail=newNode;

    temp->next=newNode;
}
int main(){
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    Node * head = nullptr;
    Node * tail = nullptr;
    for(int i = 0;i < n;i++){
        int value;
        cin >> value;
        Node * newnode = new Node(value);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            newnode -> prev = tail;
            tail = newnode;
        }
    }
    insertAtPosition(head,tail,30,3);
    Node * temp = head;
    while(temp != nullptr){
        cout << temp-> data << "  ";
        temp = temp -> next;
    }
}


/////////DELETE FROM BEGIN
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node * prev;
    Node * next;
    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
void deleteAtBeginning(Node *&head,Node*&tail){
    Node * del = head;
    if(head == nullptr){
        return;
    }else if(head == tail){
        head = nullptr;
        tail = nullptr;
        delete del;
        return;
    }else{
        head = head -> next;
        head -> prev = nullptr;
        delete del;
    }
}
int main(){
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    Node * head = nullptr;
    Node * tail = nullptr;
    for(int i = 0;i < n;i++){
        int value;
        cin >> value;
        Node * newnode = new Node(value);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            newnode -> prev = tail;
            tail = newnode;
        }
    }
    deleteAtBeginning(head,tail);
    Node * temp = head;
    if(head == nullptr){
        cout << "No nodes found.";
        return 0;
    }
    while(temp != nullptr){
        cout << temp-> data << "  ";
        temp = temp -> next;
    }
}


/////////DELETE FROM BEGIN
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node * prev;
    Node * next;
    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
void deleteAtPosition(Node *&head,Node*&tail){
    int position;
    cout << "Enter the position to delete: ";
    cin >> position;
    Node * temp = head;
    
}
int main(){
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    Node * head = nullptr;
    Node * tail = nullptr;
    for(int i = 0;i < n;i++){
        int value;
        cin >> value;
        Node * newnode = new Node(value);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            newnode -> prev = tail;
            tail = newnode;
        }
    }
    deleteAtPosition(head,tail);
    Node * temp = head;
    if(head == nullptr){
        cout << "No nodes found.";
        return 0;
    }
    while(temp != nullptr){
        cout << temp-> data << "  ";
        temp = temp -> next;
    }
}


