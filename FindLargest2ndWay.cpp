#include<iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 22;
    int c = 33;
    int max = a;

    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }

    cout << max << endl;
}
