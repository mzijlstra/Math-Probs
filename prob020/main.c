//
//  main.c
//  prob20
//
//  Created by Michael Zijlstra on 7/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include "math.h"

int main(int argc, const char * argv[])
{
    // use ASCII string as BCD
    char data[202] = { 0 };
    data[200] = '1'; // initialize to char 1
    
    int pos;
    for (int i = 1; i <= 100; i++) {
        pos = 200;
        int val = 0;
        int cary = 0;
        
        while (cary || data[pos]) {
            if (data[pos]) {
                val = data[pos] - '0';
            } else {
                val = 0;
            }
            val *= i;
            val += cary;
            data[pos] = (char)( (val % 10) + '0');
            
            cary = val / 10;
            pos--;
        }
        
        printf("%s\n", data + pos +1);
    }
    
    int sum = 0;
    for (int i = pos + 1; i <= 200; i++) {
        sum += data[i] - '0';
    }
    printf("%d", sum);
    
    
/*    
    unsigned long fact = 100;
    for (int i = 99; i > 1; i--) {
        fact *= i; 
    }
    
    printf("%lu %lu\n", sizeof(fact), fact);
    
    int sumOfDigit = 0;
    
    while (fact != 0) {
        sumOfDigit += fmod(fact, 10);
        fact /= 10;
    }

    // insert code here...
    printf("%d\n", sumOfDigit);
    return 0;
 */
}

