def outer():
    print("yo")
    def inner():
        print("hello")
    return inner()

x=outer()
