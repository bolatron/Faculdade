class Aluno:

    def __init__(self, registo, nome):
        self.registo = registo
        self.nome = nome

    def __str__(self):
        return "(" + str(self.registro) + ", " + str(self.nome) + ")"

class Disciplina:

    def __init__(self, codigo, nome, valor):
        self.codigo = codigo
        self.nome = nome
        self.valor = valor

    def __str__(self):
        return "(" + str(self.codigo) + ", " + str(self.nome) + ", " + str(self.valor) + ")"

class Matricula:

    def __init__(self, numero, data, aluno):
        self.numero = numero
        self.data = data
        self.aluno = aluno
        self.disciplina = []

    def __str__(self):
        return "(" + str(self.numero) + ", " + str(self.data) + ", " + str(self.aluno) + str(calculaTotal()) + ")"

    def insereDisciplina(self):


    def calculaTotal(self):

class Main:

    def __init__(self):
        self.aluno = []
        self.disciplina = []
        self.matricula = []

    def novoAluno(self, aluno):
        self.aluno.append(aluno)
