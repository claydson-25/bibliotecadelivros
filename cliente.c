
///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "cliente.h"


void ModuloCliente(void) {
	char opcao;
	do {
		opcao= telaModuloCliente();
		switch(opcao) {
			case 'a': 	//cadastrarCLiente();
                        printf("Em desenvolvimento/n");
                        getchar();
						       break;
			case 'b': 	//pesquisarCliente();
                        printf("Em desenvolvimento/n");
                        getchar();
						       break;
			case 'c': 	//editarCliente();
                        printf("Em desenvolvimento/n");
                        getchar();
						        break;
			case 'd': 	//excluirCliente();
                        printf("Em desenvolvimento/n");
                        getchar();
						        break;
            
			
		    } 		
	} while (opcao != '0');    
    
}



char telaModuloCliente(void){
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
    printf("///                       2. Módulo Cliente                                 ///\n");
    printf("///                       a. Cadastrar Cliente                              ///\n");
    printf("///                       b. Pesquisar Cliente                              ///\n");
    printf("///                       c. Editar    Cliente                              ///\n");
    printf("///                       d. Excluir   Cliente                              ///\n");
    printf("///                       0. Sair                                           ///\n");
    //printf("///                       Escolha a opção desejada: " );
    scanf("%c", &op);
	getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return op;
}