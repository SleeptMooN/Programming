/*
Agradeço ao André Cerqueira por me explicar o algoritmo deste exercício e por me ajudar a rever os if's que estavam com problemas (como seria de esperar com if's tão grandes :P)
*/

#include <stdio.h>

#define PI 3.14159265358

double intersecao();

int main(){
  int cases;

  double qx, qy, qSide;
  double cX, cY, cRaio;

  scanf("%d", &cases);

  for(int i = 0; i < cases; i++){
    scanf("%le %le %le %le %le %le", &qx, &qy, &qSide, &cX, &cY, &cRaio);
    printf("%f \n", intersecao(qx, qy, qSide, cX, cY, cRaio));
  }

  return 0;
}

double intersecao(double qx, double qy, double side, double cX, double cY, double raio){
  double area = 0;
  double qx2 = qx + side;
  double qy2 = qy + side;


  if((qx - cX) * (qx - cX) + (qy - cY) * (qy - cY) > raio*raio &&
  (qx - cX) * (qx - cX) + (qy2 - cY) * (qy2 - cY) > raio*raio &&
  (qx2 - cX) * (qx2 - cX) + (qy - cY) * (qy - cY) > raio*raio &&
  (qx2 - cX) * (qx2 - cX) + (qy2 - cY) * (qy2 - cY) > raio*raio &&
  !(cX > qx && cX < qx2) && !(cY > qy && cY < qy2)){
    return 0;
  }

  if((qx - cX) * (qx - cX) + (qy - cY) * (qy - cY) < (raio * raio) &&
  (qx - cX) * (qx - cX) + (qy2 - cY) * (qy2 - cY) < (raio * raio) &&
  (qx2 - cX) * (qx2 - cX) + (qy - cY) * (qy - cY) < (raio * raio) &&
  (qx2 - cX) * (qx2 - cX) + (qy2 - cY) *(qy2 - cY) < (raio * raio)){
    return side * side;
  }

  if((cX + raio) < (qx + side) &&
    (cX - raio) > qx &&
    (cY + raio) < (qy + side) &&
    (cY - raio) > qy){
    return PI * (raio * raio);
  }

	if(side>=0.001){
		side /= 2;
		area += intersecao(qx, qy + side, side, cX, cY, raio);
		area += intersecao(qx + side, qy + side, side, cX, cY, raio);
		area += intersecao(qx, qy, side, cX, cY, raio);
		area += intersecao(qx + side, qy, side, cX, cY, raio);
	}

  return area;
}
