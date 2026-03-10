//////////////////10-03-2026//////////
///////PROBLEM 1///////////////////
//FIND THE SMALLEST VALUE IN ARRAY WITHOUT USING MIN 
#include <iostream>
using namespace std;
int main(){
    int num[5]={5,12,34,-56,-27};
    int size = sizeof(num)/sizeof(int);
    int smallest = INT_MAX;
    for(int i = 0;i<size;i++){
        if(num[i]<smallest){
            smallest = num[i];
        }
    }
    cout<<"Smallest int is:"<<smallest<<endl;
    return 0;
}