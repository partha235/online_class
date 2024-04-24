def area_rec():
    global l,b
    l=int(input("enter l"))
    b=int(input("enter b"))
    print("area of rectangle= ",l*b)
def peri_cone():
    h=int(input("enter h"))
    b=int(input("enter b"))
    print("perimeter of cone= ",b+h)

x="area_rec"
y="peri_cone"
if x=="area_rec":
    area_rec()
   
elif y=="peri_cone":
    peri_cone()
    
else:
    print("not found")