# sendos valores enteros de a y b 
# introducidos por el usuario y 
#tales que "0" menor o igua "a" menor o igual "b".

from math import *

#Pedir limites inferior y superior.
while True:
    try:
        a = int(raw_input('Limite inferior: '))
        break
    except ValueError:
        print 'No puede ser nulo ni negativo (~_-)'

while True:
    try:
        b=int(raw_input('Limite superior: '))
        if(b > a):
            break
        else:
            print  'No puede ser menor que %d' % a
    except ValueError:
            print  'No puede ser menor que %d' % a

#Calcular el sumatorio de la raiz cuadrada de i para i entre a y b.
s = 0.0
for i in range(a, b+1):
    print ' %d ' %i
    s += sqrt(i)

#Mostrar el resultado.
print 'Sumatorio de raices'
print 'de %d a %d: %f' % (a, b, s)
