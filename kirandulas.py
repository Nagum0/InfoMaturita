def main() -> str:
    with open("Files\\kirandulas.txt", "r") as file:
        ageList = []
        ageSum = 0
        numOfStudents = 0

        for i, j in enumerate(file):
            data = j.strip()

            if i % 2 != 0:
                ageList.append(data)
                numOfStudents += 1

        for i in ageList:
            ageSum += int(i)

        return f"Kirandulok szama: {numOfStudents}. Atlag eletkor: {ageSum / numOfStudents}"

print(main())