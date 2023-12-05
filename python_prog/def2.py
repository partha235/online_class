def area_circle(r,pi=3.14):
    print('area of circle= ',pi*(r**2))

# area_circle(r=2,pi=2)


def per_detail(name,work,salary=None):
    global x
    x=0
    name_l=[]
    work_l=[]
    salary_l=[]
    name_l.append(name)
    work_l.append(work)
    salary_l.append(salary)
    print("{} is working as {} and having salary of {}".format(name_l[x],work_l[x],salary_l[x]))
    x+=1


def str_mul(n:int,w:str):
    print("you have enter {} to print for {} times".format(w,n))
    w="{}\n".format(w)
    print(w*n)

# str_mul(5,"mathes")
per_detail("bps","teaching")
per_detail("bps","electronic",50000)
