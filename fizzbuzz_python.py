# FizzBuzz in Python
# author:  Victor Foreman
# email: vforeman@scs.howard.edu

for n in range(1,101):
	print "%s%s" % ({0:'Fizz'}.get(n%3,''),{0:'Buzz'}.get(n%5,'')) or n

