def main() -> str:
    with open("Files\\kirandulas.txt", "r") as file:
        ageList = []
        avgAge = 0
        ageSum = 0
        numOfStudents = 0

        for i, j in enumerate(file):
            numOfStudents += 1
            data = j.strip()

            if i % 2 != 0:
                ageList.append(data)

        for i in ageList:
            ageSum += int(i)

        return f"Kirandulok szama: {numOfStudents}. Atlag eletkor: {ageSum / numOfStudents}"

print(main())