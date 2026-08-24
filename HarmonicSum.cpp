#include<iostream>
using namespace std;

int main() {
    //Q : Find the sum of the Harmonic Series : 1 + 1/2 + 1/3 + 1/4 + .... + 1/(n-1) + 1/n

    int n = 5000;
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        sum = sum + 1.0 / i;
    }
    cout << sum << endl;
}
