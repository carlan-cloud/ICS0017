#include <iostream>
using namespace std;

int main(){
    double numbers[5];
    double sum = 0.0f;
    for (int i = 0; i < 5; ++i){
        cout << "Number: ";
        cin >> numbers[i];
    }
    for (int i = 0; i < 5; ++i){
        sum = sum + numbers[i];
    }
    double average = sum / 5.0;
    cout << average;
    return 0;
}