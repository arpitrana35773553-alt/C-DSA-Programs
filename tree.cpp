//////////////////////////PRE ORDER TRAVERSAL///////////////////////////////

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void PreOrder(Node * root){
    if(root == nullptr){
        return;
    }
    cout << root -> data <<" ";
    PreOrder(root -> left);
    PreOrder(root -> right);
}
int main(){
    Node * root = new Node(50);
    root -> left = new Node(30);
    root -> right = new Node(40);
    root -> left -> left = new Node(10);
    root -> left -> right = new Node(20);
    root -> right -> right = new Node(70);
    root -> right -> left = new Node(60);

    PreOrder(root);

    return 0;
}



////////////////////////////IN ORDER TRAVERSAL//////////////////////////////

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void InOrder(Node * root){
    if(root == nullptr){
        return;
    }
    InOrder(root -> left);
    cout << root -> data << " ";
    InOrder(root -> right);
    
}
int main(){
    Node * root = new Node(50);
    root -> left = new Node(30);
    root -> right = new Node(40);
    root -> left -> left = new Node(10);
    root -> left -> right = new Node(20);
    root -> right -> right = new Node(70);
    root -> right -> left = new Node(60);

    InOrder(root);

    return 0;
}



/////////////////////////POST ORDER TRAVERSAL////////////////////////

#include <iostream>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void PostOrder(Node * root){
    if(root == nullptr){
        return;
    }
    PostOrder(root -> left);
    PostOrder(root -> right);
    cout << root -> data << " ";

}
int main(){
    Node * root = new Node(50);
    root -> left = new Node(30);
    root -> right = new Node(40);
    root -> left -> left = new Node(10);
    root -> left -> right = new Node(20);
    root -> right -> right = new Node(70);
    root -> right -> left = new Node(60);

    PostOrder(root);

    return 0;
}


////////////////////////// BFS OR LEVEL ORDER TRAVERSAL//////////////////////////
#include <iostream>
#include <queue>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void BFS(Node * root){
    if(root == nullptr){
        return;
    }
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        Node * current = q.front();
        q.pop();
        
        cout << current -> data << " ";

        if(current -> left != nullptr){
            q.push(current -> left);
        }
        if(current -> right != nullptr){
            q.push(current -> right);
        }
    }
}

int main(){
    Node * root = new Node(50);
    root -> left = new Node(30);
    root -> right = new Node(40);
    root -> left -> left = new Node(10);
    root -> left -> right = new Node(20);
    root -> right -> right = new Node(70);
    root -> right -> left = new Node(60);

    BFS(root);

    return 0;
}


//////////////////////CREATING A TREE USING USER INPUT ////////////////////////////
#include <iostream>
#include <queue>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

void BFS(Node * root){
    if(root == nullptr){
        return;
    }
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        Node * current = q.front();
        q.pop();
        
        cout << current -> data << " ";

        if(current -> left != nullptr){
            q.push(current -> left);
        }
        if(current -> right != nullptr){
            q.push(current -> right);
        }
    }
}
Node * buildTree(){
    int value;
    cout << "Enter Node value(-1 for no node)";
    cin >> value;

    if(value == -1){
        return nullptr;        
    }

    Node * root = new Node(value);

    cout << "Enter left child of " << value << endl;
    root -> left = buildTree();
    cout << "Enter right child of " << value << endl;
    root -> right = buildTree();
    return root;
}
int main(){
    cout << "Enter the values for tree.";
    Node * root = buildTree();
    BFS(root);
}