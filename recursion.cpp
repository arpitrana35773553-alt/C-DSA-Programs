//Printing numbers 1 to n
#include <iostream>
using namespace std;
int count = 0;
void rec(int n){
    if(n == 5){
        return ;
    }
    cout << n << " ";
    n++;
    rec(n);
}
int main(){
    rec(count);
    return 0;
}
//Printing name n times
#include <iostream>
using namespace std;
int count = 0;
void rec(string names, int n){
    if(n == 5){
        return;
    }
    cout << names<<" ";
    n++;
    rec(names,n);
}
int main(){
    string name = "Tony";
    rec(name,count);
}

//Printing 1 to n
#include <iostream>
using namespace std;
int start = 1;
void nums(int start,int n){
    if(start == n + 1){
        return;
    }
    cout << start <<" ";
    start++;
    nums(start,n);
}
int main(){
    int n;
    cin >> n;
    nums(start,n);
}

//Printing n to 1
#include <iostream>
using namespace std;
int start_val = 0;
void nums(int n,int start){
    if(start == n){
        return;
    }
    cout << start <<" ";
    start--;
    nums(n,start);
}
int main(){
    int start;
    cin >> start;
    nums(start_val,start);
    return 0;
}

//Printing 1 to n by different method
#include <iostream>
using namespace std;
void func(int i){
    if(i < 1){
        return;
    }
    func(i - 1);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    func(n);
}


#include <iostream>
using namespace std;
int i = 1;
void func(int i,int n){
    if(i > n){
        return;
    }
    func(i + 1,n);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    func(i,n);
}


//Printing sum of 1 to n by parameterized way
#include <iostream>
using namespace std;
void func(int i, int sum){
    if(i < 1){
        cout << "Sum = " << sum;
        return;
    }
    func(--i,sum + i);
}
int main(){
    int n;
    cin >> n;
    int sum = 0;
    func(n,sum);
}

//Printing sum of 1 to n
#include <iostream>
using namespace std;
int func(int n){
    if(n == 0){
        return 0;
    }else{
        return (n + func(n - 1));
    }   
}
int main(){
    int n;
    cin >> n;
    cout << func(n);
}

//Printing factorial of n 
#include <iostream>
using namespace std;
void facto(int n,int fact){
    if(n == 1){
        cout << fact;
        return;
    }
    facto(--n,fact*n);
}
int main(){
    int n;
    cin >> n;
    int fact = 1;
    facto(n,fact);
}

//Printing factorial using other approach
//TIME AND SPACE COMPLEXITY = O(n);
#include <iostream>
using namespace std;
int facto(int n){
    if(n == 1){
        return 1;
    }
    return n * facto(n - 1);
}
int main(){
    int n;
    cin >> n;
    cout << facto(n);
}

//REVERSING AN ARRAY USING RECURSIONS
#include <iostream>
using namespace std;
void reverse(int arr[], int n,int i,int original){
    if(i >= n){
        for(int i = 0;i <= original;i++){
        cout << arr[i] << " ";
    }
        return;
    }else{
        int temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;
    }
    reverse(arr,--n,++i,original);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    int i = 0;
    int original = n;
    reverse(arr,n,i,original);
}


//BUBBLE SORT BY DIFFERENT WAY
#include <iostream>
using namespace std;
void sort(int arr[],int n,int i,int count){
    if(i == n){
        ++count;
        i = 0;
    }
    if(count == n){
        for(int i = 0;i <= n;i++){
            cout << arr[i] <<" ";
        }
        return;
    }
    if(arr[i] > arr[i + 1]){
        swap(arr[i],arr[i + 1]);
    } 
    sort(arr,n,++i,count);

}
int main(){
    int m;
    cout << "Enter the number of elements: ";
    cin >> m;
    int arr[m];
    for(int i = 0;i < m;i++){
        cin >> arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]) - 1;
    int i = 0;
    int count = 0;
    if(m == 1){
        cout << arr[i];
        return 0;
    }
    sort(arr,n,i,count);
}


////SELECTION SORT
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i < n;i++){
        int min = i;
        for(int j = i + 1;j < n;j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
}

#include <iostream>
using namespace std;
int main(){
   int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    } 
    // int target;
    // cout << "Enter the target: ";
    // cin >> target;
    // for(int i = n - 1;i >= 0;i--){
    //     if(arr[i] > target){
    //         arr[i] = target;
    //         break;
    //     }
    //}
    for(int i = n - 1;i >= 0;i--){
        if(arr[i] > arr[i + 1]){
            swap(arr[i],arr[i + 1]);
        }
    }
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
}