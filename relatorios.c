///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "relatorios.h"
#include "stdlib.h"
#include <string.h>
#include "valida.h"
#include "livro.h"
#include "cliente.h"





void ModuloRelatorio(void) {
	char opcao;
	do {
		opcao= telaModuloRelatorio();
		switch(opcao) {
			case '1':  livroCadastrado();
                        //getchar();
						       break;
			case '2':   LivroEmprestado();
                        //getchar();
						       break;
			case '3':   ClienteAtivo();
                        //getchar();
						        break;
			case '4':   Emprestimo();                       
                        //getchar();
						        break;
            case '5':   EmprestimoEmAtraso();
                        //getchar();
                                break;
			
		    } 		
	} while (opcao != '0'); 
} 

void RelatorioLivrosCadastradoS(char* isbn) {

	// função ainda em desenvolvimento
	// exibe a tela apenas para testes

    char* isbnlivro;

		isbnlivro = telaRelatorioLivrosCadastrados();
    relatLivroCadastrado(isbnlivro);
    free(isbnlivro);
}


void RelatorioLivrosEmprestados(char* isbn) {

	// função ainda em desenvolvimento
	// exibe a tela apenas para testes

    char* isbnlivro;

		isbnlivro = telaRelatorioLivrosEmprestados();
    relatLivroEmprestado(isbnlivro);
    free(isbnlivro);
}


void RelatorioClientesAtivos(char* cpf) {

	// função ainda em desenvolvimento
	// exibe a tela apenas para testes

    char* cpfCliente;

		cpfCliente = telaRelatorioClientesAtivos();
    relatClienteativo(cpfCliente);
    free(cpfCliente);
}


void RelatorioLivrosEmprestimo(char* isbn) {

	// função ainda em desenvolvimento
	// exibe a tela apenas para testes

    char* isbnLivro;

		isbnLivro = telaRelatorioLivroEmprestimo();
    relatEmprestimo(isbnLivro);
    free(isbnLivro);
}


void RelatorioLivroEmprestimoAtrasados(char* cpf) {

	// função ainda em desenvolvimento
	// exibe a tela apenas para testes

    char* cpfCliente;

		cpfCliente = telaRelatorioEmprestimoEmAtraso();
    relatEmprestimoEmAtraso(cpfCliente);
    free(cpfCliente);
}




char telaModuloRelatorio(void){
    char op;
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Projeto Biblioteca de Livros                           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Biblioteca de Livros = = = = =          ///\n");
    printf("///                                                                         ///\n");
    printf("///                       4. Módulo Relatório                               ///\n");
    printf("///                       1. Relatório de Livros Cadastrados                ///\n");
    printf("///                       2. Relatório de Livros Emprestados                ///\n");
    printf("///                       3 Relatório de Clientes Ativos                    ///\n");
    printf("///                       4. Relatório de Empréstimo                        ///\n");
    printf("///                       5. Relatório dos Empréstimos em Atraso            ///\n");
    printf("///                       0. Sair                                           ///\n");
    printf("///                       Escolha a opção desejada: " );                    
    printf("///                                                                         ///\n");
    scanf("%c", &op);
	getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
	delay(1);
    return op;
}


char* telaRelatorioLivrosCadastrados(void) {
    char* isbn ;

    isbn = (char*) malloc(4*sizeof(char));
    limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =       Biblioteca de Livros              = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  Livros Cadastrados     = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o ISBN do livro: ");
	scanf("%[A-Za-z0-9]", isbn);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
    return isbn;
}


