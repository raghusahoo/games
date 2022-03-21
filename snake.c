#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,j,k,fruitX,fruitY,height=20,width=20,x,y,gameover=0,fact,count=0;
int TailX[100],TailY[100];
void setup(){
    system("cls");
x=height/2;
y=width/2;
label1:
   fruitX=rand()%20;
   if(fruitX==0)goto label1;
label2:
   fruitY=rand()%20;
   if(fruitY==0)goto label2;}

void draw(){
    int ch=0;
    system("cls");
for(i=0;i<20;i++){
for(j=0;j<20;j++){
if(i==0||i==19)printf("-");
else if(j==0||j==19)printf("|");
else if(i==x&&j==y)printf("o");
else if(i==fruitX&&j==fruitY)printf("s");
for(k=0;k<count;k++){
    if(i==TailX[k]&&j==TailY[k]){
        ch=1;
        printf("o");}
}
if(ch==0)printf(" ");}
printf("\n");}
}
void input(){
if(kbhit()){
switch(getch()){
    case 'a':
    fact=1;
        break;
         case 's':
        fact=2;
        break;
         case 'w':
        fact=3;
        break;
         case 'z':
        fact=4;
        break;
        }
    }}
void makelogic(){
    int prevX=TailX[0];
    int prevY=TailY[0];
TailX[0]=x;
TailY[0]=y;
for(int zz=1;zz<count;zz++){
int prev2X=TailX[zz];
    int prev2Y=TailY[zz];
TailX[zz]=prevX;
TailY[zz]=prevY;
prevX=prev2X;
prevY=prev2Y;
}
switch(fact){
 case 1:
     y--;
     break;
 case 2:
    y++;
    break;
 case 3:
    x--;
    break;
 case 4:
    x++;
    break;}
    if(x<0||y<0||x>20||y>20)gameover=1;
    if(fruitX==x&&fruitY==y){
    label3:
   fruitX=rand()%20;
   if(fruitX==0)goto label3;
label4:
   fruitY=rand()%20;
   if(fruitY==0)goto label4;
   count++;}
    }

int main(){
setup();
while(!gameover){
draw();
input();
makelogic();}
return 0;}
