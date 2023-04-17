def main():
    with open("Files\\futoverseny.txt", "r") as file:
        dataMap = {}
        numOfRunners = 0
        winnerScore = 500
        winnerName = ""

        for i in file:
            data = i.strip().split()
            dataMap[i] = data
            numOfRunners += 1

        for k, v in dataMap.values():
            if int(v) < winnerScore:
                winnerScore = int(v)
                winnerName = str(k)

        file.close()

        print(f"Futok szama: {numOfRunners}. Gyoztes: {winnerName}: {winnerScore}!")

main()