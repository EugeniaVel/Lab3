#Метод Ньютона
import math
def f(x):
    return math.sin(x) - math.cos(x)
def pf(x):
    return math.sin(x) + math.cos(x)
print("Введите x0 в интервале [0,1]:")
x1=float(input())
print("Введите точность нахождения корня:")
eps=float(input())
i=0
while i<10000:
    x0 = x1
    x1 = x0 - (f(x0)/pf(x0))
    i = i + 1
    if abs(x1-x0)<eps:
        break
print("Полученный корень с заданной точностью: " + str(x1))
print("Количество итераций: " + str(i))