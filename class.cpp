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