def area_circle(r,pi=3.14):
    print('area of circle= ',pi*(r**2))

# area_circle(r=2,pi=2)


def per_detail(name,work,salary=None):
    print("{} is working as {} and having salary of {}".format(name,work,salary))



def str_mul(n:int,w:str):
    print("you have enter {} to print for {} times".format(w,n))
    w="{}\n".format(w)
    print(w*n)

# str_mul(5,"mathes")
per_detail("bps","teaching")
per_detail("bps","electronic",50000)
