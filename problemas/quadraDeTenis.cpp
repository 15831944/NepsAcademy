/*

Quadra de tênis
(OBI2012, Fase 2, Nível Júnior)

Uma quadra de tênis tem a forma de um retângulo, cujos lados medem 36 pés por 78 pés, o que corresponde a um retângulo de 432 polegadas por 936 polegadas. No último Grand Slam da Austrália, Rafael Nadal perdeu para Novak Djoković em um dos mais belos jogos de tênis dos últimos tempos. Muitas vezes, um movimento é tão rápido, e a bola está tão perto da borda da quadra, que o juiz pode tomar uma decisão que pode ser contestada por um dos jogadores. Para fazer isso, há um recurso especial, que usa a imagem gravada do jogo para decidir se a bola estava dentro ou fora da metade da quadra correspondente a um dos jogadores. Considere que a meia quadra de Rafael Nadal corresponde a um retângulo no qual dois vértices têm coordenadas (0,0) e (432, 468), onde todos os números estão em polegadas. Você deve escrever um programa para, dadas as coordenadas (X, Y) do ponto de contato da bola com o chão, determine se uma bola bate no chão dentro ou fora da meia quadra. Observe que se a bola atingir o divisor, ela será considerada uma bola dentro.

Entrada

A entrada é uma única linha, que contém dois números inteiros X e Y , que correspondem ao ponto 
( X , Y ) em que a bola tocou o chão.

Saída

Seu programa deve imprimir uma única linha, dizendo "fora" se a bola estiver fora da quadra e "dentro" se estiver dentro.

Restrições

-500 ≤ X, Y ≤ 500

Entrada de amostra	    Saída de amostra
-2 200	                fora
432 10	                dentro

*/

#include <iostream>

using namespace std;

int main() {

    int x ,y;

    cin >> x >> y;

    if (x >= 0 and x <= 432 and y >= 0 and y <= 468) {
        cout <<"dentro";
    } else {
        cout <<"fora";
    }

    // só fazer o desenho da semi-quadra com largura(x) de 0 até 432 e comprimento(y) de 0 a 468
}
