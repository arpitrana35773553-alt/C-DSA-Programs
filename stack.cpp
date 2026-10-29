#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    stack <int> st;
    string s = "23*4-2/";
    for(int i = 0;i < s.length();i++){
        char c = s[i];
        if(isdigit(c)){
            st.push(c - '0');
        }else{
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            if(c == '*'){
            st.push(second * first);
            }else if(c == '/'){
            st.push(second / first);
            }else if(c == '*'){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
            st.push(second + first);
            }else if(c == '-'){
            st.push(second - first);
            }else{
            cout << "Invalid input";
            return 0;
            }
        }
    }
    cout << st.top();
    return 0;
}