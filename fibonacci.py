class Solution:
	def fibSequence(self, length: int, counter: int, fib_list: list[int]) -> int:
		while counter <= length:
			if counter == 0:
				print(f"{fib_list[0]}\n{fib_list[1]}")

			fib_list[2] = fib_list[0] + fib_list[1]
			fib_list[0] = fib_list[1]
			fib_list[1] = fib_list[2]

			counter += 1
			
			print(fib_list[2])

counter = 0
s = Solution()
print(s.fibSequence(6, counter, [0, 1, 1]))