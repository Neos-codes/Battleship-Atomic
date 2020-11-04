#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <time.h>
#define SCREEN_W 1024
#define SCREEN_H 768

Uint32 colorf(SDL_Surface *s, Uint32 r, Uint32 g, Uint32 b){
  return SDL_MapRGB(s->format, r, g, b);
}

void cargarVocesDuke(Mix_Chunk **easter, Mix_Chunk **start, Mix_Chunk **hit, Mix_Chunk **destroy, Mix_Chunk **miss, Mix_Chunk **end){
  
  easter[0] = Mix_LoadWAV("sounds/dukeeaster/deaster1.wav");    //works
  if(easter[0] == NULL)
    printf("ERROR AL CARGAR EASTER 0\n");
  easter[1] = Mix_LoadWAV("sounds/dukeeaster/deaster2.wav");
  if(easter[1] == NULL)
    printf("ERROR AL CARGAR DUKE EASTER 1\n");

  start[0] = Mix_LoadWAV("sounds/dukestart/dstart1.wav"); 
  if(start[0] == NULL)
  	printf("ERROR AL CARGAR START 1\n");
  start[1] = Mix_LoadWAV("sounds/dukestart/dstart2.wav");
  if(start[1] == NULL)
  	printf("ERROR AL CARGAR START 2\n");
  start[2] = Mix_LoadWAV("sounds/dukestart/dstart3.wav");
  if(start[2] == NULL)
  	printf("ERROR AL CARGAR START 3\n");
  start[3] = Mix_LoadWAV("sounds/dukestart/dstart4.wav");
  if(start[3] == NULL)
  	printf("ERROR AL CARGAR START 4\n");
  start[4] = Mix_LoadWAV("sounds/dukestart/dstart5.wav");
  if(start[4] == NULL)
  	printf("ERROR AL CARGAR START 5\n");
  start[5] = Mix_LoadWAV("sounds/dukestart/dstart6.wav");
  if(start[5] == NULL)
  	printf("ERROR AL CARGAR START 6\n");
  start[6] = Mix_LoadWAV("sounds/dukestart/dstart7.wav");
  if(start[6] == NULL)
    printf("ERROR AL CARGAR START 7\n");

  hit[0] = Mix_LoadWAV("sounds/dukehit/dhit1.wav");
  if(hit[0] == NULL)
  	printf("ERROR AL CARGAR HIT 1\n");
  hit[1] = Mix_LoadWAV("sounds/dukehit/dhit2.wav");
  if(hit[1] == NULL)
  	printf("ERROR AL CARGAR HIT 2\n");
  hit[2] = Mix_LoadWAV("sounds/dukehit/dhit3.wav");
  if(hit[2] == NULL)
  	printf("ERROR AL CARGAR HIT 3\n");
  hit[3] = Mix_LoadWAV("sounds/dukehit/dhit4.wav");
  if(hit[3] == NULL)
  	printf("ERROR AL CARGAR HIT 4\n");
  hit[4] = Mix_LoadWAV("sounds/dukehit/dhit5.wav");
  if(hit[4] == NULL)
  	printf("ERROR AL CARGAR HIT 5\n");
  hit[5] = Mix_LoadWAV("sounds/dukehit/dhit6.wav");
  if(hit[5] == NULL)
  	printf("ERROR AL CARGAR HIT 6\n");
  hit[6] = Mix_LoadWAV("sounds/dukehit/dhit7.wav");
  if(hit[6] == NULL)
  	printf("ERROR AL CARGAR HIT 7\n");
  hit[7] = Mix_LoadWAV("sounds/dukehit/dhit8.wav");
  if(hit[7] == NULL)
  	printf("ERROR AL CARGAR HIT 8\n");
  hit[8] = Mix_LoadWAV("sounds/dukehit/dhit9.wav");
  if(hit[8] == NULL)
  	printf("ERROR AL CARGAR HIT 9\n");
  hit[9] = Mix_LoadWAV("sounds/dukehit/dhit10.wav");
  if(hit[9] == NULL)
  	printf("ERROR AL CARGAR HIT 10\n");
  hit[10] = Mix_LoadWAV("sounds/dukehit/dhit11.wav");
  if(hit[10] == NULL)
  	printf("ERROR AL CARGAR HIT 11\n");
  hit[11] = Mix_LoadWAV("sounds/dukehit/dhit12.wav");
  if(hit[11] == NULL)
  	printf("ERROR AL CARGAR HIT 12\n");
  hit[12] = Mix_LoadWAV("sounds/dukehit/dhit13.wav");
  if(hit[12] == NULL)
  	printf("ERROR AL CARGAR HIT 13\n");
  hit[13] = Mix_LoadWAV("sounds/dukehit/dhit14.wav");
  if(hit[13] == NULL)
  	printf("ERROR AL CARGAR HIT 14\n");
  hit[14] = Mix_LoadWAV("sounds/dukehit/dhit15.wav");
  if(hit[14] == NULL)
  	printf("ERROR AL CARGAR HIT 15\n");

  destroy[0] = Mix_LoadWAV("sounds/dukedestroy/ddestroy1.wav");
  if(destroy[0] == NULL)
    printf("ERROR AL CARGAR destroy 1\n");
  destroy[1] = Mix_LoadWAV("sounds/dukedestroy/ddestroy2.wav");
  if(destroy[1] == NULL)
    printf("ERROR AL CARGAR destroy 2\n");
  destroy[2] = Mix_LoadWAV("sounds/dukedestroy/ddestroy3.wav");
  if(destroy[2] == NULL)
    printf("ERROR AL CARGAR destroy 3\n");
  destroy[3] = Mix_LoadWAV("sounds/dukedestroy/ddestroy4.wav");
  if(destroy[3] == NULL)
    printf("ERROR AL CARGAR destroy 4\n");
  destroy[4] = Mix_LoadWAV("sounds/dukedestroy/ddestroy5.wav");
  if(destroy[4] == NULL)
    printf("ERROR AL CARGAR destroy 5\n");
  destroy[5] = Mix_LoadWAV("sounds/dukedestroy/ddestroy6.wav");
  if(destroy[5] == NULL)
    printf("ERROR AL CARGAR destroy 6\n");
  destroy[6] = Mix_LoadWAV("sounds/dukedestroy/ddestroy7.wav");
  if(destroy[6] == NULL)
    printf("ERROR AL CARGAR destroy 7\n");
  destroy[7] = Mix_LoadWAV("sounds/dukedestroy/ddestroy8.wav"); 
  if(destroy[7] == NULL)
    printf("ERROR AL CARGAR destroy 8\n");
  destroy[8] = Mix_LoadWAV("sounds/dukedestroy/ddestroy9.wav");
  if(destroy[8] == NULL)
    printf("ERROR AL CARGAR destroy 9\n");
  destroy[9] = Mix_LoadWAV("sounds/dukedestroy/ddestroy10.wav");
  if(destroy[9] == NULL)
    printf("ERROR AL CARGAR destroy 10\n");
  destroy[10] = Mix_LoadWAV("sounds/dukedestroy/ddestroy11.wav");
  if(destroy[10] == NULL)
    printf("ERROR AL CARGAR destroy 11\n");
  destroy[11] = Mix_LoadWAV("sounds/dukedestroy/ddestroy12.wav");
  if(destroy[11] == NULL)
    printf("ERROR AL CARGAR destroy 12\n");

  miss[0] = Mix_LoadWAV("sounds/dukemiss/dmiss1.wav");
  if(miss[0] == NULL)
    printf("ERROR AL CARGAR miss 1\n");
  miss[1] = Mix_LoadWAV("sounds/dukemiss/dmiss2.wav");
  if(miss[1] == NULL)
    printf("ERROR AL CARGAR miss 2\n");

  end[0] = Mix_LoadWAV("sounds/dukeend/dend1.wav");
  if(end[0] == NULL)
    printf("ERROR AL CARGAR end 1\n");
  end[1] = Mix_LoadWAV("sounds/dukeend/dend2.wav"); 
  if(end[1] == NULL)
    printf("ERROR AL CARGAR end 2\n");
  end[2] = Mix_LoadWAV("sounds/dukeend/dend3.wav");
  if(end[2] == NULL)
    printf("ERROR AL CARGAR end 3\n");
  end[3] = Mix_LoadWAV("sounds/dukeend/dend4.wav");
  if(end[3] == NULL)
    printf("ERROR AL CARGAR end 4\n");
}

