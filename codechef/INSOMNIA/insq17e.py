# import math

# t = int(raw_input())
def power(n):
	return n*n
m = 1
res = 0
ans = 0
while (res == ans and m < 1000000000000000007):
	n = m
	# n, k = [int(x) for x in raw_input().split()]
		# res = (((power(n) % MOD) * (power(n+1) % MOD)) / 4) % MOD - (((((n) * ((n+1))) % MOD) * (((2*n) % MOD) + 1)) % MOD) + (11 * (((n) * (n+1)) % MOD)) / 2 - ((6*n) % MOD) ;  
	# res = power(n)*power(n+1)/4 - n*(n+1)*(2*n + 1) + 11 * n * (n+1) / 2 - 6 * n
	# res = res / 2
	if m < 4:
		res = 0
		ans = 0
	else:
		ans = (m)*(m-1)*(m-2)*(m-3)/8
		res = power(n)*power(n+1)/4 - n*(n+1)*(2*n + 1) + 11 * n * (n+1) / 2 - 6 * n
		res = res / 2
		res = res % 1000000007
		ans = ans % 1000000007

	m = m + 1
	print 'cur > ',  m
	
print m
print res
print ans