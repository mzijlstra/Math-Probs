#include <iostream>
#include <limits.h>

using namespace std;

int main(int argc, char* argv[]) {
	unsigned int num = 1;
	unsigned int tri = 0;
	int max = 0;
	int count = 1;
	while (true) {
		// increment triangle num
		tri += num;
		
		int divs = 0;
		for (int i = 1; i <= tri; i++) {
			if (tri % i == 0) {
				divs++;
			}
			if (i > 1000 && divs < 100) {
				break;
			}
		}

		if (divs > max) {
			max = divs;
			cout << num << " tri: " << tri << " divs: " << divs << endl;
		}

		if (num > count * 1000) {
			count++;
			cout << num << " tri: " << tri << " divs: " << divs << endl;
		}

		if (divs > 500) {
			cout << num << " tri: " << tri << " divs: " << divs << endl;
			break;	
		}
		num++;
	}

	return 0;
}
