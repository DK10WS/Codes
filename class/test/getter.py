class myclass:
    def __init__(self,value):
        self._value=value
    
    def show(self):
        return f"Value is {self._value}"
    @property
    def value(self):
        return self._value * 10
    
    @value.setter
    def value(self,next):
        self._value=next
    
obj=myclass(10)

print(obj.value)

obj.value=30

print(obj.value)
