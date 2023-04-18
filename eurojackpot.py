import random

def main() -> list:
    mainList = []
    secondaryList = []

    for i in range(8):
        if i < 5:
            randPot = random.randint(1, 50)
            mainList.append(randPot)
        elif i >= 6:
            randPot = random.randint(1, 10)
            secondaryList.append(randPot)

    return mainList, secondaryList

print(main())