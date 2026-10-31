#include <iostream>

using namespace std;

class Car{
private:
    string name;
    int model;
    string color;
public:
    // default constructor
    Car(){
        name="No Name";
        model=0;
        color="No Color";
    }
    // parameterized constructor
    Car(string n,int m,string c){
        name=n;
        model=m;
        color=c;
    }
    // copy constructor
    Car(const Car&obj){
        name=obj.name;
        model=obj.model;
        color=obj.color;
          }
     // setters
     void setName(string n){
         name=n;
     }
    void setModel(int m){
        model=m;
    }
    void setColor(string c){
        color=c;
    }
    // getters
    string getName(){
        return name;
    }
    int getModel(){
        return model;
    }
    string getColor(){
        return color;
    }

    void print(){
        cout<<"Name = "<<getName()<<"\n";
        cout<<"Model = "<<getModel()<<"\n";
        cout<<"Color = "<<getColor()<<"\n";
    }

};
int main()
{
    // will call default constructor
    Car c1;
    c1.print();

    cout<<"\n************************\n";


    //will call parameterized constructor
    Car c2("BMW",2017,"Black");
    c2.print();

    cout<<"\n************************\n";


    // will call copy constructor
    Car c3(c2);
    c3.print();


    return 0;
}
