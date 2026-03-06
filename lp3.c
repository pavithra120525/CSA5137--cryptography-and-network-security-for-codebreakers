#include <stdio.h>
#include <string.h>
#include <ctype.h>

char matrix[5][5];
char key[] = "MONARCHY";
char alphabet[] = "ABCDEFGHIKLMNOPQRSTUVWXYZ";

void generateMatrix() {
    int used[26] = {0}, i, j, k = 0;

    for(i = 0; key[i]; i++) {
        if(key[i] != 'J' && !used[key[i]-'A']) {
            matrix[k/5][k%5] = key[i];
            used[key[i]-'A'] = 1;
            k++;
        }
    }

    for(i = 0; alphabet[i]; i++) {
        if(!used[alphabet[i]-'A']) {
            matrix[k/5][k%5] = alphabet[i];
            k++;
        }
    }
}

int main() {
    generateMatrix();

    printf("Playfair Matrix:\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            printf("%c ", matrix[i][j]);
        printf("\n");
    }
    return 0;
}