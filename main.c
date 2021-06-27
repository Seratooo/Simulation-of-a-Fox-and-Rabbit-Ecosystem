#include <stdlib.h>
#include <stdio.h>

typedef struct coordenada{
    int x,y;
} Coordenada;
typedef struct raposa{
    int idade;
    int GER_PROC_RAPOSAS;
    int GER_ALIM_RAPOSAS;
    Coordenada coordenada;
} Raposa;


typedef struct coelho{
    int idade;
    int GER_PROC_COELHOS;
    Coordenada coordenada;
} Coelho;


typedef struct rocha{
    Coordenada coordenada;
} Rocha;


Raposa setRaposa(int x,int y,int GerProc,int GerAlim, int Idade){
   Raposa r;
   r.GER_ALIM_RAPOSAS = GerAlim;
   r.GER_PROC_RAPOSAS = GerProc;
   r.idade = Idade;
   r.coordenada.x = x;
   r.coordenada.y = y;

   return r;
}

typedef struct matriz{
    int id;
    Raposa raposa;
    Rocha pedra;
    Coelho coelho;
} matriz;

Coelho setCoelho(int x,int y,int GerProc, int Idade){
  Coelho c;
  c.coordenada.x = x;
  c.coordenada.x = y;
  c.GER_PROC_COELHOS = GerProc;
  c.idade = Idade;
  return c;
}
Rocha setRocha(int x,int y){
  Rocha r;
  r.coordenada.x=x;
  r.coordenada.y = y;
  return r;
}


