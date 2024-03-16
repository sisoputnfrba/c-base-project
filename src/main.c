#include <stdlib.h>
#include <stdio.h>
#include <commons/string.h>

int main(int argc, char* argv[]) {
    char *nombre = "Operativos";
    if (argc >= 2) {
        nombre = argv[1];
    }

    char *saludo = string_from_format("Hola, %s!!", nombre);
    puts(saludo);
    free(saludo);

    return 0;
}
