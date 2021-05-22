#include"ArrayTemplate.cpp"
#include "Patient.h"

int main() {
    ArrayTemplate<Patient> miA(0);

    auto *p1 = new Patient( "Rebe", "123", "ABC");

    cout << p1->toString();

    cout <<miA.getSize();
    //miA.addObject(p1);
    //cout << miA.toString();

    //delete miA;
    return 0;
}
