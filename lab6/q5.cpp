#include<iostream>
#include<conio.h>
using namespace std;


class B;

class A{
public:
    int a;
    void getdata(){
        cout << "Enter the value of a: ";
        cin >> a;
    }
    void display(){
        cout << "a: " << a << endl;
    }
    friend void maxno(A &, B &);
};

class B{
public:
    int b;
    void getdata(){
        cout << "Enter the value of b: ";
        cin >> b;
    }
    void display(){
        cout << "b: " << b << endl;
    }
    friend void maxno(A &, B &);
};


void maxno(A &x, B &y){
    if(x.a > y.b){
        cout << "Max number is: " << x.a << endl;
    }
    else{
        cout << "Max number is: " << y.b << endl;
    }
}

int main(){
    A a;
    B b;
    a.getdata();
    b.getdata();
    maxno(a, b);
    getch();
    return 0;
}
