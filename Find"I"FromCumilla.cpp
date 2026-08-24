#include<iostream>
using namespace std;

int main() {
    //Question : Find "I" FROM the word CUMILLA.
    //Solving by Linear Searcing Algo:

    char arr[] = {'C', 'U', 'M', 'I', 'L', 'L', 'A'};
    int size = sizeof(arr) / sizeof(arr[0]);
    char target = 'I';
    int found = 0;
    int i = 0;
    while (i < size) {
        if (target == arr[i]) {
            found = 1;
            break;
        }
        i++;
    }
    if (found == 1) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

}
