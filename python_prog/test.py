import string as s 
x=input("enter password")
uc=s.ascii_uppercase
lc=s.ascii_lowercase
di=s.digits
pu=s.punctuation
lc_c=0
up_c=0
di_c=0 
pu_c=0

si=len(x) # checking length

if si>=8:
    # print("password ok")
    for i in x:
        if i in uc:
            up_c+=1
            # print("has UC")
        if i in lc:
            lc_c+=1
            # print("has lc")
        if i in di:
            di_c+=1
            # print("has digits")
        if i in pu:
            pu_c+=1
            # print("has punctuation")
    print("lc= ",lc_c)
    print("up_c = ", up_c)
    print("di = ",di_c)
    print("pu = ",pu_c)
    if (up_c>=1) & (lc_c>=1) & (di_c>=1) & (pu_c>=1):
        print("password accepted")
    else:
        if up_c<1:
            print("no uppercase")
        if lc_c<1:
            print("no lowercase")
        if di_c<1:
            print("no digits")
        if pu_c<1:
            print("no punc")
else:
    print("need at-least 8 character")