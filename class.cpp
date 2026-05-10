#include <iostream>
using namespace std;
class Student{
    public:
    int rollno;
    void display(){
        cout<<rollno;
    }
};
int main(){
    Student s1;
    s1.rollno = 7;
    s1.display();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    int rollno;
    string name;
    int marks;
    public:
    void input(){
        cin >> rollno >> name >> marks;
    }
    void display(){
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks;
    }
};
int main(){
    Student s1;
    s1.input();
    s1.display();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
class Employee{
    private:
    int employeeID;
    string name;
    double salary;

    public:
    void input(){
        cin >> employeeID >> name >> salary;
    }
    void display(){
        cout<<"Employee ID: "<<employeeID<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Salary: "<<salary; 
    }
};
int main(){
    Employee e1;
    e1.input();
    e1.display();
}

#include <iostream>
#include <string>
using namespace std;
class Credentials{
    private:
    string username;
    string password;
    public:
    void member(){
        cin >> username;
        cin >> password;
        cout << username << " " << password;
    }
};
int main(){
    Credentials c;
    c.member();
    return 0;
}


#include <iostream>
using namespace std;
class Occurence{
    private:
    int num;
    int digit;
    public:
    void input(){
        cin >> num;
        cin >> digit;
    }
    int countOccurence(){
        int count = 0;
        while(num > 0){
            int check = num % 10;
            if(check == digit){
                count++;
            }
            num = num / 10;
        }
        return count;
    }
};
int main(){
    Occurence o;
    o.input();
    int ans = o.countOccurence();
    cout << ans;
}


#include <iostream>
using namespace std;
class Main{
    public:
    string name;
    int roll;
    void getting(string n, int r){
        name = n;
        roll = r;
        cout << "Name = "<<name<<" Roll no = "<<roll<<endl;
    }
};
int main(){
    Main s1;
    s1.getting("Doraemon",1);
    s1.getting("Nobita",2);
    cout<<s1.name<<endl;
    Main s2;
    s2.getting("Kavya",3);
    cout<<s2.name<<endl;
}

#include <iostream>
using namespace std;
class Main{
    public:
    void sum(int num , int num2){
        cout<<"Sum = "<<num + num2;
    }
    void multiply(int num, int num2){
        cout<<"Product = "<< num * num2;
    }
    void division(int num , int num2){
        cout<<"Division = "<<num / num2;
    }
    void subtract(int num , int num2){
        cout<<"Difference = "<<num - num2;
    }
};
int main(){
   Main m;
   int num;
    int num2;
    char symbol;
   while(true){
    cin >> num;
    cin >> num2;
    cin >> symbol;
    if(symbol == '+'){
        m.sum(num,num2);
    }else if(symbol == '-'){
        m.subtract(num,num2);
    }else if(symbol == '*'){
        m.multiply(num,num2);
    }else if(symbol == '/'){
        m.division(num,num2);
    }else{
        return 0;
    }
   }
}