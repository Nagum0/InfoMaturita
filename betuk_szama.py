class Solution:
    def letterCounter(self, text: str) -> str:
        upperCase = 0
        lowerCase = 0
        number = 0
        symbol = 0

        for i in text:
            if i.isupper():
                upperCase += 1
            elif i.islower():
                lowerCase += 1
            elif i.isdigit():
                number += 1
            else:
                symbol += 1

        return f"Uppercase: {upperCase}\nLowerCase: {lowerCase}\nNumber: {number}\nSymbol: {symbol}"

s = Solution()
print(s.letterCounter("Get f'ed lmao!"))
