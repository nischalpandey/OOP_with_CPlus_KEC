//WAP to overload []operator to display respective array element.

#include<iostream>
using namespace std;

class Students{
    public:
        string names[5];
        Students(){
            for(int i = 0; i < 5; i++){
                names[i] = "Ram dom name";
            }
        }
        Students(string n[5]){
            for(int i = 0; i < 5; i++){
                names[i] = n[i];
            }
        }
        void display(){
            for(int i = 0; i < 5; i++){
                cout << "Name " << i << ": " << names[i] << endl;
            }
        }
        string operator[](int i){
            return names[i];
        } // due to this function, we can access the array elements using the object of the class
};


int main(){
    string names[5] = {"Ram", "Shyam", "Hari", "Sita", "Gita"};
    Students s(names);
    s.display();
    cout <<"OF s{2} : "<< s[2] << endl; // accessing the array using array index

    int x;
    cin >> x;

    return 0;
}



