//Inicio:
int main (void)
{
    int b, i;
    printf("Digite um numero: \n");
    scanf("%d", &b);
    //ATRIBUINDO FUNCOES
    int func1(int a){
        if(a%2 == 0){
            printf("Par\n");
        } else {
            printf("Impar\n");
        }
    }
    func1(b);
}