int main(int argc, char *argv[]){
   
  // int GER_PROC_COELHOS=2,GER_PROC_RAPOSAS=9,GER_ALIM_RAPOSAS=6,N_GER=4,N_OBJS,LIN=10,COL=10;

   int GER_PROC_COELHOS=2,GER_PROC_RAPOSAS=4,GER_ALIM_RAPOSAS=3,N_GER=6,N_OBJS,LIN=5,COL=5;

/* printf("\nDigite o número de gerações até que um coelho possa procriar: ");
  scanf("%d",&GER_PROC_COELHOS);

  printf("\nDigite o número de gerações até que uma raposa possa procriar: ");
  scanf("%d",&GER_PROC_RAPOSAS);

  printf("\nDigite o número de gerações até que uma raposa morre à fome: ");
  scanf("%d",&GER_ALIM_RAPOSAS);

  printf("\nDigite o número de gerações a simular: ");
  scanf("%d",&N_GER);

  printf("\nDigite o número de linhas da matriz que representa o ecossistema: ");
  scanf("%d",&LIN);

  printf("\nDigite o número de colunas da matriz que representa o ecossistema: ");
  scanf("%d",&COL);

  printf("\nDigite a quantidade de objecto a serem criados: ");
  scanf("%d",&N_OBJS);*/

  matriz Matriz[LIN][COL];
  matriz NewMatriz[LIN][COL];

  for(int i=0;i<LIN;i++){
    for(int j=0;j<COL;j++){
          Matriz[i][j].id=-1; 
          NewMatriz[i][j].id = -1;
          
  }
  }

  /*system("clear");
  for(int i=1;i<=N_OBJS;i++){
       int x,y,id; 
       printf("\nDigite  a coordenada X do Objecto[%d]: ",i);
       scanf("%d",&x);
       
       printf("\nDigite  a coordenada Y do Objecto[%d]: ",i);
       scanf("%d",&y);
       
       printf("\nCLIQUE: 1 - Para Coelho | 2 Para Raposa | 3 Para Rocha: ");
       scanf("%d",&id);
       
       switch (id){
       case 1:
         Matriz[x][y].id=id;
         Matriz[x][y].coelho = setCoelho(x,y,0,0);
         break;
         case 2:
         Matriz[x][y].id=id;
         Matriz[x][y].raposa = setRaposa(x,y,0,0,0);
         case 3:
         Matriz[x][y].id=id;
         Matriz[x][y].pedra = setRocha(x,y);
         break;
         
         default:
         printf("Digite um valor válido");
         return 0;
         break;
       }
    system("clear");
  }*/



        /* Matriz[7][2].id=3;
         Matriz[7][2].pedra = setRocha(7,2);


         Matriz[0][1].id=3;
         Matriz[0][1].pedra = setRocha(0,1);


         Matriz[9][7].id=3;
         Matriz[9][7].pedra = setRocha(9,7);


         Matriz[2][7].id=3;
         Matriz[2][7].pedra = setRocha(2,7);


         Matriz[0][5].id=3;
         Matriz[0][5].pedra = setRocha(0,5);


         Matriz[2][5].id=3;
         Matriz[2][5].pedra = setRocha(2,5);


         Matriz[4][2].id=3;
         Matriz[4][2].pedra = setRocha(4,2);


         Matriz[6][8].id=3;
         Matriz[6][8].pedra = setRocha(6,8);


         Matriz[8][4].id=3;
         Matriz[8][4].pedra = setRocha(8,4);


         Matriz[1][1].id=3;
         Matriz[1][1].pedra = setRocha(1,1);


         Matriz[7][9].id=1;
         Matriz[7][9].coelho = setCoelho(7,9,0,0);


         Matriz[5][9].id=1;
         Matriz[5][9].coelho = setCoelho(5,9,0,0);


         Matriz[0][7].id=1;
         Matriz[0][7].coelho = setCoelho(0,7,0,0);


         Matriz[0][2].id=1;
         Matriz[0][2].coelho = setCoelho(0,2,0,0);


         Matriz[2][9].id=1;
         Matriz[2][9].coelho = setCoelho(2,9,0,0);


         Matriz[4][4].id=1;
         Matriz[4][4].coelho = setCoelho(4,4,0,0);


         Matriz[0][6].id=1;
         Matriz[0][6].coelho = setCoelho(0,6,0,0);


         Matriz[4][5].id=1;
         Matriz[4][5].coelho = setCoelho(4,5,0,0);


         Matriz[3][4].id=1;
         Matriz[3][4].coelho = setCoelho(3,4,0,0);


         Matriz[1][6].id=1;
         Matriz[1][6].coelho = setCoelho(1,6,0,0);


         Matriz[9][8].id=1;
         Matriz[9][8].coelho = setCoelho(9,8,0,0);


         Matriz[4][9].id=1;
         Matriz[4][9].coelho = setCoelho(4,9,0,0);


         Matriz[4][7].id=1;
         Matriz[4][7].coelho = setCoelho(4,7,0,0);


         Matriz[1][3].id=1;
         Matriz[1][3].coelho = setCoelho(1,3,0,0);


         Matriz[1][0].id=1;
         Matriz[1][0].coelho = setCoelho(1,0,0,0);


         Matriz[6][1].id=1;
         Matriz[6][1].coelho = setCoelho(6,1,0,0);

         Matriz[9][0].id=1;
         Matriz[9][0].coelho = setCoelho(9,0,0,0);


         Matriz[0][4].id=1;
         Matriz[0][4].coelho = setCoelho(0,4,0,0);


         Matriz[5][2].id=1;
         Matriz[5][2].coelho = setCoelho(5,2,0,0);


         Matriz[9][5].id=1;
         Matriz[9][5].coelho = setCoelho(9,5,0,0);


         Matriz[2][6].id=1;
         Matriz[2][6].coelho = setCoelho(2,6,0,0);


         Matriz[5][1].id=1;
         Matriz[5][1].coelho = setCoelho(5,1,0,0);


         Matriz[2][3].id=1;
         Matriz[2][3].coelho = setCoelho(2,3,0,0);


         Matriz[0][3].id=1;
         Matriz[0][3].coelho = setCoelho(0,3,0,0);


         Matriz[8][2].id=1;
         Matriz[8][2].coelho = setCoelho(8,2,0,0);


         Matriz[3][2].id=1;
         Matriz[3][2].coelho = setCoelho(3,2,0,0);


         Matriz[1][2].id=1;
         Matriz[1][2].coelho = setCoelho(1,2,0,0);


         Matriz[9][9].id=1;
         Matriz[9][9].coelho = setCoelho(9,9,0,0);


         Matriz[7][7].id=1;
         Matriz[7][7].coelho = setCoelho(7,7,0,0);


         Matriz[8][1].id=1;
         Matriz[8][1].coelho = setCoelho(8,1,0,0);



        
         Matriz[4][3].id=2;
         Matriz[4][3].raposa = setRaposa(4,3,0,0,0);
                 
         Matriz[3][8].id=2;
         Matriz[3][8].raposa = setRaposa(3,8,0,0,0);

                 
         Matriz[5][4].id=2;
         Matriz[5][4].raposa = setRaposa(5,4,0,0,0);
        
         Matriz[7][3].id=2;
         Matriz[7][3].raposa = setRaposa(7,3,0,0,0);
            
         Matriz[6][0].id=2;
         Matriz[6][0].raposa = setRaposa(6,0,0,0,0);
                 
         Matriz[9][2].id=2;
         Matriz[9][2].raposa = setRaposa(9,2,0,0,0);
        
         Matriz[9][1].id=2;
         Matriz[9][1].raposa = setRaposa(9,1,0,0,0);
                 
         Matriz[6][3].id=2;
         Matriz[6][3].raposa = setRaposa(6,3,0,0,0);
                 
         Matriz[4][1].id=2;
         Matriz[4][1].raposa = setRaposa(4,1,0,0,0);

                 
         Matriz[4][6].id=2;
         Matriz[4][6].raposa = setRaposa(4,6,0,0,0);

*/


         Matriz[0][0].id=3;
         Matriz[0][0].pedra = setRocha(0,0);
         
         Matriz[2][4].id=3;
         Matriz[2][4].pedra = setRocha(2,4);

         Matriz[0][2].id=1;
         Matriz[0][2].coelho = setCoelho(0,2,0,0);
         
         Matriz[3][0].id=1;
         Matriz[3][0].coelho = setCoelho(3,0,0,0);
        
         Matriz[4][0].id=1;
         Matriz[4][0].coelho = setCoelho(4,0,0,0);

         Matriz[0][4].id=2;
         Matriz[0][4].raposa = setRaposa(0,4,0,0,0);

         Matriz[1][0].id=2;
         Matriz[1][0].raposa = setRaposa(1,0,0,0,0);

         Matriz[1][4].id=2;
         Matriz[1][4].raposa = setRaposa(1,4,0,0,0);

         Matriz[4][4].id=2;
         Matriz[4][4].raposa = setRaposa(4,4,0,0,0);





         
    




  int Possibilidades = 0; 
    Coordenada coordenadaPossivel[4];

  for(int k=1;k<=N_GER;k++){

            for(int x=0;x<LIN;x++){
              for(int y=0;y<COL;y++){
                    //ADICIONANDO ROCHAS A NOVA MATRIZ
                  if(Matriz[x][y].id==3){
                      NewMatriz[x][y]=Matriz[x][y];
                  }
              }
            }

            for(int x=0;x<LIN;x++){
              for(int y=0;y<COL;y++){

                  //ANALISANDO OS COELHOS
                  
                  if(Matriz[x][y].id==1){
                    
                    //CIMA
                    if(Matriz[x-1][y].id==-1 && x-1>=0 && y>=0 && x-1<=LIN-1 && y<=COL-1 ){
                       coordenadaPossivel[Possibilidades].x = x-1;
                       coordenadaPossivel[Possibilidades].y = y;
                       Possibilidades++;
                       //printf("POSS 1 - %d\n",Possibilidades);
                    }
                    //DIREITA
                    if(Matriz[x][y+1].id==-1 && x>=0 && y+1>=0 && x<=LIN-1 && y+1<=COL-1 ){
                       coordenadaPossivel[Possibilidades].x = x;
                       coordenadaPossivel[Possibilidades].y = y+1;
                       Possibilidades++;
                      // printf("POSS 2 - %d\n",Possibilidades);

                    }
                    //BAIXO
                    if(Matriz[x+1][y].id==-1 && x+1>=0 && y>=0 && x+1<=LIN-1 && y<=COL-1){
                       coordenadaPossivel[Possibilidades].x = x+1;
                       coordenadaPossivel[Possibilidades].y = y;
                       Possibilidades++;
                      // printf("POSS 3 - %d\n",Possibilidades);   

                    }
                    //ESQUERDA
                    if(Matriz[x][y-1].id==-1 && x>=0 && y-1>=0 && x<=LIN-1 && y-1<=COL-1){
                       coordenadaPossivel[Possibilidades].x = x;
                       coordenadaPossivel[Possibilidades].y = y-1;
                       Possibilidades++;
                      // printf("POSS 4 - %d\n",Possibilidades);

                    }

                    if(Possibilidades>0){

                        int G =  Matriz[x][y].coelho.GER_PROC_COELHOS;
                        int newX,newY;
                        newX = coordenadaPossivel[ (x+y+G)%Possibilidades].x;
                        newY = coordenadaPossivel[ (x+y+G)%Possibilidades].y;

                        /*if(Possibilidades>1){
                              newX = coordenadaPossivel[ (x+y+G)%Possibilidades].x;
                              newY = coordenadaPossivel[ (x+y+G)%Possibilidades].y;
                        }else{
                               newX = coordenadaPossivel[0].x;
                               newY = coordenadaPossivel[0].y;
                        }*/
                        
                        // printf("CALULO -  (%d+%d+%d) mod %d = %d \n",x,y,G,Possibilidades,(x+y+G)%Possibilidades);
                        // printf("ANTIGO (%d,%d) ",x,y); 
                        // printf("COELHOS (%d,%d)\n\n",newX,newY);

                        

                        NewMatriz[newX][newY]=Matriz[x][y];

                        NewMatriz[newX][newY].coelho.GER_PROC_COELHOS++;
                        NewMatriz[newX][newY].coelho.idade++;

                       
                        //SE PASSAR A IDADE DE PROCRIAR NA NOVA MATRIZ
                        //printf("%d > %d \n", NewMatriz[newX][newY].coelho.GER_PROC_COELHOS,GER_PROC_COELHOS);
                        if(NewMatriz[newX][newY].coelho.idade>GER_PROC_COELHOS){
                          
                          //NOVO COELHO NA MATRIZ NOVA
                          NewMatriz[newX][newY].coelho = setCoelho(x,y,0,0); 
                          NewMatriz[newX][newY].id=1;

                         //ZERADOS NAVAMENTE
                          NewMatriz[x][y].coelho.GER_PROC_COELHOS++;
                          NewMatriz[x][y].coelho.idade=0; 
                          
                          Matriz[x][y].id = -1;
                          
                        }else{
                            Matriz[x][y].id = -2;
                            NewMatriz[x][y].id= -1;
                        }




                    }else{

                            NewMatriz[x][y]=Matriz[x][y];
                            
                            NewMatriz[x][y].coelho.GER_PROC_COELHOS++;
                            NewMatriz[x][y].coelho.idade++;
                            Matriz[x][y].id = -2;
                    }
                       Possibilidades=0;
                  }
                               
            }
         
             }

               
                 for(int i=0;i<LIN;i++){
                   for(int j=0;j<COL;j++){
                   if(Matriz[i][j].id==-2){
                     Matriz[i][j].id=-1;
                   }
                }
              } 

        

         for(int x=0;x<LIN;x++){
              for(int y=0;y<COL;y++){
                  //ANALISANDO RAPOSAS
                  if(Matriz[x][y].id==2){
                    //CIMA
                    if( (Matriz[x-1][y].id==-1 || Matriz[x-1][y].id== 1) && x-1>=0 && y>=0 && x-1<=LIN-1 && y<=COL-1 ){
                       coordenadaPossivel[Possibilidades].x = x-1;
                       coordenadaPossivel[Possibilidades].y = y;
                       Possibilidades++;
                    }
                    
                    //DIREITA
                    if( (Matriz[x][y+1].id==-1 || Matriz[x][y+1].id== 1) && x>=0 && y+1>=0 && x<=LIN-1 && y+1<=COL-1 ){
                       coordenadaPossivel[Possibilidades].x = x;
                       coordenadaPossivel[Possibilidades].y = y+1;
                       Possibilidades++;
                    }
                    

                    //BAIXO
                    if( (Matriz[x+1][y].id==-1 || Matriz[x+1][y].id== 1) && x+1>=0 && y>=0 && x+1<=LIN-1 && y<=COL-1){
                       coordenadaPossivel[Possibilidades].x = x+1;
                       coordenadaPossivel[Possibilidades].y = y;
                       Possibilidades++;
                    }
                    

                    //ESQUERDA
                    if( (Matriz[x][y-1].id==-1 || Matriz[x][y-1].id== 1) && x>=0 && y-1>=0 && x<=LIN-1 && y-1<=COL-1){
                       coordenadaPossivel[Possibilidades].x = x;
                       coordenadaPossivel[Possibilidades].y = y-1;
                       Possibilidades++;
                    }
                  

                    if(Possibilidades>0){

                        int G =  Matriz[x][y].raposa.GER_PROC_RAPOSAS;
                        int newX,newY;
                        
                       // printf("\nCOELHO A VISTA %d \n",CoelhoAVista);
                       
                              if(Possibilidades>1){
                                newX = coordenadaPossivel[ (x+y+G)%Possibilidades].x;
                                newY = coordenadaPossivel[ (x+y+G)%Possibilidades].y;

                              }else{
                                newX = coordenadaPossivel[0].x;
                                newY = coordenadaPossivel[0].y;
                              }
                        
                                //VERIFICANDO POSSIVEIS PRESSAS A:
                                //CIMA
                                int ePresa=0;
                                if(NewMatriz[x-1][y].id == 1 && x-1>=0 && y>=0 && x-1<=LIN-1 && y<=COL-1 && ePresa==0){
                                    newX = x-1;
                                    newY=y;
                                    printf("PRESA 1\n");
                                    ePresa=1;
                                }
                                //DIREITA
                                if(NewMatriz[x][y+1].id == 1  && x>=0 && y+1>=0 && x<=LIN-1 && y+1<=COL-1){
                                    newY= y+1;
                                    newX=x;
                                    printf("PRESA 2\n");
                                    ePresa=1;
                                }
                                //BAIXO
                                if(NewMatriz[x+1][y].id == 1 && x+1>=0 && y>=0 && x+1<=LIN-1 && y<=COL-1){
                                   newX=x+1;
                                   newY=y;
                                    printf("PRESA 3\n");
                                    ePresa=1;
                                }
                                //ESQUERDA
                                if(NewMatriz[x][y-1].id == 1 && x>=0 && y-1>=0 && x<=LIN-1 && y-1<=COL-1){
                                  newY=y-1;
                                  newX=x;
                                  printf("PRESA 4\n");
                                  ePresa=1;
                                }   
                                  printf("GERAÇÃO : %d\n",N_GER);
                                  printf("CALULO -  (%d+%d+%d) mod %d = %d \n",x,y,G,Possibilidades,(x+y+G)%Possibilidades);
                                  printf("ANTIGO (%d,%d) ",x,y); 
                                  printf("RAPOSA (%d,%d)\n",newX,newY);
                                  printf("FOME: %d \n",Matriz[x][y].raposa.GER_ALIM_RAPOSAS);
                             
                           //SE COMER COELHO
                           if(NewMatriz[newX][newY].id==1){
                               Matriz[x][y].raposa.GER_ALIM_RAPOSAS=-1;
                           }

                            //MORRE SE NÃO SE ALIMENTAR
                            printf("MORTE ? : %d = %d | id %d\n",Matriz[x][y].raposa.GER_ALIM_RAPOSAS,GER_ALIM_RAPOSAS-1,Matriz[x][y].id);
                            if(Matriz[x][y].raposa.GER_ALIM_RAPOSAS>=GER_ALIM_RAPOSAS-1 && ePresa==0){
                             Matriz[x][y].id=-1;
                             NewMatriz[x][y].id=-1;
                             int nx = Matriz[x][y].raposa.coordenada.x;
                             int ny = Matriz[x][y].raposa.coordenada.y;
                             printf("MATEI (%d,%d) id %d REAL CORD (%d,%d)\n\n",x,y,Matriz[x][y].id,nx,ny);
                           }
                           
                       
                          if(Matriz[x][y].id!=-1)
                            NewMatriz[newX][newY]=Matriz[x][y];
                            
                            NewMatriz[newX][newY].raposa.GER_PROC_RAPOSAS++;
                            NewMatriz[newX][newY].raposa.idade++;
                            NewMatriz[newX][newY].raposa.GER_ALIM_RAPOSAS++;
                            
                            //VERIFICAR TIPO DE COMIDA
                            
                        
                            if(Matriz[x][y].id!=-1)
                                //SE PASSAR A IDADE DE PROCRIAR
                                //printf("PASSO? %d>%d",NewMatriz[newX][newY].raposa.GER_PROC_RAPOSAS,GER_PROC_RAPOSAS);
                                if(NewMatriz[newX][newY].raposa.idade>GER_PROC_RAPOSAS){
                                  
                                  //NOVA RAPOSA NA MATRIZ NOVA
                                  if(ePresa==1){
                                      NewMatriz[newX][newY].raposa = setRaposa(x,y,1,0,0);
                                  }else{
                                    NewMatriz[newX][newY].raposa = setRaposa(x,y,0,0,0);
                                  }
                                  
                                  NewMatriz[newX][newY].id=2;

                                  //ZERADOS NOVAMENTE
                                  NewMatriz[x][x].raposa.GER_PROC_RAPOSAS++;
                                  NewMatriz[x][y].raposa.idade=0; 
                                  //NewMatriz[newX][newY].raposa.GER_ALIM_RAPOSAS=0;

                                  Matriz[x][y].id = -1;
                                }else{
                                  Matriz[x][y].id = -2;
                                  NewMatriz[x][y].id= -1;
                                }

                    }else{
                            NewMatriz[x][y]=Matriz[x][y];
                            
                            NewMatriz[x][y].raposa.GER_PROC_RAPOSAS++;
                            NewMatriz[x][y].raposa.idade++;
                            NewMatriz[x][y].raposa.GER_ALIM_RAPOSAS++;
                            Matriz[x][y].id = -2;
                    }

                       Possibilidades=0;
                  }
              }
            }

            //printf("Geracao: %d\n",i);
               for(int i=0;i<LIN;i++){
                   for(int j=0;j<COL;j++){
                   if(Matriz[i][j].id==-2){
                     Matriz[i][j].id=-1;
                   }
                   Matriz[i][j] = NewMatriz[i][j];
                   
                }
              } 
              printf("\n\nGERAÇÃO %d",k);
              printf("\n____________________________________________________________________________________________________ \n");
              for(int i=0;i<LIN;i++){
              for(int j=0;j<COL;j++){
                    if(Matriz[i][j].id==1){
                        printf("| Coelho |");
                    }
                    else if(Matriz[i][j].id==2){
                        printf("| Raposa |");
                    }else if(Matriz[i][j].id==3){
                      printf("|   *    |");
                    }else{
                      printf("|        |");
                    }
              }
              printf("\n");
            }
                 


  }



           /* for(int i=0;i<LIN;i++){
              for(int j=0;j<COL;j++){
                    if(NewMatriz[i][j].id==1){
                       printf("COELHOS (%d,%d)\n",i,j);
                    }
                    else if(NewMatriz[i][j].id==2){
                         printf("RAPOSA (%d,%d)\n",i,j);
                    }else if(NewMatriz[i][j].id==3){
                      printf("PEDRA (%d,%d)\n",i,j);
                    }else{
                     
                    }
              }
              printf("\n");
            }*/
            
           /* for(int i=0;i<LIN;i++){
              for(int j=0;j<COL;j++){
                    if(Matriz[i][j].id==1){
                        printf("| Coelho |");
                    }
                    else if(Matriz[i][j].id==2){
                        printf("| Raposa |");
                    }else if(Matriz[i][j].id==3){
                      printf("|   *    |");
                    }else{
                      printf("|        |");
                    }
              }
              printf("\n");
            }*/
 


  return 0;
}