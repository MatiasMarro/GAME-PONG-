#include <stdio.h>
#include "libgame.h"

int main(){
    OcultaCursor();
    Color(ROJO);
    inicia_libgame();
    Color(AMARILLO);
    gotoxy(22,8); printf("Modificado por Matias Marro");
    Color(AZUL);
    gotoxy(26,15); printf("https://github.com/MatiasMarro");
    Color(VERDE2);
    gotoxy(22,13); printf("PONER REPOSITORIO AQUI");
    Color(MORADO);
    pintar_marco();
    //pausa();
    pausa(900);
}
