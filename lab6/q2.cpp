/*

2. Illustrate an example of a constant member function and object to display magnitude of a 2-D coordinate.
*/
#include <iostream>
#include <cmath>
#include<conio.h>

using namespace std;

class Mag
{
    private:
        int x, y;
    public:
        Mag(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
        void display()
        {
            cout << "x: " << x << endl;
            cout << "y: " << y << endl;
        }
        double magnitude() const
        {
            return sqrt(x*x + y*y);
        }
};

int main()
{
    Mag p(3, 4);
    p.display();
    cout << "Magnitude: " << p.magnitude() << endl;
    getch();
    return 0;
}