///////////////////////INICIO LOWANG

void cargarVocesLowang(Mix_Chunk **easter, Mix_Chunk **start, Mix_Chunk **hit, Mix_Chunk **destroy, Mix_Chunk **miss, Mix_Chunk **end){
  easter[0] = Mix_LoadWAV("sounds/lowangeaster/lweaster1.wav");
  if(easter[0] == NULL)
    printf("ERROR AL CARGAR EASTER 0\n");
  easter[1] = Mix_LoadWAV("sounds/lowangeaster/lweaster2.wav");
  if(easter[1] == NULL)
    printf("ERROR AL CARGAR LW EASTER 1\n");
  easter[2] = Mix_LoadWAV("sounds/lowangeaster/lweaster3.wav");
  if(easter[2] == NULL)
    printf("ERROR AL CARGAR EASTER 2\n");
  easter[3] = Mix_LoadWAV("sounds/lowangeaster/lweaster4.wav");
  if(easter[3] == NULL)
    printf("ERROR AL CARGAR EASTER 3\n");

  start[0] = Mix_LoadWAV("sounds/lowangstart/lwstart1.wav");
  if(start[0] == NULL)
    printf("ERROR AL CARGAR START 0\n");
  start[1] = Mix_LoadWAV("sounds/lowangstart/lwstart2.wav");
  if(start[1] == NULL)
    printf("ERROR AL CARGAR START 1\n");
  start[2] = Mix_LoadWAV("sounds/lowangstart/lwstart3.wav");
  if(start[2] == NULL)
    printf("ERROR AL CARGAR START 2\n");
  start[3] = Mix_LoadWAV("sounds/lowangstart/lwstart4.wav");
  if(start[3] == NULL)
    printf("ERROR AL CARGAR START 3\n");
  start[4] = Mix_LoadWAV("sounds/lowangstart/lwstart5.wav");
  if(start[4] == NULL)
    printf("ERROR AL CARGAR START 4\n");
  start[5] = Mix_LoadWAV("sounds/lowangstart/lwstart6.wav");
  if(start[5] == NULL)
    printf("ERROR AL CARGAR START 5\n");
  start[6] = Mix_LoadWAV("sounds/lowangstart/lwstart7.wav");
  if(start[6] == NULL)
    printf("ERROR AL CARGAR START 6\n");
  start[7] = Mix_LoadWAV("sounds/lowangstart/lwstart8.wav");
  if(start[7] == NULL)
    printf("ERROR AL CARGAR START 7\n");
  start[8] = Mix_LoadWAV("sounds/lowangstart/lwstart9.wav");
  if(start[8] == NULL)
    printf("ERROR AL CARGAR START 8\n");

  hit[0] = Mix_LoadWAV("sounds/lowanghit/lwhit1.wav");
  if(hit[0] == NULL)
    printf("ERROR AL CARGAR hit 0\n");
  hit[1] = Mix_LoadWAV("sounds/lowanghit/lwhit2.wav");
  if(hit[1] == NULL)
    printf("ERROR AL CARGAR hit 1\n");
  hit[2] = Mix_LoadWAV("sounds/lowanghit/lwhit3.wav");
  if(hit[2] == NULL)
    printf("ERROR AL CARGAR hit 2\n");
  hit[3] = Mix_LoadWAV("sounds/lowanghit/lwhit4.wav");
  if(hit[3] == NULL)
    printf("ERROR AL CARGAR hit 3\n");
  hit[4] = Mix_LoadWAV("sounds/lowanghit/lwhit5.wav");
  if(hit[4] == NULL)
    printf("ERROR AL CARGAR hit 4\n");
  hit[5] = Mix_LoadWAV("sounds/lowanghit/lwhit6.wav");
  if(hit[5] == NULL)
    printf("ERROR AL CARGAR hit 5\n");
  hit[6] = Mix_LoadWAV("sounds/lowanghit/lwhit7.wav");
  if(hit[6] == NULL)
    printf("ERROR AL CARGAR hit 6\n");
  hit[7] = Mix_LoadWAV("sounds/lowanghit/lwhit8.wav");
  if(hit[7] == NULL)
    printf("ERROR AL CARGAR hit 7\n");
  hit[8] = Mix_LoadWAV("sounds/lowanghit/lwhit9.wav");
  if(hit[8] == NULL)
    printf("ERROR AL CARGAR hit 8\n");
  hit[9] = Mix_LoadWAV("sounds/lowanghit/lwhit10.wav");
  if(hit[9] == NULL)
    printf("ERROR AL CARGAR hit 9\n");
  hit[10] = Mix_LoadWAV("sounds/lowanghit/lwhit11.wav");
  if(hit[10] == NULL)
    printf("ERROR AL CARGAR hit 10\n");

  destroy[0] = Mix_LoadWAV("sounds/lowangdestroy/lwdestroy1.wav");
  if(destroy[0] == NULL)
    printf("ERROR AL CARGAR destroy 0\n");
  destroy[1] = Mix_LoadWAV("sounds/lowangdestroy/lwdestroy2.wav");
  if(destroy[1] == NULL)
    printf("ERROR AL CARGAR destroy 1\n");
  destroy[2] = Mix_LoadWAV("sounds/lowangdestroy/lwdestroy3.wav");
  if(destroy[2] == NULL)
    printf("ERROR AL CARGAR destroy 2\n");
  destroy[3] = Mix_LoadWAV("sounds/lowangdestroy/lwdestroy4.wav");
  if(destroy[3] == NULL)
    printf("ERROR AL CARGAR destroy 3\n");
  destroy[4] = Mix_LoadWAV("sounds/lowangdestroy/lwdestroy5.wav");
  if(destroy[4] == NULL)
    printf("ERROR AL CARGAR destroy 4\n");
  destroy[5] = Mix_LoadWAV("sounds/lowangdestroy/lwdestroy6.wav");
  if(destroy[5] == NULL)
    printf("ERROR AL CARGAR destroy 5\n");
  destroy[6] = Mix_LoadWAV("sounds/lowangdestroy/lwdestroy7.wav");
  if(destroy[6] == NULL)
    printf("ERROR AL CARGAR destroy 6\n");
  destroy[7] = Mix_LoadWAV("sounds/lowangdestroy/lwdestroy8.wav");
  if(destroy[7] == NULL)
    printf("ERROR AL CARGAR destroy 7\n");
  destroy[8] = Mix_LoadWAV("sounds/lowangdestroy/lwdestroy9.wav");
  if(destroy[8] == NULL)
    printf("ERROR AL CARGAR destroy 8\n");
  destroy[9] = Mix_LoadWAV("sounds/lowangdestroy/lwdestroy10.wav");
  if(destroy[9] == NULL)
    printf("ERROR AL CARGAR destroy 9\n");
  destroy[10] = Mix_LoadWAV("sounds/lowangdestroy/lwdestroy11.wav");
  if(destroy[10] == NULL)
    printf("ERROR AL CARGAR destroy 10\n");
  destroy[11] = Mix_LoadWAV("sounds/lowangdestroy/lwdestroy12.wav");
  if(destroy[11] == NULL)
    printf("ERROR AL CARGAR destroy 11\n");

  miss[0] = Mix_LoadWAV("sounds/lowangmiss/lwmiss1.wav");
  if(miss[0] == NULL)
    printf("ERROR AL CARGAR miss 0\n");
  miss[1] = Mix_LoadWAV("sounds/lowangmiss/lwmiss2.wav");
  if(miss[1] == NULL)
    printf("ERROR AL CARGAR miss 1\n");
  miss[2] = Mix_LoadWAV("sounds/lowangmiss/lwmiss3.wav");
  if(miss[2] == NULL)
    printf("ERROR AL CARGAR miss 2\n");

  end[0] = Mix_LoadWAV("sounds/lowangend/lwend1.wav");
  if(end[0] == NULL)
    printf("ERROR AL CARGAR end 0\n");
  end[1] = Mix_LoadWAV("sounds/lowangend/lwend2.wav");
  if(end[1] == NULL)
    printf("ERROR AL CARGAR end 1\n");
  end[2] = Mix_LoadWAV("sounds/lowangend/lwend3.wav");
  if(end[2] == NULL)
    printf("ERROR AL CARGAR end 2\n");
  end[3] = Mix_LoadWAV("sounds/lowangend/lwend4.wav");
  if(end[3] == NULL)
    printf("ERROR AL CARGAR end 3\n");
  end[4] = Mix_LoadWAV("sounds/lowangend/lwend5.wav");
  if(end[4] == NULL)
    printf("ERROR AL CARGAR end 4\n");
}

