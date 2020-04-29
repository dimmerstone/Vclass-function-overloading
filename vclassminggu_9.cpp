#include <iostream>
using namespace std;

void tampilkan(int);
void tampilkan(float);
void tampilkan(int, float);

int main() {

    int a = 5;
    float b = 5.5;

    tampilkan(a);
    tampilkan(b);
    tampilkan(a, b);

    return 0;
}

void tampilkan(int var) {
    cout << "Data Integer: " << var << endl;
}

void tampilkan(float var) {
    cout << "Data float: " << var << endl;
}

void tampilkan(int var1, float var2) {
    cout << "Data Integer: " << var1;
    cout << " Dan data float:" << var2;
}
