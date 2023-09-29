d1={1:40,2:70,3:70}
d2={1:40,2:50,3:60}
d3={1:70,2:50,3:60}
d4={"Ryna":d1,"zeba":d2,"Suniti":d3}

for i in d4.keys():
    print(f"Name\n{i}")
    print("Subject(key)\tMarks")
    for j in d4[i]:
        print(j,d4[i][j],sep="\t \t")
