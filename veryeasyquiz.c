#include <stdio.h>

int main() {
    int score = 0; // Inizializza il punteggio a 0
    int risposta;
    
    printf("Benvenuto nel quiz\n");

    // Domande e risposte
    printf("What's the best type of pasta\n");
    printf("1) Cacio e pepe\n");
    printf("2) Marinara\n");
    printf("3) Pesto\n");
    scanf("%d", &risposta);
    if (risposta == 3) {
        printf("Risposta esatta\n");
        score++; // Incrementa il punteggio di 1
    } else {
        printf("Risposta errata\n");
    }

    printf("Question 2, Cat or dogs?\n");
    printf("1) Cats\n");
    printf("2) Dogs\n");
    printf("3) Both\n");
    scanf("%d", &risposta);
    if (risposta == 3) {
        printf("Risposta esatta\n");
        score++;
    } else {
        printf("Risposta errata\n");
    }

    printf("Question 3, Which nation has the best food?\n");
    printf("1) Spain\n");
    printf("2) Italy\n");
    printf("3) USA\n");
    scanf("%d", &risposta);
    if (risposta == 2) {
        printf("Risposta esatta\n");
        score++;
    } else {
        printf("Risposta errata\n");
    }

    printf("Question 4, Best milkshake flavour?\n");
    printf("1) Oreo\n");
    printf("2) Chocolate\n");
    printf("3) Strawberry\n");
    scanf("%d", &risposta);
    if (risposta == 1) {
        printf("Risposta esatta\n");
        score++;
    } else {
        printf("Risposta errata\n");
    }

    printf("Question 5, How many continents are there?\n");
    printf("1) Five\n");
    printf("2) Seven\n");
    printf("3) Six\n");
    scanf("%d", &risposta);
    if (risposta == 2) {
        printf("Risposta esatta\n");
        score++;
    } else {
        printf("Risposta errata\n");
    }

    printf("Il tuo punteggio è: %d\n", score);

    return 0;
}
