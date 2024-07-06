//Write a program to show the concept of this pointer.

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
            cout<<"Address of w1 obj: "<<w1<<endl;
            cout<<"Address of w2 obj: "<<w2<<endl;

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

    return 0;
}