#include <iostream>
using namespace std;

int main(){
    int n;
    int product;

    cout << "Enter number: ";
    cin >> n;

    for (int i = 6; i <= 9; i++){
        product = n * i;
        cout << n << " * " << i << " = " << product << endl;
    }
    return 0;
}