//
//  main.c
//  prob17
//
//  Created by Michael Zijlstra on 7/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>



int transcribe(char * buf, int i) {
    int count = 0;
    
    switch (i / 100) {
        case 1:
            buf[count++] = 'o';
            buf[count++] = 'n';
            buf[count++] = 'e';
            break;
        case 2:
            buf[count++] = 't';
            buf[count++] = 'w';
            buf[count++] = 'o';
            break;
        case 3:
            buf[count++] = 't';
            buf[count++] = 'h';
            buf[count++] = 'r';
            buf[count++] = 'e';
            buf[count++] = 'e';
            break;
        case 4:
            buf[count++] = 'f';
            buf[count++] = 'o';
            buf[count++] = 'u';
            buf[count++] = 'r';
            break;
        case 5:
            buf[count++] = 'f';
            buf[count++] = 'i';
            buf[count++] = 'v';
            buf[count++] = 'e';
            break;
        case 6:
            buf[count++] = 's';
            buf[count++] = 'i';
            buf[count++] = 'x';
            break;
        case 7:
            buf[count++] = 's';
            buf[count++] = 'e';
            buf[count++] = 'v';
            buf[count++] = 'e';
            buf[count++] = 'n';
            break;
        case 8:
            buf[count++] = 'e';
            buf[count++] = 'i';
            buf[count++] = 'g';
            buf[count++] = 'h';
            buf[count++] = 't';
            break;
        case 9:
            buf[count++] = 'n';
            buf[count++] = 'i';
            buf[count++] = 'n';
            buf[count++] = 'e';
            break;
        case 0:
            // do nothing
            break;
    }
    
    if (i > 99) {
        buf[count++] = ' ';
        buf[count++] = 'h';
        buf[count++] = 'u';
        buf[count++] = 'n';
        buf[count++] = 'd';
        buf[count++] = 'r';
        buf[count++] = 'e';
        buf[count++] = 'd';

        if (i % 100 != 0) {
            buf[count++] = ' ';
            buf[count++] = 'a';
            buf[count++] = 'n';
            buf[count++] = 'd';
            buf[count++] = ' ';
        }
    }
    
    
    switch ((i / 10) % 10) {
        case 0:
            // do nothing
            break;
        case 1:
            switch (i % 10) {
                case 0:
                    buf[count++] = 't';
                    buf[count++] = 'e';
                    buf[count++] = 'n';
                    break;
                case 1:
                    buf[count++] = 'e';
                    buf[count++] = 'l';
                    buf[count++] = 'e';
                    buf[count++] = 'v';
                    buf[count++] = 'e';
                    buf[count++] = 'n';
                    break;
                case 2:
                    buf[count++] = 't';
                    buf[count++] = 'w';
                    buf[count++] = 'e';
                    buf[count++] = 'l';
                    buf[count++] = 'v';
                    buf[count++] = 'e';
                    break;
                case 3:
                    buf[count++] = 't';
                    buf[count++] = 'h';
                    buf[count++] = 'i';
                    buf[count++] = 'r';
                    buf[count++] = 't';
                    buf[count++] = 'e';
                    buf[count++] = 'e';
                    buf[count++] = 'n';
                    break;
                case 4:
                    buf[count++] = 'f';
                    buf[count++] = 'o';
                    buf[count++] = 'u';
                    buf[count++] = 'r';
                    buf[count++] = 't';
                    buf[count++] = 'e';
                    buf[count++] = 'e';
                    buf[count++] = 'n';
                    break;
                case 5:
                    buf[count++] = 'f';
                    buf[count++] = 'i';
                    buf[count++] = 'f';
                    buf[count++] = 't';
                    buf[count++] = 'e';
                    buf[count++] = 'e';
                    buf[count++] = 'n';
                    break;
                case 6:
                    buf[count++] = 's';
                    buf[count++] = 'i';
                    buf[count++] = 'x';
                    buf[count++] = 't';
                    buf[count++] = 'e';
                    buf[count++] = 'e';
                    buf[count++] = 'n';
                    break;
                case 7:
                    buf[count++] = 's';
                    buf[count++] = 'e';
                    buf[count++] = 'v';
                    buf[count++] = 'e';
                    buf[count++] = 'n';
                    buf[count++] = 't';
                    buf[count++] = 'e';
                    buf[count++] = 'e';
                    buf[count++] = 'n';
                    break;
                case 8:
                    buf[count++] = 'e';
                    buf[count++] = 'i';
                    buf[count++] = 'g';
                    buf[count++] = 'h';
                    buf[count++] = 't';
                    buf[count++] = 'e';
                    buf[count++] = 'e';
                    buf[count++] = 'n';
                    break;
                case 9:
                    buf[count++] = 'n';
                    buf[count++] = 'i';
                    buf[count++] = 'n';
                    buf[count++] = 'e';
                    buf[count++] = 't';
                    buf[count++] = 'e';
                    buf[count++] = 'e';
                    buf[count++] = 'n';
                    break;
            }
            break;
        case 2:
            buf[count++] = 't';
            buf[count++] = 'w';
            buf[count++] = 'e';
            buf[count++] = 'n';
            buf[count++] = 't';
            buf[count++] = 'y';
            break;
        case 3:
            buf[count++] = 't';
            buf[count++] = 'h';
            buf[count++] = 'i';
            buf[count++] = 'r';
            buf[count++] = 't';
            buf[count++] = 'y';
            break;
        case 4:
            buf[count++] = 'f';
            buf[count++] = 'o';
            buf[count++] = 'r';
            buf[count++] = 't';
            buf[count++] = 'y';
            break;
        case 5:
            buf[count++] = 'f';
            buf[count++] = 'i';
            buf[count++] = 'f';
            buf[count++] = 't';
            buf[count++] = 'y';
            break;
        case 6:
            buf[count++] = 's';
            buf[count++] = 'i';
            buf[count++] = 'x';
            buf[count++] = 't';
            buf[count++] = 'y';
            break;
        case 7:
            buf[count++] = 's';
            buf[count++] = 'e';
            buf[count++] = 'v';
            buf[count++] = 'e';
            buf[count++] = 'n';
            buf[count++] = 't';
            buf[count++] = 'y';
            break;
        case 8:
            buf[count++] = 'e';
            buf[count++] = 'i';
            buf[count++] = 'g';
            buf[count++] = 'h';
            buf[count++] = 't';
            buf[count++] = 'y';
            break;
        case 9:
            buf[count++] = 'n';
            buf[count++] = 'i';
            buf[count++] = 'n';
            buf[count++] = 'e';
            buf[count++] = 't';
            buf[count++] = 'y';
            break;
    }
    
    if ((i / 10) % 10 != 1) {
        switch (i % 10) {
            case 1:
                buf[count++] = 'o';
                buf[count++] = 'n';
                buf[count++] = 'e';
                break;
            case 2:
                buf[count++] = 't';
                buf[count++] = 'w';
                buf[count++] = 'o';
                break;
            case 3:
                buf[count++] = 't';
                buf[count++] = 'h';
                buf[count++] = 'r';
                buf[count++] = 'e';
                buf[count++] = 'e';
                break;
            case 4:
                buf[count++] = 'f';
                buf[count++] = 'o';
                buf[count++] = 'u';
                buf[count++] = 'r';
                break;
            case 5:
                buf[count++] = 'f';
                buf[count++] = 'i';
                buf[count++] = 'v';
                buf[count++] = 'e';
                break;
            case 6:
                buf[count++] = 's';
                buf[count++] = 'i';
                buf[count++] = 'x';
                break;
            case 7:
                buf[count++] = 's';
                buf[count++] = 'e';
                buf[count++] = 'v';
                buf[count++] = 'e';
                buf[count++] = 'n';
                break;
            case 8:
                buf[count++] = 'e';
                buf[count++] = 'i';
                buf[count++] = 'g';
                buf[count++] = 'h';
                buf[count++] = 't';
                break;
            case 9:
                buf[count++] = 'n';
                buf[count++] = 'i';
                buf[count++] = 'n';
                buf[count++] = 'e';
                break;
            case 0:
                // do nothing
                break;
        }
    }
    buf[count++] = '\n';
    
    return count;
}