////////////////////FIN LOWANG

void cargarSonidos(Mix_Chunk *shot, Mix_Chunk *hit, Mix_Chunk *ldestroy, Mix_Chunk *mdestroy, Mix_Chunk *bdestroy){
  shot = Mix_LoadWAV("sounds/explosions/shot.wav");
  if(shot == NULL)
    printf("ERROR AL CARGAR SHOT\n");
  hit = Mix_LoadWAV("sounds/explosions/hit.wav");
  if(hit == NULL)
    printf("ERROR AL CARGAR EXPLOSION HIT\n");
  ldestroy = Mix_LoadWAV("sounds/explosions/littledestroy.wav");
  if(ldestroy == NULL)
    printf("ERROR AL CARGAR L DESTROY\n");
  mdestroy = Mix_LoadWAV("sounds/explosions/mediumdestroy.wav");
  if(mdestroy == NULL)
    printf("ERROR AL CARGAR M DESTROY\n");
  bdestroy = Mix_LoadWAV("sounds/explosions/bigdestroy.wav");
  if(bdestroy == NULL)
    printf("ERROR AL CARGAR B DESTROY\n");


}

void cargarExplosiones(SDL_Surface **exp1, SDL_Surface **exp2){
  exp1[0] = SDL_LoadBMP("sprites/11.bmp");
  SDL_SetColorKey(exp1[0],SDL_TRUE,colorf(exp1[0],0,255,255));
  exp1[1] = SDL_LoadBMP("sprites/12.bmp");
  SDL_SetColorKey(exp1[1],SDL_TRUE,colorf(exp1[0],0,255,255));
  exp1[2] = SDL_LoadBMP("sprites/13.bmp");
  SDL_SetColorKey(exp1[2],SDL_TRUE,colorf(exp1[0],0,255,255));
  exp2[0] = SDL_LoadBMP("sprites/1.bmp");
  SDL_SetColorKey(exp2[0],SDL_TRUE,colorf(exp2[0],0,255,255));
  exp2[1] = SDL_LoadBMP("sprites/2.bmp");
  SDL_SetColorKey(exp2[1],SDL_TRUE,colorf(exp2[1],0,255,255));
  exp2[2] = SDL_LoadBMP("sprites/3.bmp");
  SDL_SetColorKey(exp2[2],SDL_TRUE,colorf(exp2[2],0,255,255));
  exp2[3] = SDL_LoadBMP("sprites/4.bmp");
  SDL_SetColorKey(exp2[3],SDL_TRUE,colorf(exp2[3],0,255,255));
  exp2[4] = SDL_LoadBMP("sprites/5.bmp");
  SDL_SetColorKey(exp2[4],SDL_TRUE,colorf(exp2[4],0,255,255));
  exp2[5] = SDL_LoadBMP("sprites/6.bmp");
  SDL_SetColorKey(exp2[5],SDL_TRUE,colorf(exp2[5],0,255,255));
  exp2[6] = SDL_LoadBMP("sprites/7.bmp");
  SDL_SetColorKey(exp2[6],SDL_TRUE,colorf(exp2[6],0,255,255));
  
}

void cargarBarcosimg(SDL_Surface ** green, SDL_Surface **red, SDL_Surface **p1_ships, SDL_Surface **p2_ships){
	int i;
	green[0] = SDL_LoadBMP("sprites/carrier_gr.bmp");
	green[1] = SDL_LoadBMP("sprites/bs_gr.bmp");
	green[2] = SDL_LoadBMP("sprites/cruiser_gr.bmp");
	green[3] = SDL_LoadBMP("sprites/subm_gr.bmp");
	green[4] = SDL_LoadBMP("sprites/destroyer_gr.bmp");

	red[0] = SDL_LoadBMP("sprites/carrier_red.bmp");
	red[1] = SDL_LoadBMP("sprites/bs_red.bmp");
	red[2] = SDL_LoadBMP("sprites/cruiser_red.bmp");
	red[3] = SDL_LoadBMP("sprites/subm_red.bmp");
	red[4] = SDL_LoadBMP("sprites/destroyer_red.bmp");
	for(i=0;i<5;i++){
		p1_ships[i] = green[i];
		p2_ships[i] = green[i];
	}
}



int getPos(int x)
{
  int res=-1,i;
  for(i=0;i<10;++i){
    if((x>=0 + i*30) && (x<=30 + 30*i))
      res=i;
  }
  return res;
}

void displayf(char mat[10][10]){   //Funcion que imprime las matrices de jugada
  int i,j,letra=65;
  printf("  1 2 3 4 5 6 7 8 9 10\n");
  for(i=0;i<10;++i){
    printf("%c ",(char)letra);
    ++letra;
    for(j=0;j<10;++j)
      printf("%c ",mat[i][j]);
    printf("\n");
  }
}

int destruccion(int *contadores, int *barcos, Mix_Chunk ** destroy, SDL_Surface **ships, SDL_Surface **red){
  int i,j;
  for(i=0;i<5;i++){
    if(contadores[i] == barcos[i]){
      contadores[i] = -1;
      ships[i] = red[i];
      printf("Cambie el puntero a rojo de %d",i);
      j = rand()%12;
      Mix_PlayChannel(-1,destroy[j],0);
      printf("Reproduje una linea de audio %d\n",j);
      return 1;
    }
  }
  return 0;
}

void drawShips(SDL_Surface **p_shipsimg, SDL_Surface *s, int turn){
	SDL_Rect pos;
	int i;
	pos.x = 111;
	pos.y = 542;
	if(turn){
	  SDL_BlitSurface(p_shipsimg[0], NULL, s,&pos);
	  pos.x += 130;
	  pos.y += 5;
	  SDL_BlitSurface(p_shipsimg[1], NULL, s,&pos);
	  pos.x -= 130;
	  pos.y += 51;
	  SDL_BlitSurface(p_shipsimg[2], NULL, s,&pos);
	  pos.x += 95;
	  pos.y += 5;
	  SDL_BlitSurface(p_shipsimg[3], NULL, s,&pos);
	  pos.x -= 95;
	  pos.y += 46;
	  SDL_BlitSurface(p_shipsimg[4], NULL, s,&pos);
	}
  else{
    pos.x = 612;   
    SDL_BlitSurface(p_shipsimg[0], NULL, s,&pos);
    pos.x += 130;
    pos.y += 5;
    SDL_BlitSurface(p_shipsimg[1], NULL, s,&pos);
    pos.x -= 130;
    pos.y += 51;
    SDL_BlitSurface(p_shipsimg[2], NULL, s,&pos);
    pos.x += 95;
    pos.y += 5;
    SDL_BlitSurface(p_shipsimg[3], NULL, s,&pos);
    pos.x -= 95;
    pos.y += 46;
    SDL_BlitSurface(p_shipsimg[4], NULL, s,&pos);
  }
}

