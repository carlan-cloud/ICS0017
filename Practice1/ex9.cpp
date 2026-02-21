#include <iostream>
using namespace std;

int main(){
    int number;
    int product;

    cout << "Number for multiplication: ";
    cin >> number;

    for (int i = 1; i <= 5; ++i){
        product = number * i;
        cout << number << " * " << i;
        cout << " = " << product << endl;
    }
    return 0;
}