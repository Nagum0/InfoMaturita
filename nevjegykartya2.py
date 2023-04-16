class Solution:
    def nameCard(self, name: str, address: str, symbol: str) -> str:
        if len(name) > len(address):
            length = len(name)
        elif len(name) < len(address):
            length = len(address)
        else:
            length = len(name)

        row_1 = symbol * (length + 4)
        row_2 = symbol + " " + name + " " * (length - len(name)) + " " + symbol
        row_3 = symbol + " " + address + " " * (length - len(address)) + " " + symbol
        row_4 = symbol * (length + 4)

        return row_1 + "\n" + row_2 + "\n" + row_3 + "\n" + row_4

name = str(input("Name: "))
address = str(input("Address: "))
symbol = str(input("Symbol: "))

s = Solution()
print(s.nameCard(name, address, symbol))