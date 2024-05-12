try:
    x=open("def.py")
    print(x)
    print(x.read())
except Exception as error:
    print("error is : ",error)