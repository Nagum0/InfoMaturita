def is_prime(k):
    a = int(k**(1/2)+1)

    if k == 2:
        return True
    elif k == 1:
        return False
    elif k % 2 == 0:
        return False
    for i in range(3, a, 2):
        if k % i == 0:
            return False
    
    return True

n1 = int(input("szam1: "))
n2 = int(input("szam2: "))

list = []
ossz = 0

for i in range(n1, n2):
    if is_prime(i):
        #print(i)
        list.append(i)
        ossz+=i

print(ossz)
print(list)