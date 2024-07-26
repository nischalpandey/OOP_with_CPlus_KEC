//WAP to convert an object from a class that represent weight of gold in Nepal, tola to object of class that represents international gold measurement in grams. (1 tola= 11.664 grams)


#include<iostream>
using namespace std;
// Data conversions
class Weight{
    public:
    float tola;

    Weight(float t){
        tola = t;
        float gm = t*11.664;
        cout << "Weight in tola: " << t << endl;
        cout << "Weight in grams: " << gm << endl;

    }
   };


int main(){
    Weight w(1);
    int x;
    cin>>x;

    return 0;
}
// Descussion:
// In this code, we have a class Weight that represents the weight of gold. The class has a constructor that takes a float value representing the weight in tola and converts it to grams. In the main function, we create an object of the Weight class and pass the value to the constructor. The output shows the weight in both tola and grams. This code demonstrates how to convert weight values between tola and grams using classes and constructors.
// Formula used:
// 1 tola = 11.664 grams


