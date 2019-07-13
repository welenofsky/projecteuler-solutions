#include <iostream>

using namespace std;

int main() {
  int a = 0, b = 1, sum = 0;
  while(a < 4000000) {
    if(b % 2 == 0)
			sum += b;
    a = a + b;
    swap(a, b);
  }
  cout << sum << endl;
}