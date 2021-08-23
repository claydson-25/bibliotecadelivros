///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////

typedef struct emprestimo Emprestimo;

struct emprestimo {
     char autor [51];
     char titulo [51];
     char subtitulo [51];
     char editora [36];
     char isbn  [20];
     char ano [5];
     
};



/////
// Assinatura das funções
char telaModuloEmprestimo(void);
void ModuloEmprestimo(void);
void cadastrarEmprestimo(void);
Emprestimo* telaCadastrarEmprestimo(void);


