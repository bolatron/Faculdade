class Calculadora:

    def __init__(self, op_1, op_2):
        self.__op_1 = op_1
        self.__op_2 = op_2

    def getOp1(self):
        return self.__op_1

    def getOp2(self):
        return self.__op_2

    def setOp1(self, op):
        self.__op_1 = op

    def setOp2(self, op):
        self.__op_2 = op

    def add(self):
        return self.__op_1 + self.__op_2

    def sub(self):
        return self.__op_1 - self.__op_2

    def mul(self):
        return self.__op_1 * self.__op_2

    def div(self):
        return self.__op_1 / self.__op_2

c = Calculadora(8.0, 2.0)
c.setOp1(10.0)
c.setOp2(5.0)
print("OP1: %f -- OP2: %f" %(c.getOp1(), c.getOp2()))
print("Add: %f --- Sub: %f --- Mul: %f --- Div: %f\n" %(c.add(), c.sub(), c.mul(), c.div()))
