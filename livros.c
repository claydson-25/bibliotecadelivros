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
void telaModuloLivro(void);
void telaModuloCliente(void);
void telaModuloEmprestimo(void);
void telaModuloRelatorio(void);
void ModuloLivro(void);
void ModuloCliente(void);
void ModuloEmprestimo(void);
void ModuloRelatorio(void);

/////
// Programa principal
int main(void) 
{
    char opcao;
	do {
		opcao = telaPrincipal();
		switch(opcao) {
			case '1': 	ModuloLivro();
						break;
			case '2': 	ModuloCliente();
						break;
			case '3': 	ModuloEmprestimo();
						break;
			case '4': 	ModuloRelatorio();
						break;
			
		} 		
	} while (opcao != '0');

    return 0;
}

void ModuloLivro(void) {
	char opçao;
	do {
		ModuloLivro();
		switch(opçao) {
			case 'a': 	CadastrarLivro();
						       break;
			case 'b': 	PesquisarLivro();
						       break;
			case 'c': 	  AlterarLivro();
						        break;
			case 'd': 	 ExcluirLivro();
						        break;
            
			
		} 		
	} while (opçao != '0');
	return 0;    
}


void ModuloCliente(void) {
	char opçao;
	do {
		ModuloCliente();
		switch(opçao) {
			case '1': 	CadastrarCLiente();
						       break;
			case '2': 	PesquisarCliente();
						       break;
			case '3': 	   EditarCliente();
						        break;
			case '4': 	 ExcluirCliente();
						        break;
            
			
		} 		
	} while (opçao != '0');
	return 0;    
}

void ModuloEmprestimo(void) {
	char opçao;
	do {
		ModuloEmprestimo();
		switch(opçao) {
			case '1': 	CadastrarEmprestimo();
						       break;
			case '2': 	PesquisarEmprestimo();
						       break;
			case '3': 	   EditarLivro();
						        break;
			case '4': 	 DevolverLivro();
						        break;
            
			
		} 		
	} while (opçao != '0');
	return 0;  

void ModuloRelatorio(void); 
{
	char opçao;
	do {
		ModuloEmprestimo();
		switch(opçao) {
			case '1': 	LivroCadastrado();
						       break;
			case '2': 	LivroEmprestado();
						       break;
			case '3': 	ClienteAtivo();
						        break;
			case '4': 	 Emprestimo();
						        break;
            case '5':    EmprestimoEmAtraso();
                                break;
			
		} 		
	} while (opçao != '0');
	return 0;  


/////
// Funções

void telaSobre(void);
{

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

char telaPrincipal(void);
{
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
    printf("///           Escolha a opção desejada: ");                                   
	scanf("%c", &op);
	getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    return op;
}



void telaEquipe(void); 
{
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



 void telaModuloLivro(void);
 {
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
    //printf("///           Escolha a opção desejada: ");
	//scanf("%c", &op);
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    
}



void telaModuloCliente(void);
{
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
    //scanf("%c", &op);
	//getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    //return op
}



void telaModuloEmprestimo(void);
{
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
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}



void telaModuloRelatorio(void); 
{
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
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

char op;
void ModuloLivro(void);
{   
    int cadastrar;
    int pesquisar;
    int alterar;
    int excluir;
    int sair;
    printf("Cadastrar Livro:\n");
    scanf ("%d", &cadastrar);
    printf("Pesquisar Livro:\n");
    scanf ("%d", &pesquisar);
    printf("Alterar Livro:\n");
    scanf ("%d", &alterar);
    printf("Excluir Livro:\n");
    scanf ("%d", &excluir);
    printf("Sair\n");
    scanf ("%d", &sair);
    scanf("%c", &op);
	getchar();
    return op;
    
}

char op;
void ModuloCliente(void);
{
    int cadastrar;
    int pesquisar;
    int editar;
    int excluir;
    int sair;
    printf("Cadastrar Cliente:\n");
    scanf ("%d", &cadastrar);
    printf("Pesquisar Cliente:\n");
    scanf ("%d", &pesquisar);
    printf("Editar Cliente:\n");
    scanf ("%d", &editar);
    printf("Excluir Cliente:\n");
    scanf ("%d", &excluir);
    printf("Sair\n");
    scanf ("%d", &sair);
    scanf("%c", &op);
	getchar();
    return op;
    
}

char op;
void ModuloEmprestimo(void);
{
    int cadastrar;
    int pesquisar;
    int editar;
    int devolver;
    int sair;
    printf("Cadastrar Empréstimo:\n");
    scanf ("%d", &cadastrar);
    printf("Pesquisar Livro:\n");
    scanf ("%d", &pesquisar);
    printf("Editar Livro:\n");
    scanf ("%d", &editar);
    printf("Devolver Livro:\n");
    scanf ("%d", &devolver);
    printf("Sair\n");
    scanf ("%d", &sair);
    scanf("%c", &op);
	getchar();
    return op;
    
}

char op;
void ModuloRelatorio(void);
{
    int cadastrado;
    int emprestado;
    int ativo;
    int emprestimo;
    int emp_atraso;
    int sair;
    printf("Relatorio de Livros Cadastrados:\n");
    scanf ("%d", &cadastrado);
    printf("Relatorio de Livros Emprestados:\n");
    scanf ("%d", &emprestado);
    printf("Relatorio de Clientes Ativos:\n");
    scanf ("%d", &ativo);
    printf("Relatorio de Emprestimos:\n");
    scanf ("%d", &emprestimo);
    printf("Relatorio dos Emprestimos em Atraso:\n");
    scanf ("%d", &emp_atraso);
    printf("Sair\n");
    scanf ("%d", &sair);
    scanf("%c", &op);
	getchar();
    return op;
}

}