#! /usr/bin/python

def even_fib_gen(up_to):
	a, b = 0, 1
	while(a < up_to):
		if b % 2 == 0:
			yield b
		a, b = b, a + b

print(sum(even_fib_gen(4000000)))