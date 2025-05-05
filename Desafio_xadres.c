#include <stdio.h>
void Movimento_torre(int n) 
{
    for (int n = 0; n <= 4; n++) 
    {
        printf("Cima\n");
    }
} 
void Movimento_bispo(int n)
{
    for (int n=1,i=1; i < 5; i++,n++)
    {
        
    }
    
    n=0;                    
    while (n != 5) {                                   
    printf("Cima Direita,\n");
    n++;
    }
}

void Movimento_Rainha(int n)
{
    n=0;
    do{
        printf("esquerda\n");
        n++;
      } while (n != 8);  
}

void Movimento_Cavalo(int n)
{
    int i = 0;
        while (i < 2) 
        {
            printf("baixo\n");
            if (i==1)
                {
                int j = 0;
                while (j != 1) 
                    {
                        printf("Esquerda\n");
                            j++;
                    }                                       
                }                    
                i++;
        }
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