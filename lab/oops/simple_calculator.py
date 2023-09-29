

def calc(int1,int2,op):
    if (op =="+"):
        return(int1+int2)
    elif(op =="-"):
        return(int1-int2)
    elif(op == "*"):
        return(int1*int2)
    elif(op == "/"):
        return(int1 // int2)

op=input("Enter the operation:")
int1=int(input("Enter first element:"))
int2=int(input("Enter second element:"))
print(calc(int1,int2,op))



    
