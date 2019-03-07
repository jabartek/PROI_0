#include <iostream>
#include <fstream>
#include "matrix.h"


int main() {


    //std::ofstream out("out.txt");
    //std::cout.rdbuf(out.rdbuf());


    int testInt;
    while (true) {
        std::cin >> testInt;
        if (testInt < 1) break;
        else {
            Matrix test1(testInt, 2);
            Matrix test2(testInt + 1, 2);
            std::cout << "TEST1 matrix: \n" << test1 << "\nDETERMINANT OF TEST1: " << test1.calcDet() << "\n";
            std::cout << "TEST2 matrix: \n" << test2 << "TEST2-TEST1: \n" << test2 - test1 << "TEST2 divided * .5: \n"
                      << test2 * .5
                      << "TEST2 again (should be the same as TEST2 earlier: \n" << test2;
        }
    }
    return 0;

}