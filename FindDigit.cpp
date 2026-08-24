#include<iostream>
using namespace std;

int main() {
    // Q : ei sonkkhay koto ta 1 ache?


    int num = 111225004;
    int rem;
    int count = 0;
    while (num > 0) {
        if (num % 10 == 1) {
            count++;
        }
        num = num / 10;
    }
    cout << count;
}
