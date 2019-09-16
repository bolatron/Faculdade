
def funcao(v):
    print('\n Valor de v antes da soma: ', v, '\nid de v antes: ', id(v))
    v += 1
    print('\n valor de v depois da soma: ', v, '\nid de v depois: ', id(v))
    return v

a = 5
print('\n valor de a antes da soma: ', a, '\nid de a antes: ', id(a))
b = funcao(a)
print('\n valor de a depois da funcao: ', a, '\nid de a depois: ', id(a))
print('\n valor de b depois da funcao: ', b, '\nid de b depois: ', id(b))
