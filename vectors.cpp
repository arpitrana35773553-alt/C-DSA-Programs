/////12-03-2026/////////
//VECTORS SYNTAX USING FOR EACH LOOP
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4,5,6};
    for(int val: vec){
        cout<<val<<endl;
    }
    return 0;
}

//////FUNCTIONS OF VECTORS//////////
////(1)SIZE//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4,5,6};
    cout<<"size = "<<vec.size()<<endl;
    return 0;
}

//////(2) PUSH_BACK/////
//USED TO PUSH AN ELEMENT IN A VECTOR//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4};
    vec.push_back(7);
    vec.push_back(8);
    cout<<"size = "<<vec.size()<<endl;
    for(int val: vec){
        cout<<val<<endl;
    }
    return 0;
}

/////(3)POP_BACK///////
//IN THIS THE LAST INDEX VALUE OF THE VECTOR IS POPPED OUT
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4};
    vec.pop_back();
    cout<<"size = "<<vec.size()<<endl;
    for(int val: vec){
        cout<<val<<endl;
    }
    return 0;
}

//////(4)FRONT & BACK///////////
//FRONT GIVES US THE FIRST VALUE OF THE VECTOR AND BACK GIVES US THE LAST VALUE OF THE VECTOR
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4};
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    return 0;
}

////////(5)AT///////////
//GIVES US THE VALUE OF VECTOR AT THE PARTICULAR INDEX
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4};
    cout<<vec.at(3);
    return 0;
}


/////////14-03-2026/////////
////////problem 1//////////
//PERFORM A LINEAR SEARCH OPERATION FOR A VECTOR
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    printf("Insert the number you want ot check: ");
    scanf("%d",&n);
    int num = 0;
    vector <int> vec = {1,2,3,4,5,6,7,8};
    for(int val: vec){
        if(val==n){
            num==1;
        }     
    }
    if(num==1){
        printf("Yes, It is present in the vector.");
        }else{
            printf("The value is not present in the vector.");
        }
    }


/////////PROBLEM 2//////////
//WRITE A CODE USING FUNCTIONS TO REVERSE A VECTOR 
#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &vec){
    int start = 0;
    int end = vec.size()-1;
    while(start<end){
        int temp = vec[start];
        vec[start] = vec[end];
        vec[end] = temp;
        start++;
        end--;
     }
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7};
    reverse(vec);
    for(int val: vec){
        cout<<val<<" ";
    }
}

///////////PROBLEM 3//////////
//FIND OUT THE SINGLE NUMBER IN A VECTOR WITHOUT USING NESTED LOOP
#include <iostream>
#include <vector>
using namespace std;
int check(vector<int> &vec){
    int num = 0;
    for(int val: vec){
        num ^= val;
    }
    return num;
}
int main(){
    vector <int> vec = {1,2,3,4,5,2,3,1,5};
    cout<<"This is the single number: "<<check(vec);
}

///////////////15-03-2026////////////
//////////PROBLEM 1//////////////
////FIND THE SUM OF EVEN DIGITS OF EVEN NUMBER OF A VECTOR
#include <iostream>
#include <vector>
using namespace std;
vector<int> even(vector<int> vec){
    vector <int> vec2;
    int idx = 0;
    for(int val: vec){
        if(val%2==0){
            vec2.push_back(val);
        }
    }
    return vec2;
}

int evenDigit(vector<int> vec2){
    int sum = 0;
    for(int val: vec2){
        while(val>0){
            int digit  = val%10;
            if(digit%2==0){
                sum+=digit;
            }
            val = val/10;
        }
    }
    return sum;
}

int main(){
    vector<int> vec;
    int n, val;
    cout<<"How many values: ";
    cin >> n;
    cout<<"Insert the values int the vector: "<<endl;
    for(int i = 0;i<n;i++){
        cin >> val;
        vec.push_back(val);
    }
    cout<<evenDigit(even(vec));
}


//////////PROBLEM 2/////////////
//FIND THE LARGEST VALUE IN THE VECTOR
#include <iostream>
#include <vector>
using namespace std;
int Largest(vector<int> vec){
    int largest = vec[0];
    for(int i = 1;i<vec.size();i++){
        if(vec[i]>largest){
            largest = vec[i];
        }
    }
    return largest;
}



