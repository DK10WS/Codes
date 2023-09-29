

def fact(integer):
    for i in range(1,integer):
        integer=integer * i
    return(integer)


integer=int(input("Enter number to find factorial:"))
print(fact(integer))



