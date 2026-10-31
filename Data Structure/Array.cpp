#include <iostream>

using namespace std;

class Array{
private:
    int size;
    int length;
    int *items;

public:
    Array(int arrsize){
        size=arrsize;
        length=0;
        items=new int(size);
        }
   ~Array(){
       delete[]items;
   }

   void fill(){
       int no_of_items;
       cout<<"Enter number of element\n";
       cin>>no_of_items;
       if(no_of_items>size){
            cout<<"sorry number of element is greater than size\n";
            return ;
       }
       else{
            for(int i=0; i<no_of_items; i++){
                cout<<"Enter element no : " << i+1<<"\n";
                cin>>items[i];

            }
       }
       length=no_of_items;
   }
   void display(){
       for(int i=0; i<length; i++){
        cout<<"Element no "<<i+1<<" = "<<items[i]<<"\n";
       }
   }
   int search(int key){
        for(int i=0; i<length; i++){
                if(items[i]==key){
                    return i;
                }
                else{
                    return -1;
                }
   }
   }
   int append(int newElement){
       if(length<size){
        items[length]=newElement;
        length++;
       }
       else{
        cout<<"Array is full\n";
       }
   }
   void insert(int index,int element){
       if(length<size){
        for(int i=length; i>index; i--){
            items[i]=items[i-1];
        }
        items[index]=element;
        length++;
       }
       else{
        cout<<"Array is full\n";
       }
   }
   void Delete(int index){
       for(int i=index; i<length-1; i++){
        items[i]=items[i+1];
       }
       length--;
   }
};

int main()
{
    Array a1(7);

    a1.fill();
    a1.display();
    a1.append(12);
    a1.insert(2,27);
    a1.Delete(4);
    cout<<"\n******************************\n";
    a1.display();


    return 0;
}