int main(){
    vector<int> vec;
    int n, val;
    cout<<"Enter the number of values: ";
    cin>>n;
    cout<<"Enter the values:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>val;
        vec.push_back(val);
    }
    cout<<"Largest value in vector is: "<<Largest(vec);
}

//////////PROBLEM 3//////////////
//FIND THE SECOND LARGEST ELEMENT IN THE VECTOR
#include <iostream>
#include <vector>
using namespace std;
int descending(vector<int> vec){
    int min;
    for(int i = 0;i<vec.size();i++){
    for(int i = 1;i<vec.size();i++){
        if(vec[i]>vec[i-1]){
            min = vec[i];
            vec[i]=vec[i-1];
            vec[i-1] = min;
        }
    }
}
   for(int i = 0;i<vec.size();i++){
    if(vec[i]!=vec[0]){
        return vec[i];
    }
   }
   return vec[0];
}

int main(){
    vector<int> vec;
    int n, val;
    cout<<"Enter the number of values: ";
    cin>>n;
    cout<<"Enter the values:"<<endl;
    for(int i = 0;i<n;i++){
        cin>>val;
        vec.push_back(val);
    }
    cout<<"2nd largest number is: "<<descending(vec);
}

/////////////16-03-2026/////////////
////////PROBLEM 1////////////
//ARRANGE A VECTOR IN SUCH A WAY THAT ALL ZERO'S IN IT COME AT END AND THE ORDER OF OTHER NON-ZERO ELEMENTS SHOULD NOT CHANGE
#include <iostream>
#include <vector>
using namespace std;
vector <int> sort(vector<int> &vec){
    int temp = vec.size()-1;
    for(int i = 0;i<vec.size();i++){
        if(vec[i]==0&&i<temp){
            int vc = vec[i];
            vec[i] = vec[temp];
            vec[temp] = vc;
            temp--;
            i--;
        }
    }
    return vec;
}

int main(){
    vector <int> vec;
    int values;
    int n;
    cout<<"Enter the number of values: ";
    cin >> n;
    cout<<"Enter the values: "<<endl;
    for(int i = 0;i<n;i++){
        cin >> values;
        vec.push_back(values);
    }
    sort(vec);
    for(int val: vec){
        cout<<val<<" ";
    }
}

////////////17-03-2026////////////
/////////PROBLEM 1//////////
////WRITE A FUNCTION TO ROTATE THE VECTOR TO THE RIGHT BY K STEPS
#include <iostream>
#include <vector>
using namespace std;
vector <int> rotate(vector<int> vec,int n){
    int  k= vec.size();
    n = n%k;
    for(int i = 0;i<n;i++){
        int last = vec[k-1];
        for (int j = k-1;j>0;j--){
            vec[j] = vec [ j-1]; 
        }
        vec[0] =last;
    }
    return vec;
}
 int main(){
    vector <int> vec;
    int values;
    int a,n;
    cout<<"Enter the number of values: ";
    cin >> a;
    cout<<"Enter the values: "<<endl;
    for(int i = 0;i<a;i++){
        cin >> values;
        vec.push_back(values);
    }
    cout<<"Enter the no. of times you want to shift: ";
    cin>>n;
    vector<int> answer = rotate(vec,n);
    for(int val: answer){
        cout<<val<<" ";
    }
}

///////////18-03-2026//////////
////////PROBLEM 1//////////
//WRITE A FUNCTION TO RETURN ALL LEADER ELEMENTS IN A VECTOR ////
//AN ELEMENT IS A LEADER IF IT IS GREATER THAN ALL ELEMENTS TO IT'S RIGHT
#include <iostream>
#include <vector>
using namespace std;
vector <int> leader(vector <int> vec){
    int n = vec.size();
    vector <int> ans;
    for(int i = 0;i<n;i++){
        int temp = 0;
        for(int j = i;j<n;j++){
            if(vec[i]<=vec[j]&&i!=j){
                temp = 1;
                break;
            }
        }
        if(temp == 0){
                ans.push_back(vec[i]);
            }
    }
    return ans;
}

