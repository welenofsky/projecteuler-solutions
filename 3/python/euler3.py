#! /usr/bin/python
import math
# WIP - Not done with this one
def is_prime(n):
	i = 2
	half_n = int(math.floor(n / 2))
	while i <= half_n:
		if n % i == 0:
			return False
		i += 1
	return True

def is_prime_fast(n):
	if n % 2 == 0 or n % 3 == 0:
		return False

	sqrt_n = int(math.ceil(math.sqrt(n)))
	i = 5
	while(i < sqrt_n):
		if n % i == 0 or n % (i + 2) == 0:
			return False
		i += 6

	return True

up_to = 600851475143
largest_prime = 0
for i in range(int(math.ceil(up_to / 2)), 1, -1):
	if(up_to % i == 0 and is_prime_fast(i)):
		largest_prime = i
		print('Found')
		break;

print(largest_prime)