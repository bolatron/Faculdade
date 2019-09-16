

public class NumeroComplexo {

    private double a;
    private double b;

    public double getA() { return this.a; }
    public double getB() { return this.b; }

    public void setParameters(double a, double b) { this.a = a; this.b = b; }

    public void print() { System.out.println(this.a + " + " + this.b + "i"); }

    public NumeroComplexo add(NumeroComplexo w) {
        NumeroComplexo v = new NumeroComplexo();
        v.setParameters(this.a + w.getA(), this.b + w.getB());
        return v;
    }
    public NumeroComplexo mul(NumeroComplexo w) {
        NumeroComplexo v = new NumeroComplexo();
        v.setParameters((this.a * w.getA()) - (this.b * w.getB()),
                        (this.b * w.getA()) + (this.a * w.getB()));
        return v;
    }

    public NumeroComplexo conj() {
        NumeroComplexo z = new NumeroComplexo();
        z.setParameters(this.a, -1*this.b);
        return z;
    }

    public static void main(String[] args) {
        NumeroComplexo z = new NumeroComplexo();
        z.setParameters(5, 10);
        NumeroComplexo w = new NumeroComplexo();
        w.setParameters(10, 5);
        NumeroComplexo v = z.add(w);
        NumeroComplexo u = z.mul(w);
        NumeroComplexo t = z.conj();
        System.out.println("Numero Complexo 1:");
        z.print();
        System.out.println("Numero Complexo 2:");
        w.print();
        System.out.println("Soma:");
        v.print();
        System.out.println("Produto:");
        u.print();
        System.out.println("Conjugado:");
        t.print();
    }
}
