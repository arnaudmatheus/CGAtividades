#include "mygl.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
// >>> Defina aqui as funções que você implementar <<< 


int PosicaoPix(int x, int y) {

	int linha = ((y * 4)* IMAGE_WIDTH);
	int coluna = (x*4);
	
	int posicao = linha + coluna;
	
	return posicao;
}

typedef struct pixel {
	int x , y; 
	int RGBA[4];
	
} Pixel; 

void PutPixel(Pixel p) {

	if((p.x >= 0 && p.x < IMAGE_HEIGHT) && (p.y >= 0 && p.y < IMAGE_WIDTH)) {
	
		fb_ptr[PosicaoPix(p.x,p.y) + 0 ] = p.RGBA[0];
		fb_ptr[PosicaoPix(p.x,p.y) + 1 ] = p.RGBA[1];
		fb_ptr[PosicaoPix(p.x,p.y) + 2 ] = p.RGBA[2];
		fb_ptr[PosicaoPix(p.x,p.y) + 3 ] = p.RGBA[3];
	}

}

void DrawLineEqual(Pixel p1,Pixel p2){
	int dx = p2.x - p1.x;
	int dy = p2.y - p1.y;
	int d = 2*dy - dx;
	int incr_e = 2 * dy;
	int incr_ne = 2 * (dy - dx);
	Pixel p3;
	p3.x = p1.x;
	p3.y = p1.y;
	if(dx == dy){
		PutPixel(p3);
		while (p3.x<p2.x){
			if (d<=0){
				d+=incr_e;
				p3.x++;
			
			}else{
				d += incr_ne;
			
				p3.x++;
				p3.y++;
			}
		
			PutPixel(p3);
		
		}
	}
}

void DrawLineLow(Pixel p1,Pixel p2){
	int dx = p2.x - p1.x;
	int dy = p2.y - p1.y;
	int D = 0;
	int yi = 1;
	Pixel p3;
	
	if(dy<0){
	 	yi = -1;
		dy = -dy;
	}
	D = (2*dy) - dx;
	p3.y = p1.y;
	p3.x = p1.x;
	while (p3.x<p2.x){
		PutPixel(p3);
		if(D>0){
			p3.y += yi;
			D = D - (2*dx);
			
		}else{
			D = D + (2*dy);
			p3.x++;

		}
		
	}
	
}

void DrawLineHigh(Pixel p1,Pixel p2){
	int dx = p2.x - p1.x;
	int dy = p2.y - p1.y;
	int D = 0;
	int xi = 1;
	Pixel p3;
	p3.x = p1.x;
	p3.y = p1.y;
	if(dx<0){
		xi = -1;
		dx = -dx;
	}
	D = (2*abs(dx)) - abs(dy);
	while (p3.y<p2.y){
		PutPixel(p3);
		if(D>0){
			p3.x += xi;
			D = D - (2*dy);

		}else{
			D = D + (2*dx);
			p3.y++;
		}
		
	}
	
		

	
}


void DrawLine(Pixel p1,Pixel p2){
	int dx = p2.x - p1.x;
	int dy = p2.y - p1.y;
	int x,y;
	x = abs(dx);
	y = abs(dy);
	if(y < x){
		if(p1.x>p2.x){
			DrawLineLow(p2,p1);
		}else{
			DrawLineLow(p1,p2);
		}
		
	}else{
		if(p1.y>p2.y){
			DrawLineHigh(p2,p1);
		}else{
			DrawLineHigh(p1,p2);
		}
	}
	
	if (dx == dy){
		DrawLineEqual(p1,p2);
	}
	
}
void DrawTriangle(Pixel p1,Pixel p2, Pixel p3){

	DrawLine(p1,p2);
 	DrawLine(p2,p3);
 	DrawLine(p3,p1);
}
// Definição da função que chamará as funções implementadas pelo aluno
void MyGlDraw(void) {
//
 // >>> Chame aqui as funções que você implementou <<<
 //
 Pixel p1,p2,p3,p4;
 
 p1.x = 0;
 p1.y = 450;
 p2.x = 255;
 p2.y = 0;
 
 p3.x = 255;
 p3.y = 110;

 p4.x = 450;
 p4.y = 450;
 
 
 
 PutPixel(p1);
 PutPixel(p2);
 PutPixel(p3);

 PutPixel(p4);
 DrawTriangle(p1,p2,p4); 
 DrawLine(p1,p3);
}
