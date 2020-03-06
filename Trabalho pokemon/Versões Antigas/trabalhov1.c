#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char pokemon(int n, int m, char a[][100], char you, int energy) {
    int x=0,y=0,x1,y1,i,j,x2,y2,d=0;
    char move;
    int no=1, s=1, w=1, e=1;
    //encontra o jogador
    for (i=0;i<n;i++){
            for (j=0;j<m;j++){
                if (a[i][j]==you){
                x=i;
                y=j;
                }
            }
    }
    //verificar impossibilidades
    if(a[x-1][y] == '#' || energy<(a[x-1][y]-48) || (a[x-1][y]>=97 && a[x-1][y]<=122) || x-1>n || x-1<0) no=0;
    if(a[x][y+1] == '#' || energy<(a[x][y+1]-48) || (a[x][y+1]>=97 && a[x][y+1]<=122) || y+1>m || y+1<0) e=0;
    if(a[x][y-1] == '#' || energy<(a[x][y-1]-48) || (a[x][y-1]>=97 && a[x][y-1]<=122) || y-1>m || y-1<0) w=0;
    if(a[x+1][y] == '#' || energy<(a[x+1][y]-48) || (a[x+1][y]>=97 && a[x+1][y]<=122) || x+1>n || x+1<0) s=0;
    printf("\n\n\n\n no:%d e:%d   w:%d   s:%d", no,e,w,s);
    int val[5];
    for (i=0;i<4;i++){
        val[i]=0;
    }
    //Faz uma pontuação para cada direção
    if (no==1) {
        x2=x;
        while (a[x2][y]!='#' || (a[x2][y]<97 && a[x2][y]>122)){
            x2--;
            if (x2<0 || x2>n) break;
            if (a[x2][y]==' ') val[0]++;
            else if (a[x2][y]>=48 && a[x2][y]<=57) val[0]+=9/a[x2][y];
        }
    }
    if (e==1) {
        y1=y;
        while (a[x][y1]!='#' || (a[x][y1]<97 && a[x][y1]>122)){
            y1++;
            if (y1<0 || y1>m) break;
            if (a[x][y1]==' ') val[1]++;
            else if (a[x][y1]>=48 && a[x][y1]<=57) val[0]+=9/a[x][y1];
        }
    }
    if (w==1) {
        y2=y;
        while (a[x][y2]!='#' || (a[x][y2]<97 && a[x][y2]>122)){
            y2--;
            if (y2<0 || y2>m) break;
            if (a[x][y2]==' ') val[2]++;
            else if (a[x][y2]>=48 && a[x][y2]<=57) val[0]+=9/a[x][y2];
        }
    }
    if (s==1) {
        x1=x;
        while (a[x1][y]!='#' || (a[x1][y]<97 && a[x1][y]>122)){
            x1++;
            if (x1<0 || x1>n) break;
            if (a[x1][y]==' ') val[3]++;
            else if (a[x1][y]>=48 && a[x1][y]<=57) val[0]+=9/a[x1][y];
        }
    }
    int z;
    //A maior pontuação é a melhor
    for (i=0;i<4;i++){
        if (val[i]>d) {
            d=val[i];
            z=i;
        }
        printf("\n\n%d\n\n", val[i]);
    }
    if (z==0) move='N';
    else if (z==1) move='E';
    else if (z==2) move='W';
    else if (z==3) move='S';
    //verificar opções unicas
    if(no==0 && e==0 && w==0 && s==0) move='X';
    else if(no==1 && e==0 && w==0 && s==0) move='N';
    else if(no==0 && e==1 && w==0 && s==0) move='E';
    else if(no==0 && e==0 && w==1 && s==0) move='W';
    else if(no==0 && e==0 && w==0 && s==1) move='S';
    return move;
}

int main(){
    int n, m, energia, cont=0;
    char a[100][100], you, move;
    scanf("%d%d%d", &n, &m, &energia);
    int j,t,c,k;
    you = 'A';
    //srand((unsigned) time(NULL));
    for (j=0;j<=n;j++){
        for (t=0;t<=m;t++){
            c=rand()%10;
            if (c>0 && c<5) a[j][t]=' ';
            else if (c>=5 && c<8) a[j][t]='#';
            else a[j][t]=49+(rand()%9);
            //printf(" %c", a[j][t]);
        }
       // printf("\n");
    }

    a[0][0]=you;
    for (j=0;j<=n;j++){
        for (t=0;t<=m;t++){
            printf(" %c", a[j][t]);
        }
        printf("\n");
    }
    int x=0;
    int y=0;
    while (energia>0){
        move=pokemon(n,m,a,you,energia);
        printf("%c\n\n", move);
        if (move=='X'){
            printf("\n");
            break;
        }
        else if (move=='E'){
            if (a[x][y+1] == ' '){
                a[x][y]=' ';
                y+=1;
                energia--;
                a[x][y]=you;
            }
            else if (a[x][y+1] == '#' || y+1>m || energia<(a[x][y+1]-48)) printf("Nao\n");
            else {
                a[x][y]=' ';
                y+=1;
                energia=energia-(a[x][y]-48);
                a[x][y]=you;
                cont++;
            }
        }
        else if (move=='W'){
            if (a[x][y-1] == ' '){
                a[x][y]=' ';
                y-=1;
                energia--;
                a[x][y]=you;
            }
            else if (a[x][y-1] == '#' || y-1<0 || energia<(a[x][y-1]-48)) printf("Nao\n");
            else {
                a[x][y]=' ';
                y-=1;
                energia=energia-(a[x][y]-48);
                a[x][y]=you;
                cont++;
            }
        }
        else if (move=='N'){
            if (a[x-1][y] == ' '){
                a[x][y]=' ';
                x-=1;
                energia--;
                a[x][y]=you;
            }
            else if (a[x-1][y] == '#' || x-1<0 || energia<(a[x-1][y]-48)) printf("Nao\n");
            else {
                a[x][y]=' ';
                x-=1;
                energia=energia-(a[x][y]-48);
                a[x][y]=you;
                cont++;
            }
        }
        else if (move=='S'){
            if (a[x+1][y] == ' '){
                a[x][y]=' ';
                x+=1;
                energia--;
                a[x][y]=you;
            }
            else if (a[x+1][y] == '#' || x+1>n || energia<(a[x+1][y]-48)) printf("Nao\n");
            else {
                a[x][y]=' ';
                x+=1;
                energia=energia-(a[x][y]-48);
                a[x][y]=you;
                cont++;

            }
        }
        for (k=0;k<=m;k++){
            printf("_");
        }
        printf("\n");
        for (j=0;j<=n;j++){
            for (t=0;t<=m;t++){
                printf(" %c", a[j][t]);
            }
            printf("\n");
        }
    printf("Energia = %d\n\n\n\n\n", energia);
    }
    printf("Fim do jogo!\n");
    printf("Jogador %c pegou %d pokemon(s)\n", you, cont);
    //char pokemon(int n, int m, char a[][100], char you, int energy);
    return 0;
}
