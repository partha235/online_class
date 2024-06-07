def cr_circle():
    r=int(input("enter radius"))
    print("circumference of circle = ",2*3.14*r)

def area_circle(r):         # area_circle(parameter)
    print('area of circle= ',3.14*(r**2))

def area_square(a):
    print('area of square= ',4*a)

def area_cone(b,h):
    print('area of cone= ',(1*b*h)/2)

def heart_dis():
    print("heart attack")
    print('hole in heart')
    print("cardiac arrest")

def suveatha():
    print("8th std")
    print("krishnagiri")
    print("SNHS")

def person_detail(name,school,std,section):
    print("{} studying in {}th standard {} section at {}".format(name, std,section,school))

person_detail("suveatha","SNHS",8,"a")