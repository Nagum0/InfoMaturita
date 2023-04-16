class Solution:
	def checkRodneCislo(self, num: str, gender: str) -> bool:
		month = num[2] + num[3]

		if len(num) != 10:
			return False
		if int(num) % 11 != 0:
			return False

		if gender == "M":
			if int(month) > 12 or int(month) < 1:
				return False
		elif gender == "F":
			if int(month) < 51 or int(month) > 62:
				return False
		else:
			return False

		return True

s = Solution()
birthNumber = str(input(">"))
gender = str(input(">"))
print(s.checkRodneCislo(birthNumber, gender))