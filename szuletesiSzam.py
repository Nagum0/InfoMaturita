def checkSzuletesiSzam(n: str) -> str:
    year = n[0] + n[1]
    month = n[2] + n[3]
    day = n[4] + n[5]
    gender = ""

    if int(month) > 50 and int(month) <= 62:
        gender = "Female"
        month = int(month) - 50
    elif int(month) > 0 and int(month) <= 12:
        gender = "Male"
    else:
        return "Incorrect number"

    return f"{year}.{month}.{day} Nem: {gender}"

print(checkSzuletesiSzam("0406047961"))
print(checkSzuletesiSzam("0462047961"))