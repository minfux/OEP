#include <iostream>
using namespace std;

int main() {
    // a.
    int *intptr;
    int val;
    intptr = &val;

    // b.
    *intptr = 7;

    // c.
    cout << "Osointinmuuttuja:" << endl;
    cout << intptr << ", " << *intptr << endl;
    cout << "Kokonaislukumuttuja:" << endl;
    cout << &val << ", " << val << endl;

    // d.
    cout << "*&muuttuja = " << *(&val) << endl;
    cout << "&*muuttuja = " << &(*intptr) << endl;

    // e.
    cout << "sizeof(muuttuja) = " << sizeof(val) << endl;
    cout << "sizeof(muuttuja_p) = " << sizeof(intptr) << endl;

    // g.
    int val2, *intptr2 = &val;

    // h.
    cout << *intptr2;

    // f.
    intptr2 = nullptr;
    cout << *intptr2; // segfault

    return 0;
}