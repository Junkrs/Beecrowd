#Bee 1015 - Distance Between Two Points
import math

val1 = map(float, input().split(" "))
x1, y1 = val1

val2 = map(float, input().split(" "))
x2, y2 = val2

dist = math.sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)))
print('%.4lf' % dist)