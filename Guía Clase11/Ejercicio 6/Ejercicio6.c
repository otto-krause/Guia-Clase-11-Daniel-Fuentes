    #include <stdlib.h>
    #include <stdio.h>
    void OctavaParte();

int main()
{
    OctavaParte();
    return 0;
}

void OctavaParte()
{
     int num=0;
     float num1=0;
     printf("Ingrese un valor entero ");
     scanf("%d", &num);
     num1=num/8;

     printf("\nLa octava parte de %d es %.2f", num, num1);
}
