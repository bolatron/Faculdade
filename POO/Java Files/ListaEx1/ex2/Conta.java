public class Conta {

    private double numero;
    private double saldo;

    public void setFormat(double numero, double saldo) {
        this.numero = numero;
        this.saldo = saldo;
    }

    public void depositar(double valor) { saldo += valor; }
    public int sacar(double valor) {
        if(valor <= saldo){
            saldo = saldo - valor;
            return 1;
        }else
            return 0;
    }
    public double saldo() { return saldo; }


}

public class ContaInterface {

    private Conta conta;

    public void Menu(int n) {
        System.out.println("----BANCO-DO-BRASIL----");
        System.out.println("-----------------------");
        System.out.println("DIGITE 1 PARA DEPOSITAR");
        System.out.println("DIGITE 2 PARA SACAR");
        System.out.println("DIGITE 3 PARA SALDO");
        System.out.println("DIGITE 4 PARA SAIR");
        if(n == 1)
            conta.depositar(100);
        if(n == 2)
            conta.sacar(100);
    }
}
