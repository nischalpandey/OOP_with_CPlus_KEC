//6. Create a class named City that will have two member variables CityName(chart[20]) and DistFromKtm(float). Add member functions to set and retrieve the CityName and DistFromKtm separately. Add operator overloading to find the distance between the cities (just find the difference of DistFromKtm) and sum of distance of those cities from Kathmandu. In the main function, initialize three city objects. Set the first and second city to be Pokhara and Dhangadi. Display the sum of DistFromKtm of pokhara and Dhangadi and distance between Pokhara and Dhangadi.

#include<iostream>
#include<string>

using namespace std;

class City{
    public:
        char cityName[20];
        float distFromKtm;
        City(){
            distFromKtm = 0;
        }
        City(char c[20], float d){
            for(int i = 0; i < 20; i++){
                cityName[i] = c[i];
            }
            distFromKtm = d;
        }
        void setCityName(char c[20]){
            for(int i = 0; i < 20; i++){
                cityName[i] = c[i];
            }
        }
        void setDistFromKtm(float d){
            distFromKtm = d;
        }
        char* getCityName(){
            return cityName;
        }
        float getDistFromKtm(){
            return distFromKtm;
        }
        float operator-(City c){
            return distFromKtm - c.distFromKtm;
        }
        float operator+(City c){
            return distFromKtm + c.distFromKtm;
        }
};

int main(){
    City c1, c2, c3;
    char cityName1[20] = "Pokhara";
    char cityName2[20]=  "Dhangadi";
    c1.setCityName(cityName1);
    c1.setDistFromKtm(200);
    c2.setCityName(cityName2);
    c2.setDistFromKtm(500);


  cout << "City 1: " << c1.getCityName() << " " << c1.getDistFromKtm() << endl;
    cout << "Sum of DistFromKtm of Pokhara and Dhangadi: " << c1 + c2 << endl;
    cout << "Distance between Pokhara and Dhangadi: " << c1 - c2 << endl;

    int x;
    cin >> x;

    return 0;


    }



    // output:
    // Sum of DistFromKtm of Pokhara and Dhangadi: 700
    // Distance between Pokhara and Dhangadi: -300