import random

def main(genAmount: int):
    with open("Files\\code.txt", "a") as file:
        for _ in range(genAmount):
            file.write(f"{str(genCode())}\n")

        file.close()

def genCode() -> str:
    codeAbc = "qwertyuiopasdfghjklzxcvbnm"
    code = ""

    for i in range(8):
        randIndex = random.randint(0, len(codeAbc) - 1)
        code += str(codeAbc[randIndex])

    return code

main(5)