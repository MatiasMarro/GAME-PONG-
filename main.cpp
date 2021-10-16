#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "pong.h"
#include "libgame.h"



int main(){
    int cont = 0, opcionJuego;

    OcultaCursor();
    pintar_marco();

    MENU M;
    M.pintarPortada(opcionJuego);

    JUGADOR A(4,13);  A.pintar();
    JUGADOR B(75,13); B.pintar();

    PELOTA P(38,14,1,1);


    char tecla;



    while(1){

        if(kbhit()){
            A.borrar(); B.borrar();
            tecla = getch();
            if(tecla == 'q' && A.RY() > 5) A.Y(-1); else if(tecla == 'a' && A.RY() < 21) A.Y(1);
            if(opcionJuego == '1'){
                if(tecla == 'o' && B.RY() > 5) B.Y(-1); else if(tecla == 'l' && B.RY() < 21) B.Y(1);
            }
            A.pintar(); B.pintar();
        }

        if(opcionJuego == '2' &&  !cont)B.moverCPU(P.PX(),P.PY(),P.DX());
        if(!cont++) P.mover(A,B); // Con los condicionales hacemos que la pelota se mueva mas lento
        if(cont > 2) cont = 0;    // Con ese condicional  disminuyendo el numero entero aumentamos la velocidad
        pausa(10);

    }
    return 0;
}
