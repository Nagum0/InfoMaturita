class Solution:
    def caesarCipher(self, text: str, shift: int) -> str:
        abc_dict = "abcdefghijklmnopqrstuvwxyz"
        ans = ""

        for i in text:
            if i in abc_dict:
                j = abc_dict.find(i)
                j = (j + shift) % len(abc_dict)

                if j < 0:
                    j += len(abc_dict)

                ans += abc_dict[j]

            else:
                ans += i

        return ans

s = Solution()
print(s.caesarCipher("i like astolfo", 1))