int sumLowestNine(int letters) {
    return letters * (9 * 10 +  // **?
                      100);     // ?** 
}

int sumTens(int letters) {
    return letters * 10;
}

int sumDecimals(int letters) {
    return letters * (10 * 10); // *?*
}

int main(int argc, char * argv[]) {
    char buf[100000];
    
    int offset = 0;
    char * start = buf;
    for (int i = 1; i < 1000; i++) {
        offset = transcribe(start, i);
        start += offset;
    }

    offset = 0;
    start[offset++] = 'o';
    start[offset++] = 'n';
    start[offset++] = 'e';
    start[offset++] = ' ';
    start[offset++] = 't';
    start[offset++] = 'h';
    start[offset++] = 'o';
    start[offset++] = 'u';
    start[offset++] = 's';
    start[offset++] = 'a';
    start[offset++] = 'n';
    start[offset++] = 'd';
    start[offset++] = '\n';


    int count = 0;
    char c;
    for (int i = 0; (c = buf[i]); i++) {
        if (c >= 'a' && c <= 'z') {
            count++;
        }
    }
    
    
    printf("%s", buf);
    printf("%d\n", count);

    // original attempt, close but hard to debug
    // that's why I wrote out the full string method
    int sum = 0;
    
    sum += sumLowestNine(3);    // "one"
    sum += sumLowestNine(3);    // "two"
    sum += sumLowestNine(5);    // "three"
    sum += sumLowestNine(4);    // "four"
    sum += sumLowestNine(4);    // "five"
    sum += sumLowestNine(3);    // "six"
    sum += sumLowestNine(5);    // "seven"
    sum += sumLowestNine(5);    // "eight"
    sum += sumLowestNine(4);    // "nine"
    
    sum += sumTens(3);          // "ten"
    sum += sumTens(6);          // "eleven"
    sum += sumTens(6);          // "twelve"
    sum += sumTens(8);          // "thirteen"
    sum += sumTens(8);          // "fourteen"
    sum += sumTens(7);          // "fifteen"
    sum += sumTens(7);          // "sixteen"
    sum += sumTens(9);          // "seventeen"
    sum += sumTens(8);          // "eighteen"
    sum += sumTens(8);          // "nineteen"
    
    sum += sumDecimals(6);      // "twenty"
    sum += sumDecimals(6);      // "thirty"
    sum += sumDecimals(5);      // "forty"
    sum += sumDecimals(5);      // "fifty"
    sum += sumDecimals(5);      // "sixty"
    sum += sumDecimals(7);      // "seventy"
    sum += sumDecimals(6);      // "eighty"
    sum += sumDecimals(6);      // "ninety"
    
    sum += 3 * 99 * 9;          // "and"
    sum += 7 * 100 * 9;         // "hundred"
    sum += 11;                  // "one thousand"
    
    printf("%d\n", sum);

}
