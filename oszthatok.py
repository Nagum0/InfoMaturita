class Solution:
    def divisibleBy(self, num1: int, num2: int) -> int:
        ans = 0

        for i in range(num1, num2):
            if i % 3 == 0 and i % 5 == 0:
                ans += i

        return ans

s = Solution()
print(s.divisibleBy(3, 100))
