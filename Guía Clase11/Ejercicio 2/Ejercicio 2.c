    #include <stdlib.h>
    #include <stdio.h>
    void Perimetro();
    void Area();
    int num, num2;

int main()
    {
        Perimetro();
        Area();
        return 0;
    }

void Perimetro()
{
    int peri=0;
    printf("Ingrese la base del rect%cngulo ", 160);
    scanf("%d", &num);
    printf("Ingrese la altura del rect%cngulo ", 160);
    scanf("%d", &num2);

    peri=2*num + 2*num2;
    printf("\nEl per%cmetro del rect%cngulo es %d", 161, 160, peri);
}

void Area()
{
    int area=0;
    area=num*num2;
    printf("\nEl %crea del rect%cngulo es %d", 160, 160, area);
}
