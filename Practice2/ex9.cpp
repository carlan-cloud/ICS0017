#include <iostream>
#include <string>
using namespace std;

int main(){
    string text1, text2;

    getline(cin, text1);
    getline(cin, text2);

    int len1= text1.length();
    int len2= text2.length();

    if (len1 > len2){
        cout << text1;
    } else {
        cout << text2;
    }
    return 0;
}