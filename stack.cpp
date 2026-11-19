#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    stack <int> st;
    string s = "23*4-2/";
    for(int i = 0;i < s.length();i++){
        char c = s[i];
        if(isdigit(c)){
            st.push(c - '0');
        }else{
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            if(c == '*'){
            st.push(second * first);
            }else if(c == '/'){
            st.push(second / first);
            }else if(c == '*'){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
            st.push(second + first);
            }else if(c == '-'){
            st.push(second - first);
            }else{
            cout << "Invalid input";
            return 0;
            }
        }
    }
    cout << st.top();
    return 0;
}


//////////////REPRESENTATION OF STACK USING ARRAY AND IT'S FUNCTIONS
#include <iostream>
using namespace std;
#define size 5
int arr[size];
int top = -1;
void push(int value){
    if(top == size - 1){
        cout << "Stack Overflow\n";
        return;
    }
    top++;
    arr[top] = value;
}

void pop(){
    if(top == -1){
        cout << "Stack Underflow\n" << endl;
        return;
    }
    cout << arr[top] <<" removed" << endl;
    top--;
}

void peek(){
    if(top == -1){
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Top element is " << arr[top] << endl;
}

void display(){
    if(top == -1){
        cout << "Stack is empty" << endl;
        return;
    }
    for(int i = top;i >= 0;i--){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    peek();
    push(6);
    push(7);
}


//////////////REVERSING ARRAY USING STACK//////////////
#include <iostream>
using namespace std;
int arr[100];
int top = -1;
void push(int value){
    if(top == 99){
        cout << "Stack overflow\n";
        return;
    }
    top++;
    arr[top] = value;
}

int pop(){
    if(top == -1){
        cout << "Stack Underflow\n";
        return -1;
    }
    int x = arr[top];
    top--;
    return x;
}


int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr2[n];
    cout << "Enter the elements: ";
    for(int i = 0;i < n;i++){
        cin >> arr2[i];
    }
    for(int i = 0;i < n;i++){
        push(arr2[i]);
    }
    for(int i = 0;i < n;i++){
        arr2[i] = pop();
    }
    for(int i = 0;i < n;i++){
        cout << arr2[i] <<"  ";
    }
}

////////////////REPRESENTATION OF STACK USING LINKED LIST
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
};

Node * top = NULL;

void push(int val){
    Node * newnode = new Node();
    newnode -> data = val;
    newnode -> next = top;
    top = newnode;
}

void pop(){
    if(top == NULL){
        cout << "Stack Underflow\n";
        return;
    }
    Node * temp = top;
    cout << temp -> data << " popped" << endl;
    top = top -> next;
    delete temp;
}

void peek(){
    if(top == NULL){
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Top Value = " << top -> data << endl;
}

void display(){
    if(top == NULL){
        cout << "Stack is empty." << endl;
        return;
    }
    Node * temp = top;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    peek();
}


#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int precendence(char ch){
    if(ch == '^'){
        return 3;
    }else if(ch == '*' || ch == '/' || ch == '%'){
        return 2;
    }else if(ch == '+' || ch == '-'){
        return 1;
    }else{
        return -1;
    }
}

bool isOperator(char ch){
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '^';
}

string infixToPostfix(string infix){
    stack <char> st;
    string postfix = "";
    for(int i = 0;i < infix.length();i++){
        char ch = infix[i];

        if(isspace(ch)){
            continue;
        }

        if(isalnum(ch)){
            postfix += ch;
        }

        else if(ch == '('){
            st.push(ch);
        }

        else if(ch == ')'){
            while(!st.empty() && st.top() != '('){
                postfix += st.top();
                st.pop();
            }
            if(!st.empty()){
            st.pop();
        }
        }

        else if (isOperator(ch)){
            while(!st.empty() && st.top() != '(' &&
            (precendence(st.top()) > precendence(ch) ||
            (precendence(st.top()) == precendence(ch) && ch != '^'))){
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
            postfix += st.top();
            st.pop();
        }

    return postfix;
}

int main(){
    string infix;
    cout << "Enter the string to convert: ";
    getline(cin,infix);
    cout << "Converted infix expression to postfix = " << infixToPostfix(infix);
    return 0;
}