#include <stdio.h>
#include <stdlib.h>
// bjkhjkhjk
/*sdasdasdasd
*/
int main()
{

    int horas, minutos;
    float minAngulo, horaAngulo, diferenca;

    printf("Que HORAS sao?\n");
    scanf(" %d", &horas);

    if((horas >= 0)&&(horas <= 24)){

    printf("E os minutos?\n");
    scanf(" %d", &minutos);

    }

    printf("\n");

    if((horas >= 12)&&(horas <= 24)){
        horas = horas - 12;
    }

    if((horas >= 0)&&(horas < 12)){

        minAngulo = (float)minutos * 6;
        horaAngulo = (float)horas * 30 + (float)minutos / 2;

        if(minAngulo > horaAngulo){
            diferenca = minAngulo - horaAngulo;
        }else{
            diferenca = horaAngulo - minAngulo;
        }

        printf("A diferenca dos ponteiros eh %.1f graus\n", diferenca);

    }else{
        printf("Ta na disney? sauhde em primeiro lugar!\n");
    }

    return 0;
}
