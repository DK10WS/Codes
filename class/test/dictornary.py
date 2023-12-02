dict={"Name":"Dhruv",
      "age":19,
      "course":["computers","CoA"]
      }
print(dict.keys())
print(dict.values())

dict["college"]="muj"

for i in dict:
    print(i, ":" ,dict[i],sep="\t")
