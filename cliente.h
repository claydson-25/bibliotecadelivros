///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               Projeto Sistema de  Biblioteca de Livros                  ///
///////////////////////////////////////////////////////////////////////////////


typedef struct cliente Cliente;

struct cliente {
     char nome [51];
     char cpf [12];
     char email [41];
     char telefone [12];

};




// Assinatura das funções
char telaModuloCliente(void);
void ModuloCliente(void);
void cadastrarCliente(void);
Cliente* telaCadastrarCliente(void);



