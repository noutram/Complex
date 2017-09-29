//
//  main.cpp
//  Complex
//
//  Created by Nicholas Outram on 21/09/2017.
//  Copyright © 2017 Nicholas Outram. All rights reserved.
//

#include <iostream>
#include "ComplexNumber_C.hpp"
#include "ComplexNumber.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // C API
    ComplexNumber_C p = { .real = 2.0, .imag = 3.0 };
    ComplexNumber_C q = { .real = 1.0, .imag = 7.0 };
    
    ComplexNumber_C y = complexAdd(p,q);
    displayComplex(y);
 
    complexAddInPlace(&y, p);
    displayComplex(y);

    // C++ API
    ComplexNumber aa(2.0, 3.0);
    ComplexNumber bb(1.0, 4.0);
    ComplexNumber yy = aa + bb;
    
    cout << yy << endl;
    return 0;
}
