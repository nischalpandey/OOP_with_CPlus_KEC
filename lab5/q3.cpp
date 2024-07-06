/*
3. Write a program with a class weight and data members kg and grams. The class includes a default constructor which assigns 0 to each value by default and a parameterized constructor to initialize members with arguments. Use a pointer to the object concept to do so. Also, it has another function that adds two different weights and stores them in another object. Finally, display the sum of weights through a function using a pointer to the object concept.


*/


#include <iostream>
#include <conio.h>

using namespace std;

class Weight
{
private:
    int kg;
    int grams;

public:

    Weight(){
        kg = 0;
        grams = 0;
    }

    Weight(int k, int g){
        kg = k;
        grams = g;
    }

    void add(Weight *w1, Weight *w2){
        kg = w1->kg + w2->kg;
        grams = w1->grams + w2->grams;
    }

    void display(){
        cout<<"Total weight is: "<<kg<<" kg and "<<grams<<" grams"<<endl;
    }
};

int main(){
    Weight w1(5, 500);
    Weight w2(3, 750);
    Weight w3;

    w3.add(&w1, &w2);
    w3.display();
getch();
    return 0;
}
