import NumeroComplexo

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
