//funcoes e variaveis
int segundos(int a);
//Inicio:
int main (void)
{
    int b, i, minutos;
    printf("Digite um numero: \n");
    scanf("%d", &b);
    //ATRIBUINDO FUNCOES
    int segundos(int a){
        minutos = a*60;
        printf("%d", minutos*60);
    }
    segundos(b);
}
