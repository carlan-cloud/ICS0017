#include <iostream>
using namespace std;

int main(){
    int num1 = 0;
    int sum = 0;

    cout << "Enter numbers to add (Negative skips, 0 to stop):" << endl;

    while (true) {
        cout << "Enter a number: ";
        cin >> num1;

        if (num1 == 0) {
            break;
        }

        if (num1 < 0) {
            cout << "Skip" << endl;
            continue;
        }

        sum += num1;
    }

    cout << "Total: " << sum << endl;

    return 0;
}