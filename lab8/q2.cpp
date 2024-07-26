#include<iostream>
using namespace std;
// Data conversions
class Weight{
    public:
    float kg;

    Weight(float kg){
    
    this->kg = kg;
    
    }


    operator float(){
        return kg * 1000;
        }





};

int main(){
  

    Weight w(1.5);
    float result = w;
    cout << "Weight in kilograms: " << w.kg << endl;

    int x;
    cin>>x;

    return 0;
}
