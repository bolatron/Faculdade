PI = 3.14159

class circulo:
    def __init__(self, radio):
        self.radio = radio

    def area(self):
        return PI * self.radio * self.radio

    def volume(self):
        return 3/4 * self.radio * self.area()

class privateUser:
    def __init__(self, id, name):
        self.id = id
        self.__name = name

    def printData(self):
        print("\n ID: %d ---- NAME: %s" %(self.id, self.__name))

def fib(n):
    a, b = 0, 1
    while a < n:
        print(a, end=' ')
        a, b = b, a+b
    print()

fib(1000)
#c = circulo(2.0)
#print("\nArea: %f" % c.area())
#print("Volume: %f\n" % c.volume())

#user = privateUser(192050018, 'JOAO')
#user.printData()
