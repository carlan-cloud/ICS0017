#include <iostream>
using namespace std;
int main(){
    double ratio = 0.621;
    double kilometers = 0.0;
    double miles = 0.0;

    cout << "Enter distance in kilometers: ";
    cin >> kilometers;

    miles = kilometers * ratio;
    cout << "Distance in miles: " << miles;
    
    return 0;
}