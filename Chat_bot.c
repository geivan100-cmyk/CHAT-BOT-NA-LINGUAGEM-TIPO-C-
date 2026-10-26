#include <stdio.h>

int main() {
    int opcao;

    // ==================================================
    // CABEÇALHO DESCRITIVO DO SISTEMA
    // ==================================================
    printf("====================================================\n");
    printf("        CHATBOT DE ATENDIMENTO - LOJA VIRTUAL        \n");
    printf("====================================================\n");
    printf("                                                    \n");
    printf("  Bem-vindo(a) ao nosso atendimento automático!     \n");
    printf("  Este sistema responde às dúvidas mais frequentes  \n");
    printf("  sobre a nossa loja: horários, pagamentos, trocas, \n");
    printf("  entregas e localização.                           \n");
    printf("                                                    \n");
    printf("  Se a sua dúvida não estiver na lista, oferecemos  \n");
    printf("  o contato direto com um atendente humano.         \n");
    printf("                                                    \n");
    printf("  Vamos começar? Escolha uma opção no menu abaixo.  \n");
    printf("====================================================\n\n");

    // ==================================================
    // LAÇO PRINCIPAL DO MENU
    // ==================================================
    do {
        printf("---------------- MENU DE ATENDIMENTO ----------------\n");
        printf("  1 - Horário de funcionamento\n");
        printf("  2 - Formas de pagamento\n");
        printf("  3 - Política de trocas e devoluções\n");
        printf("  4 - Entregas e prazos\n");
        printf("  5 - Localização da loja\n");
        printf("  6 - Falar com um atendente humano\n");
        printf("  0 - Encerrar o atendimento\n");
        printf("-----------------------------------------------------\n");
        printf("  Digite o número da sua dúvida: ");

        // ==================================================
        // VALIDAÇÃO DA LEITURA (entradas não numéricas)
        // ==================================================
        if (scanf("%d", &opcao) != 1) {
            printf("\n>> ERRO: Entrada inválida! Digite apenas números.\n");
            printf("   Retornando ao menu principal...\n\n");

            // Limpa o buffer do teclado
            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            opcao = -1; // Força o default a tratar como inválida
        }
        else {
            // ==================================================
            // PROCESSAMENTO DA OPÇÃO DIGITADA
            // ==================================================
            switch (opcao) {

                case 1:
                    printf("\n>> HORÁRIO DE FUNCIONAMENTO:\n");
                    printf("   Segunda a sexta: 8h às 20h\n");
                    printf("   Sábado: 8h às 18h\n");
                    printf("   Domingo: 10h às 16h\n\n");
                    break;

                case 2:
                    printf("\n>> FORMAS DE PAGAMENTO:\n");
                    printf("   Cartão de crédito, débito, PIX e dinheiro.\n");
                    printf("   Parcelamos em até 3x sem juros.\n\n");
                    break;

                case 3:
                    printf("\n>> POLÍTICA DE TROCAS E DEVOLUÇÕES:\n");
                    printf("   Trocas em até 30 dias com nota fiscal.\n");
                    printf("   Devoluções em até 7 dias após o recebimento.\n\n");
                    break;

                case 4:
                    printf("\n>> ENTREGAS E PRAZOS:\n");
                    printf("   Entregas em até 5 dias úteis para todo o Brasil.\n");
                    printf("   Frete grátis para compras acima de R$ 200,00.\n\n");
                    break;

                case 5:
                    printf("\n>> LOCALIZAÇÃO DA LOJA:\n");
                    printf("   Av. Principal, 1000 - Centro.\n");
                    printf("   Próximo à estação de metrô.\n\n");
                    break;

                case 6:
                    printf("\n>> ATENDIMENTO HUMANO:\n");
                    printf("   Telefone: (11) 4000-1234\n");
                    printf("   WhatsApp: (11) 91234-5678\n");
                    printf("   E-mail: atendimento@lojavirtual.com\n\n");
                    break;

                case 0:
                    printf("\n>> Encerrando o atendimento...\n");
                    break;

                default:
                    // ==================================================
                    // DESAFIO BÔNUS: tratamento analítico com if/else if
                    // ==================================================
                    if (opcao < 0) {
                        printf("\n>> ERRO: Opção negativa não existe no menu.\n");
                        printf("   Por segurança, redirecionando ao atendimento humano:\n");
                    }
                    else if (opcao > 6 && opcao <= 9) {
                        printf("\n>> Essa dúvida não está no FAQ.\n");
                        printf("   Redirecionando ao atendimento humano:\n");
                    }
                    else if (opcao > 9) {
                        printf("\n>> Opção muito alta! Não reconheço esse código.\n");
                        printf("   Redirecionando ao atendimento humano:\n");
                    }
                    else {
                        printf("\n>> Opção inválida.\n");
                        printf("   Redirecionando ao atendimento humano:\n");
                    }

                    // Contato exibido em qualquer caso de bônus
                    printf("   Telefone: (11) 4000-1234\n");
                    printf("   WhatsApp: (11) 91234-5678\n");
                    printf("   E-mail: atendimento@lojavirtual.com\n\n");
                    break;
            }
        }

    } while (opcao != 0); // O laço continua enquanto a opção for diferente de 0

    // ==================================================
    // FINALIZAÇÃO CORTÊS E SEGURA
    // ==================================================
    printf("\n====================================================\n");
    printf("  Obrigado por utilizar nosso atendimento automático!\n");
    printf("  Esperamos ter ajudado. Volte sempre que precisar.  \n");
    printf("  Atendimento humano disponível de segunda a sábado. \n");
    printf("  Tenha um ótimo dia!                                \n");
    printf("====================================================\n");

    return 0;
}