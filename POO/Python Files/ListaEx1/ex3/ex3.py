class Conta:

    def __init__(self, numero, saldo):
        self.numero = numero
        self.saldo = saldo

    def depositar(self, valor):
        self.saldo += valor
        print(self.saldo)

    def sacar(self, valor):
        self.saldo -= valor

    def verSaldo(self):
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
                conta.verSaldo()

class Banco:

    def __init__(self):
        self.conta = []

    def novaConta(self, conta):
        self.conta.append(conta)

    def acessarConta(self, numero):
        for i in range(len(self.conta)):
            if self.conta[i].numero == numero:
                ContaInterface(self.conta[i])

class BancoInterface:

    def __init__(self, banco):
        n = 0
        while(n != 3):
            n = int(input('1 -- Acessar Conta\n2 -- Adicionar Conta\n3 -- Sair\n'))
            if n == 1:
                numero = int(input('Digite o numero da conta: '))
                banco.acessarConta(numero)
            if n == 2:
                numero = int(input('Digite o numero da conta: '))
                saldo = float(input('Digite o saldo da conta: '))
                banco.novaConta(Conta(numero, saldo))


b = Banco()
BancoInterface(b)
