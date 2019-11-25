package primo;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Primo {

    public static void main(String[] args) {
        InputStreamReader isr  = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        int i;
        Criba c = new Criba();
        c.llenar();
        try {
            System.out.println("Ingresa el nuemro de primos que quiera visulizar");
            i=Integer.parseInt(br.readLine());
            c.mostrar(i);
        } catch (Exception e) {
            
        }
    }
    
}
