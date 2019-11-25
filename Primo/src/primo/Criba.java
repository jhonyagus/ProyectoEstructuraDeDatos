
package primo;

public class Criba {
    private int arreglo[];

    public Criba(int[] arreglo) {
        
        this.arreglo = arreglo;
    }
    public Criba() {
        int arr[] = new int[10000];
        this.arreglo = arr;
    }
    public void llenar()
    {
        for (int i = 0; i < 100; i++) {
            if(primo(i))
            {
                this.arreglo[i]=1;
            }
            else
            {
                this.arreglo[i]=0;
            }
        }
    }
    public boolean primo(int n)
    {
        boolean c=false;
        int acum=0;
       for (int i = 1; i <=n; i++)
       {
            if(n%i==0)
            {
                acum++;
            }
       }
       if(acum<=2)
       {
           c=true;
       }
        return c;
    }
    public int[] getArreglo() {
        return arreglo;
    }

    public void setArreglo(int[] arreglo) {
        this.arreglo = arreglo;
    }
    public void mostrar(int n)
    {
        for (int i = 1; i <=n; i++) {
            System.out.println(" ["+i+"]"+this.arreglo[i]);
        }
    }
    
}
