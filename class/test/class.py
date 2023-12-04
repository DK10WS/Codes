class Student:
    def __init__(self,name,age,grade):
        self.name=name
        self.age=age
        self.grade=grade
    
    def display(self):
        return f"Name of student is {self.name}, age of student is {self.age},student grade is {self.grade}"

    def gradeChange(self,grade):
        self.grade=grade
        return f"new grade is {self.grade}"



class Teacher(Student):
    def __init__(self,name,age,grade,gender):
        super().__init__(name,age,grade)
        self.gender=gender

    def displayt(self):
        return f"{self.name},{self.age},{self.grade},{self.gender}"


karan=Student("karan",19,20)

print(karan.display())

print(karan.grade)
print(karan.gradeChange(10))

dhruv=Teacher("dhruv",19,100,"Male")

print(dhruv.displayt())
