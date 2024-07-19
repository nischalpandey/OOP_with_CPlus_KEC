//2. WAP to compare two complex numbers (<,>==,!=) using operator overloading. 3. WAP to add two time objects using operator overloading using non member function. 4. WAP to concatenate two strings using operator overloading.


#include<iostream>
using namespace std;


class Complex
{

        
    public:
        int real, imag;
        Complex()
        {
            real = 0;
            imag = 0;
        }
        Complex(int r, int i)
        {
            real = r;
            imag = i;
        }
        bool operator==(Complex c)
        {
            return (real == c.real && imag == c.imag);
        }
        bool operator!=(Complex c)
        {
            return (real != c.real || imag != c.imag);
        }
        bool operator<(Complex c)
        {
            return (real < c.real && imag < c.imag);
        }
        bool operator>(Complex c)
        {
            return (real > c.real && imag > c.imag);
        }
        void display()
        {
            cout << "Real: " << real << " Imaginary: " << imag << endl;
        }
};

int main(){
    Complex c1(5, 10), c2(5, 10), c3(10, 20);
    if(c1 == c2)
    {
        cout<<"c1:"<<c1.real<<","<<c1.imag<<endl; 
        cout<<"c2:"<<c2.real<<","<<c2.imag<<endl;
        cout << "c1 is equal to c2" << endl<<endl;
    }
    if(c1 != c3)
    {
        cout<<"c1:"<<c1.real<<","<<c1.imag<<endl; 
        cout<<"c3:"<<c3.real<<","<<c3.imag<<endl;
        cout << "c1 is not equal to c3" << endl<<endl;
    }
    if(c1 < c3)
    {
        cout<<"c1:"<<c1.real<<","<<c1.imag<<endl;
        cout<<"c3:"<<c3.real<<","<<c3.imag<<endl;

        cout << "c1 is less than c3" << endl<<endl;
    }
    if(c3 > c1)
    {
        cout<<"c3:"<<c3.real<<","<<c3.imag<<endl;
        cout<<"c1:"<<c1.real<<","<<c1.imag<<endl;

        cout << "c3 is greater than c1" << endl;
    }
    int x;
    cin >> x;
    return 0;
}


