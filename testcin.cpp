#include<iostream>

using namespace std;
int main(){
    float age = 0;
    string name  = "";
    cout << "enter you name and age:";
    cin >> name;
    cin >> age;
    cout << "\n hello," << name << ",you are " << age/1 << " years and " << age*12 << " month";
    return 0; 
}