#include <iostream>
using namespace std;
int main(){
    char str[] = "hello"; 
    cout<<str[2]<<endl;
}

///////////INPUT IN STRINGS////////
#include <iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter char array: ";
    // cin >> str; //// WHEN WE USE cin THEN THE INPUT WE GIVE AFTER SPACE IS NOT PRINTED 
    // cin.getline(str,100);////IT SOLVES OUR PREVIOUS PROBLEM AND IS USED TO TAKE INPUT ESPECIALLY IN STRINGS
    cin.getline(str,100,'a');////INPUT USING DELIMITER MEANS NOTHING WILL BE PRINTED AFTER $ SIGN
    cout<<"Output: "<<str<<endl;
}

/////////16-04-2026////////
////CHECK THE STRING IS PALINDROME OR NOT
#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s){
    int i = 0;
    int j = s.length() - 1;
    while(i < j){
        if(s[i] == ' '){
            i++;
            continue;
        }
        if(s[j] == ' '){
            j--;
            continue;
        }
        char left = tolower(s[i]);
        char right = tolower(s[j]);
        if(left != right){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string s = "Race car";
    if(isPalindrome(s)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Plaindrome"<<endl;
    }
    return 0;
}