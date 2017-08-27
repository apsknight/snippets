import math

t = int(raw_input())

for lp in range(t):
	n, k = [int(x) for x in raw_input().split()]
	arr = []
	r = 0
	i = n-1
	for i in range(n+1):
		arr.append(0)

	while k != 0:
		r = k % 2
		arr[i] = r
		i = i - 1
		k = k // 2

	res = 0

	for i in range(n, 0, -1):
		# print arr[i]
		# print i
		if arr[i] == 1:
			res = res + int(math.pow(2, i-1))
			# print res

	print int(res)