ackage com.unach.practica2h;

import java.util.Scanner;
import javax.swing.JOptionPane;

class Tarjeta{

    private double saldo;
    private String banco;
    private String cliente;
    private String numtarjeta;
    private String fechavencimiento;
    private String cvv;

    public Tarjeta() {
    }

    public Tarjeta(double saldo, String banco, String cliente, String numtarjeta, String fechavencimiento, String cvv) {
        this.saldo = saldo;
        this.banco = banco;
        this.cliente = cliente;
        this.numtarjeta = numtarjeta;
        this.fechavencimiento = fechavencimiento;
        this.cvv = cvv;
    }

    
    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public String getBanco() {
        return banco;
    }

    public void setBanco(String banco) {
        this.banco = banco;
    }

    public String getCliente() {
        return cliente;
    }

    public void setCliente(String cliente) {
        this.cliente = cliente;
    }

    public String getNumtarjeta() {
        return numtarjeta;
    }

    public void setNumtarjeta(String numtarjeta) {
        this.numtarjeta = numtarjeta;
    }

    public String getFechavencimiento() {
        return fechavencimiento;
    }

    public void setFechavencimiento(String fechavencimiento) {
        this.fechavencimiento = fechavencimiento;
    }

    public String getCvv() {
        return cvv;
    }

    public void setCvv(String cvv) {
        this.cvv = cvv;
    }
    

    
    public void consultarSaldo(){                
        System.out.println("El saldo actual es: $ " + cliente.substring(0, 2));        
    }
    
    public void depositar(double cant){
        saldo = saldo + cant;
    }
    
    public void pagar(double cant){
        saldo = saldo - cant;
    }
    
}

public class Practica2H {

    public static void main(String[] args) {
       
       Tarjeta obj1 = new Tarjeta(500.00, "Santander","Mauricio","6577567","12/27","345");     
       obj1.consultarSaldo();

       Tarjeta obj2 = new Tarjeta();
       obj2.setBanco("BBVA");
       obj2.setNumtarjeta("5470 8897 6786");
        
       Scanner sc = new Scanner(System.in);
       System.out.println("Ingresa la cantidad a depositar: $");       
       double valor = sc.nextDouble();
       sc.close();
       obj1.depositar(valor);
       obj1.consultarSaldo();   
       
       
       String entrada = JOptionPane.showInputDialog("Ingresa la cantidad a pagar:");
       double monto = Double.parseDouble(entrada);
       obj1.pagar(monto);
       obj1.consultarSaldo();
       

     
    }
}
