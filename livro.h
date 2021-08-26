///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////

/////
// Assinatura das funções

char telaModuloLivro(void);
void ModuloLivro(void);


typedef struct livro Livro;

struct livro        {
     char titulo [51];
     char autor[51];
     char subtitulo [51];
     char editora [21];
     char ano [12];


};




// Assinatura das funções
char telaModuloLivro(void);
void ModuloLivro(void);
void cadastrarLivro(void);
Livro* telaCadastrarLivro(void);
