    #include <stdlib.h>
    #include <stdio.h>
    void MayorMenorIgual();

int main()
{
    MayorMenorIgual();
    return 0;
}

void MayorMenorIgual()
{
    int num, num1;
     printf("Ingrese dos n%cmeros: ", 163);
     scanf("%d %d", &num, &num1);
     system("cls");
     if (num>num1)
     {
        printf("%d es mayor a %d", num, num1);
     }
     else
     {
         if (num<num1)
         {
             printf("%d es menor a %d", num, num1);
         }
         else{
           printf("%d y %d son iguales", num, num1);
         }
     }
}
