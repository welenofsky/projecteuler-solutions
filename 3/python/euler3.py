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