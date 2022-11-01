//Inicio:
int main (void)
{
    int b, i, minutos;
    char escolha;
    //ATRIBUINDO FUNCOES
    int segundos(int a, char b){
        switch(b){
            case 'h':
            printf("%d", a);
            break;
            case 'm':
            printf("%d", (a*60));
            break;
            case 's':
            printf("%d",(a*60)*60);
            break;
        }
    }
    segundos(1, 's');
}
