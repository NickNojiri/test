#nick N

print("a^2+b+c")
print("input value a")
a= eval(input())
print("input value b")
b= eval(input())
print("input value c")
c = eval(input())

de = (a**a-4*a*c)**(1/2)

xval=(-b+de**.5)/(2*a)
negXval=(-b-de**.5)/(2*a)

print("first root\n",xval, "\n second root\n ",negXval,)
