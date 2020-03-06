#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX_LEN 128

//Impossibiladade está errada / ajustar as direções / ajustar valor de prioridade / valor para fora do mapa

char pokemon(int n, int m, char a[][100], char you, int energy) {
    int x=0,y=0,x1,y1,i,j,x2,y2,t=57,k;
    char move;
    int no=6, s=6, w=6, e=6;
    //encontra o jogador
    for (i=0;i<n;i++){
            for (j=0;j<m;j++){
                if (a[i][j]==you){
                x=i;
                y=j;
                }
            }
    }
    for (k=1; k<7; k++) {
            //verificar impossibilidades
            if(a[x-k][y] == '#' || energy<(a[x-k][y]-48) || (a[x-k][y]>=97 && a[x-k][y]<=122) || x-k>=n || x-k<=0) no=no+(57/k);
                else if(a[x-k][y]>48 && a[x-k][y]<=57) no=no-((t-a[x-k][y]));
                    else if(a[x-k][y] == ' ') no=no+k;
                        else no--;
            if(a[x][y+k] == '#' || energy<(a[x][y+k]-48) || (a[x][y+k]>=97 && a[x][y+k]<=122) || y+k>=m || y+k<=0)  e=e+(57/k);
                else if(a[x][y+k]>48 && a[x][y+k]<=57) e=e-((t-a[x][y+k]));
                    else if(a[x][y+k] == ' ') e=e+k;
                        else e--;
            if(a[x][y-k] == '#' || energy<(a[x][y-k]-48) || (a[x][y-k]>=97 && a[x][y-k]<=122) || y-k>=m || y-k<=0)  w=w+(57/k);
                else if(a[x][y-k]>48 && a[x-k][y]<=57) w=w-((t-a[x-k][y]));
                    else if(a[x][y-k] == ' ') w=w+k;
                        else w--;
            if(a[x+k][y] == '#' || energy<(a[x+k][y]-48) || (a[x+k][y]>=97 && a[x+k][y]<=122) || x+k>=n || x+k<=0)  s=s+(57/k);
                else if(a[x+k][y]>48 && a[x+k][y]<=57) s=s-((t-a[x+k][y]));
                    else if(a[x+k][y] == ' ') s=s+k;
                        else s--;

    }
    if (a[x-1][y]>48 && a[x-1][y]<=57) no=no-(t-a[x-1][y]);
    if (a[x][y+1]>48 && a[x][y+1]<=57) e=e-(t-a[x][y+1]);
    if (a[x][y-1]>48 && a[x][y-1]<=57) w=w-(t-a[x][y-1]);
    if (a[x+1][y]>48 && a[x+1][y]<=57) s=s-(t-a[x+1][y]);
    if (a[x-1][y]=='#') no=100000;
    if (a[x][y+1]=='#') e=100000;
    if (a[x][y-1]=='#') w=100000;
    if (a[x+1][y]=='#') s=100000;
    if (a[x-1][y]>=97 && a[x-1][y]<=122) no=100000;
    if (a[x][y+1]>=97 && a[x][y+1]<=122) e=100000;
    if (a[x][y-1]>=97 && a[x][y-1]<=122) w=100000;
    if (a[x+1][y]>=97 && a[x+1][y]<=122) s=100000;
    if ((x-1)<0) no=100000;
    if ((y+1)>n) e=100000;
    if ((y-1)<0) w=100000;
    if ((x+1)>m) s=100000;
    if (no<w && no<s && s==no)
    if(a[x-1][y]>48 && a[x-1][y]<=57) no=no-(t-a[x-1][y])-12;
    else no++;
    if(a[x-2][y]>48 && a[x-2][y]<=57) no=no-(t-a[x-2][y]-10);
    else no++;
    if (w<no && w<e && w==s)
    if(a[x+1][y]>48 && a[x+1][y]<=57) s=s-(t-a[x+1][y]-12);
    else s++;
    if(a[x+2][y]>48 && a[x+2][y]<=57) s=s-(t-a[x+2][y]-10);
    else s++;
    if (s<no && s<w && s==e) e++;
    if (e<w && e<s && e==no)
    if(a[x][y+1]>48 && a[x][y+1]<=57) e=e-(t-a[x][y+1]-12);
    else e++;
    if(a[x][y+2]>48 && a[x][y+2]<=57) e=e-(t-a[x][y+2]-10);
    else e++;
    if (w<s && w<e && w==no)
    if(a[x][y-1]>48 && a[x][y-1]<=57) w=w-(t-a[x][y-1]-12);
    else w++;
    if(a[x][y-2]>48 && a[x][y-2]<=57) w=w-(t-a[x][y-2]-10);
    else w++;
    if (w<s && w<no && w==e) w++;
    //verificar opções unicas
    if(no==e && e==w && w==s) move='X';
    else if(no<e && no<w && no<s) move='N';
    else if(e<no && e<w && e<s) move='E';
    else if(w<e && w<no && w<s) move='W';
    else if(s<e && s<w && s<no) move='S';
    printf("\n\n\n\n no:%d e:%d   w:%d   s:%d\n\n", no,e,w,s);
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
        else a[j][t]=48+(rand()%9);
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
    if (move=='X') {
        printf("\n");
        break;
    }
    else if(move=='0') energia=0;
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
