# used to clear error from out of the code.
try:
    x=open("def.py")
    print(x)
    print(x.read())
except Exception as error:
    print("error is : ",error)