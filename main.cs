using System;

class Program
{
  public static void Main(string[] args)
  {
    double soma = 0, nFinal;
    int a;
  
    for (int i = 0; i < 3; i++)
    {
        Console.WriteLine("Informe a {0}ª nota:", i + 1);
        soma += Double.Parse(Console.ReadLine());
    }
  
    nFinal = soma / 3;
  
    if (nFinal >= 60)
    {
        Console.WriteLine("Informe a quantos grupos minoritários a pessoa pertence: ");
        a = Int32.Parse(Console.ReadLine());
        if (a >= 3)
        {
            nFinal *= 1.15;
        }
        else if (a == 2)
        {
            nFinal *= 1.10;
        }
        else if (a == 1)
        {
            nFinal *= 1.05;
        }
    }
  
    Console.WriteLine("Nota final: {0}", Math.Round(nFinal, 2));
  }
}