int main(){
    vector <int> vec;
    int n,values;
    cout<<"Enter the number of values: ";
    cin>>n;
    cout<<"Enter the values: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>values;
        vec.push_back(values);
    }
    cout<<"The leader values are: ";
    vector <int> answer = leader(vec);
    for(int val: answer){
        cout<<val<<" ";
    }
}

////////////////2-03-2026/////////////
//////////////PROBLEM 1////////////
////BEST TIME TO BUY AND SELL STOCK
#include <iostream>
#include <vector>
using namespace std;
int MaxProfit(vector<int> prices){
    int minPrice = prices[0];
    int maxProfit = 0;
    for(int i = 1;i<prices.size();i++){
        if(prices[i]<minPrice){
            minPrice = prices[i];
        }else {
            int profit = prices[i] - minPrice;
            if(profit>maxProfit){
                maxProfit = profit;
            }
        }
    }
    return maxProfit;
}

int main(){
    int n,values;
    cout<<"Enter the number of values: ";
    cin>>n;
    vector<int> prices;
    cout<<"Enter the values: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>values;
        prices.push_back(values);
    }
    cout<<"Max Profit = "<<MaxProfit(prices);
}

////////////////////21-03-2026/////////////
///////////////PROBLEM 1//////////////
////RETURN PAIR IN ARRAY WITH TARGET SUM
#include <iostream>
#include <vector>
using namespace std;
vector <int> PairSum(vector <int> vec,int target){
    vector <int> ansVec;
    int temp = 0;
    for(int i = 0;i < vec.size();i++){
        for(int j = 0;j < vec.size();j++){
            if(vec[i]+vec[j]==target){
                ansVec.push_back(vec[i]);
                ansVec.push_back(vec[j]);
                temp = 1;
            }
        }
        if(temp == 1){
            break;
        }
    }
    return ansVec;
}

int main(){
    int target,n,value;
    cout<<"Enter the number of values: ";
    cin >> n;
    vector <int> vec;
    cout<<"Enter the values: "<<endl;
    for(int i = 0;i<n;i++){
        cin >> value;
        vec.push_back(value);
    }
    cout<<"Enter the target value: ";
    cin >> target;
    vector <int> ans = PairSum(vec,target);
    cout<<"Pairsum of target value is: ";
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}



///////////////22-03-2026/////////////
//////////////PROBLEM 1///////////
////RETURN A NEW ARRAY WHERE EACH ELEMENT AT INDEX I IS PRODUCT OF ALL ELEMENTS EXCEPT ITSELF
#include <iostream>
#include <vector>
using namespace std;
vector <int> productExceptSelf(vector <int> vec){
    int leftProduct = 1;
    int rightProduct = 1;
    int n = vec.size();
    vector <int> ans(n);
    for(int i = 0;i < n;i++){
        ans[i] = leftProduct;
        leftProduct *= vec[i];
    }
    for(int i = n-1;i >= 0;i--){
        ans[i] *= rightProduct;
        rightProduct *= vec[i];
    }
    return ans;
}
int main(){
    int n,value;
    cout<<"Enter the number of values: ";
    cin >> n;
    vector <int> vec;
    cout<<"Enter the values: "<<endl;
    for(int i = 0;i<n;i++){
        cin >> value;
        vec.push_back(value);
    }
    vector <int> ansVec = productExceptSelf(vec);
    cout<<"The Answer is: "<<endl;
    for(int i = 0;i < n;i++){
        cout<<ansVec[i]<<" ";
    }
}

////////23-03-2026////////////
//////////PROBLEM 1//////////
////FIND THE MISSING NUMBER FROM A VECTOR HAVING NUMBERS GIVEN IN RANGE 1 TO N UNSORTED
#include <iostream>
#include <vector>
using namespace std;
int findMissing(vector <int> vec, int n){
    int sum = 0;
    for(int i = 0;i < n-1; i++){
        sum += vec[i];
    }

    int firstSum = (n*(n+1))/2;

    int MissingNum = firstSum - sum;
    return MissingNum; 
}

int main(){
    int n,value;
    cout<<"Enter the number of values: ";
    cin >> n;
    vector <int> vec;
    cout<<"Enter the values: "<<endl;
    for(int i = 0;i<n;i++){
        cin >> value;
        vec.push_back(value);
    }
    cout<<"The Missing Value Is: "<<findMissing(vec,n);
}

