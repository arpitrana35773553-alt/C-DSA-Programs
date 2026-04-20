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

//////////////PROBLEM 4////////////
//WRITE A FUNCTION TO SWAP MINIMUM AND MAXIMUM VALUES IN AN ARRAY
#include <iostream>
#include <climits>
using namespace std;
int max(int arr[],int size){
    int max = INT_MIN;
    int idxmax = 0;
    for(int i = 0;i<size;i++){
        if(arr[i]>max){
        max = arr[i];
        idxmax = i;
        }
    }
    return idxmax;
}
int min(int arr[],int size){
    int min = INT_MAX;
    int idxmin = 0;
    for(int i = 0;i<size;i++){
        if(arr[i]<min){
        min = arr[i];
        idxmin = i;
        }
    }
    return idxmin;
}

void swapMinMax(int arr[],int size){
    int mini = min(arr,size);
    int maxx = max(arr,size);
    swap(arr[mini],arr[maxx]);
}

int main(){
    int arr[] = {1,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    swapMinMax(arr,size);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

//////////////12-03-2026/////////////
//////////PROBLEM1//////////////
//WRITE A FUNCTION TO PRINT ALL UNIQUE VALUES IN ARRAY
#include <iostream>
using namespace std;
void unique(int arr[],int size){
    int unique = 0;
    for(int i = 0;i<size;i++){
        int temp = 0;
        for(int j = 0;j<size;j++){
            if(i==j){
                continue;
            }else if(arr[i]==arr[j]){
            temp = 1;
            break;
            }
        }
        if(temp == 0){
                unique = arr[i];
                cout<<unique<<"  ";
            }
    }
}

int main(){
    int arr[] = {1,2,3,4,5,2,3,7,4};
    int size  = sizeof(arr)/sizeof(int);
    unique(arr,size);
    return 0;
}


/////////PROBLEM 2///////////
//WRITE A FUNCTION TO PRINT THE INTERSECTION OF TWO ARRAYS
#include <iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int size1,int size2){
    int intersect = 0;
    for(int i = 0;i<size1;i++){
        for(int j = 0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
}

int main(){
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {4,5,7,8};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    intersection(arr1,arr2,size1,size2);
}

////////////19-03-2026////////////
//FIND THE ALL SUB-ARRAYS POSSIBLE OF AN ARRAY
#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    for(int start = 0;start<n;start++){
        for(int end = start;end<n;end++){
            for(int i = start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}

//////////PROBLEM 2////////
//FIND THE MAXIMUM SUBARRAY SUM OF AN ARRAY
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of values: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values in array: "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int MaxSum = INT_MIN;
    for (int start = 0;start<n;start++){
        int CurrentSum = 0;
        for(int end =start;end<n;end++){
            CurrentSum += arr[end];
            MaxSum = max(CurrentSum,MaxSum);
         }
    }
    cout<<"Maximum Subarray sum is: "<<MaxSum;
    return 0;
}

/////////////PROBLEM 3//////////
////FIND THE MAXIMUM SUBARRAY SUM USING KADANE'S ALGORITHM
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of values: ";
    cin>> n;
    int arr[n];
    cout<<"Enter the values in Array: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int MaxSum = INT_MIN,CurrentSum =0;
    for(int i = 0;i<n;i++){
        CurrentSum+=arr[i];
        MaxSum = max(CurrentSum,MaxSum);
        if(CurrentSum<0){
            CurrentSum = 0;
        }
    }
    cout<<"Maximum Sub Array sum is: "<<MaxSum<<endl;
    return 0;
}


////////////////////21-03-2026/////////////
///////////////PROBLEM 1////////////
////RETURN PAIR IN SORTED ARRAY WITH TARGET SUM
#include <iostream>
#include <vector>
using namespace std;
vector <int> PairSum(int arr[],int target,int n){
    vector <int> Ans;
    int i =0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]>target){
            j--;
        }else if(arr[i]+arr[j]<target){
            i++;
        }else{
            Ans.push_back(arr[i]);
            Ans.push_back(arr[j]);
            return Ans;
        }
    } 
    return Ans;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    int target;
    cout << "Enter the target Value: ";
    cin >> target;
    vector <int> ans = PairSum(arr,target,n);
    cout<<"The PairSum is: ";
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

//////////////////01-04-2026/////////////
////// BUBBLE SORT ALGORITM
#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n){
    for(int i = 0;i < n - 1;i++){
        bool isSwap = false;
        for(int j = 0;j < n - i - 1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}

int main(){
    int n;
    cout<<"Enter The Number of elements: ";
    cin >> n;
    cout << "Enter the elements: "<<endl;
    int arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }
    BubbleSort(arr, n);
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" "; 
    }
}

///////////07-04-2026///////////
///////SELECTION SORT////////
#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i = 0;i < n - 1;i++){
        int smallIndex = i;
        for(int j = i + 1;j < n;j++){
            if(arr[j] < arr[smallIndex]){
                smallIndex = j;
            }
        }
        swap(arr[i],arr[smallIndex]);
    }
}

int main(){
    int n = 5;
    int arr[] = {4,3,1,2,5};
    selectionSort(arr,n);
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


///////////08-04-2026////////
//////INSERTION SORT////////
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i = 1;i < n;i++){
        int current = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > current){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }
    insertionSort(arr,n);
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
}

////////19-04-2026///////
////SORT ARRAY BASED ON ABSOLUTE DIFFERENCE USING SELECTION SORT
#include <iostream>
#include <cmath>
using namespace std;
void sortByDiff(int arr[], int n, int k){
    for(int i = 0;i < n;i++){
        int smallIdx = i;
        for(int j = i + 1;j < n;j++){
            if(abs(k - arr[i]) == abs(k - arr[j])){
                if(arr[smallIdx] > arr[j]){
                    smallIdx = j;
                }
            }
            if(abs(k - arr[smallIdx]) > abs(k - arr[j])){
                smallIdx = j;
            }
        }
        swap(arr[i],arr[smallIdx]);
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    int k;
    cout<<"Enter the number for difference: ";
    cin>>k;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    sortByDiff(arr,n,k);
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<"  ";
    }
}

////INSERT AN ELEMENT E IN ALL EVEN INDICES OF ARRAY
//////////20-04-2026////////
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    int num;
    cout<<"Enter the number for insertion: ";
    cin>>num;
    int original = n;
    int arr[2*n];
    cout<<"Enter the elements: ";
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i < 2*original;i++){
        if(i % 2 == 0){
            int idx = i;
            for(int j = n - 1;j >= i;j--){
                arr[j + 1] = arr[j];
            }
            n++;
            arr[idx] = num;
            i++;
        }
    }
    for(int i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
}
