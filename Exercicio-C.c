//Inicio:
int main (void)
{
    //ATRIBUINDO FUNCOES
    int contagem(int infe, int meio, int supe){
        if(meio < infe && meio < supe){
            printf("TRUE");
        } else {
            printf("FALSE");
        }
    }
    contagem(7,10,9);
}
