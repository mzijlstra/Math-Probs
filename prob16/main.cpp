#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // create a string with the 'last' char set to '2'
    char data[1000] = { 0 }; // all set to zero
    data[998] = '2'; // to close string 999 is still 0

    char cary = 0;
    char val = 0;
    int min = 998;
    double sum = 0;

    // multiply the string by 2 1000 times
    for (int pow = 2; pow <= 1000; pow++) {
        int i = 998;
        cary = 0;

        while (data[i] != 0 || cary != 0 ) {
            if (i < min) {
                min = i;
            }

            val = data[i] ? data[i] - '0' : data[i];
            val *= 2;
            val += cary;
            cary = val / 10;
            data[i] = (val % 10) + '0';

            i--;
        }
        printf("%4d: %s\n", pow, data + min);
    }

    for (int i = min; i < 999; i++) {
        sum += data[i] - '0';
    }

    printf("%.0f\n", sum);
    return 0;
}
