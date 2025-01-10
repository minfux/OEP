#include <iostream>
using namespace std;

void increment1(int [], int);
void increment2(int *, int);
const int SIZE = 10;

int main() {
    int arr[SIZE] = {0}; 
    int i;

    cout << "Taulukko ennen aliohjelmakutsua 1: ";
    for(i=0; i<SIZE; i++)
        cout << arr[i] << " ";
    
    increment1(arr, SIZE);
    cout << endl << "Taulukko aliohjelmakutsun 1 jalkeen: ";
    for(i=0; i<SIZE; i++)
        cout << arr[i] << " ";

    for(i=0; i<SIZE; i++)
        arr[i]--;

    cout << endl << "Taulukko ennen aliohjelmakutsua 2: ";
    for(i=0; i<SIZE; i++)
        cout << arr[i] << " ";

    increment2(arr, SIZE);
    cout << endl << "Taulukko aliohjelmakutsun 2 jalkeen: ";
    for(i=0; i<SIZE; i++)
        cout << arr[i] << " ";

    return 0;
}

void increment1(int arr[], int size) {
    for(int i=0; i<size; i++)
        arr[i]++;
}

void increment2(int *arr, int size) {
    for(int i=0; i<size; i++)
    (*(arr + i))++;
}