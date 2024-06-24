def area_circle(r,pi=3.14):
    print('area of circle= ',pi*(r**2))

def per_detail(name,work,salary=None):
    print("{} is working as {} and having salary of {}".format(name,work,salary))

def str_mul(n:int,w:str):
    print("you have enter {} to print for {} times".format(w,n))
    w="{}\n".format(w)
    print(w*n)

# area_circle(r=5)
# area_circle(r=5,pi=2)
# str_mul(10,"suveatha")
# per_detail("bps","teacher")
# per_detail("bps","electronic",50000)
