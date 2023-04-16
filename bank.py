class Solution:
	def bankAuto(self, n: int) -> str:
		billList = [0, 0, 0, 0, 0] #5, 10, 20, 50, 100

		if n % 5 == 0:
			billList[4] = n // 100
			n = n % 100
			billList[3] = n // 50
			n = n % 50
			billList[2] = n // 20
			n = n % 20
			billList[1] = n // 10
			n = n % 10
			billList[0] = n // 5
			n = n % 5
		else:
			return "Number not divisibleby 5"

		return f"5: {billList[0]}\n10: {billList[1]}\n20: {billList[2]}\n50: {billList[3]}\n100:{billList[4]}"

s = Solution()
n = int(input(">"))
print(s.bankAuto(n))