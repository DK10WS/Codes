class Student:
    x="i am alive"
    def __init__(self,name,age,grade):
        self._age=age
        self._name=name
        self._grade=grade

    def display(self):
        return f"Name is {self._name} with age {self._age} and grade {self._grade}"
    
    def NewGrade(self,grade):
        self._grade=grade

        return f"New Grade is {self._grade}"
    def Update(self):
        self.x="i am dead"
        return self.x


class Teacher(Student):
    def __init__(self,name,age,grade,subject):
        super().__init__(name,age,grade)
        self.subject=subject

    def display(self):
        return f"Name is {self._name} with age {self._age}, grade {self._grade}, and teaches {self.subject}"
    
    def assign_grade(self, student, new_grade):
        student._grade=new_grade
        return f"Grade assigned by {self._name} for {student._name}: {new_grade}"


s1 = Student("Dhruv", 19, 100)
t1 = Teacher("Mrs. Smith", 35, None, "Mathematics")


print(s1.display())
print(t1.display())

print(t1.assign_grade(s1, 95))
print(s1._grade)

print(s1.display())
print(s1.x)

print(s1.Update())
print(s1.x)