int compararContadores(int *contadores, int *barcos){
  // Compara contadores para terminar juego
  int i,aux = 0;
  for(i = 0;i < 5; ++i){
    if(contadores[i] == barcos[i]){
      aux++;
    }    
  }
  if(aux == 5){
    return 1;
  }
  return 0;
}

int jugada(int x, int y, char mat[10][10], int *cont, char mat_display[10][10], int*cont_barcos, Mix_Chunk* shot, int* size){
  int i,j,hit;
  //system("clear");
    //Guarda tu jugada
  if((mat[x][y] == 'X')||(mat[x][y] == '#')){
    printf("Ya disparaste ahí\n");
    return -1;
  }
  else{  
    if(mat[x][y] == '.'){
      mat[x][y] = 'X';
      mat_display[x][y] = mat[x][y];
      hit = 0;
    }
    else{
      if(mat[x][y] == 'A'){
        ++cont[0];
        if(cont_barcos[0]==cont[0]){
          printf("Hundiste el Portaaviones!\n");
          *size=2;
        }
      }    
      if(mat[x][y] == 'B'){
        ++cont[1];
        if(cont_barcos[1]==cont[1]){
          printf("Hundiste el Acorazado!\n");
          *size=2;
        } 
      }
      if(mat[x][y] == 'C'){
        ++cont[2];
        if(cont_barcos[2]==cont[2]){
          printf("Hundiste el Crucero!\n");
          *size=1;
        }
      }
      if(mat[x][y] == 'D'){
        ++cont[3];
        if(cont_barcos[3]==cont[3]){
          printf("Hundiste el Submarino!\n");
          *size=1;
        }
      }
      if(mat[x][y] == 'E'){
        ++cont[4];
        if(cont_barcos[4]==cont[4]){
          printf("Hundiste el Destructor!\n");
          *size=0;
        }
      }
      mat[x][y] = '#';
      mat_display[x][y] = mat[x][y];  //iguala coordenada matriz y display
      hit = 1;
      printf("Acertaste! Dispara de nuevo\n");
    }
    for(i=0;i<10;++i){
      for(j=0;j<10;++j){
        printf("%c ",mat_display[i][j]);  
      }
      printf("\n");
    }
    Mix_PlayChannel(-1,shot,0); 
    SDL_Delay(1000);
    return hit;
  }  
}  

int tomarBarcos(char mat[10][10],int x,int y,int cont, SDL_Rect pos, SDL_Surface **v,SDL_Surface *s){  //---FUNCION NUEVA---_//
  int i,j;
  if(mat[x][y] != '.'){
    return 0;
  }
  else{ 
    if(cont >= 0 && cont <= 4){
      mat[x][y] = 'A';
      SDL_BlitSurface(v[0], NULL, s, &pos);  
    }
    if(cont >= 5 && cont <= 8){
      mat[x][y] = 'B';
      SDL_BlitSurface(v[1], NULL, s, &pos);
    }
    if(cont >= 9 && cont <= 11){
      mat[x][y] = 'C';
      SDL_BlitSurface(v[2], NULL, s, &pos);
    }
    if(cont >= 12 && cont <= 14){
      mat[x][y] = 'D';
      SDL_BlitSurface(v[4], NULL, s, &pos);
    }
    if(cont >= 15 && cont <= 16){
      mat[x][y] = 'E';
      SDL_BlitSurface(v[3], NULL, s, &pos);
    }
  }
  for(i=0;i<10;i++){
    for(j=0;j<10;j++)
      printf("%c ",mat[i][j]);
    printf("\n");
  }
  printf("\n");
  return 1;
}

void inicializarMatrices(char mat1[10][10], char mat2[10][10]){
  int i,j;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      mat1[i][j] = '.';
      mat2[i][j] = '.';
    }
  }
}

void leerMatriz(char mat[10][10], int *a){  //----FUNCION MODIFICADA----//
  int i,j;                                  //---SIN SCANF---//
  for(i=0;i<10;++i){     //leer matriz y contar letras
    for(j=0;j<10;++j){
      if(mat[i][j] == 'A') a[0]++;
      if(mat[i][j] == 'B') a[1]++;
      if(mat[i][j] == 'C') a[2]++;
      if(mat[i][j] == 'D') a[3]++;
      if(mat[i][j] == 'E') a[4]++;
    }
  }
}  

void inicializarContadores(int *a, int *b, int *c, int *d, int *e, int *f){
  int i;
  for(i=0;i<5;++i){  //incializa contadores en 0
    a[i] = 0;
    b[i] = 0;
    c[i] = 0;
    d[i] = 0;
    e[i] = 0;
    f[i] = 0;
  }  
}

void inicializarDisplay(char mat1[10][10], char mat2[10][10]){
  int i,j;
  for(i = 0; i < 10; i++){
    for(j = 0; j < 10; j++){
      mat1[i][j] = '-';
      mat2[i][j] = '-';
    }
  }
}

