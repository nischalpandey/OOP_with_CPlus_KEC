// Write a program to show the concept of dynamic constructor. use new in constructor and delete in desctructor
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

    ~Weight(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){

    Weight *w1 = new Weight(5, 500);
    Weight *w2 = new Weight(3, 750);
    Weight *w3 = new Weight;

    w3->add(w1, w2);
    w3->display();

    delete w1;
    delete w2;
    delete w3;

    return 0;
}
// Output: Total weight is: 8 kg and 1250 grams
