#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>

using namespace std;

bool isPal(int mult) {
    char buffer[7];

    string num = itoa(mult, buffer, 10);
    string rev = string(num.rbegin(), num.rend());
    if (num.compare(rev) == 0) {
        return true;
    }
    return false;
}

int main()
{
    int a = 999;
    int b = 999;
    int mult = 0;
    vector<int> results;

    while (a > 900) {
        b = a;
        while (b > 900) {
            mult = a * b;
            if (isPal(mult)) {
                results.push_back(mult);
                cout << mult << " a: " << a << " b: " << b << endl;
            }
            b--;
        }
        a--;
    }

    sort(results.begin(), results.end());

    cout << "Largest: " << results[results.size() -1] << endl;
    return 0;
}
