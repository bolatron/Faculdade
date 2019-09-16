class Conta:

    def __init__(self, numero, saldo):
        self.numero = numero
        self.saldo = saldo

    def depositar(self, valor):
        self.saldo += valor
        print(self.saldo)

    def sacar(self, valor):
        self.saldo -= valor

    def versaldo(self):
        print("Saldo atual: ", self.saldo)

class ContaInterface:

    def __init__(self, conta):
        n = 0
        while(n != 4):
            n = int(input('1 -- Depositar\n2 -- Sacar\n3 -- Ver saldo\n4 -- Sair\n\n'))
            if n == 1:
                valor = float(input('Digite o valor para deposito: '))
                conta.depositar(valor)
            if n == 2:
                valor = float(input('Digite o valor para saque: '))
                conta.sacar(valor)
            if n == 3:
                conta.versaldo()

class UsaConta:

    def __init__(self):
        c = Conta(1000, 1045.50)
        ContaInterface(c)

UsaConta()
