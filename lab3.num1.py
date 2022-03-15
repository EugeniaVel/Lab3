#Метод деления пополам
import math
def f(x):
    return 2*x - math.log(x+2)
a=0.
b=1.
eps=2.17*10**(-5)
i=0
while(b-a)>eps:
    i=i+1
    u=(a+b)/2
    f1=f(a)
    f2=f(u)
    if f1*f2<0:
        b=u
    else:
        a=u
zf= "{:f}".format(f2)
print("Корень уравнения с точностью 2,17*10^(-5): " + str(u))
print("Значение функции при найденном корне: " + str(zf))
print(i)