def che_eve(n):
    if n==0:
        return "over"
    print("n = ", n )
    if (n%2)==0:
        print("even ")
    else:
        print("odd")
    return che_eve(n-1)

che_eve(30)