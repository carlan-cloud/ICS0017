#include <iostream>
using namespace std;

void add_numbers(double n1, double n2){
    double result = n1 + n2;
    cout << result;
}

int main(){
    double number1 = 0.0f;
    double number2 = 0.0f;

    cout << "Numbers:" << endl;
    cin >> number1 >> number2;

    add_numbers(number1, number2);
    return 0;
}