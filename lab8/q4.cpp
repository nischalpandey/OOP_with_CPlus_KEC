
#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius {
public:
    float celsius;

    Celsius(float c) : celsius(c) { 
    
    // : celsius(c) is used because we are initializing the value of celsius with the value of c
        cout << "Temperature in Celsius: " << c << endl;
    }

    operator Fahrenheit();
};

class Fahrenheit {
public:
    float fahrenheit;

    Fahrenheit(float f) : fahrenheit(f) {
        cout << "Temperature in Fahrenheit: " << f << endl;
    }

    operator Celsius() {
        return Celsius((fahrenheit - 32) * 5 / 9);
    }
};

Celsius::operator Fahrenheit() {
    return Fahrenheit((celsius * 9 / 5) + 32);
}

int main() {
    Celsius c(37);

    cout << endl << endl;
    Fahrenheit f = c;
    Celsius c1 = f;


    int x;
    cin >> x;

    return 0;
}
