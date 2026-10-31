#include <iostream>

using namespace std;

// ****************** Task 1(Constructor overloading) *******************
class Book{
public:
    string title;
    int no_of_pages;

    Book(){
        title="Unknown";
        no_of_pages=0;
    }
    Book(string name,int number):title(name),no_of_pages(number){
    }
    //member function
    void display(){
        cout<<"The Name of the book is : "<<title<<"\n"
            <<"The number of pages = "<<no_of_pages<<"\n";
    }
};

// ******************* Task 2(Encapsulation)***************************
class BankAccount{
private:
    double balance;
public:
    void addDeposit(double amount){
        if(amount>0){
            balance+=amount;
        }
        else{
            cout<<"Invalid amount\n";
        }
    }
    void withdraw(double amount){
        if(amount>balance){
            cout<<"Sorry! Not sufficient balance\n";
        }
        else{
            balance-=amount;
        }
    }
    double getBalance()const{
        return balance;
    }
    double setBalance(double b){
        balance=b;
    }
};

//*************************** Task 3(static Data Member)*****************
class Student{
public:
    static int studentCount;

    Student(){
        studentCount++;
    }

};
int Student::studentCount=0;
int main()
{
    Book b1;
    b1.display();
    Book b2("Because You Allah",237);
    b2.display();
    cout<<"\n**********************************\n";

    BankAccount a1;
    a1.setBalance(5000);
    a1.addDeposit(2700);
    a1.addDeposit(-50);
    a1.withdraw(1000);
    cout<< a1.getBalance()<<"\n";
    a1.withdraw(8500);

    cout<<"\n***********************************\n";
    Student s1;
    Student s2;
    Student s3;

    cout<<"The number of students = "<<Student::studentCount<<"\n";



    return 0;
}
