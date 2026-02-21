#include <iostream>
using namespace std;
int aritmethic_operators(int number){
    int original_number{ number };
    number = number * 2;
    number = number + 9;
    number = number - 3;
    number = number / 2;
    number = number - original_number;
    number = number % 3;
    return number;
}
