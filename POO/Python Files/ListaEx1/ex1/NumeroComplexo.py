class NumeroComplexo:

    def __init__(self, a, b):
        self.a = a
        self.b = b

    def add(self, other):
        return NumeroComplexo(self.a + other.a, self.b + other.b)

    def mul(self, other):
        return NumeroComplexo((self.a * other.a) - (self.b * other.b),
                              (self.b * other.a) + (self.a * other.b))

    def conj(self):
        return NumeroComplexo(self.a, -1*self.b)

    def toString(self):
        print("%d + %di" %(self.a, self.b))

def main():
    z = NumeroComplexo(5, 10)
    w = NumeroComplexo(10, 5)
    v = z.add(w)
    u = z.mul(w)
    t = z.conj()
    z.toString()
    w.toString()
    v.toString()
    u.toString()
    t.toString()


if __name__ == '__main__':
    main()
