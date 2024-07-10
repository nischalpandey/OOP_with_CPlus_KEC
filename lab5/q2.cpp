#include <iostream>
#include <conio.h>
using namespace std;

int highestmarks = 0; 

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

    for (int i = 0; i < 6; i++) {
        s[i].showdata();
         cout<<endl;
    }

cout << "Highest Marks: " << highestmarks ;
    getch();
    return 0;
}

// Output
/*
Enter your name : Ram
Enter your location detail : Kathmandu
Enter marks for OOP : 90
Enter marks for Math : 80
Enter marks for ECM : 70
Enter marks for DL : 60
Enter marks for EDC : 50
Enter your name : Shyam
Enter your location detail : Bhaktapur
Enter marks for OOP : 80
Enter marks for Math : 70
Enter marks for ECM : 60
Enter marks for DL : 50
Enter marks for EDC : 40
Enter your name : Hari
Enter your location detail : Lalitpur
Enter marks for OOP : 70
Enter marks for Math : 60
Enter marks for ECM : 50
Enter marks for DL : 40
Enter marks for EDC : 30
Enter your name : Sita
Enter your location detail : Pokhara
Enter marks for OOP : 60
Enter marks for Math : 50
Enter marks for ECM : 40
Enter marks for DL : 30
Enter marks for EDC : 20
Enter your name : Gita
Enter your location detail : Chitwan
Enter marks for OOP : 50
Enter marks for Math : 40
Enter marks for ECM : 30
Enter marks for DL : 20
Enter marks for EDC : 10
Name    ADD             OOP     Math    ECM     DL      EDC  TotalMarks
Ram     Kathmandu       90      80      70      60      50      350
Shyam   Bhaktapur       80      70      60      50      40      300
Hari    Lalitpur        70      60      50      40      30      250
Sita    Pokhara         60      50      40      30      20      200    
Gita    Chitwan         50      40      30      20      10      150
Highest Marks: 350







*/