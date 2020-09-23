    #include <stdlib.h>
    #include <stdio.h>
    void NumerosEnPantalla();

    int main()
{
    NumerosEnPantalla();
    NumerosEnPantalla(); 
    return 0;
}

    void NumerosEnPantalla()
    {
        int num;
        printf("\nIngrese un numero ");
        scanf("%d", &num);
        system("cls");
        printf("Los numero ingresados son %d\n", num);
    }
