#include <stdio.h>
#include <stdlib.h>
#include "Game.h"

int main(int argc, char *argv[]) {
    int disciplines[] = DEFAULT_DISCIPLINES;
    int dice[] = DEFAULT_DICE;
    Game g = newGame(discipline, dice);
    assert(g != NULL);

    // at the start, game state is TERRA_NULLIUS so it's nobody's turn
    assert(getTurnNumber(g) == -1);

    throwDice(g, 11);

    // turn number is now 1. we have rolled 11
    // player A has a campus at 11 which generates 1 MTV
    assert(getStudents(g, UNI_A, STUDENT_MTV) == 2);

    printf("All tests passed, you are awesome!\n");
    return EXIT_SUCCESS;
}
