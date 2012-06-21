#include <iostream>
#include <math.h>

using namespace std;
double NUM = 600851475143;

bool isPrime(double test) {
    double stop = sqrt(test);
    for (int i = 2; i < stop; i++) {
        if (fmod(test, i) == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    double i = 2;
    double prime = NUM / i;
    while (i < NUM && prime > 7) {
        if (fmod(NUM, i) == 0 && isPrime(prime)) {
            cout << "i: " << i  << " prime: " << prime << endl;
        }
        i++;
        prime = NUM / i;
    }

    return 0;
}

