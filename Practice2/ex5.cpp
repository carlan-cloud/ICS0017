#include <iostream>
using namespace std;

int main(){
    double numbers[5] = {32.2, 43.5, 51.6, 11.3, 29.8};
    double sum = 0;

    for(int i = 0; i < 5; ++i){
        sum = sum + numbers[i];
    }
    double average = sum / 5;
    cout << average;
    return 0;
}