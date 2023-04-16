class Solution:
    def szamrendszerAtalakitas(self, n: int) -> str:
        ans = ""

        while n != 0:
            k = n % 2
            ans += str(k)
            n = n // 2

        return ans[::-1]

s = Solution()
print(s.szamrendszerAtalakitas(1569))