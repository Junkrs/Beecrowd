#Bee 1013 - The Greatest

val = map(float, input().split(" "))
A, B, C = val

maior = ((A + B + abs(A-B))) / 2

maiort = ((maior + C + abs(maior - C))) / 2

print('%d eh o maior' % maiort)