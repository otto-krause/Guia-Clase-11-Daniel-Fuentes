    #include <stdlib.h>
    #include <stdio.h>
    void Resistencias();
    void ResisTot();
    int r1, r2, r3, r4, r5, rtotal=0;

int main()
{
    Resistencias();
    ResisTot();
    return 0;
}

void Resistencias()
{
     printf("Ingrese las 5 resistencias en serie ");
     scanf("%d %d %d %d %d", &r1, &r2, &r3, &r4, &r5);
     system("cls");
     printf("Las resistencias ingresadas son: %d, %d, %d, %d, y %d", r1, r2, r3, r4, r5);

}

void ResisTot()
{
     rtotal=r1+r2+r3+r4+r5;
     printf("\nLa resistencia total es %d", rtotal," Ohm");
}
