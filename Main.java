import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    double soma = 0, nFinal;
    int a;

    Scanner entrada = new Scanner(System.in);

    for(int i = 0; i < 3; i++)
    {
      System.out.println("Informe a "+(i+1)+" nota:");
      soma += entrada.nextDouble();
    }

    nFinal = soma / 3;

    if(nFinal >= 60)
    {
      System.out.println("Informe a quantos grupos minoritários a pessoa pertence: ");
      a = entrada.nextInt();

      if(a >= 3) {
        nFinal *= 1.15;
      } else if (a == 2) {
        nFinal *= 1.10;
      } else if (a == 1) {
        nFinal *= 1.05;
      }
    }
      
    System.out.println(String.format("Nota final: %.2f", nFinal));

    entrada.close();
  }
}