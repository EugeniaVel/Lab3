#Метод парабол
import math
def f(x):
    return math.sin(2*x)+2*math.sqrt(0.1+x)-1
a=0.
b=math.pi/4
print('Введите точность нахождения корня:')
eps=float(input())
i=0
x=(a+b)/2
while i<10000:
    x0=x
    i=i+1
    c=(a+b)/2
    A=((f(b)-f(c))/(b-c)-(f(c)-f(a))/(c-a))/(b-a)
    B=(f(c)-f(a))/(c-a)+A*(a-c)
    C=f(a)
    x1=a-(2*C/(B+math.sqrt(B**2-4*A*C)))
    x2=a-(2*C/(B-math.sqrt(B**2-4*A*C)))
    if a<=x1<=b:
        x=x1
    else:
        x=x2
    if f(x)*f(a)<=0:
        b=x
    else:
        a=x
    if abs(x-x0)<eps:
        break
print ("Корень уравнения с заданной точностью: " + str(x))
print ("Количество итераций: " + str(i))
print (f(x))