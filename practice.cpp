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


