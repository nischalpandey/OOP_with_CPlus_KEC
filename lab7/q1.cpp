//1. WAP to overload pre-increment and post-increment operators.

#include<iostream>
using namespace std;

class Increment
{
    private:
        int num;
    public:
        Increment()
        {
            num = 0;
        }
        Increment(int n)
        {
            num = n;
        }
        Increment operator++()
        {
            Increment temp;
            temp.num = ++num;
            return temp;
        }
        Increment operator++(int)
        {
        // this is post increment where we pass an int as argument
            Increment temp;
            temp.num = num++;
            return temp;
        }
        void display()
        {
            cout << "Number: " << num << endl;
        }
};


int main()
{
    Increment i1(5), i2(10), i3;
    i3 = ++i1;
    i3.display();
    i3 = i2++;
    i3.display();
    // when we use post increment, the value of i2 is incremented after the assignment
   
   // so the value of i2 is 11 and the value of i3 is 10
    i2.display();
 

    int x;
    cin >> x;

    return 0;
}






