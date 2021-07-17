///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////
// Assinatura das funções
void telaSobre(void);
char telaPrincipal(void); 
void telaEquipe(void);
char telaModuloLivro(void);
char telaModuloCliente(void);
char telaModuloEmprestimo(void);
char telaModuloRelatorio(void);
//void ModuloLivro(void);
//void ModuloCliente(void);
//void ModuloEmprestimo(void);
//void ModuloRelatorio(void);

/////
// Programa principal
int main(void) {
    
    char opcao;
	do {
		opcao = telaPrincipal();
		switch(opcao) {
			case '1': 	//telaModuloLivro();
                        printf("Em Desenvolvimento/n");
                        getchar();
						    break;
			case '2': 	//telaModuloCliente();
                        printf("Em Desenvolvimento/n");
                        getchar();
						    break;
			case '3': 	//telaModuloEmprestimo();
                        printf("Em Desenvolvimento/n");
                        getchar();
						    break;
			case '4': 	//telaModuloRelatorio();
                        printf("Em Desenvolvimento/n");
                        getchar();
						    break;
			
		    } 		
	 } while (opcao != '0');
      return 0;
}



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


void ModuloRelatorio(void) {
	char opcao;
	do {
		opcao= telaModuloRelatorio();
		switch(opcao) {
			case 'a': 	//LivroCadastrado();
                        printf("Em Desenvolvimento/n");
                        getchar();
						       break;
			case 'b': 	//LivroEmprestado();
                        printf("Em Desenvolvimento/n");
                        getchar();
						       break;
			case 'c': 	//ClienteAtivo();
                        printf("Em Desenvolvimento/n");
                        getchar();
						        break;
			case 'd': 	 //Emprestimo();
                        printf("Em Desenvolvimento/n");
                        getchar();
						        break;
            case 'e':    //EmprestimoEmAtraso();
                        printf("Em Desenvolvimento/n");
                        getchar();
                                break;
			
		    } 		
	} while (opcao != '0'); 
} 


/////
// Funções

void telaSobre(void){

    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///             Projeto Sistema de Biblioteca de Livros                     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Biblioteca de Livros = = = = =                     ///\n");
    printf("///                                                                         ///\n");
    printf("///  Programa exemplo utilizado na disciplina DCT1106 - Programação, para   ///\n");
    printf("///  fins didáticos de ilustração. O programa contém os principais módulos  ///\n");
    printf("///  e funcionalidades que serão exigidos na avaliação dos projetos a serem ///\n");
    printf("///  desenvolvidos pelos alunos ao longo da disciplina. Serve como um guia  ///\n");
    printf("///  de consulta e referência para o desenvolvidos dos demais projetos.     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

char telaPrincipal(void){

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
    printf("///            1. Módulo Livro                                              ///\n");
    printf("///            2. Módulo Cliente                                            ///\n");
    printf("///            3. Módulo Empréstimo                                         ///\n");
    printf("///            4. Módulo Relatório                                          ///\n");
    printf("///            0. Sair                                                      ///\n");
    //printf("///           Escolha a opção desejada: ");                                   
	scanf("%c", &op);
	getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return op;
}



void telaEquipe(void) {
    
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Biblioteca de Livros = = = = =          ///\n");
    printf("///                                                                         ///\n");
    printf("///            Este projeto está sendo desenvolvido por:                    ///\n");
    printf("///                                                                         ///\n");
    printf("///           Claydson Kelly da Silva                                       ///\n");
    printf("///           E-mail: claydsonbat@yahoo.com.br                              ///\n");
    printf("///           Reposit: https://github.com/claydson-25/bibliotecadelivros    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
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
	scanf("%c", &op);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return op;
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
    scanf("%c", &op);
	getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return op;
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
    printf("///                                                                         ///\n");
    scanf("%c", &op);
	getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return op;
}

