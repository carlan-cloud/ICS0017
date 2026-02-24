#include <iostream>
using namespace std;

int main(){
    int numbers[5] = {64, 55, 75, 80, 65};
    int smallest = *numbers;
    for (int i = 1; i < 5; ++i){
        if (*(numbers + i) < smallest) {
            smallest = *(numbers + i);
        }
    }
    cout << smallest << endl;
    return 0;
}