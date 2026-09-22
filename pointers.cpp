#include <iostream>
using namespace std;
int main(){
    int b = 10;
    int &a = b;
    cout << a << endl;
    int* ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 50;
    cout <<*ptr << endl;
    cout << a;
}

//TYPE CASTING VOID POINTER 
#include <iostream>
using namespace std;
int main(){
    int a = 5;
    void* ptr = &a;
    cout << *(int*)ptr<<endl;
    char c ='a';
    ptr = &c;
    cout << ptr;
}

//////////
#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int *ptr = arr;
    for(int i = 0;i < 5;i++){
        
    }
}