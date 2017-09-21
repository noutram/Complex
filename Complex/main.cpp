//
//  main.cpp
//  Complex
//
//  Created by Nicholas Outram on 21/09/2017.
//  Copyright © 2017 Nicholas Outram. All rights reserved.
//

#include <iostream>
#include "ComplexNumber_C.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    ComplexNumber_C p = { .real = 2.0, .imag = 3.0 };
    ComplexNumber_C q = { .real = 1.0, .imag = 7.0 };
    
    ComplexNumber_C y = complexAdd(p,q);
    displayComplex(y);
 
    complexAddInplace(&y, p);
    displayComplex(y);

    return 0;
}
