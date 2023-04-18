import random

def main(n: int) -> str:
    scoreList = [0, 0, 0, 0, 0, 0] #1 2 3 4 5 6

    for _ in range(n):
        dobas = random.randint(1, 6)

        if dobas == 1:
            scoreList[0] += 1
        elif dobas == 2:
            scoreList[1] += 1
        elif dobas == 3:
            scoreList[2] += 1
        elif dobas == 4:
            scoreList[3] += 1
        elif dobas == 5:
            scoreList[4] += 1
        elif dobas == 6:
            scoreList[5] += 1
        else:
            continue
        
    return f"Egy: {scoreList[0]}\nKetto: {scoreList[1]}\nHarom: {scoreList[2]}\nNegy: {scoreList[3]}\nOt: {scoreList[4]}\nHat: {scoreList[5]}\n"

print(main(5))