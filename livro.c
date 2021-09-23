
///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include  "livro.h"
#include  "valida.h"

typedef struct livro Livro;


void ModuloLivro(void) {
	char opcao;
	do {
		opcao= telaModuloLivro();
		switch(opcao) {
			case 'a': 	cadastrarLivro();
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

void cadastrarLivro(void) {
	Livro *lvr;

	lvr = telaCadastrarLivro();
	gravarLivro(lvr);
	free(lvr);
}


Livro* telaCadastrarLivro(void) {
	Livro *lvr;
	lvr = (Livro*) malloc(sizeof(Livro));


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
	printf("///           = = = = = = = = Cadastrar Livro = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	//do {
		printf("///       Título    : ");
		scanf("%[^\n]", lvr->titulo);
		getchar();
	//} while (!validarcpf(clt->cpf));
	printf("///           Autor: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", lvr->autor);
	getchar();

	//do {
		printf("///        Subtitulo: ");
		scanf("%[^\n]", lvr->subtitulo);
		getchar();
        printf("///        Editora: ");
		scanf("%[^\n]", lvr->editora);
		getchar();
        printf("///        Ano: ");
		scanf("%[0123456789]", lvr->ano);
		getchar();
	//} while (!validarFone(clt->telefone));
	//aln->status = True;
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	//delay(1);
  	return lvr;
}


void gravarLivro(Livro* lvr) {
	FILE* fp;

	fp = fopen("livros.dat", "ab");
	if (fp == NULL) {
		//telaErroArquivoAluno();
		printf("Deu erro");
	}
	fwrite(lvr, sizeof(Livro), 1, fp);
	fclose(fp);
}



