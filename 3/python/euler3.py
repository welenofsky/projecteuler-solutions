#! /usr/bin/python
import math

def is_prime(n):
	if n % 2 == 0 or n % 3 == 0:
		return False

	for i in range(5, int(math.ceil(math.sqrt(n))), 6):
		if n % i == 0 or n % (i + 2) == 0:
			return False
	return True

up_to = 600851475143

for i in range(int(math.ceil(math.sqrt(up_to))), 1, -1):
	if(is_prime(i) and up_to % i == 0):
		largest_prime = i
		break;

print(largest_prime)