// WAP to concatenate two strings using operator overloading.

#include<iostream>


using namespace std;

class MyString
{
    public:
        string str;
        MyString()
        {
            str = "";
        }
        MyString(string s)
        {
            str = s;
        }
        void display()
        {
            cout << "String: " << str << endl;
        }
};

MyString operator+(MyString s1, MyString s2)
{
    MyString s;

    s.str = s1.str + s2.str;
    return s;


}

int main()
{
    MyString s1("Hello"), s2(" World"), s3;
    s3 = s1 + s2;
    s3.display();

    int x;
    cin >> x;

    return 0;
}