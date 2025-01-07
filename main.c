#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n[99], user, min = 0, max = 9, ran, con=0;
    srand(time(NULL));
    printf("insere il numero");
    scanf("%d", &user);

    while (user>10 || user< 0) {
        printf("valore non valido");
        scanf("%d",&user);
    }

    for (int i = 0; i < 100; i++) {
        ran = n[i]= rand() % (min - max + 1) + min;
        if (ran == user) {
            con++;
        }
    }
    printf("il numero %d e' stato contato %d volte",user,con);
}
