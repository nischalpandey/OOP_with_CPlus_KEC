#include<iostream>
// WAP to perform expression C2=5*C1 where C2 and C1 are two different objects of complex class.
using namespace std;

class Complex{
    public:
    float real;
    float imag;
    Complex(float r, float i){
        real = r;
        imag = i;
    }
    Complex operator*(Complex c){
        return Complex(real*c.real, imag*c.imag);
    }
    void display(){
        cout << "Real: " << real << endl;
        cout << "Imaginary: " << imag << endl;
    }

    friend Complex operator*(int, Complex);

};

Complex operator*(int x, Complex c){
    return Complex(x*c.real, x*c.imag);
}


int main(){
    Complex c1(2, 3);
    Complex c2 = 5*c1;
    c2.display();
    int x;
    cin>>x;

    return 0;
}
// Descussion:
// In this code, we have a class Complex that represents complex numbers. The class has two data members, real and imag, to store the real and imaginary parts of the complex number. The class has a constructor that initializes the real and imaginary parts of the complex number. The class also has an overloaded multiplication operator (*) that multiplies two complex numbers. In the main function, we create two complex numbers c1 and c2, and multiply c1 by 5 to get c2. We then display the real and imaginary parts of c2. This code demonstrates how to overload the multiplication operator to perform multiplication of complex numbers.
// We use freind function to overload the operator.
// For c2=5*c1, we use the overloaded operator function.
// If we donot use friend function, we will get an error as the operator is not defined for the class.
//But For c2=c1*5, we can use the operator function without using friend function.
// Because the operator is defined for the class.


