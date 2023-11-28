class area:
    def square(a):
        print("area of square = ",4*a)

    def rec(l,b):
        print("area of rectangle = ",l*b)

    def cone(b,h):
        print('area of cone= ',(1*b*h)/2)

class perimeter:
    def square(a):
        print("perimeter of square = ",4*a)

    def rec(l,b):
        print("perimeter of rectangle = ", (2*l)+(2*b))

    def cone(b,h):
        print("perimeter of cone = ", b+h)

area.square(5)