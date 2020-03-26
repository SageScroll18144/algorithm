def fat(n, stop):
	if n <= stop:
		return 1
	else:
		return n * fat(n-1, stop)


n = 4
sum = 0

for i in range(0, n + 1):
	sum += fat(n, i)
print(sum)

