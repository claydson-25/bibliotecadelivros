
///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"
#include "valida.h"
#include "emprestimo.h"

typedef struct cliente Cliente;

void ModuloCliente(void) {
	char opcao;
	do {
		opcao= telaModuloCliente();
		switch(opcao) {
			case '1': 	//cadastrarCliente();
						printf("Em desenvolvimento");
                        getchar();
						       break;
			case '2': 	//pesquisarCliente();
                        printf("Em desenvolvimento/n");
                        getchar();
						       break;
			case '3': 	//editarCliente();
                        printf("Em desenvolvimento/n");
                        getchar();
						        break;
			case '4': 	//excluirCliente();
                        printf("Em desenvolvimento/n");
                        getchar();
						        break;
            
			
		    } 		
	} while (opcao != '0');    
    
}

void cadastrarCliente(void)  {
	Cliente * clt;

	clt = telaCadastrarCliente();
	//gravarCliente(clt);
	free(clt);
}

void pesquisarCliente(void) {

	Cliente* clt;
	char* cpf;

	cpf = telaPesquisarCliente();
	clt = buscarCliente(cpf);
	exibirCliente(clt);
	free(clt); 
	free(cpf);

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

/*void cadastrarCliente(void) {
	Cliente *clt;

	clt = telaCadastrarCliente();
	//gravarCliente(clt);
	free(clt);
}*/


Cliente* telaCadastrarCliente(void) {
	Cliente *clt;
	clt = (Cliente*) malloc(sizeof(Cliente));





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
	printf("///           = = = = = = = = Cadastrar Cliente = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	//do {
		printf("///       CPF     (apenas números): ");
		scanf("%[^\n]", clt->cpf);
		getchar();
	//} while (!validarcpf(clt->cpf));
	printf("///           Nome completo: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", clt->nome);
	getchar();
	printf("///           E-mail: ");
	scanf("%[a-z0-9@.]", clt->nome);
	getchar();

	//do {
		printf("///        Celular  (apenas números com DDD): ");
		scanf("%[^\n]", clt->telefone);
		getchar();
	//} while (!validarFone(clt->telefone));
	//aln->status = True;
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	//delay(1);
  	return clt;
}


char* telaPesquisarCliente(void) {
	char* cpf;
	cpf = (char*) malloc(12*sizeof(char));


	//limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Biblioteca de Livros              = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = Pesquisar Cliente = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o CPF do Cliente (apenas números): ");
	scanf("%[0-9]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return cpf;
}


