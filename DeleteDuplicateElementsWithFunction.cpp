#include <iostream>
using namespace std;

void deleteDup(int arr[], int size);

int main() {

    int arr[] = {1, 2, 2, 3, 3, 4,};
    int size = sizeof(arr) / sizeof(arr[0]);
    deleteDup(arr,size);

}
void deleteDup(int arr[], int size) {
    int newArr[100];
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == newArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            newArr[newSize] = arr[i];
            newSize++;
        }
    }
    cout << "Final Output : " << endl;
    int i = 0;
    while (i < newSize) {
        cout << newArr[i] << " ";
        i++;
    }
}

