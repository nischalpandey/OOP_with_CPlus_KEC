//  WAP that is used to show the execution of a constructor in multilevel inheritance.
#include <iostream>
using namespace std;

class ClassA{
    public:
    ClassA(){
        cout<<"Hello ClassA const";
    }
};

class ClassB: public ClassA{
    public:
    ClassB(){
        cout<<"Hello ClassB const";
    }
};

class ClassC: public ClassB{
    public:
    ClassC(){
        cout<<"Hello ClassC const";
    }
};

int main(){
    ClassC obj;
    return 0;
}
// Output: Hello ClassA constHello ClassB constHello ClassC const

    




