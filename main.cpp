#include <iostream>
#include <fstream>
#include "matrix.h"


int main() {


    std::ofstream out("out.txt");
    std::streambuf *coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(out.rdbuf());


    int testInt;
    while (true) {
        std::cin >> testInt;
        if (testInt == -1) break;
        Matrix test1(testInt, 2);
        std::cout << test1 << "\n" << test1.calcDet() << "\n";
    }
    return 0;

}