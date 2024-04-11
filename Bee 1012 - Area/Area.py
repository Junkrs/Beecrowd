#Bee 1012 - Area

val = map(float, input().split(" "))
A, B, C = val

print('TRIANGULO: %.3f' % ((A * C) / 2))
print('CIRCULO: %.3f' % (3.14159 * (C * C)))
print('TRAPEZIO: %.3f' % (((A + B) * C) / 2))
print('QUADRADO: %.3f' % (B * B))
print('RETANGULO: %.3f' % (A * B))
