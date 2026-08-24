#include<iostream>
using namespace std;

int main() {
    int number = 111225004;
    // cin >> number;
    int remainder;
    int ans = 0;
    while (number > 0) {
        remainder = number % 10;
        ans = ans * 10 + remainder;
        number = number / 10;
    }
    cout << ans;
}
