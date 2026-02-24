#include <iostream>
#include <string>
using namespace std;

struct Employee{
    int age;
    string name;
};

int main(){
    struct Employee employee1;
    cin >> employee1.age;
    cin.ignore();
    getline(cin, employee1.name);

    cout << employee1.name << endl;
    cout << employee1.age;
    return 0;
}