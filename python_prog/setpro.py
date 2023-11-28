x=set("Saga@23")
print(x)
for i in x:
    print(i)
    if i.isupper():
        print("upper")
    elif i.islower():
        print("lower")
    else:
        print("int/character")
