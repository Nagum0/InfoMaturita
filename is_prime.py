import math

class Solution:
	def isPrime(self, n: int) -> bool:
		k = int(math.sqrt(n) + 1)

		if n == 2:
			return True
		elif n == 1:
			return False
		elif n % 2 == 0:
			return False

		for i in range(3, k, 2):
			if k % i == 0:
				return False

		return True

s = Solution()
n1 = int(input("Szam 1: "))
n2 = int(input("Szam 2: "))
primeCounter = 0

for i in range(n1, n2):
	if s.isPrime(int(i)):
		primeCounter += 1

print(primeCounter)