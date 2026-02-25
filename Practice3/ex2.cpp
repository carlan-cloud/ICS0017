#include <iostream>
using namespace std;

class Student{
    public: int marks;
};

int main(){
    Student student1;
    Student student2;

    cin >> student1.marks;
    cin.ignore();
    cin >> student2.marks;

    cout << student1.marks << endl;
    cout << student2.marks << endl;

    return 0;
}