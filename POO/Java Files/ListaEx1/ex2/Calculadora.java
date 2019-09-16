public class Calculadora {

    private double op_1;
    private double op_2;

    public double getOp1() { return op_1; }
    public double getOp2() { return op_2; }

    public void setOp1(double op) { this.op_1 = op; }
    public void setOp2(double op) { this.op_2 = op; }

    public double add() { return this.op_1 + this.op_2; }
    public double sub() { return this.op_1 - this.op_2; }

    public static void main(String[] args) {
        Calculadora c = new Calculadora();
        c.setOp1(10.0);
        c.setOp2(20.0);
        System.out.println(c.add());
    }
}
