///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////


char telaModuloRelatorio(void);
void ModuloRelatorio(void);


void relatorioLivrosCadastrados(char* isbn);
void relatorioLivrosEmprestados(char* isbn);
void relatorioClientesAtivos(char* cpf);
void relatorioLivrosEmprestimo(char* isbn);
void relatorioLivrosEmprestimoAtrasado(char* isbn);


char* telaRelatorioLivrosCadastrados(void);
char* telaRelatorioEmprestimo(void);
char* telaRelatorioLivro(void);
char* telaRelatorioClientesAtivos(void);
char* telaRelatorioEmprestimosemAtraso(void);



void relatCliente(char*);
void relatEmprestimo(char*);
void relatLivro(char*);

