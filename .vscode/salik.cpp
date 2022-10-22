#include<iostream>
using namespace std;
struct employee{
    char name[50];
    char date[50];
    int id;
};

employee getdata(employee);

void display(employee);


int main(){
    employee p,temp;
    temp=getdata(p);
    p=temp;
    display(p);
    return 0;
}

employee getata(employee p){
    cout<<"Enter Name:";
    cin.get(p.name,50);

    cout<<"Enter Date:";
    cin.get(p.date,50);

    cout<<"eNTER id:";
    cin>>p.id;

    return p;
}

void display(employee p){
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.date << endl;
    cout << "Salary: " << p.id;
}


// #include <iostream>
// using namespace std;

// struct Person {
//     char name[50];
//     int age;
//     float salary;
// };

// Person getData(Person); 
// void displayData(Person); 

// int main() {

//     Person p, temp;

//     temp = getData(p);
//     p = temp;
//     displayData(p);

//     return 0;
// }

// Person getData(Person p) {

//     cout << "Enter Full name: ";
//     cin.get(p.name, 50);

//     cout << "Enter age: ";
//     cin >> p.age;

//     cout << "Enter salary: ";
//     cin >> p.salary;

//     return p;
// }

// void displayData(Person p) {
//     cout << "\nDisplaying Information." << endl;
//     cout << "Name: " << p.name << endl;
//     cout <<"Age: " << p.age << endl;
//     cout << "Salary: " << p.salary;
// }



