#include <stdio.h>
#include "valida.h"


 int validaCliente(char* cliente){
    int tam;
    tam = strlen (cliente);
    if (tam == 0 ){
        return 0;
}

 for (int i = 0; i < tam; i++ ) {
    if (cliente[i] >= 'A' && cliente [i] <= 'Z') {
        continue;
    } else if (cliente[i] >= 'a' && cliente[i] <= 'z') {
        continue;
    } else if  (cliente[i] == ' ') {
        continue;
    } else {
        return 0;
    }
    return 1;

} 

