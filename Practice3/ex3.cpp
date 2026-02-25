#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        Person(){
            name = "Marty McFly";
            cout << "Welcome " << name << endl;
        }
};

int main(){
    Person person;
    return 0;
}