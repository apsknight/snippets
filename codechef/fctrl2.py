t = raw_input()

for i in range (int(t)):
	n = raw_input()
	res = 1
	for i in range(1, int(n)+1):
		res = res * i
	print res