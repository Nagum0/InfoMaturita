import math

def calcDiscriminant(a: int, b: int, c: int) -> float:
    return math.pow(b, 2) - (4 * a * c)

def solveEquation(a: int, b: int, discriminant: int) -> tuple:
    if discriminant == 0:
        return (-b + discriminant) / (2 * a)
    elif discriminant < 0:
        return "The discriminant is negative!"
    else:
        x1 = (-b + math.sqrt(discriminant)) / (2 * a)
        x2 = (-b - math.sqrt(discriminant)) / (2 * a)
        return x1, x2

a = int(input("a: "))
b = int(input("b: "))
c = int(input("c: "))
discriminant = calcDiscriminant(a, b, c)
print(solveEquation(a, b, discriminant))