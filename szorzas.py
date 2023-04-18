import random

def main(numOfProblems: int) -> str:
    score = 0

    for i in range(numOfProblems):
        randX = random.randint(0, 10)
        randY = random.randint(0, 10)

        answer = int(input(f"{randX} * {randY} = "))

        if answer == checkCorrect(randX, randY):
            score += 1

    return score

def checkCorrect(a: int, b: int) -> int:
    ans = a * b
    return ans

n = int(input("How many problems would you like to solve? "))
print(main(n))