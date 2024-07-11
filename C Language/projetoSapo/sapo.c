#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  // For Windows, use conio.h for getch() function
#include <ctype.h>  // For toupper() function
#include <time.h>
#include <windows.h>


#define BOARD_ROWS 10
#define BOARD_COLS 10

// Define player structure
typedef struct {
    char value;
    char frogTrapped;
    char frogAlligator;
    char frogArrived;
    int frogQtyArrived;
    int playerGameOver;
} Player;

// Global variables
Player player1, player2;

int gameOver = 0;
int currentPlayer = 1;
char gameBoard[BOARD_ROWS][BOARD_COLS];

// Main Functions
void initializeGame();
void createAlligatorsLake();
void roundAndFrogSelection(int playerTurn, char playerValue);
void renderGame();
void frogMoviment(int frogRowPos, int frogColPos);

// Validate Functions
int validateTrappedFrog(char inversePlayerValue, int selectedRow, int selectedCol);
int validateArrivedFrog(int playerTurn, int selectedRow);
void validateWinner();
int validateGameOver();

// Support Functions
void shiftPlayerTurn();


int main() {
    // Define values for each status of frogs
    player1.value = 'A';
    player1.frogAlligator = 'S';
    player1.frogTrapped = 'D';
    player1.frogArrived = 'F';
    player1.playerGameOver = 0;

    player2.value = 'V';
    player2.frogAlligator = 'B';
    player1.frogTrapped = 'N';
    player2.frogArrived = 'M';
    player2.playerGameOver = 0;

    initializeGame();
    createAlligatorsLake();
    renderGame();

    while (gameOver == 0) {
        char value = (currentPlayer == 1) ? player1.value : player2.value;
        roundAndFrogSelection(currentPlayer, value);
        renderGame();
    }

    validateWinner();
    return 0;
}


void initializeGame() {
    // Initialize players' positions and other game variables
    int frogsQTYForEachPlayer = 2;

    // Initialize game board with empty spaces
    for (int i = 0; i < BOARD_ROWS; i++) {
        for (int j = 0; j < BOARD_COLS; j++) {
            gameBoard[i][j] = ' ';
        }
    }

    // Place frogs for player 1 (Azul - 'A')
    for (int i = 0; i < frogsQTYForEachPlayer; i++) {
        gameBoard[0][i * 2] = player1.value;
    }

    // Place frogs for player 2 (Vermelho - 'V')
    for (int i = 0; i < frogsQTYForEachPlayer; i++) {
        gameBoard[9][i * 2] = player2.value;
    }

    printf("Bem vindo ao jogo dos Sapos!\n");
    printf("Esse jogo eh para dois jogadores. Cada jogador so podera mover o sapo uma vez por rodada.\n");
    printf("O sapos sao representados pela letra 'A' para Jogador 1 e 'V' para o Jogador 2.\n");
    printf("Vence o jogador que conseguir atravessar mais sapos para o outro lado do rio.\n");
    printf("Cuidado! Ha alguns crocodilos em certos lugares...\n");
    printf("Se seu sapo encostar em um sapo adversario, ele ficara preso.\n");
    printf("Bom jogo!!!");

    printf("\n-- REGRA DAS CORES --\n");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // Print RED RULE to frogs in a Alligators Lake
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED); // Red color
    printf("- SAPO no lago dos crocodilos\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset color
    // Print ORANGE RULE to frogs Trapped by other FROG
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN); // Orange color
    printf("- SAPO preso por um sapo adversario em casas adjacentes\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset color
    // Print GREEN RULE to frogs in a Finish/Arrived Line
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN); // Green color
    printf("- SAPO na linha de chegada\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset color
}


void createAlligatorsLake() {
    // Number of alligators lake to be created
    int numRandomNumbers = 8;

    // Seed the random number generator using the current time
    srand(time(NULL));

    for (int r = 0; r < numRandomNumbers; r++) {
        int randomCol = (rand() % (1 - 8 + 1)) + 1;
        int randomRow = (rand() % (1 - 8 + 1)) + 1;
        // printf("\n%d %d\n", randomRow, randomCol);
        gameBoard[randomRow][randomCol] = 'X';
    }
}


