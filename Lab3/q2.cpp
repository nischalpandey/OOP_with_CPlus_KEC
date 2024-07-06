//  Create a class called Volume that uses three data members (length, breadth, and height) 
//in terms of feet and inches to model the volume of a room. Read three dimensions
// of room and calculate volume it represents and print out the result.
// The volume should be in feet form i.e 12 feet 6 inches will be 12.5 ft.

#include<iostream>
using namespace std;
 

class Volume

{
    private:
        int length , l_inch;
        int breadth , b_inch;
        int height , h_inch;
    public:
        void readdata()
        {
            cout<<"Enter Length in feet and inch: ";
            cin>>length >> l_inch;
            cout<<"Enter Breadth in feet and inch: ";
            cin>>breadth >> b_inch;
            cout<<"Enter Height in feet and inch: ";
            cin>>height >> h_inch;
        }
        void displaydata()
        {


            double l = length + (l_inch/12.0);
            double b = breadth + (b_inch/12.0);
            double h = height + (h_inch/12.0);
            cout<<"Volume of Room: "<<l*b*h<<" ft^3"<<endl;

        }
};



int main(){


Volume v1;
v1.readdata();
v1.displaydata();
///
 int a;
    cin>>a;



return 0;
}