x=[2,3,5,6,23,56,7,8]   
type(x)
x.append(9) 
print(x)
d=[10,12,15,13]
x.extend(d)
print(x)
x.insert(3,20)  # insert(position,element)
print(x)
x.remove(20)
print(x)
x.pop()
print(x)
c=[1,2,3,4,5,6]
c.clear()
print(c)
x.index(15)
x.sort()  #ascending 
print(x)
x.sort(reverse=True) # descending
print(x)
x.append(9)
print(x)
x.count(9)