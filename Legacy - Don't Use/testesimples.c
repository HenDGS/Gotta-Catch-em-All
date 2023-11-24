#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char pokemon(int n, int m, char a[][100], char you, int energy) {
    int x=0,y=0,x1,y1,i,j,d=0,z;
    char move;
    int no=1, s=1, w=1, e=1;
    //encontra o jogador e marca as coordenadas
    for (i=0;i<n;i++){
            for (j=0;j<m;j++){
                if (a[i][j]==you){
                x=i;
                y=j;
                }
            }
    }
    //verificar movimentos impossíveis
    if(a[x-1][y] == '#' || energy<(a[x-1][y]-48) || (a[x-1][y]>=97 && a[x-1][y]<=122) || x-1>n || x-1<0) no=0;
    if(a[x][y+1] == '#' || energy<(a[x][y+1]-48) || (a[x][y+1]>=97 && a[x][y+1]<=122) || y+1>m || y+1<0) e=0;
    if(a[x][y-1] == '#' || energy<(a[x][y-1]-48) || (a[x][y-1]>=97 && a[x][y-1]<=122) || y-1>m || y-1<0) w=0;
    if(a[x+1][y] == '#' || energy<(a[x+1][y]-48) || (a[x+1][y]>=97 && a[x+1][y]<=122) || x+1>n || x+1<0) s=0;
    printf("\n\n\n\n no:%d e:%d   w:%d   s:%d", no,e,w,s);
    //matriz para guardar pontuação das direções
    int val[4];
    for (i=0;i<4;i++){
        val[i]=0;
    }
    //val[b]+=c/(a[x2][y]-47) para direcionar para os pokemons de menor valor
    //Faz uma pontuação para cada direção
    if (no==1) {
        x1=x;
        while (a[x1][y]!='#' || (a[x1][y]<97 && a[x1][y]>122)){
            x1--;
            if (x1<0 || x1>n) break;
            if (a[x1][y]==' ') val[0]++;
            else if (a[x1][y]>=48 && a[x1][y]<=57) val[0]+=5+40/(a[x1][y]-37);
        }
    }
    if (e==1) {
        y1=y;
        while (a[x][y1]!='#' || (a[x][y1]<97 && a[x][y1]>122)){
            y1++;
            if (y1<0 || y1>m) break;
            if (a[x][y1]==' ') val[1]++;
            else if (a[x][y1]>=48 && a[x][y1]<=57) val[1]+=5+40/(a[x][y1]-37);
        }
    }
    if (w==1) {
        y1=y;
        while (a[x][y1]!='#' || (a[x][y1]<97 && a[x][y1]>122)){
            y1--;
            if (y1<0 || y1>m) break;
            if (a[x][y1]==' ') val[2]++;
            else if (a[x][y1]>=48 && a[x][y1]<=57) val[2]+=5+40/(a[x][y1]-37);
        }
    }
    if (s==1) {
        x1=x;
        while (a[x1][y]!='#' || (a[x1][y]<97 && a[x1][y]>122)){
            x1++;
            if (x1<0 || x1>n) break;
            if (a[x1][y]==' ') val[3]++;
            else if (a[x1][y]>=48 && a[x1][y]<=57) val[3]+=5+40/(a[x1][y]-37);
        }
    }
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
    if (no==0 && e==0 && w==0 && s==0) move='X';
    else if (no==1 && e==0 && w==0 && s==0) move='N';
    else if (no==0 && e==1 && w==0 && s==0) move='E';
    else if (no==0 && e==0 && w==1 && s==0) move='W';
    else if (no==0 && e==0 && w==0 && s==1) move='S';
    return move;
}

int  main(){
    int n, m, energia, cont=0,x=5,y=5;
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
            else a[j][t]=48+(rand()%9);
        }
    }
    a[5][5]=you;
    for (j=0;j<=n;j++){
        for (t=0;t<=m;t++){
            printf(" %c", a[j][t]);
        }
        printf("\n");
    }
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
    return 0;
}
