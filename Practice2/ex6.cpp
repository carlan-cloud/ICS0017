#include <iostream>
using namespace std;

int find_smallest(int arr[], int size){
    int smallest = arr[0];

    for (int i = 0; i < size; ++i){
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main (){
    int numbers[5] = {55, 64, 45, 80, 65};
    int smallest = find_smallest(numbers, 5);
    cout << smallest;
    return 0;
}