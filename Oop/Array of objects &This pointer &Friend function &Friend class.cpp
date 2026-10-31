#include <iostream>

using namespace std;
// outer class
class Employee{
private:
    string name;
    int id;
    double salary;
public:
    // method chaining
    Employee &setName(string name){
        this->name=name;
        return *this;
    }
    Employee &setId(int id){
        this->id=id;
        return *this;
    }
    Employee &setSalary(double salary){
        this->salary=salary;
        return *this;
    }
    // member function to display object information
    void print(){
        cout<<"Name is : "<<name<<"\n"
            <<"Id is : "<<id<<"\n"
            <<"Salary is : "<<salary<<"\n";
    }
    // Nested class(inner)
    class EmployeeCard{
        public:
            void getNameAndId(Employee obj){
                cout<<"Name is : "<<obj.name<<"\n"
                    <<"Id is : "<<obj.id<<"\n";
        }
    };
  friend void displaySalary(Employee obj);
  friend class HrManager;
};
// friend function to display Employees's private salary
void displaySalary(Employee obj){
    cout<<"Salary = "<<obj.salary<<"\n";
}
// friend class
class HrManager{
    public:
        void printName(Employee obj){
            cout<<"Name is : "<<obj.name<<"\n";
    }
};
int main()
{
    // Array of objects
    Employee emp[5];

        emp[0].setName("Nada").setId(18304).setSalary(17700);
        emp[1].setName("Roqaya").setId(61036).setSalary(15400);
        emp[2].setName("Habiba").setId(91438).setSalary(20000);
        emp[3].setName("Mayada").setId(58764).setSalary(26800);
        emp[4].setName("Salma").setId(28329).setSalary(43610);

     // display all objects information
    for(int i=0; i<5; i++){
        emp[i].print();
        cout<<"****************************************\n";
    }

    //Testing inner class
    Employee::EmployeeCard c;
    c.getNameAndId(emp[0]);
    cout<<"\n*****************************\n";

    //Testing friend function
    displaySalary(emp[1]);
     cout<<"\n*****************************\n";


    //Testing friend class
    HrManager m1;
    m1.printName(emp[2]);
    cout<<"\n*****************************\n";


    return 0;

}


