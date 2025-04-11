
#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    char resposta[3];
    
    do {
        printf("\n=== Verificador de Faixa Etária ===\n\n");
        printf("Digite sua idade: ");
        
   
        while (scanf("%d", &idade) != 1 || idade < 0 || idade > 150) {
            printf("Idade inválida! Digite um número entre 0 e 150: ");
            while (getchar() != '\n'); // Limpa o buffer do teclado
        }
        
        
        if (idade < 3) {
            printf("\nVocê é um bebê. Momento de muito carinho e cuidados!\n");
        } else if (idade < 12) {
            printf("\nVocê é uma criança. Aproveite para brincar e aprender!\n");
        } else if (idade < 18) {
            printf("\nVocê é um adolescente. Fase de descobertas e crescimento!\n");
        } else if (idade < 30) {
            printf("\nVocê é um jovem adulto. Momento de construir seu futuro!\n");
        } else if (idade < 60) {
            printf("\nVocê é um adulto. Período de realizações e conquistas!\n");
        } else {
            printf("\nVocê é um idoso. Tempo de compartilhar sabedoria!\n");
        }
        
       
        if (idade >= 16) {
            printf("- Você já pode votar%s!\n", idade >= 18 && idade < 70 ? " (obrigatório)" : " (opcional)");
        }
        if (idade >= 18) {
            printf("- Você pode tirar carteira de motorista!\n");
        }
        
        printf("\nDeseja verificar outra idade? (sim/nao): ");
        scanf("%s", resposta);
        
    } while (strcmp(resposta, "sim") == 0 || strcmp(resposta, "s") == 0);
    
    printf("\nObrigado por usar o verificador de faixa etária!\n");
    return 0;
}
