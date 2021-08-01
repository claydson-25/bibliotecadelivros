///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "relatorios.h"



void ModuloRelatorio(void) {
	char opcao;
	do {
		opcao= telaModuloRelatorio();
		switch(opcao) {
			case 'a': //LivroCadastrado();
                        printf("Em Desenvolvimento/n");
                        getchar();
						       break;
			case 'b': //LivroEmprestado();
                        printf("Em Desenvolvimento/n");
                        getchar();
						       break;
			case 'c'://ClienteAtivo();
                        printf("Em Desenvolvimento/n");
                        getchar();
						        break;
			case 'd': //Emprestimo();
                        //printf("Em Desenvolvimento/n");
                        //getchar();
						        break;
            case 'e':    //EmprestimoEmAtraso();
                        printf("Em Desenvolvimento/n");
                        getchar();
                                break;
			
		    } 		
	} while (opcao != '0'); 
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
    printf("///                       a. Relatório de Livros Cadastrados                ///\n");
    printf("///                       b. Relatório de Livros Emprestados                ///\n");
    printf("///                       c Relatório de Clientes Ativos                    ///\n");
    printf("///                       d. Relatório de Empréstimo                        ///\n");
    printf("///                       e. Relatório dos Empréstimos em Atraso            ///\n");
    printf("///                       0. Sair                                           ///\n");
    //printf("///                       Escolha a opção desejada: " );
    printf("///                                                                         ///\n");
    scanf("%c", &op);
	getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return op;
}