void roundAndFrogSelection(int playerTurn, char playerValue) {
    
    // Update game logic, handle input for both players, etc.
    // Update FROG positions based on input
    // Check for game over conditions
    int selectedRow;
    int selectedCol;

    while (1) {
        // Get the move direction from the current player
        printf("\n -- turno do Jogador %d ('%c') -- \n", playerTurn, playerValue);
        printf("Insira a LINHA para o sapo movimentar-se: ");
        if (scanf("%d", &selectedRow) != 1 || selectedRow < 0 || selectedRow > 9) {
            printf("Invalido. Insira um numero entre 0 e 9.\n");
            fflush(stdin);  // Clear input buffer
            continue;
        }

        printf("Insira a COLUNA para o sapo movimentar-se: ");
        if (scanf("%d", &selectedCol) != 1 || selectedCol < 0 || selectedCol > 9) {
            printf("Invalido. Insira um numero entre 0 e 9.\n");
            fflush(stdin);  // Clear input buffer
            continue;
        }

        break;
    }

    // printf("EndGame (Y => 1/ N => 0): ");
    // int endgame = 0;
    // scanf("%d", &endgame);

    // gameOver = endgame;

    if (playerTurn == 1) {
        if (gameBoard[selectedRow][selectedCol] == player2.value) {
            printf("\nEsse SAPO 🐸 nao eh seu! 😡\n");
        } 
        else if (gameBoard[selectedRow][selectedCol] == player1.frogAlligator) {
            printf("\nSeu SAPO 🐸 esta preso no lago dos crocodilos!\n");
        } 
        else if (gameBoard[selectedRow][selectedCol] == player1.frogTrapped) {
            printf("\nSeu SAPO 🐸 esta preso com uma sapo adversario!\n");
        } 
        else if (gameBoard[selectedRow][selectedCol] == player1.frogArrived) {
            printf("\nSeu SAPO 🐸 ja esta na linha de chegada!! 😍\n");
        } 
        else if (gameBoard[selectedRow][selectedCol] != player1.value) {
            printf("\nNao eh uma posicao valida para o sapo! 🚫\n");
        } 
        else {
            frogMoviment(selectedRow, selectedCol);
        }
    } 
    else {
        if (gameBoard[selectedRow][selectedCol] == player1.value) {
            printf("\nEsse SAPO 🐸 nao eh seu! 😡\n");
        } 
        else if (gameBoard[selectedRow][selectedCol] == player2.frogAlligator) {
            printf("\nSeu SAPO 🐸 esta preso no lago dos crocodilos!\n");
        } 
        else if (gameBoard[selectedRow][selectedCol] == player2.frogTrapped) {
            printf("\nSeu SAPO 🐸 esta preso com uma sapo adversario!\n");
        } 
        else if (gameBoard[selectedRow][selectedCol] == player2.frogArrived) {
            printf("\nSeu SAPO 🐸 ja esta na linha de chegada!! 😍\n");
        } 
        else if (gameBoard[selectedRow][selectedCol] != player2.value) {
            printf("\nNao eh uma posicao valida para o sapo! 🚫\n");
        } 
        else {
            frogMoviment(selectedRow, selectedCol);
        }
    }


    // Perform the movement based on the direction
    // Update the game board and frog positions accordingly
    // Repeat the same steps for Player 2
}


