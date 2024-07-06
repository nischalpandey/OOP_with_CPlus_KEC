/*
3. Write a class description for a complex number,
 which is a combination of two parts real and imaginary 
 of integral type. Write methods for addition and subtraction of two complex numbers.
Addition of two complex numbers:
Subtraction of two complex numbers:
(a+ib)+(c+id) = a+c+ib+id =a+c+i(b+d)
(a+ib)-(c+id) = a-c+ib-id=a-c+i(b-d)
*/

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imaginary;
    public:
        void readdata()
        {
            cout<<"Enter Real Part: ";
            cin>>real;
            cout<<"Enter Imaginary Part: ";
            cin>>imaginary;
        }
        void displaydata()
        {
            cout<<"Complex Number: "<<real<<" + i"<<imaginary<<endl;
        }
        Complex add(Complex c)
        {
            Complex temp;
            temp.real = real + c.real;
            temp.imaginary = imaginary + c.imaginary;
            return temp;
        }
        Complex subtract(Complex c)
        {
            Complex temp;
            temp.real = real - c.real;
            temp.imaginary = imaginary - c.imaginary;
            return temp;
        }
};


int main(){
cout << "\n-----------Enter the First complex number--------\n";
Complex c1;

c1.readdata();

/// 
//ading

cout << "\n-----------Enter the second complex number--------\n";
Complex c2;
c2.readdata();

Complex c3 = c1.add(c2);
cout << "\n-----------Addition of two complex numbers--------\n";
c3.displaydata();
//subtraction

cout << "\n-----------Enter the First complex number--------\n";
Complex c4;
c4.readdata();
//
cout << "\n-----------Enter the Second complex number--------\n";
Complex c6;
c6.readdata()
Complex c5 = c4.subtract(c6);

cout << "\n-----------Subtraction of two complex numbers--------\n";
c5.displaydata();

int a;
    cin>>a;



return 0;
}