#include <iostream>
#include <string>

using namespace std;

class product{
private:
    string name;
    double price;
    string country;
    int amount;

public:
    // setters
    void setName(string n){
        name=n;
    }
    void setPrice(double p){
        price=p;
    }
    void setCountry(string c){
        country=c;
    }
    void setAmount(int a){
        amount=a;
    }

    // getters

    string getName(){
        return name;
    }
    double getPrice(){
        return price;

    }
    string getCountry(){
        return country;
    }
    int getAmount(){
        return amount;
    }


    void print(){
        cout<<"Name = "<<name<<endl<<
              "Price = "<<price<<endl<<
              "Country = "<<country<<endl<<
              "Amount = "<<amount<<endl;
    }

};

int main()
{
    product p1;

    p1.setName("perfuim");
    p1.setPrice(20000);
    p1.setCountry("paris");
    p1.setAmount(10);

    p1.print();

    return 0;
}
