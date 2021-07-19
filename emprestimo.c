///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "emprestimo.h"


void ModuloEmprestimo(void) {
	char opcao;
	do {
		opcao= telaModuloEmprestimo();
		switch(opcao) {
			case 'a': 	//cadastrarEmprestimo();
                        printf("Em Desenvolvimento/n");
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



char telaModuloEmprestimo(void){
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
    scanf("%c", &op);
	getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return op;
}