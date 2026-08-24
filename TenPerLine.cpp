#include<iostream>
using namespace std;

int main() {
    int START = 0;
    int END = 500;
    int PER_LINE = 10;

    int counter = START;
    while (counter <= END) {
        cout << counter << " " ;
        if ((counter + 1) % PER_LINE == 10) {
            cout << endl;
        }
        counter++;
    }
}
