# make a calculator to add n number of digits and stop when input is "=".
# 0,1,2,3........n
add_v=0
while True:
    x=input("enter number")
    if x=="=":
        break
    add_va=int(x)+int(add_v)
    add_v=add_va

print(add_v)