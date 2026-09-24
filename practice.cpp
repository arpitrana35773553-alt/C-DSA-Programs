// #include <iostream>
// using namespace std;
// int sum(int n){
//     int sum = 0;
//     while(n > 0){
//         int digit = n % 10;
//         sum += digit;
//         n = n / 10;
//     }
//     return sum;
// }
// int main(){
//     cout<<sum(12345);
// }

// #include <iostream>
// using namespace std;
// void checkPrime(int n){
//     int temp = 0;
//     for(int i = 2; i < n;i++){
//        if(n % i == 0){
//         temp = 1;
//        }
//        if(temp == 1){
//         break;
//        }
//     }
//     if(temp == 0){
//         cout<<"Prime";
//     }else{
//         cout<<"Not Prime";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number to check: ";
//     cin >> n;
//     checkPrime(n);
// }

// #include <iostream>
// using namespace std;
// int convert(int n){
//     int num = 0;
//     int power = 1;
//     while(n > 0){
//         int digit = n % 2;
//         num += (digit * power);
//         n = n / 2;
//         power = power * 10;
//     }
//    return num;
// }
// int main(){
//     int n;
//     cout <<"Enter the number";
//     cin >> n;
//     cout << convert(n);
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     for(int i= 0;i < n;i++){
//         cin >> arr[i];
//     }
//     int count = 0;
//     for(int i = 0;i < n - 1;i++){
//         bool swapped = false;
//         for(int j = 0;j < n - i - 1;j++){
//             if(arr[j] > arr[j + 1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 swapped = true;
//                 count++;
//             }
//         }
//         if(!swapped){
//             break;
//         }
//     }
//     cout << "Number of times swapped = " << count << endl;
//     cout << "After Sorting" << endl;
//     for(int i = 0;i < n;i++){
//         cout << arr[i] <<" ";
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     for(int i= 0;i < n;i++){
//         cin >> arr[i];
//     }
//     for(int i = 0;i < n;i++){
//         int minidx = i;
//         for(int j = i + 1;j < n;j++){
//             if(arr[minidx] > arr[j]){
//                 minidx = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[minidx];
//         arr[minidx] = temp;
//     }
//     for(int i = 0;i < n;i++){
//         cout << arr[i] << " ";
//     }
// }


/////////////BUBBLE SORTING///////
#include <iostream>
using namespace std;

void sort(int (&arr)[],int n){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n - i - 1;j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    sort(arr,n);
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }

}

///////ADDING TWO ARRAYS
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "No. of elements in arr: ";
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    int m;
    cout <<"No. of elements in arr1: ";
    cin >> m;
    int arr1[m];
    for(int i = 0;i < m;i++){
        cin >> arr1[i];
    }
    int arr2[m + n];
    for(int i = 0;i < n;i++){
        arr2[i] = arr[i]; 
    }
    for(int i = 0;i < m;i++){
        arr2[n+i] = arr1[i];
    }
    for(int i = 0;i < m+n;i++){
        cout << arr2[i] << " ";
    }
}

//////INSERTING AN ELEMENT IN THE INDEX OF ARRAY
#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    int idx;
    cout << " Enter the index: ";
    cin >> idx;
    int element;
    cout << " Enter the element: ";
    cin >> element;
    n++;
    for(int i = n - 1;i >= idx;i--){
        arr[i] = arr[i - 1];
    }
    arr[idx] = element;
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
}

/////DELETING ELEMENT FROM THE ARRAY
#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    
    int element;
    cout << "Enter the element to delete: ";
    cin >> element;
    int idx = 0;
    for(int i = 0;i < n;i++){
        if(arr[i] == element){
            idx = i;
        }
    }
    for(int i = idx;i < n - 1;i++){
        arr[i] = arr[i + 1];
    }
    n--;
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
}

/////////SELECTION SORT
#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number of elements: ";
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
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
}


///////INSERTION SORT
#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    for(int i = 1;i < n;i++){
        int current = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > current){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current;
    }
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
}


/////////BINARY SEARCH
#include <iostream>
using namespace std;
    int main(){
    int n;
    cout <<"Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target element: ";
    cin >> target;
    int start = 0;
    int end = n - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            cout <<"The element is in the index = " << mid;
            return 0;
        }
        if(arr[mid] > target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    } 
}



