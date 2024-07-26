#include<iostream>
using namespace std;
// Data conversions
class Weight{
    public:
    float gm;

    Weight(float g){
        gm = g;
        float kg = g/1000;
        cout << "Weight in grams: " << g << endl;
        cout << "Weight in kilograms: " << kg << endl;

    }




};

int main(){
    Weight w(1500);
    int x;
    cin>>x;

    return 0;
}
