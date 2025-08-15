#include <fstream>
using namespace std;

// board[i][j] – matricea care re?ine valoarea pieselor plasate pe tabl?
// colHeight[j] – în?l?imea curent? a turnului din coloana j
int board[1001][9];
int colHeight[9];

int main() {
    ifstream input("tetris.in");
    ofstream output("tetris.out");

    int maxRows, numCols, numPieces;
    input >> maxRows >> numCols >> numPieces;

    int maxTowerHeightReached = 0;  // cea mai mare în?l?ime atins? vreodat? a unui turn
    int piecesProcessed = 0;        // num?rul de piese prelucrate
    int freeSpaces = maxRows * numCols;   // spa?iile libere pe tabl?

    // Se proceseaz? fiecare pies? pân? se termin? lista sau tabloul devine plin
    while (piecesProcessed < numPieces && freeSpaces > 0) {
        int currentPieceValue;
        input >> currentPieceValue;

        int minColHeight = 1001;    // pentru alegerea turnului cel mai scund (dac? nu exist? potrivire)
        int maxMatchingCount = 0;   // num?rul maxim de piese consecutive cu valoare egal? cu piesa curent?
        int chosenColMatching = -1; // coloana selectat? pe baza potrivirii
        int chosenColMin = -1;      // coloana selectat? pe baza în?l?imii minime

        // Se scaneaz? coloanele de la stânga la dreapta
        for (int col = 0; col < numCols && maxMatchingCount < 2; col++) {
            if (colHeight[col] < maxRows) { // dac? coloana nu e plin?
                int matchingCount = 0;
                // Se num?r? câte piese consecutive de la vârf au valoarea egal? cu piesa curent?
                while (colHeight[col] > matchingCount &&
                       board[colHeight[col] - matchingCount - 1][col] == currentPieceValue)
                {
                    matchingCount++;
                }
                // Actualizare pentru cea mai bun? potrivire
                if (matchingCount > maxMatchingCount) {
                    maxMatchingCount = matchingCount;
                    chosenColMatching = col;
                }
                // Dac? nu s-a g?sit nicio potrivire, se caut? coloana cu în?l?imea minim?
                else if (maxMatchingCount == 0 && colHeight[col] < minColHeight) {
                    minColHeight = colHeight[col];
                    chosenColMin = col;
                }
            }
        }

        // Se selecteaz? coloana în care se va plasa piesa
        int selectedCol = (maxMatchingCount > 0) ? chosenColMatching : chosenColMin;

        // Se actualizeaz? maximul turnurilor dac? se va ad?uga o pies? peste în?l?imea curent?
        if (colHeight[selectedCol] + 1 > maxTowerHeightReached)
            maxTowerHeightReached = colHeight[selectedCol] + 1;

        // Dac? la ad?ugare se formeaz? un turn care vârful s?u are 3 piese egale (adic? 2 deja la vârf)
        if (maxMatchingCount == 2) {
            colHeight[selectedCol] -= 2;  // se elimin? cele 3 piese (efectul: se ?terg 2 din turn, ultimul fiind noua pies?)
            freeSpaces += 2;              // se elibereaz? 2 spa?ii pe tabl?
        }
        // Altfel, se plaseaz? piesa în turnul selectat
        else {
            board[colHeight[selectedCol]][selectedCol] = currentPieceValue;
            colHeight[selectedCol]++;
            freeSpaces--;
        }
        piecesProcessed++;
    }

    // Scrie rezultatele:
    // p – num?rul de piese prelucrate
    // t – num?rul de piese de pe tabl? la final
    // h – în?l?imea maxim? a unui turn în timpul jocului
    output << piecesProcessed << "\n" << (maxRows * numCols - freeSpaces) << "\n" << maxTowerHeightReached;

    return 0;
}