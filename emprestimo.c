///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "emprestimo.h"
#include "valida.h"

typedef struct emprestimo Emprestimo;


void ModuloEmprestimo(void) {
	char opcao;
	do {
		opcao= telaModuloEmprestimo();
		switch(opcao) {
			case 'a': 	cadastrarEmprestimo();
                        getchar();
						       break;
			case 'b': 	//pesquisarEmprestimo();
                        printf("Em Desenvolvimento/n");
                        getchar();
						       break;
			case 'c': 	//editarLivro();
                        printf("Em Desenvolvimento/n");
                        getchar();
						        break;
			case 'd': 	//devolverLivro();
                        printf("Em Desenvolvimento/n");
                        getchar();
						        break;
            
            } 		
     } while (opcao != '0');
	
}



char telaModuloEmprestimo(void) {
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
    printf("///                       3. Módulo Empréstimo                              ///\n");
    printf("///                       a. Cadastrar Empréstimo                           ///\n");
    printf("///                       b. Pesquisar Empréstimo                           ///\n");
    printf("///                       c. Editar Empréstimo                              ///\n");
    printf("///                       d. Devolver Empréstimo                            ///\n");
    printf("///                       0. Sair                                           ///\n");
    //printf("///                       Escolha a opção desejada: " );
    scanf("%c", &op);
	getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return op;
}

void cadastrarEmprestimo(void) {
	Emprestimo *emp;

	emp = telaCadastrarEmprestimo();
	free(emp);
}

 Emprestimo* telaCadastrarEmprestimo(void) {
	Emprestimo *emp;
	emp = (Emprestimo*) malloc(sizeof(Emprestimo));

//limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =              Biblioteca             = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by     claydsonbat@yahoo.com.br              ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Cadastrar Empréstimo = = = = = = = =        ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");


//do {
		printf("///       Autor     (apenas letras): ");
		scanf("%[^\n]", emp->autor);
		getchar();
	//} while (!validarcpf(clt->cpf));
	printf("///           Título: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", emp->titulo);
    printf("///           Subtítulo: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", emp->subtitulo);
    printf("///           Editora: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", emp->editora);
    getchar();
    scanf("%[0123456789]", emp->editora);
	getchar();
	printf("///           ISBN: ");
    scanf("%[0123456789]", emp->isbn);
    printf("///           Ano: ");
    scanf("%[0123456789]", emp->ano);
    printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	//delay(1);
  	return emp;
}
