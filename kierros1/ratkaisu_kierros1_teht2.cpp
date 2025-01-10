#include <iostream>
using namespace std;

void swap1(int &, int &);
void swap2(int *, int *);

int main() {
    int val1 = 1, val2 = 2;
    cout << "val1 = " << val1 << ", " << "val2 = " << val2 << " ennen swap1:ia." << endl;
    swap1(val1, val2);
    cout << "val1 = " << val1 << ", " << "val2 = " << val2 << " jalkeen swap1:in." << endl;
    
    int val3 = 3, val4 = 4;
    cout << "val3 = " << val3 << ", " << "val4 = " << val4 << " ennen swap2:ia." << endl;
    swap2(&val3, &val4);
    cout << "val3 = " << val3 << ", " << "val4 = " << val4 << " jalkeen swap2:in." << endl;

    return 0;
}

void swap1(int &value1, int &value2) {
    int tmp;
    tmp = value1;
    value1 = value2;
    value2 = tmp;
}

void swap2(int *value1, int *value2) {
    int tmp;
    tmp = *value1;
    *value1 = *value2;
    *value2 = tmp;
}
