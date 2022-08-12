// Create a class which stores id, name, age and basic salary of an employee.
// Input data for n number of employees. Calculate the gross salary of all the
// employees and display it along with all other details .

#include<iostream>
using namespace std;
class employee
{
    string name;
    int id;
    int age;
    int bsalary;
    
    public:
    
    void getdata()
    {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the id: ";
        cin>>id;
        cout<<"Enter the age: ";
        cin>>age;
        cout<<"Enter the basic salary: ";
        cin>>bsalary;
    }
    void display()
    {
        float da=0.8*bsalary;
        float hra=0.1*bsalary;
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Base Salary: "<<bsalary<<endl;
        cout<<"Gross salary: "<<da+hra+bsalary<<endl;
    }

};

int main()
{
    employee s1;
    s1.getdata();
    s1.display();
    return 0;
}