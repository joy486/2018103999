#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i < 11; i++) { //10단으로 수정
		for (int j = 1; j < 11; j++) {
			cout << i << " * " << j << " = " << i * j << "  ";
		}
		cout << endl;
	}

	return 0;
}
