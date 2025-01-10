#include <iostream>
using namespace std;

void swap(int *, int *);
const int SIZE = 10;

int main() {
    int arr[SIZE];
    for(int i=0; i<SIZE; i++)
        arr[i] = i+1;

    // Taulukon ensimmainen osoite.
    int *ptr1 = arr;
    // Taulukon viimeinen osoite.
    int *ptr2 = arr+SIZE-1;

    for(int i=0; i<SIZE/2; i++) {
        swap(ptr1, ptr2);
        ptr1++;
        ptr2--;
    }

    cout << "Taulukko kaannettyna: ";
    for(int i=0; i<SIZE; i++)
        cout << arr[i] << " ";
}

void swap(int *value1, int *value2) {
    int tmp;
    tmp = *value1;
    *value1 = *value2;
    *value2 = tmp;
}