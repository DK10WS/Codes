def check(func):
    def inner(*args,**kwargs):
        print("Decorator worked")
        func(*args,**kwargs)
        print("function used\n")
    return inner

@check
def hello():
    print("This is my function")
@check
def add(a,b):
    print(a+b)


hello()
add(2,3)
