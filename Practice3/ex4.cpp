#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string name;
        Person(string n){
            name = n;
        }
};

int main(){
    Person person("Michael Douglas");
    cout << person.name << endl;
    return 0;
}