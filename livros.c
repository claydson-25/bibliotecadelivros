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
void telaPrincipal(void); 
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
    telaSobre();
    telaPrincipal();
    telaEquipe();
    telaModuloLivro();
    telaModuloCliente();
    telaModuloEmprestimo();
    telaModuloRelatorio();
    ModuloLivro();
    ModuloCliente();
    ModuloEmprestimo();
    ModuloRelatorio();

    return 0;
}

/////
// Funções

void telaSobre(void) 
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

void telaPrincipal(void) 
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
    printf("///            1. Módulo Livro                                              ///\n");
    printf("///            2. Módulo Cliente                                            ///\n");
    printf("///            3. Módulo Empréstimo                                         ///\n");
    printf("///            4. Módulo Relatório                                          ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}



void telaEquipe(void) 
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



void telaModuloLivro(void)
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
    printf("///                       a. Cadastrar um Livro                             ///\n");
    printf("///                       b. Pesquisar um Livro                             ///\n");
    printf("///                       c. Alterar um Livro                               ///\n");
    printf("///                       d. Excluir um Livro                               ///\n");
    printf("///                       0. Sair                                           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}



void telaModuloCliente(void) 
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
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}



void telaModuloEmprestimo(void) 
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



void telaModuloRelatorio(void) 
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


void ModuloLivro(void)
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
    
}


void ModuloCliente(void)
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
    
}


void ModuloEmprestimo(void)
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
    
    
}


void ModuloRelatorio(void)
{
    int cadastrado;
    int emprestado;
    int ativo;
    //int emprestimo;
    int atraso;
    int sair;
    printf("Relatorio de Livro Cadastrado:\n");
    scanf ("%d", &cadastrado);
    printf("Relatorio de Livro Emprestado:\n");
    scanf ("%d", &emprestado);
    printf("Relatorio de Cliente Ativo:\n");
    scanf ("%d", &ativo);
    printf("Relatorio de Emprestimo em Atraso:\n");
    scanf ("%d", &atraso);
    printf("Sair");
    scanf ("%d", &sair);
    
}


void ModuloLivro(void)
{
    char opçao;
    do{
        opçao= ModuloLivro();
        switch(opçao){
                case '1': CadastrarLivro   ();
                                    break;
                case '2': PesquisarLivro   ();
                                    break;
                case '3': AlterarLivro     ();
                                    break;
                case '4': ExcluirLivro     ();
                                    break;
                case '0': Sair             ();
                                    break;
        }

    } while (opçao !=0);
    printf('The End\n');
}

void CadastrarLivro(void)
{
    Livro* liv;

    liv= telaCadastrarLivro();
    gravarLivro(liv);
    free(liv);

}

void PesquisarLivro(void)
{
    Livro* liv;
    char*  isbn;
    
    isbn= telaPesquisarLivro()
    liv=  buscarLivro(isbn);
    exibirLivro(liv);
    free(Isbn);
    free(liv);

}

void AlterarLivro(void)
{
    Livro* liv;

    liv= telaAlterarLivro();
    gravarAlteraçao(liv);
    free(liv);
}

void ExcluirLivro(void)
{   Livro* liv;

    liv= telaExcluirLivro();
    gravarExclusao(liv);
    free(liv);
}

void ModuloCliente(void)
{
    char opçao;
    do{
        opçao= ModuloCliente();
        switch(opçao){
                case '1': CadastrarCLiente  ();
                                    break;
                case '2': PesquisarCliente  ();
                                    break;
                case '3': EditarCliente     ();
                                     break;
                case '4': ExcluirCLiente    ();
                                    break;
                case '0': Sair              ();
                                    break;
        }

    } while (opçao !=0);
    printf('The End/n');
}



void CadastrarCliente(void)
{
    Cliente* clien;

    clien= telaCadastrarCliente();
    gravarCliente(clien);
    free(clien);

}

void PesquisarCliente(void)
{
    Cliente* clien;
    //char*  isbn;
    
    //isbn= telaPesquisarLivro()
    encontrarclien(clien);
    //free(Isbn);
    free(clien);

}

void EditarCliente(void)
{
    Cliente* clien;

    clien= telaEditarCliente();
    gravarAlteraçao(clien);
    free(clien);
}

void ExcluirCliente(void)
{   Cliente* clien;

    clien= telaExcluirCliente();
    gravarExclusao(clien);
    free(clien);
}

void ModuloEmprestimo(void)
{
    char opçao;
    do{
        opçao= ModuloEmprestimo();
        switch(opçao){
                case '1': CadastrarEmprestimo  ();
                                        break;
                case '2': PesquisarEmprestimo  ();
                                        break;
                case '3': EditarEmprestimo     ();
                                        break;
                case '4': DevolverEmprestimo   ();
                                        break;
                case '0': Sair                 ();
                                        break;
        }

    } while (opçao !=0);
    printf('The End\n');
}

void CadastrarEmprestimo(void)
{
    Emprest* emp;

    emp= telaCadastrarEmprestimo();
    gravarEmprestimo(emp);
    free(emp);

}

void PesquisarEmprestimo(void)
{
    Emprest* emp;
    
    emp= telaPesquisarEmprestimo();
    exibirEmprestimo(emp);
    free(emp);

}

void EditarEmprestimo(void)
{
    Emprest* emp;

    emp= telaEmprestimo();
    gravarAlteraçao(emp);
    free(emp);
}

void ExcluirEmprestimo(void)
{   
    Emprest* emp;

    emp= telaExcluirEmprestimo();
    gravarExclusao(emp);
    free(liv);
}

void ModuloRelatorio(void)
{
    char opçao;
    do{
        opçao= ModuloRelatorio();
        switch(opçao){
                case '1': RelatoriodeLivrosCadastrados    ();
                                               break;
                case '2': RelatoriodeLivrosEmprestados    ();
                                               break;
                case '3': RelatoriodeClientesAtivos       ();
                                               break;
                case '4': RelatoriodeDeEmprestimos        ();
                                               break;
                case '5': RelatoriodeDeEmprestimosemAtraso();
                                               break; 
                case '0': Sair                            ();
                                               break;
        }

    } while (opçao !=0);
    printf('The End\n');
}

void RelatoriodeLivrosCadastrado(void)
{
    Livros* cadast;

    cadast= teladeLivroCadastrado();
    mostrarcadastro(cadast);
    free(cadast);

}

void RelatoriodeLivrosEmprestados(void)
{
    Livros* cadast;
    
    cadast= teladelivrosEmprestados();
    mostraremprestimo(cadast);
    free(cadast);

}

void RelatoriodeClientesAtivos(void)
{
    Livro* cadast;

    cadast= teladeClientesAtivos();
    mostrarclientes(cadast);
    free(cadast);
}

void RelatoriodeEmprestimo(void)
{   Livro* cadast;

    cadast= telaRelatoriodeEmprestimo();
    mostraremprestimo(cadast);
    free(cadast);
}

void RelatoriodeEmprestimoemAtraso(void)
{   Livro* cadast;

    cadast= telaRelatoriodeEmprestimoemAtraso();
    mostraremprestimoematraso(cadast);
    free(cadast);
}


 