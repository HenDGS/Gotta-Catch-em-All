#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX_LEN 128

void print_image(FILE *fptr){
    char *filename = "image.txt";
    if((fptr = fopen(filename,"r")) == NULL){
        fprintf(stderr,"error opening %s\n",filename);
    }
    char read_string[MAX_LEN];
    while(fgets(read_string,sizeof(read_string),fptr) != NULL)
    printf("%s",read_string);
    fclose(fptr);
}

int main(){
    int n, m, energia, cont=0,i,j,c,x=0,y=0;
    char a[100][100], you='A', move;
    scanf("%d%d%d", &n, &m, &energia);
    srand((unsigned) time(NULL));
    for (i=0;i<=n;i++){
        for (j=0;j<=m;j++){
            c=rand()%10;
            if (c<5) a[i][j]=' ';
            else if (c>=5 && c<8) a[i][j]='#';
            else a[i][j]=49+(rand()%9);
        }
    }
    a[0][0]=you;
    while (energia){
        for (i=0;i<n;i++){
            for (j=0;j<m;j++){
                printf(" %c", a[i][j]);
            }
            printf("\n");
        }
        scanf(" %c", &move);
        int x1,y1;
        x1=x;
        y1=y;
        if (move=='N') x1--;
        else if (move=='S') x1++;
        else if (move=='W') y1--;
        else if (move=='L') y1++;
        else if (move=='X') printf("");
        else if (move=='0') energia=0;
        if (a[x1][y1] == ' '){
            a[x][y]=' ';
            x=x1;
            y=y1;
            energia--;
            a[x][y]=you;
        }
        else if (a[x1][y1] == '#' || x1<0 || y1<0 || y1>m || x1>n || energia<(a[x1][y1]-48)) printf("\nNao\n\n");
        else {
            a[x][y]=' ';
            x=x1;
            y=y1;
            energia=energia-(a[x][y]-48);
            a[x][y]=you;
            cont++;
        }
        printf("\nEnergia = %d\n\n", energia);
    }
    printf("Fim do jogo!\n");
    printf("Jogador %c pegou %d pokemon(s)\n", you, cont);
    FILE *fptr = NULL;
    print_image(fptr);
    return 0;
    }
