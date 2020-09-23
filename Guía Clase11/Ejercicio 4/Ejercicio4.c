    #include <stdlib.h>
    #include <stdio.h>
    void PresionCalculo();

int main()
    {
        PresionCalculo();
        return 0;
    }

void PresionCalculo()
{
    float p=0, f=0, s=0;
     printf("Ingrese la superficie ");
     scanf("%f", &s);
     printf("Ingrese la fuerza ");
     scanf("%f", &f);
     p=f/s;
     printf("La presi%cn de la superficie ingresada es %.2f", 162, p);
}
