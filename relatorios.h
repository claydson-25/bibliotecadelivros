///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////

char telaModuloCliente(void);
char telaModuloRelatorio(void);
void ModuloRelatorio(void);



void relatorioLivrosCadastrados( char* isbn);
void relatorioLivrosEmprestados(char* isbn);
void relatorioClientesAtivos(char* cpf);
void relatorioLivrosEmprestimo(char* isbn);
void relatorioLivroEmprestimoAtrasado(char* cpf);


char* telaRelatorioLivrosCadastrados(void);
char* telaRelatorioEmprestimo(void);
char* telaRelatorioLivroEmprestimo(void);
char* telaRelatorioClientesAtivos(void);
char* telaRelatorioEmprestimosEmAtraso(void);

void relatLivroCadastrado(char*);
void relatLivroEmprestado(char*);
void relatClienteAtivo(char*);
void relatEmprestimo(char*);
void relatEmprestimoEmAtraso(char*);

void relatCliente(char*);
void relatEmprestimo(char*);
void relatLivro(char*);

void relatDeTodosOsLivrosCadastrados(char* titulos);
void relatDeTodososClientes(char* clientes);