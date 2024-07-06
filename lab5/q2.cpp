#include <iostream>
#include <conio.h>
using namespace std;

int highestmarks = 0; // Corrected spelling

string subs[5] = {"OOP", "Math", "ECM", "DL", "EDC"};

class Subjects {
public:
    int marks;
    string name;
   
};

class Student {
private:
    string name;
    string add;
    int roll;
    Subjects s_m[5];

public:
    void savedata() {
        cout << "Enter your name" << endl;
        cin >> name;
        cout << "Enter your location detail" << endl;
        cin >> add;
        for (int i = 0; i < 5; i++) {
            s_m[i].name = subs[i]; // Assign subject name from subs array
            cout << "Enter marks for " << subs[i] << endl;
            cin >> s_m[i].marks;
        }
    } // 

    void showdata() {

    
        cout  << name ;
        cout << add ;
        cout << roll ;
   

        int totalmarks = 0;
    
        for (int i = 0; i < 5; i++) {
            cout  << s_m[i].marks ;
            totalmarks += s_m[i].marks;
            if (s_m[i].marks > highestmarks) {
                highestmarks = s_m[i].marks;
            }
        }
        cout << "Total Marks: " << totalmarks ;
        

       
    }
}; // This brace closes the Student class definition

int main() {
    Student s[5];

    for (int i = 0; i < 5; i++) {
        s[i].savedata();
    }


cout<<"Name\t ADD\t ";

for (int i = 0; i < 5; i++)
{
   cout<<"\t"<<subs[i];
}
cout<<endl;

    for (int i = 0; i < 5; i++) {
        s[i].showdata();
         cout<<endl;
    }
cout << "Highest Marks: " << highestmarks ;
    getch();
    return 0;
}