void frogMoviment(int frogRowPos, int frogColPos) {
    // Handle all frog movements and rules
    printf("Insira a direção:\n- W (Cima)\n- S (Baixo)\n- A (Esquerda)\n- D (Direita)\n- Q/E (Diagonais Superiores)\n- Z/C (Diagonais Inferiores):\n");
    char mov;
    scanf(" %c", &mov);
    mov = toupper(mov);

    int newRowPos = frogRowPos;
    int newColPos = frogColPos;

    if (mov == 'W' && frogRowPos > 0) {
        newRowPos--;
    } else if (mov == 'S' && frogRowPos < BOARD_ROWS - 1) {
        newRowPos++;
    } else if (mov == 'A' && frogColPos > 0) {
        newColPos--;
    } else if (mov == 'D' && frogColPos < BOARD_COLS - 1) {
        newColPos++;
    } else if (mov == 'Q' && frogRowPos > 0 && frogColPos > 0) {
        newRowPos--;
        newColPos--;
    } else if (mov == 'E' && frogRowPos > 0 && frogColPos < BOARD_COLS - 1) {
        newRowPos--;
        newColPos++;
    } else if (mov == 'Z' && frogRowPos < BOARD_ROWS - 1 && frogColPos > 0) {
        newRowPos++;
        newColPos--;
    } else if (mov == 'C' && frogRowPos < BOARD_ROWS - 1 && frogColPos < BOARD_COLS - 1) {
        newRowPos++;
        newColPos++;
    } else {
        printf("Invalid movement!\n");
        return;
    }

    // Creating variables based in currentPlayer
    char pValue, pTrapAlligator, pTraped, pArrived; 
    if (currentPlayer == 1) {
        pValue = player1.value;
        pTrapAlligator = player1.frogAlligator;
        pTraped = player1.frogTrapped;
        pArrived = player1.frogArrived;
    } else {
        pValue = player2.value;
        pTrapAlligator = player2.frogAlligator;
        pTraped = player2.frogTrapped;
        pArrived = player2.frogArrived;
    } 

    // Rules to Move the FROG and Update NEW and OLD values in Matriz Array
    if (gameBoard[newRowPos][newColPos] == pValue) {
        printf("\nVoce ja tem um sapo 🐸 nesta posição... 😵‍💫 \n");
        frogMoviment(frogRowPos, frogColPos);
    } 
    else if (gameBoard[newRowPos][newColPos] == 'X') {
        printf("\nSeu SAPO 🐸 esta preso no lago dos crocodilos 🐊 \n");
        gameBoard[newRowPos][newColPos] = pTrapAlligator; // Update NEW Value
        gameBoard[frogRowPos][frogColPos] = ' '; // Update OLD Value
        validateGameOver();
    } 
    else if (validateTrappedFrog((currentPlayer == 1 ? player2.value : player1.value), newRowPos, newColPos) == 0) {
        printf("\nSeu SAPO 🐸 esta preso por um sapo adversario 😵!\n");
        gameBoard[newRowPos][newColPos] = pTraped; // Update NEW Value
        gameBoard[frogRowPos][frogColPos] = ' '; // Update OLD Value
        validateGameOver();
    } 
    else if (validateArrivedFrog((currentPlayer == 1) ? 1 : 2, newRowPos) == 0) {
        printf("\nParabens! Seu SAPO 🐸 Chegou na linha de chegada! 😍\n");
        gameBoard[newRowPos][newColPos] = pArrived; // Update NEW Value
        gameBoard[frogRowPos][frogColPos] = ' '; // Update OLD Value
        validateGameOver();
    } 
    else {
        gameBoard[newRowPos][newColPos] = pValue; // Update NEW Value
        gameBoard[frogRowPos][frogColPos] = ' '; // Update OLD Value
        validateGameOver();
    }
}


void renderGame() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // Render the current game state to the screen
    // Print column numbers
    printf("\n\n");
    printf("   ");

    for (int j = 0; j < BOARD_COLS; j++) {
        printf(" %2d ", j);
    }

    printf("\n");

    for (int i = 0; i < BOARD_ROWS; i++) {
        // Print row number
        printf("%2d ", i);

        for (int j = 0; j < BOARD_COLS; j++) {
            // printf("%c", gameBoard[i][j]);
            if (gameBoard[i][j] == player1.value) {
                printf("| %c ", player1.value);
            } else if (gameBoard[i][j] == player2.value) {
                printf("| %c ", player2.value);
            } 
            // uncomment just if you want to see the Alligators Lake positions
            else if (gameOver == 1 ) {    
                if (gameBoard[i][j] == 'X') {
                    printf("| X ");
                }
            }
            // Print RED if the frog is in a Alligators Lake
            else if (gameBoard[i][j] == player1.frogAlligator) {
                printf("| ", player1.value);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED); // Red color
                printf("%c ", player1.value);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset color
            } 
            else if (gameBoard[i][j] == player2.frogAlligator) {
                printf("| ", player2.value);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED); // Red color
                printf("%c ", player2.value);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset color
            }
            // Print ORANGE if the FROG is Trapped by other FROG
            else if (gameBoard[i][j] == player1.frogTrapped) {
                printf("| ", player1.value);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN); // Orange color
                printf("%c ", player1.value);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset color
            } 
            else if (gameBoard[i][j] == player2.frogTrapped) {
                printf("| ", player2.value);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN); // Orange color
                printf("%c ", player2.value);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset color
            } 
            // Print GREEN if the FROG is on Finish/Arrived Line
            else if (gameBoard[i][j] == player1.frogArrived) {
                printf("| ", player1.value);
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN); // Green color
                printf("%c ", player1.value);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset color
            } 
            else if (gameBoard[i][j] == player2.frogArrived) {
                printf("| ", player2.value);
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN); // Green color
                printf("%c ", player2.value);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset color
            } 
            else {
                printf("|   ");
            }
        }

        printf("|\n");
    }

    printf("\n\n");
}


