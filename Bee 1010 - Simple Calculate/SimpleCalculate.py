#Bee 1010 - Simple Calculate

A = map(float, input().split(" "))
cod1, nprod1, prec1 = A

B = map(float, input().split(" "))
cod2, nprod2, prec2 = B

Total = (nprod1 * prec1) + (nprod2 * prec2)
print('VALOR A PAGAR: R$ %.2f' % Total)