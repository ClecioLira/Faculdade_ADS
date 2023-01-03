#include<stdio.h>

#define tamNomeCliene 100

struct cliente {
    char nome[tamNomeCliene];
    int idade;
};

struct filme {
    int classificacaoFilme;
    int estaDisponivel;
};


int main(void) {
    struct cliente cli;
    struct filme fi;

    printf("\n Informe no nome do cliente: ");
    fflush(stdin);
    fgets(cli.nome, tamNomeCliene, stdin);

    printf("\n Informe a idade do cliente: ");
    scanf("%d", &cli.idade);

    printf("\n Informe a classificacao do filme: ");
    scanf("%d", &fi.classificacaoFilme);

    printf("\n Informe (0) se o filme nao esta disponivel e (1) caso contrario: ");
    scanf("%d", &fi.estaDisponivel);

    printf("\n Cliente: %s", cli.nome);
    printf("\n Idade : %d anos", cli.idade);
    printf("\n Classificacao do filme: %d anos", fi.classificacaoFilme);
    printf("\n Esta disponivel? %d", fi.estaDisponivel);
    printf("\n Filme pode ser alocado pelo cliente? %d", (fi.estaDisponivel) && (cli.idade >= fi.classificacaoFilme));
    printf("\n Anos restantes: %d", (cli.idade < fi.classificacaoFilme) * (fi.classificacaoFilme - cli.idade));

}
