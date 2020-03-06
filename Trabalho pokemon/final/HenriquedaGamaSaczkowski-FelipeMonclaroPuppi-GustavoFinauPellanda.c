char pokemon(int n, int m, char a[][100], char you, int energy) {
    int x=0,y=0,x1,y1,i,j,d=0,z;
    char move;
    int no=1, s=1, w=1, e=1;
    /*encontra o jogador e marca as coordenadas*/
    for (i=0;i<n;i++){
            for (j=0;j<m;j++){
                if (a[i][j]==you){
                x=i;
                y=j;
                }
            }
    }
    /*verificar movimentos impossíveis*/
    if(a[x-1][y] == '#' || energy<(a[x-1][y]-48) || (a[x-1][y]>=97 && a[x-1][y]<=122) || x-1>n || x-1<0) no=0;
    if(a[x][y+1] == '#' || energy<(a[x][y+1]-48) || (a[x][y+1]>=97 && a[x][y+1]<=122) || y+1>m || y+1<0) e=0;
    if(a[x][y-1] == '#' || energy<(a[x][y-1]-48) || (a[x][y-1]>=97 && a[x][y-1]<=122) || y-1>m || y-1<0) w=0;
    if(a[x+1][y] == '#' || energy<(a[x+1][y]-48) || (a[x+1][y]>=97 && a[x+1][y]<=122) || x+1>n || x+1<0) s=0;
    /*matriz para guardar pontuação das direções*/
    int val[4];
    for (i=0;i<4;i++){
        val[i]=0;
    }
    /*"+5" significa que o pokemon é 5x mais valioso do que andar / Segundo testes sem a linha "srand((unsigned) time(NULL));", usando um tabuleiro fixo, é o valor com melhor efetividade
    "+40/(a[x][y]-37)" serve para direcionar para os pokemons de menor valor
    Faz uma pontuação para cada direção*/
    if (no==1) {
        x1=x;
        while (a[x1][y]!='#' || (a[x1][y]<97 && a[x1][y]>122)){
            x1--;
            if (x1<0 || x1>n) break;
            if (a[x1][y]==' ') val[0]++; //A distância não é punitiva pois, dentro dos mesmos testes com tabuleiro fixo, foi demonstrado que um pequeno incentivo para andar é benéfico. Fazendo o jogador explorar o mapa e encontrar novas rotas melhores
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
    /*A maior pontuação é a melhor
    Randomico ajuda a impedir de entrar no loop de ir e voltar / depende do "srand((unsigned) time(NULL));"*/
    for (i=0;i<4;i++){
        if (val[i]>d) {
            d=val[i]+((rand()%5)+1);
            z=i;
        }
    }
    if (z==0) move='N';
    else if (z==1) move='E';
    else if (z==2) move='W';
    else if (z==3) move='S';
    /*verificar opções unicas*/
    if (no==0 && e==0 && w==0 && s==0) move='X';
    else if (no==1 && e==0 && w==0 && s==0) move='N';
    else if (no==0 && e==1 && w==0 && s==0) move='E';
    else if (no==0 && e==0 && w==1 && s==0) move='W';
    else if (no==0 && e==0 && w==0 && s==1) move='S';
    if (energy==0) move='X';
    return move;
}
