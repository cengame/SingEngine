#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define clear system("cls");
#define cm 17987547.48

const int v = 28000;
const int V = 61200;

int SpaceShuttle(int DistPer)
{
        //static int v = 28000;
        int value{};
        value = DistPer/v;

        return value;
}

int SpaceProb(int DistPer)
{
        //static int V = 61200;
        int value{};
        value = DistPer/V;

        return value;
}

int main(){
        setlocale(LC_ALL,"");

        int Resposta{}, i{};
        unsigned int Sonda{}, OnibusEspacial{};

        printf("Qual é a distância, em KM, a ser percorrida?\nDistância: ");
        scanf("%d", &Resposta);
        printf("A distância é de %d kilômetros ou %d metros.\n", Resposta, (Resposta*1000));

        OnibusEspacial = SpaceShuttle(Resposta);
        Sonda = SpaceProb(Resposta);

        printf("O ônibus espacial levaria: %.2d Horas(ou %f minutos-luz) para realizar a viagem. \n", SpaceShuttle(Resposta), (Resposta/cm)*v);
        while(1)
        {
                i++;
                getc(stdin);
                if (i<=5)
                {
                        continue;
                }else break;
        }
        printf("A sonda chegaria ao destino em %.2d Horas(ou %f minutos-luz).\n", SpaceProb(Resposta), (Resposta/cm)*V);
        while(1)
        {
                i++;
                getc(stdin);
                if (i<=5)
                {
                        continue;
                }else break;
        }
        printf("Digite alguma tecla para continuar.\n");

        return 1;
}
