
///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include  "livro.h"



void ModuloLivro(void) {
	char opcao;
	do {
		opcao= telaModuloLivro();
		switch(opcao) {
			case 'a': 	//cadastrarLivro();
                        printf("Em desenvolvimento/n");
                        getchar();
						       break;
			case 'b': 	//pesquisarLivro();
                        printf("Em desenvolvimento/n");
                        getchar();
						       break;
			case 'c': 	//alterarLivro();
                        printf("Em desenvolvimento/n");
                        getchar();
						        break;
			case 'd': 	//excluirLivro();
                        printf("Em desenvolvimento/n");
                        getchar();
						        break;
            
			
		    } 		
	} while (opcao != '0');    

}





char telaModuloLivro(void){
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
    printf("///                       1. Módulo Livro                                   ///\n");
    printf("///                       a. Cadastrar  Livro                               ///\n");
    printf("///                       b. Pesquisar  Livro                               ///\n");
    printf("///                       c. Alterar    Livro                               ///\n");
    printf("///                       d. Excluir    Livro                               ///\n");
    printf("///                       0. Sair                                           ///\n");
    //printf("///                       Escolha a opção desejada: " );
	scanf("%c", &op);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return op;
}


