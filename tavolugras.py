def main() -> str:
    with open("Files\\tavolugras.txt", "r") as file:
        dataMap = {}
        countryList = []
        winnerName = ""
        winnerScore = 0

        for i in file:
            data = i.strip().split()
            dataMap[data[0]] = data[::1]

        for k, v in dataMap.items():
            countryList.append(v[1])

            for j in v[2:]:
                j = int(j)

                if j > winnerScore:
                    winnerScore = j
                    winnerName = str(k)

        file.close()

        return f"Countries: {countryList}. Winner: {winnerName}!"
    
print(main())