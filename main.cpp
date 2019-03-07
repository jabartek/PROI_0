#include <iostream>
#include <fstream>
#include "matrix.h"


int main() {


    //std::ofstream out("out.txt");
    //std::cout.rdbuf(out.rdbuf());


    int testInt, testInt2;
    while (true) {
        std::cout << "Please provide sizes for 2 matrices: ";
        std::cin >> testInt >> testInt2;
        if (testInt < 1 or testInt2 < 1) break;
        else {
            Matrix test1(testInt, 2);
            Matrix test2(testInt2, 2);
            std::cout << "TEST1 matrix: \n" << test1 << "\nDETERMINANT OF TEST1: " << test1.calcDet() << "\n";
            std::cout << "TEST2 matrix: \n" << test2 << "TEST2-TEST1: \n" << test2 - test1
                      << "TEST2 multiplied by .5: \n"
                      << .5 * test2
                      << "TEST2 again (should be the same as TEST2 earlier: \n" << test2;
        }
    }
    return 0;

}