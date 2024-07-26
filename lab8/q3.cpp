
#include <iostream>
using namespace std;
// Data conversions
class Celsius{
    public:
    float celsius;
    float fahrenheit;
    Celsius(float c){
        celsius = c;
        fahrenheit = (c*9/5)+32;
        cout << "Temperature in Celsius: " << c << endl;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
};

class Fahrenheit{
    public:
    float celsius;
    float fahrenheit;
    Fahrenheit(float f){
        fahrenheit = f;
        celsius = (f-32)*5/9;
        cout << "Temperature in Fahrenheit: " << f << endl;
        cout << "Temperature in Celsius: " << celsius << endl;
    }
};

int main(){
    Celsius c(37);
    cout << endl<<endl;
    Fahrenheit f(99.5);
    int x;
    cin>>x;

    return 0;
}

// Descussion:
// In this code , we have two classes Celsius and Fahrenheit. The Celsius class has a constructor that takes a float value and converts it to Fahrenheit. The Fahrenheit class has a constructor that takes a float value and converts it to Celsius. In the main function, we create objects of both classes and pass the values to the constructors. The output shows the temperature in both Celsius and Fahrenheit. This code demonstrates how to convert temperature values between Celsius and Fahrenheit using classes and constructors.
// Formula used:
// Celsius to Fahrenheit: F = (C * 9/5) + 32
// Fahrenheit to Celsius: C = (F - 32) * 5/9