int main(){

  char player1[10][10],player2[10][10],input[4],p1_display[10][10],p2_display[10][10];
  int p1_barcos[5],p2_barcos[5],p1_cont[5],p2_cont[5],hit,turn,i,j,k,count=0,p1_destr[5],p2_destr[5];
  int startsound = 0,destroy = 0, dukecont = 0, lowangcont = 0, size, onHelp=0, aux=0,m;
  int x,y;
  int resX;
  int resY;

  srand(time(NULL));

  SDL_Window *w = NULL;
  SDL_Surface *s = NULL;
  SDL_Surface *grid = NULL;
  SDL_Surface *logo = NULL;
  SDL_Surface *miss = NULL;
  SDL_Surface *fire = NULL;
  SDL_Surface *border = NULL;
  
  SDL_Surface **exp1 = (SDL_Surface **)malloc(3*sizeof(SDL_Surface *));  //sprites explosion 1
  SDL_Surface **exp2 = (SDL_Surface **)malloc(7*sizeof(SDL_Surface *));  //sprites explosion 2
  SDL_Surface *animation = NULL;  // auxiliar de animacion

  SDL_Surface **colocarBarcos = (SDL_Surface **)malloc(5*sizeof(SDL_Surface *));
  //-----AGREGADO PARA COLOCAR IMAGENES DE BARCOS EN JUEGO-----//
  SDL_Surface **green_ships = (SDL_Surface **)malloc(5*sizeof(SDL_Surface *));
  SDL_Surface **red_ships = (SDL_Surface **)malloc(5*sizeof(SDL_Surface *));
  SDL_Surface **p1_shipsimg = (SDL_Surface **)malloc(5*sizeof(SDL_Surface *));
  SDL_Surface **p2_shipsimg = (SDL_Surface **)malloc(5*sizeof(SDL_Surface *));

  //-----FIN AGREGADO PARA COLOCAR IMAGENES EN BARCOS EN JUEGO-----//

    //-----MENU-----//
  SDL_Surface *menuimg = NULL;
  SDL_Surface *menuhelp = NULL;
  SDL_Surface *menucredits = NULL;
  SDL_Surface *menutextnew = NULL;
  SDL_Surface *menutexthelp = NULL;
  SDL_Surface *menutextcred = NULL;
  SDL_Surface *menutextquit = NULL; 
  SDL_Surface *backbutton = NULL;

  //----FIN MENU-----//

  //----END MENU----//
  SDL_Surface *dukewinimg = NULL;
  SDL_Surface *dukewintext = NULL;
  SDL_Surface *lowangwinimg = NULL;
  SDL_Surface *lowangwintext = NULL;
  SDL_Surface *playagainimg = NULL;
  SDL_Surface *yesimg = NULL;
  SDL_Surface *noimg = NULL;
  //----FIN END MENU----//

  //----PREGAME-----//

  SDL_Surface *dukeshipstext = NULL;
  SDL_Surface *lowangshipstext = NULL;

  //-----INGGAME-----//
  SDL_Surface *duketurn = NULL;
  SDL_Surface *lowangturn = NULL;
  SDL_Surface *black = NULL;
  SDL_Surface **message = (SDL_Surface **)malloc(5*sizeof(SDL_Surface *));

  Mix_Chunk **dukeeaster = (Mix_Chunk **)malloc(2*sizeof(Mix_Chunk *));  //arreglos de sonidos
  Mix_Chunk **lowangeaster = (Mix_Chunk **)malloc(4*sizeof(Mix_Chunk *));
  Mix_Chunk **dukestart = (Mix_Chunk **)malloc(7*sizeof(Mix_Chunk *));
  Mix_Chunk **lowangstart = (Mix_Chunk **)malloc(9*sizeof(Mix_Chunk *));
  Mix_Chunk **dukehit = (Mix_Chunk **)malloc(15*sizeof(Mix_Chunk *));
  Mix_Chunk **lowanghit = (Mix_Chunk **)malloc(11*sizeof(Mix_Chunk *));
  Mix_Chunk **dukedestroy = (Mix_Chunk **)malloc(12*sizeof(Mix_Chunk *));
  Mix_Chunk **lowangdestroy = (Mix_Chunk **)malloc(12*sizeof(Mix_Chunk *));
  Mix_Chunk **dukemiss = (Mix_Chunk **)malloc(2*sizeof(Mix_Chunk *));
  Mix_Chunk **lowangmiss = (Mix_Chunk **)malloc(3*sizeof(Mix_Chunk *));
  Mix_Chunk **dukeend = (Mix_Chunk **)malloc(4*sizeof(Mix_Chunk *));
  Mix_Chunk **lowangend = (Mix_Chunk **)malloc(5*sizeof(Mix_Chunk *));
  Mix_Chunk *shot = (Mix_Chunk*)malloc(sizeof(Mix_Chunk*));
  Mix_Chunk *hitsound = (Mix_Chunk *)malloc(sizeof(Mix_Chunk*));
  Mix_Chunk **sizedestroy = (Mix_Chunk**)malloc(3*sizeof(Mix_Chunk*));

  Mix_Music *menu = (Mix_Music*)malloc(sizeof(Mix_Music*));
  Mix_Music *first = (Mix_Music*)malloc(sizeof(Mix_Music*));
  Mix_Music **lowangmusic = (Mix_Music**)malloc(3*sizeof(Mix_Music*));
  Mix_Music **dukemusic = (Mix_Music**)malloc(3*sizeof(Mix_Music*));

  


  SDL_Rect missPos;
  SDL_Rect redraw;
  SDL_Rect test;
  test.x = 550;
  test.y = 620;
  SDL_Rect test2;
  test2.x = 300;
  test2.y = 0;

  SDL_Rect test3; //izq
  test3.x = 111;
  test3.y = 212;
  SDL_Rect test4; //der
  test4.x = 612;
  test4.y = 212;

  SDL_Rect makeship;
  makeship.x = 362;
  makeship.y = 234;

  SDL_Rect shipPos;  //Le shipos
  shipPos.x = 111;
  shipPos.y = 542;

  SDL_Rect newGamePos;  //newgame
  newGamePos.x = 138;
  newGamePos.y = 194;

  SDL_Rect menuhelppos;  //helppos
  menuhelppos.x = 138;
  menuhelppos.y = 274;

  SDL_Rect menucredpos;  //credpos
  menucredpos.x = 138;
  menucredpos.y = 354;

  SDL_Rect menuquitpos;  //credpos
  menuquitpos.x = 138;
  menuquitpos.y = 434;

  SDL_Rect backbuttonpos;
  backbuttonpos.x = 650;
  backbuttonpos.y = 650;

  SDL_Rect shiptext;
  shiptext.x = 150;
  shiptext.y = 134;

  SDL_Rect turnpos;
  turnpos.x = 211;
  turnpos.y = 112;

  SDL_Rect messagepos;
  messagepos.x = 220;
  messagepos.y = 12;

  SDL_Rect playagainpos;
  playagainpos.x = 200;
  playagainpos.y = 512;

  SDL_Rect yespos;
  yespos.x = 330;
  yespos.y = 602;

  SDL_Rect nopos;
  nopos.x = 570;
  nopos.y = 602;

  SDL_Rect dukewintextpos;
  dukewintextpos.x = 300;
  dukewintextpos.y = 102;

  SDL_Rect lowangwintextpos;
  lowangwintextpos.x = 250;
  lowangwintextpos.y = 102;

  SDL_Rect dukewinimgpos;
  dukewinimgpos.x = 190;
  dukewinimgpos.y = 172;

  SDL_Event e;

  SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

  inicio:
  startsound = 0;
  destroy = 0; 
  dukecont = 0;
  lowangcont = 0;
  onHelp=0;
  inicializarContadores(p1_barcos,p2_barcos,p1_cont,p2_cont,p1_destr,p2_destr);
  inicializarMatrices(player1,player2);  //-----AGREGADO-----//
  inicializarDisplay(p1_display,p2_display);
  turn = 1;
  count = 0;
  hit = 0;

  w = SDL_CreateWindow("Battleship Atomic", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_W, SCREEN_H, SDL_WINDOW_SHOWN);
  s = SDL_GetWindowSurface(w);
  grid = SDL_LoadBMP("sprites/grid.bmp");
  logo = SDL_LoadBMP("sprites/logo.bmp");
  miss = SDL_LoadBMP("sprites/miss.bmp");
  fire = SDL_LoadBMP("sprites/fire.bmp");
  border = SDL_LoadBMP("sprites/duke_lowang.bmp");
  cargarExplosiones(exp1,exp2);
  colocarBarcos[0] = SDL_LoadBMP("sprites/m1.bmp");
  colocarBarcos[1] = SDL_LoadBMP("sprites/m2.bmp");
  colocarBarcos[2] = SDL_LoadBMP("sprites/m3.bmp");
  colocarBarcos[3] = SDL_LoadBMP("sprites/m4.bmp");
  colocarBarcos[4] = fire;
  //----AGREGADO PARA IMAGENES DE BARCOS EN JUEGO-----//
  cargarBarcosimg(green_ships, red_ships, p1_shipsimg, p2_shipsimg);
  //-----FIN AGREGADO PARA IMAGENES DE BARCOS EN JUEGO-----//

    //-----CARGAR IMG MENU-----//

  menuimg = SDL_LoadBMP("screens/menu.bmp");
  menuhelp = SDL_LoadBMP("screens/help.bmp");
  menucredits = SDL_LoadBMP("screens/credits.bmp");
  menutextnew = SDL_LoadBMP("text/newgame.bmp");
  menutexthelp = SDL_LoadBMP("text/help.bmp");
  menutextcred = SDL_LoadBMP("text/credits.bmp");
  menutextquit = SDL_LoadBMP("text/quit.bmp");
  backbutton = SDL_LoadBMP("sprites/back.bmp");

  //--------FIN CARGAR IMG MENU----//

  //-----CARGAR IMG END MENU ----//
  dukewinimg = SDL_LoadBMP("screens/dukeendpic.bmp");
  dukewintext = SDL_LoadBMP("text/dukewin.bmp");
  lowangwinimg = SDL_LoadBMP("screens/lowangendpic.bmp");
  lowangwintext = SDL_LoadBMP("text/lowangwin.bmp");
  playagainimg = SDL_LoadBMP("text/playagain.bmp");
  yesimg = SDL_LoadBMP("text/yes.bmp");
  noimg = SDL_LoadBMP("text/no.bmp");
  //-----FIN CARGAR IMG END MENU ----//

  //--------CARGAR IMAGENES PREGAME-----//
  dukeshipstext = SDL_LoadBMP("text/dukeships.bmp");
  lowangshipstext = SDL_LoadBMP("text/lowangships.bmp");
  //-----CARGAR IMAGENES INGAME-----//
  duketurn = SDL_LoadBMP("text/duketurn.bmp");
  lowangturn = SDL_LoadBMP("text/lowangturn.bmp");
  black = SDL_LoadBMP("text/black.bmp");
  message[0] = SDL_LoadBMP("text/carriersunk.bmp");
  message[1] = SDL_LoadBMP("text/battleshipsunk.bmp");
  message[2] = SDL_LoadBMP("text/cruisersunk.bmp");
  message[3] = SDL_LoadBMP("text/submarinesunk.bmp");
  message[4] = SDL_LoadBMP("text/destroyersunk.bmp");

  Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
 
  cargarVocesDuke(dukeeaster, dukestart, dukehit, dukedestroy, dukemiss, dukeend);
  cargarVocesLowang(lowangeaster, lowangstart, lowanghit, lowangdestroy, lowangmiss, lowangend);
  //cargarSonidos(shot, hitsound, littledestroy, mediumdestroy, bigdestroy);

  shot = Mix_LoadWAV("sounds/explosions/shot.wav");
  if(shot == NULL)
    printf("ERROR AL CARGAR SHOT\n");
  hitsound = Mix_LoadWAV("sounds/explosions/hit.wav");
  if(hitsound == NULL)
    printf("ERROR AL CARGAR EXPLOSION HIT\n");
  sizedestroy[0] = Mix_LoadWAV("sounds/explosions/littledestroy.wav");
  if(sizedestroy[0] == NULL)
    printf("ERROR AL CARGAR L DESTROY\n");
  sizedestroy[1] = Mix_LoadWAV("sounds/explosions/mediumdestroy.wav");
  if(sizedestroy[1] == NULL)
    printf("ERROR AL CARGAR M DESTROY\n");
  sizedestroy[2] = Mix_LoadWAV("sounds/explosions/bigdestroy.wav");
  if(sizedestroy[2] == NULL)
    printf("ERROR AL CARGAR B DESTROY\n");

  menu = Mix_LoadMUS("music/Menu.mp3");
  if(menu == NULL)
    printf("ERROR AL CARGAR MUSIC Menu\n");
  first = Mix_LoadMUS("music/First.mp3");
  if(first == NULL)
    printf("ERROR AL CARGAR MUSIC First\n");
  lowangmusic[0] = Mix_LoadMUS("music/Lowang1.mp3");
  if(lowangmusic[0] == NULL)
    printf("ERROR AL CARGAR MUSIC Lowang1\n");
  lowangmusic[1] = Mix_LoadMUS("music/Lowang2.mp3");
  if(lowangmusic[1] == NULL)
    printf("ERROR AL CARGAR MUSIC Lowang2\n");
  lowangmusic[2] = Mix_LoadMUS("music/Lowang3.mp3");
  if(lowangmusic[2] == NULL)
    printf("ERROR AL CARGAR MUSIC Lowang3\n");
  dukemusic[0] = Mix_LoadMUS("music/Duke1.mp3");
  if(dukemusic[0] == NULL)
    printf("ERROR AL CARGAR MUSIC Duke1\n");
  dukemusic[1] = Mix_LoadMUS("music/Duke2.mp3");
  if(dukemusic[1] == NULL)
    printf("ERROR AL CARGAR MUSIC Duke2\n");
  dukemusic[2] = Mix_LoadMUS("music/Duke3.mp3");
  if(dukemusic[2] == NULL)
    printf("ERROR AL CARGAR MUSIC Duke3\n");

  SDL_FillRect(s, NULL, colorf(s, 0, 0, 0));
  SDL_BlitSurface(border, NULL, s, NULL);
  SDL_BlitSurface(grid, NULL, s, &makeship);
  SDL_UpdateWindowSurface(w);

  system("clear");

  Mix_PlayMusic(menu,-1);

  SDL_BlitSurface(menuimg,NULL,s,NULL);
  SDL_BlitSurface(menutextnew,NULL,s,&newGamePos);
  SDL_BlitSurface(menutexthelp,NULL,s,&menuhelppos);
  SDL_BlitSurface(menutextcred,NULL,s,&menucredpos);
  SDL_BlitSurface(menutextquit,NULL,s,&menuquitpos);

  if(aux == 1){
    goto colocacion;
  }

  while(1){
    while(SDL_PollEvent(&e) != 0){
      if(e.type == SDL_QUIT){
        printf("Salida en el menu al clickear X\n");
        goto end2;
      }
      else if(e.type == SDL_MOUSEBUTTONDOWN){ //138 194
        SDL_GetMouseState(&y,&x);
        printf("%d %d\n",x,y);
        if(onHelp == 0){
          if(((y>138)&&(y<503))&&((x>194)&&(x<252))){
            printf("newgame\n");
            goto colocacion;
          }
          if(((y>138)&&(y<318))&&((x>274)&&(x<332))){
            printf("help\n");
            onHelp=1;
            SDL_BlitSurface(menuhelp,NULL,s,NULL);
            SDL_BlitSurface(backbutton, NULL, s, &backbuttonpos);
          }
          if(((y>138)&&(y<457))&&((x>354)&&(x<412))){
            printf("cred\n");
            onHelp=1;
            SDL_BlitSurface(menucredits,NULL,s,NULL);
            SDL_BlitSurface(backbutton, NULL, s, &backbuttonpos);
          }
          if(((y>138)&&(y<318))&&((x>434)&&(x<492))){
            printf("quit\n");
            goto end2;
          }
          if((y>745)&&(y<884)){
            printf("easterduke\n");
            Mix_PlayChannel(-1,dukeeaster[rand()%2],0);
          }
          if((y>884)&&(y<1023)){
            printf("easterlowang\n");
            Mix_PlayChannel(-1,lowangeaster[rand()%4],0);
          }
        }
        else{
          if(((y>650)&&(y<708))&&((x>650)&&(x<708))){
            printf("backbtn\n");
            onHelp=0;
            SDL_BlitSurface(menuimg,NULL,s,NULL);
            SDL_BlitSurface(menutextnew,NULL,s,&newGamePos);
            SDL_BlitSurface(menutexthelp,NULL,s,&menuhelppos);
            SDL_BlitSurface(menutextcred,NULL,s,&menucredpos);
            SDL_BlitSurface(menutextquit,NULL,s,&menuquitpos);
          }
        }  
      }
      SDL_UpdateWindowSurface(w);
    }
  }


    //----- COLOCACION DE BARCOS-----//
  colocacion:
  SDL_FillRect(s, NULL, colorf(s, 0, 0, 0));
  SDL_BlitSurface(border, NULL, s, NULL);
  SDL_BlitSurface(grid, NULL, s, &makeship);
  SDL_BlitSurface(dukeshipstext, NULL, s, &shiptext);
  SDL_UpdateWindowSurface(w);
  Mix_HaltMusic();
  Mix_PlayMusic(first,-1);
  while(1){ 
    if(startsound == 0){
    	Mix_PlayChannel(-1, dukestart[rand()%7], 0);
    	startsound = 1;
    }
    if(startsound == 2){
    	Mix_PlayChannel(-1, lowangstart[rand()%9], 0);
    	startsound = 3;
    }
    while(SDL_PollEvent(&e) != 0){
      if(e.type == SDL_QUIT){
        printf("Salida antes de colocar barcos\n");
        goto end2;
      }
      else if(e.type == SDL_MOUSEBUTTONDOWN){
        SDL_GetMouseState(&y,&x);
        //printf("%d %d\n",x,y);
        x=(x-234);
        y=(y-363);
        resX=getPos(x);
        resY=getPos(y);
        // printf("%d %d\n",resX,resY);
        if(resX==-1 || resY==-1){
          // printf("continue\n");
          continue;
        }
        if(turn == 1){
          missPos.x = (resY*30)+363;
          missPos.y = (resX*30)+235;
          count += tomarBarcos(player1,resX,resY,count,missPos,colocarBarcos,s); 
          SDL_UpdateWindowSurface(w);
          if(count == 17){
            SDL_Delay(150);
            count = 0;
            turn = 2;
          }
        }
        if(turn == 2){
          SDL_FillRect(s, NULL, colorf(s, 0, 0, 0));
          SDL_BlitSurface(border, NULL, s, NULL);
          SDL_BlitSurface(grid, NULL, s, &makeship);
          SDL_BlitSurface(lowangshipstext, NULL, s, &shiptext);
          SDL_UpdateWindowSurface(w);
          turn = 0;
          startsound = 2;
          break;
        }
        if(turn == 0){
          missPos.x = (resY*30)+363;
          missPos.y = (resX*30)+235;
          count += tomarBarcos(player2,resX,resY,count,missPos,colocarBarcos,s);
          SDL_UpdateWindowSurface(w);
          if(count == 17){
            SDL_Delay(150);
            turn = 1;
            goto game;
          }
        }
      }
    } //FIN WHILE(SDL_EVENT)
  } //FIN WHILE(1)

    //-----FIN COLOCACION DE BARCOS-----//
  game:
  leerMatriz(player1,p1_barcos);
  leerMatriz(player2,p2_barcos);
  for(i=0;i<5;i++){
    p1_destr[i] = p1_barcos[i];
    p2_destr[i] = p2_barcos[i];
  }
  SDL_FillRect(s, NULL, colorf(s, 0, 0, 0));
  SDL_BlitSurface(border, NULL, s, NULL);
  SDL_BlitSurface(grid, NULL, s, &test3);
  SDL_BlitSurface(grid, NULL, s, &test4);
  drawShips(p1_shipsimg,s,0);
  drawShips(p2_shipsimg,s,1);
  //SDL_BlitSurface(logo, NULL, s, &test);
  SDL_UpdateWindowSurface(w);
  while(1){
    if(turn){
      SDL_BlitSurface(black, NULL, s, &turnpos);
      turnpos.x += 80;
      SDL_BlitSurface(duketurn, NULL, s, &turnpos);
      turnpos.x -= 80;
      SDL_UpdateWindowSurface(w);
    }
    else{
      SDL_BlitSurface(lowangturn, NULL, s, &turnpos);
      SDL_UpdateWindowSurface(w);
    }
    while(SDL_PollEvent(&e) != 0){
      if(e.type == SDL_QUIT){
        printf("Programa terminado\n");
        goto end2;
      }
      else{ 
        if(e.type == SDL_MOUSEBUTTONDOWN){
          SDL_GetMouseState(&y, &x);
          printf("%d %d\n",x,y);
          if(turn){
  		      x=(x-212);
  		      y=(y-112);
  		      resX=getPos(x);
  		      resY=getPos(y);
          }
          else{
  		      x=(x-212);
  		      y=(y-613);
  		      resX=getPos(x);
  		      resY=getPos(y);
          }
          printf("%d %d\n",resX,resY);
          if(resX==-1 || resY==-1){
  		      printf("continue\n");
  		      continue;
          }
          if(turn){
            hit = jugada(resX, resY, player2, p2_cont, p2_display, p2_barcos,shot,&size);
            missPos.x = (resY*30)+112;
            missPos.y = (resX*30)+213;  
          }
          else{
            hit = jugada(resX, resY, player1, p1_cont, p1_display, p1_barcos,shot,&size);
            missPos.x = (resY*30)+613;
            missPos.y = (resX*30)+213;
          }
          if (hit == -1){
            break;
          }
          if(hit == 0){
  		      SDL_BlitSurface(miss, NULL, s, &missPos);   
  		      SDL_UpdateWindowSurface(w);
            i=(rand()%12);                              //agregado para sonido de miss
            printf("%d\n",i);
            if(i == 0){
              if(turn){
                Mix_PlayChannel(-1,dukemiss[rand()%2],0);
                printf("reproduje sonido de miss\n");
              }
              else{
                Mix_PlayChannel(-1,lowangmiss[rand()%3],0);
                printf("reproduje sonido de miss\n");
              }
            }
            turn=(turn)?0:1;
          }
          else{
            Mix_PlayChannel(-1, hitsound, 0);
  		      SDL_BlitSurface(fire, NULL, s, &missPos);
            if(turn){                  //AGREGADO PARA SONIDO AL DESTRUIR
              destroy = destruccion(p2_destr,p2_cont,dukedestroy,p2_shipsimg,red_ships);
              ++dukecont;
            }
            else{
              destroy = destruccion(p1_destr,p1_cont,lowangdestroy,p1_shipsimg,red_ships);
              ++lowangcont;
            }
            if(!destroy){
              if((rand()%2)){
                if(turn) Mix_PlayChannel(-1, dukehit[rand()%15], 0);
                else Mix_PlayChannel(-1, lowanghit[rand()%11], 0);
              }  
              for(i=0;i<3;i++){
                animation = exp1[i];
                SDL_BlitSurface(animation,NULL,s,&missPos);
                if(turn){
                  turnpos.x += 80;
                  SDL_BlitSurface(duketurn, NULL, s, &turnpos);
                  turnpos.x -= 80;
                }
                else
                  SDL_BlitSurface(lowangturn, NULL, s, &turnpos);

                drawShips(p1_shipsimg,s,0);
                drawShips(p2_shipsimg,s,1);
                SDL_UpdateWindowSurface(w);
                SDL_Delay(150);
                SDL_FillRect(s, NULL, colorf(s, 0, 0, 0));
                SDL_BlitSurface(border, NULL, s, NULL);
                SDL_BlitSurface(grid, NULL, s, &test4);
                SDL_BlitSurface(grid, NULL, s, &test3);
                // SDL_BlitSurface(logo, NULL, s, &test);
                for(k=0;k<10;k++){
                  for(j=0;j<10;j++){
                    if(p1_display[k][j] == 'X'){
                      redraw.x = (j*30)+613;
                      redraw.y = (k*30)+213;
                      SDL_BlitSurface(miss, NULL, s, &redraw);
                    }
                    if(p2_display[k][j] == 'X'){
                      redraw.x = (j*30)+112;
                      redraw.y = (k*30)+213;
                      SDL_BlitSurface(miss, NULL, s, &redraw);
                    }
                    if(p1_display[k][j] == '#'){
                      redraw.x = (j*30)+613;
                      redraw.y = (k*30)+213;
                      SDL_BlitSurface(fire, NULL, s, &redraw);
                    }
                    if(p2_display[k][j] == '#'){
                      redraw.x = (j*30)+112;
                      redraw.y = (k*30)+213;
                      SDL_BlitSurface(fire, NULL, s, &redraw);
                    }                   
                  }
                }
                drawShips(p1_shipsimg,s,0);
                drawShips(p2_shipsimg,s,1);
                if(turn){
                  turnpos.x += 80;
                  SDL_BlitSurface(duketurn, NULL, s, &turnpos);
                  turnpos.x -= 80;
                }
                else
                  SDL_BlitSurface(lowangturn, NULL, s, &turnpos);
                SDL_UpdateWindowSurface(w);
              }
            }
            else{
              Mix_PlayChannel(-1,sizedestroy[size],0);
              missPos.x -= 60;
              missPos.y -= 60;
              for(i = 0; i< 7; i++){
                animation = exp2[i];
                if(turn){
                  for(m = 0; m < 5; m++){
                    if(p2_destr[m] == -1){
                      if((m==0)||(m==2)) messagepos.x += 60;
                      SDL_BlitSurface(message[m], NULL, s, &messagepos);
                      if((m==0)||(m==2)) messagepos.x -= 60;
                      break;
                    }
                  }
                  turnpos.x += 80;
                  SDL_BlitSurface(duketurn, NULL, s, &turnpos);
                  turnpos.x -= 80;
                }
                else{
                  for(m = 0; m < 5; m++){
                    if(p1_destr[m] == -1){
                      if((m==0)||(m==2)) messagepos.x += 60;
                      SDL_BlitSurface(message[m], NULL, s, &messagepos);
                      if((m==0)||(m==2)) messagepos.x -= 60;
                      break;
                    }
                  }
                  SDL_BlitSurface(lowangturn, NULL, s, &turnpos);
                }
                SDL_BlitSurface(animation, NULL, s, &missPos);
                SDL_UpdateWindowSurface(w);
                SDL_Delay(90);
                SDL_FillRect(s, NULL, colorf(s, 0, 0, 0));
                SDL_BlitSurface(border, NULL, s, NULL);
                SDL_BlitSurface(grid, NULL, s, &test4);
                SDL_BlitSurface(grid, NULL, s, &test3);
                for(k=0;k<10;k++){
                  for(j=0;j<10;j++){
                    if(p1_display[k][j] == 'X'){
                      redraw.x = (j*30)+613;
                      redraw.y = (k*30)+213;
                      SDL_BlitSurface(miss, NULL, s, &redraw);
                    }
                    if(p2_display[k][j] == 'X'){
                      redraw.x = (j*30)+112;
                      redraw.y = (k*30)+213;
                      SDL_BlitSurface(miss, NULL, s, &redraw);
                    }
                    if(p1_display[k][j] == '#'){
                      redraw.x = (j*30)+613;
                      redraw.y = (k*30)+213;
                      SDL_BlitSurface(fire, NULL, s, &redraw);
                    }
                    if(p2_display[k][j] == '#'){
                      redraw.x = (j*30)+112;
                      redraw.y = (k*30)+213;
                      SDL_BlitSurface(fire, NULL, s, &redraw);
                    }                   
                  }
                }
                drawShips(p1_shipsimg,s,0);
                drawShips(p2_shipsimg,s,1);
                //SDL_UpdateWindowSurface(w);
                if(turn){
                  turnpos.x += 80;
                  SDL_BlitSurface(duketurn, NULL, s, &turnpos);
                  turnpos.x -= 80;
                }
                else
                  SDL_BlitSurface(lowangturn, NULL, s, &turnpos);
              }
              if(turn){
                for(m = 0; m < 5 ;m++){
                  if(p2_destr[m] == -1)
                    p2_destr[m] = 0;
                }
              }
              else{
                for(m = 0; m < 5 ;m++){
                  if(p1_destr[m] == -1)
                    p1_destr[m] = 0;
                }
              }  
            }
            if(dukecont == 9){
              dukecont = 10;
              lowangcont = 10;
              Mix_HaltMusic();
              i=rand()%3;
              Mix_PlayMusic(dukemusic[i],-1);
            }
            if(lowangcont == 9){
              dukecont = 10;
              lowangcont = 10;
              Mix_HaltMusic();
              i=rand()%3;
              Mix_PlayMusic(lowangmusic[i],-1);
            }
  		      //-------SECCION AGREGADA PARA ANIMACION------//
            //------FIN SECCION AGREGADA PARA ANIMACION-----//
            SDL_UpdateWindowSurface(w);
          }
          SDL_UpdateWindowSurface(w);
          if(compararContadores(p2_cont,p2_barcos)){
            SDL_Delay(4000);
            printf("Jugador 1 gana!\n");
            goto endduke;
          }
          if(compararContadores(p1_cont,p1_barcos)){
            SDL_Delay(4000);
            printf("Jugador 2 gana!\n");
            goto endwang;
          }
          printf("Turno: %d\n",turn);
          printf("Hit: %d\n",hit);
        } 
      }  
    }
  }
    
  endduke:  
  SDL_FillRect(s, NULL, colorf(s, 0, 0, 0));
  SDL_BlitSurface(playagainimg,NULL,s,&playagainpos);
  SDL_BlitSurface(yesimg,NULL,s,&yespos);
  SDL_BlitSurface(noimg,NULL,s,&nopos);
  SDL_BlitSurface(dukewintext,NULL,s,&dukewintextpos);
  SDL_BlitSurface(dukewinimg,NULL,s,&dukewinimgpos);
  Mix_PlayChannel(-1,dukeend[rand()%4],0);
  while(1){
    while(SDL_PollEvent(&e) != 0){
      if(e.type == SDL_QUIT){
        printf("Salida en el end menu al clickear X\n");
        goto end2;
      }
      else if(e.type == SDL_MOUSEBUTTONDOWN){ //138 194
        SDL_GetMouseState(&y,&x);
        printf("%d %d\n",x,y);
        if(((x>602)&&(x<651))&&((y>330)&&(y<443))){
          printf("yes\n");
          SDL_DestroyWindow(w);
          Mix_HaltMusic();
          system("clear");
          aux=1;
          goto inicio;
        }
        if(((x>602)&&(x<651))&&((y>570)&&(y<644))){
          printf("no\n");
          SDL_DestroyWindow(w);
          Mix_HaltMusic();
          system("clear");
          aux=0;
          goto inicio;
        }
      }
      SDL_UpdateWindowSurface(w);
    }
  }

  endwang:
  SDL_FillRect(s, NULL, colorf(s, 0, 0, 0));
  SDL_BlitSurface(playagainimg,NULL,s,&playagainpos);
  SDL_BlitSurface(yesimg,NULL,s,&yespos);
  SDL_BlitSurface(noimg,NULL,s,&nopos);
  SDL_BlitSurface(lowangwintext,NULL,s,&lowangwintextpos);
  SDL_BlitSurface(lowangwinimg,NULL,s,&dukewinimgpos);
  Mix_PlayChannel(-1,lowangend[rand()%5],0);
  while(1){
    while(SDL_PollEvent(&e) != 0){
      if(e.type == SDL_QUIT){
        printf("Salida en el end menu al clickear X\n");
        goto end2;
      }
      else if(e.type == SDL_MOUSEBUTTONDOWN){ //138 194
        SDL_GetMouseState(&y,&x);
        printf("%d %d\n",x,y);
        if(((x>602)&&(x<651))&&((y>330)&&(y<443))){
          printf("yes\n");
          SDL_DestroyWindow(w);
          Mix_HaltMusic();
          system("clear");
          aux=1;
          goto inicio;
        }
        if(((x>602)&&(x<651))&&((y>570)&&(y<644))){
          printf("no\n");
          SDL_DestroyWindow(w);
          Mix_HaltMusic();
          system("clear");
          aux=0;
          goto inicio;
        }
      }
      SDL_UpdateWindowSurface(w);
    }
  }
  end2:  
  Mix_HaltMusic();
  SDL_DestroyWindow(w);
  Mix_Quit();
  SDL_Quit();
  return 0;
}  