int validateTrappedFrog(char inversePlayerValue, int selectedRow, int selectedCol) {
    char pTraped = (inversePlayerValue == player1.value) ? player1.frogTrapped : player2.frogTrapped;

    int possibleMoves[8][2] = {
        {1, 0}, {-1, 0}, {0, 1}, {0, -1},
        {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
    };

    for (int i = 0; i < 8; i++) {
        int newRow = selectedRow + possibleMoves[i][0];
        int newCol = selectedCol + possibleMoves[i][1];

        if (newRow >= 0 && newRow < BOARD_ROWS && newCol >= 0 && newCol < BOARD_COLS &&
            gameBoard[newRow][newCol] == inversePlayerValue) {
            gameBoard[newRow][newCol] = pTraped;
            return 0;
        }
    }

    return 1;
}


int validateArrivedFrog(int playerTurn, int selectedRow) {
    if (playerTurn == 1) {
        if (selectedRow == 9) {
            return 0;
        }
    } else if (playerTurn == 2) {
        if (selectedRow == 0) {
            return 0;
        }
    }

    return 1;
}


void validateWinner() {

    // Count qty of frogs on final line
    for (int i = 0; i < BOARD_ROWS; i++) {
        for (int j = 0; j < BOARD_COLS; j++) {
            if (gameBoard[i][j] == player1.frogArrived) {
                player1.frogQtyArrived++;
            }
            if (gameBoard[i][j] == player2.frogArrived) {
                player2.frogQtyArrived++;
            }
        }
    }

    renderGame ();

    if (player1.frogQtyArrived > player2.frogQtyArrived) {
        printf("\nJogador 1 VENCEU!! Com %d SAPOS 🐸 na linha de chegada!\n", player1.frogQtyArrived);
    } else if (player2.frogQtyArrived > player1.frogQtyArrived) {
        printf("\nJogador 2 VENCEU!! Com %d SAPOS 🐸 na linha de chegada!\n", player2.frogQtyArrived);
    } else {
        printf("\nEMPATE!! Ambos jogadores tiveram a mesma quantidade de sapos na linha de chegada!\n");
    }

    printf("\nO SAPO 🐸 do Jogador 1 chegou na linha de chegada => %d\n", player1.frogQtyArrived);
    printf("\nO SAPO 🐸 do Jogador 2 chegou na linha de chegada => %d\n", player2.frogQtyArrived);
}


int validateGameOver() {
    int countFrogsP1, countFrogsP2 = 0;
    for (int i = 0; i < BOARD_ROWS; i++) {
        for (int j = 0; j < BOARD_COLS; j++) {
            if (gameBoard[i][j] == player1.value) {
                countFrogsP1++;
            }
        }
    }

    if (countFrogsP1 == 0) {
        player1.playerGameOver = 1;
    }

    for (int i = 0; i < BOARD_ROWS; i++) {
        for (int j = 0; j < BOARD_COLS; j++) {
            if (gameBoard[i][j] == player2.value) {
                countFrogsP2++;
            }
        }
    }
    
    if (countFrogsP2 == 0) {
        player2.playerGameOver = 1;
    }

    if (countFrogsP1 == 0 && countFrogsP2 == 0) {
        gameOver = 1;
    }

    shiftPlayerTurn();
}


void shiftPlayerTurn() {
    if (player1.playerGameOver == 0 && player2.playerGameOver == 0) {
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    } 
    else if (player1.playerGameOver == 0 && player2.playerGameOver == 1) {
        currentPlayer = 1;
    } 
    else if (player1.playerGameOver == 1 && player2.playerGameOver == 0) {
        currentPlayer = 2;
    }
}