#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]) {
    int x_limit = 20;
    int y_limit = 20;
    double data[y_limit][x_limit];

    // initialize the bottom row
    int val = 2;
    for (int x = x_limit -1; x >= 0; x--) {
        data[y_limit -1][x] = val++;
    }

    // initialize thr right column
    val = 2;
    for (int y = y_limit -1; y >= 0; y--) {
        data[y][x_limit -1] = val++;
    }

    // fil in the square
    for (int y = y_limit -2; y >= 0; y--) {
        for (int x = x_limit -2; x >= 0; x--) {
            data[y][x] = data[y + 1][x] + data[y][x + 1];
        }
    }

    // print results
    for (int y = 0; y < y_limit; y++) {
        for (int x = 0; x < x_limit; x++) {
            printf("%12.0f ", data[y][x]);
        }
        printf("\n");
    }
}

/*
int x_limit = 0;
int y_limit = 0;
int count = 0;

bool weCanGo(int x, int y) {
    if (x > x_limit || y > y_limit) {
        return false;
    }
    return true;
}

void stepTo(int x, int y) {
    if (x == x_limit && y == y_limit) {
        count++;
        return;
    }

    // try to go right
    if (weCanGo(x + 1, y)) {
        stepTo(x + 1, y);
    }

    // try to go down
    if (weCanGo(x, y + 1)) {
        stepTo(x, y + 1);
    }
}

int main()
{
    setlocale(LC_ALL, "en_US");

    while(y_limit < 5) {
        y_limit++;
        x_limit = 0;
        while (x_limit < 5) {
            x_limit++;
            count = 0;
            stepTo(0,0);
            printf("%d x %d: %d\n", x_limit, y_limit, count);
        }
    }
    //cout << count << endl;
    return 0;
}
*/
