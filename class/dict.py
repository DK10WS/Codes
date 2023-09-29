l="This is an idea I have a great idea this idea is great"
a=l.lower()
x=a.split()
dict={}
for i in x:
    if i not in dict:
        dict[i]=1
    else:
        dict[i]=dict[i]+1
print("{")
for i in dict:

    print(f"{i}:{dict[i]},")
print("}")
