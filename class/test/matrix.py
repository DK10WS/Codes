# list=[[1,2,3],
#       [4,5,6],
#       [7,8,9]]
#
# for i in range(len(list)):
#     for j in range(len(list)):
#         print(list[i][j], end=" ")
#     print()
#
list2=[]

for i in range(0,3):
    row=[]
    for j in range(0,3):
        x=(int(input(f"Enter values for {i} {j}: ")))
        row.append(x)
    list2.append(row)

for i in range(0,3):
    for j in range(0,3):
        print(f"{list2[i][j]}",end=" ")
    print()
