
//  WAP to show the concept of friend class. 

#include<iostream>
#include<conio.h>
using namespace std;

class B;

class A{
int a;
public:
    void getdata(){
        cout << "Enter the value of a: ";
        cin >> a;
    }
    void display(){
        cout << "a: " << a << endl;
    }
    friend class B;

};

class B{
int b;
public:
    void getdata(){
        cout << "Enter the value of b: ";
        cin >> b;
    }
    void display(){
        cout << "b: " << b << endl;
    }
    void swap(A &x){
        int temp = x.a;
        x.a = b;
        b = temp;
    }
};


int main(){
    A a;
    B b;
    a.getdata();
    b.getdata();
    cout << "Before swapping: " << endl;
    a.display();
    b.display();
    b.swap(a); // b is able to access private members of A

    cout << " b is able to access private members of A \n After swapping: " << endl;
    a.display();
    b.display();
    getch();
    return 0;
}
