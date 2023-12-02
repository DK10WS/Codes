name=[]
with open("names.txt","r") as file:
    for i in file:
        name.append(i.rstrip())

for names in sorted(name):
    print(names)


# with open("My.txt","r") as file:
#     print(file.read())
