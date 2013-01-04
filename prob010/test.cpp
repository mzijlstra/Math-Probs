#include <windows.h>
#include <iostream>
#include <math.h>

bool isPrime(int num) {
    double end = sqrt(num + 0.0);
    for (int i = 2; i <= end; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main(int argc, char * argv[]) {
    long sum = 0;
    for (int i = 2; i < 2000000; i++) {
        if (isPrime(i)) {
            /*if (i > 1999000) {
                std::cout << i << std::endl;
            }*/
            sum += i;
        }
    }

    std::cout << "Sum: " << sum << std::endl;
}
