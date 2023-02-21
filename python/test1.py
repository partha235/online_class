y=input("enter format (c / f) : \n")
x=int(input("enter temperature \n"))
C = (5/9) * (x - 32)  
F=((9*x+(32*5))/5)
if (y=="f"):
    print("temperature in celsius : ", C ,"\u00b0c")
else:
    print("temperature in fahrenheit : ", F , " \u00b0f")