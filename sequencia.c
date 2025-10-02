#include <stdio.h>
#include <stdlib.h>


int search(char *sqc, char targ, int len){
    for(int i = 0; i < len; i++){
        if (sqc[i] == targ){
            return(i);
        }
    }
    return(-1);
}


int main(){

    char alph[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int M;
    scanf("%d", &M);
    char *sqc;
    sqc = malloc((M+1)*sizeof(char));
    scanf(" %s", sqc);
    int i = 0;
    int dif = 0;
    for(i; i < M; i++){
        if (i != search(alph, sqc[i], 26)){
            dif++;
        }
    }
    if (dif == 2) printf("1");
    else printf("0");
    free(sqc);
    return(0);
}