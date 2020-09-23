    #include <stdlib.h>
    #include <stdio.h>
    int hom, muj;
    void Porcen();

int main()
    {
        Porcen();
        return 0;
    }

void Porcen()
    {
        int porH=0, porM=0;
        printf("Ingrese la cantidad de hombres que enviaron su curricular ");
        scanf("%d", &hom);

        printf("Ingrese la cantidad de mujeres que enviaron su curricular ");
        scanf("%d", &muj);

        porH=hom*100/(hom+muj);
        porM=muj*100/(muj+hom);
        printf("El porcentaje de hombres que enviaron su curricular es de %d y el de mujeres de %d ", porH, porM);
    }