char* telaRelatorioLivrosEmprestados(void) {
    char* cpf;

    cpf = (char*) malloc(4*sizeof(char));
    limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =         Biblioteca de Livros            = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  Relatorio de Empréstimos   = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o cpf: ");
	scanf("%[A-Za-z0-9]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
    return cpf;
}


char* telaRelatorioClientesAtivos(void) {
    char* cpf;

    cpf = (char*) malloc(4*sizeof(char));
    limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =         Biblioteca de Livros            = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = =  Relatorio de Clientes Ativos   = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o cpf: ");
	scanf("%[A-Za-z0-9]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
    return cpf;
}


char* telaRelatorioEmprestimosemAtraso(void) {
    char* cpf;

    cpf = (char*) malloc(4*sizeof(char));
    limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =         Biblioteca de Livros            = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = =  Relatorio de Empréstimos em Atraso   = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o cpf: ");
	scanf("%[A-Za-z0-9]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
    return cpf;
}


void relatorioLivrosCadastrados(char* isbn) {

	char *numeroIsbn;
    // posteriormente, esta função irá buscar o livro cadastrado no arquivo 
    // por enquanto, o nome será preenchido com um valor predefinido
    numeroIsbn = (char*) malloc(10*sizeof(char));
    strcpy(numeroIsbn,"Algoritmo");


		limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =         Biblioteca de Livros        = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  ISBN do Livro: %-3s  = = = = =             ///\n", isbn);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                   Relatório de Livros Cadastrados                     ///\n");
    printf("///           ===============================================             ///\n");
	printf("///        ||  ISBN  ||  Título   ||  Autor ||  Ano || Editora ||         ///\n");
    printf("///           ===============================================             ///\n");
    printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("///           Tecle <ENTER> para continuar...                             ///");
    getchar();
}


void relatorioLivrosEmprestados(char* isbn) {

	char *numeroIsbn;
    // posteriormente, esta função irá buscar o livro emprestado no arquivo 
    // por enquanto, o nome será preenchido com um valor predefinido
    numeroIsbn = (char*) malloc(10*sizeof(char));
    strcpy(numeroIsbn,"Algoritmo");


	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =        Biblioteca de Livros         = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  ISBN do Cliente: %-3s  = = = = =             ///\n", isbn);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                 Relatório de Livros Emprestados                       ///\n");
    printf("///           ===============================================             ///\n");
	printf("///               Nome ||  CPF  ||  Livro   ||  ISBN ||                   ///\n");
    printf("///           ===============================================             ///\n");
    printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("///           Tecle <ENTER> para continuar...                             ///");
    getchar();
}



void relatorioClientesAtivos(char* cpf) {

	char *numeroCPF;
    // posteriormente, esta função irá buscar o numero o cliente no arquivo 
    // por enquanto, o nome será preenchido com um valor predefinido
    numeroCPF = (char*) malloc(10*sizeof(char));
    strcpy(numeroCPF,"Brizola");


	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =        Biblioteca de Livros         = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  CPF do Cliente: %-3s  = = = = =             ///\n", cpf);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                  Relatório de Clientes Ativos                         ///\n");
    printf("///           ===============================================             ///\n");
	printf("///                  Nome ||  CPF  ||  Situação  ||                       ///\n");
    printf("///           ===============================================             ///\n");
    printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("///           Tecle <ENTER> para continuar...                             ///");
    getchar();
}



void relatorioLivrosEmprestimo(char* isbn) {

	char *numeroIsbn;
    // posteriormente, esta função irá buscar  o empréstimo no arquivo 
    // por enquanto, o nome será preenchido com um valor predefinido
    numeroIsbn = (char*) malloc(10*sizeof(char));
    strcpy(numeroIsbn,"Algoritmo");


	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =        Biblioteca de Livros         = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  ISBN do Livro: %-3s  = = = = =               ///\n", isbn);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                  Relatório de Livros Emprestados                      ///\n");
    printf("///           ===============================================             ///\n");
	printf("///                     ISBN ||  Nome  ||  CPF ||                         ///\n");
    printf("///           ===============================================             ///\n");
    printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("///           Tecle <ENTER> para continuar...                             ///");
    getchar();
}


void relatorioLivrosEmprestimoAtrasado(char* isbn) {

	char *numeroIsbn;
    // posteriormente, esta função irá buscar  o empréstimo em atraso no arquivo 
    // por enquanto, o nome será preenchido com um valor predefinido
    numeroIsbn = (char*) malloc(10*sizeof(char));
    strcpy(numeroIsbn,"Algoritmo");


		limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =        Biblioteca de Livros         = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  ISBN do Livro: %-3s  = = = = =               ///\n", isbn);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                  Relatório de Livros em Atraso                        ///\n");
    printf("///           ===============================================             ///\n");
	printf("///              Cliente || CPF ||  Livro  ||  Isbn ||  Situação           ///\n");
    printf("///           ===============================================             ///\n");
    printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("///           Tecle <ENTER> para continuar...                             ///");
    getchar();
}


void relatLivro(char* titulos) {

	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =        Biblioteca de Livros         = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  Títulos: %7s  = = = = = = =             ///\n", titulos);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
    printf("///           ===============================================             ///\n");
	printf("///           ||  Título  ||        Autor                  ||             ///\n");
    printf("///           ===============================================             ///\n");
    relatDeTodosOsLivrosCadastrados(titulos);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("///           Tecle <ENTER> para continuar...                             ///");
    getchar();
}

void relatLivro(char* titulo) {
    FILE* fp;
    Livro* lvr;
    char nomeTrunc[51];
    int tam;

    lvr = (Livro*) malloc(sizeof(Livro));
    fp = fopen("livro.dat", "rb");
    while (fread(lvr, sizeof(Livro), 1, fp)) {
        if (strcmp(lvr->titulo, titulo) == 0) {
            tam = strlen(lvr->titulo);
            strncpy(nomeTrunc, lvr->titulo, tam);
            for (int i = tam; i < 51; i++) {
                nomeTrunc[i] = ' ';
            }
            nomeTrunc[51] = '\0';
            printf("///           ||     %-3s     || %-26s ||             ///\n", lvr-> titulo, nomeTrunc);
        }
    }
    fclose(fp);
    free(lvr);
}



void relatCliente(char* cliente) {

	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =        Biblioteca de Livros         = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  Títulos: %7s  = = = = = = =             ///\n", cliente);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
    printf("///           ===============================================             ///\n");
	printf("///           ||  Nome  ||        CPF                ||                    ///\n");
    printf("///           ===============================================             ///\n");
    relatDeTodososClientes(cliente);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("///           Tecle <ENTER> para continuar...                             ///");
    getchar();
}


void relatCliente(char* cliente) {
    FILE* fp;
    Cliente* clt;
    char nomeTrunc[12];
    int tam;

    clt = (Cliente*) malloc(sizeof(Cliente));
    fp = fopen("cliente.dat", "rb");
    while (fread(clt, sizeof(Cliente), 1, fp)) {
        if (strcmp(clt->cpf, clt) == 0) {
            tam = strlen(clt->cpf);
            strncpy(nomeTrunc, clt->cpf, tam);
            for (int i = tam; i < 12; i++) {
                nomeTrunc[i] = ' ';
            }
            nomeTrunc[12] = '\0';
            printf("///           ||     %-3s     || %-26s ||             ///\n", clt-> cpf, nomeTrunc);
        }
    }
    fclose(fp);
    free(clt);
}

	
    