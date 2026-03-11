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

/////////////////PROBLEM2/////////////////
//PRINT THE INDEX NO. WHICH STORES THE SMALLEST VALUE IN THE ARRAY
#include <iostream>
using namespace std;
int main(){
    int num[5] = {12,34,67,-8,-11};
    int size = sizeof(num)/sizeof(int);
    int smallest = INT_MAX;
    int small = 0;
    for(int i = 0;i<size;i++){
        small = min(num[i],smallest);
        smallest = small;
    }
    int index = 0;
    for(int i=0;i<size;i++){
        if(num[i]==smallest){
            cout<<"Index value of smallest value:"<<index<<endl;
        }else{
            index++;
        }
    }
    return 0;
}


///////////////PROBLEM3/////////////////
////FIND THE LARGEST VALUE IN THE ARRAY AND PRINT IT'S INDEX VALUE
#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,23,4,-3,12};
    int size = sizeof(arr)/sizeof(int);
    int largest = INT_MIN;
    for(int i = 0;i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"The largest value in array is:"<<largest<<endl;
    
    int index = 0;
    for(int i = 0;i<size;i++){
        if(arr[i]==largest){
            cout<<"The index of largest value is:"<<index<<endl;
        }else{
            index++;
        }
    }
    return 0;
}

//////////////11-03-2026//////////////
/////////////PROBLEM 1///////////////
//FIND THE INDEX OF THE TARGET VALUE IN AN ARRAY USING LINEAR SEARCH ALGORITHM
#include <iostream>
using namespace std;
int linearsearch(int array[],int size,int target){
    for(int i = 0;i<size;i++){
        if(array[i]==target)
        return i;
    }
    return -1;
}

int main(){
    int array[]={1,34,57,86,28,14};
    int target = 2;
    int size = sizeof(array)/sizeof(int);
    cout<<linearsearch(array,size,target)<<endl;
    return 0;
}

///////////PROBLEM 2////////////
//REVERSE AN ARRAY WITHOUT MAKING A SECOND ARRAY
#include <iostream>
using namespace std;
void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    reverse(arr,size);


    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

/////////////PROBLEM 3/////////////
//WRITE A FUNCTION TO CALCULATE SUM & PRODUCT OF ALL NUMBERS IN AN ARRAY
#include <iostream>
using namespace std;
void sumOf(int arr[],int size){
    int sum = 0;
    int product = 1;
    for(int i = 0;i<size;i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout<<"The Sum Of Numbers In Array Is = "<<sum<<endl;
    cout<<"The Product Of Numbers In Array Is = "<<product<<endl;
}

int main(){
    int arr[5];
    int size = sizeof(arr)/sizeof(int);
    cout<<"Enter The Numbers in Array"<<endl;
    for(int i = 0;i<size;i++){
        cin >> arr[i];
    }
    sumOf(arr,size);
    return 0;
}
