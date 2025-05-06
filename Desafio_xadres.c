#include <stdio.h>
void Movimento_torre(int n) 
{
    if (n>0)
    {
        printf("Direita\n"); 
        Movimento_torre(n-1);
    }   
} 
void Movimento_bispo(int n)
{
    for (int n=1; n < 5;n++)
    {   
        printf("Cima\n");
        for (int i = 1; i < 2; i++)
        {
            printf("Direita\n");
        }         
    } 
}

void Movimento_Rainha(int n)
{   
    if (n>0)
    {
        printf("esquerda\n");
        Movimento_Rainha(n-1);
    }    
}

void Movimento_Cavalo(int n)
{    
    if (n <= 0) return;
    printf("Cima\n");
    Movimento_Cavalo(n - 1);

    if (n == 1)
        printf("direita\n");
    
}

int main() {
    printf("Movimento da torre:\n");
    Movimento_torre(5);
    printf("\nMovimento do bispo:\n");
    Movimento_bispo(5);
    printf("\nMovimento da Rainha:\n");
    Movimento_Rainha(8);
    printf("\nMovimento do cavalo\n");
    Movimento_Cavalo(2);     
    
}