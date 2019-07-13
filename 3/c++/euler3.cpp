#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int n) {
  if(n % 2 == 0 || n % 3 == 0)
		return false;

  for(int i = 5; i <= sqrt(n); i += 6) {
    if(n % i == 0 || n % (i + 2) == 0)
      return false;
  }
  return true;
}

int main() {
  long up_to = 600851475143;
  int largest_prime = 0;

  for(int i = sqrt(up_to); i > 1; i--) {
    if(is_prime(i) && up_to % i == 0) {
      largest_prime = i;
      break;
    }
  }

  cout << largest_prime << endl;
}