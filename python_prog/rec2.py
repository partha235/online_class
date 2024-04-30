c=0
def add_s(n,li):
    global c
    c+=1
    if n>=li:
        return "over"
    x=n+(n*2)
    print(c,"nt term x= ",x)
    return add_s(x,li)

add_s(1,100000)