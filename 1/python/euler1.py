#! /usr/bin/python

def three_five_mod(up_to):
	i = 0
	while(i < up_to):
		if(i % 5 == 0 or i % 3 == 0):
			yield i
		i += 1

print(sum(three_five_mod(1000)))