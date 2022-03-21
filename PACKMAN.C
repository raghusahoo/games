#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

//coordinates of the boundary
int crr[20]={-7,-11,28,-4,-1,9,-22}; //vermove
int cr[20]={46,-58,-16,-31,21,-6,-74,17,-63,-41,-26}; //hormove
int brr[20]={-4,7,-42,-10,-4,12,-42,-32,-27,-17}; //hormove interval
int br[50]={-12,8,-2,8}; //vermove interval

//checking for restricted movement
int bigSmalldiff(int a,int b){
int temp=0;
temp=((a>b?a:b)-(a>b?b:a));
return temp;}

//variables used
int store1=0,store2=0;
int a,b,c,arr[1000],gameover=1,i,j,k=0,allow=0,vermove=0,hormove=0,flag=0,p=0;
char x[20];

//knowing the player details
void intro(){
printf("enter your name:");
gets(x);
printf("enter 1 to to start the game or 0 to stop the name:");
scanf("%d",&a);}

//drawing the front end of packman
void draw(){
//clear_screen command
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3//bgi");
setcolor(BLUE);
for(i=0;i<2;i++){
line(0,100+(5*i),600,100+(5*i));
line(0+(5*i),100,0+(5*i),350);
line(0,350-(5*i),600,350-(5*i));
line(600-(5*i),100,600-(5*i),350);}
setcolor(GREEN);
   
//small g
line(405,180,405,250);
line(350,250,405,250);
line(350,180,350,215);
line(350,235,350,250);
line(350,180,405,180);
line(350,215,385,215);
line(50,150,130,150);
   
//g configuration
line(50,150,50,250);
line(130,150,130,165);
line(130,165,70,165);
line(70,165,70,225);
line(70,225,100,225);
line(50,250,130,250);
line(130,250,130,200);
line(130,200,100,200);
line(100,200,100,225);
   
//l configuration
for(i=0;i<30;i=i+20){
line(450,150+(i*5),470,150+(5*i));
line(450+i,150,450+i,250);}
   
//oo configuration
setcolor(RED);
for(i=0;i<80;i=i+75){
line(160+i,200,160+i,250);
line(160+i,200,210+i,200);
line(210+i,200,210+i,250);
line(210+i,250,160+i,250);}
   
//boundary 2
setcolor(BLUE);
for(i=0;i<30;i=i+20){
line(160,150+i,300,150+i);
line(160+(7*i),150,160+(7*i),170);}
for(i=0;i<30;i=i+20){
line(320,150+i,420,150+i);
line(320+(5*i),150,320+(5*i),170);}
   
//design of fruit
setcolor(RED);
for(i=0;i<560;i=i+10){
   for(j=0;j<=200;j=j+10){
   allow=0;
if((i==0||(i==470&&(j>0&&j<250))||(j==60&&(i>50&&i<300))||
(i==60&&(j>60&&j<100))||
((i==200||i==120)&&j<250)
||i==550)||(j==0||j==200)||
(j==150||((i==50||i==180||i==220||i==0||i==400||i==350)&&j>150))){
for(p=0;p<k;p=p+4){
   store1=bigSmalldiff(arr[p],(i+25));
   store2=bigSmalldiff(arr[p+2],(j+125));
   if((store1<10)&&(store2<10)){
   allow=1;break;}}
if(allow==0)
circle(25+i,125+j,1);}    
}}
   
//tablet
setcolor(BROWN);
for(j=0;j<600;j=j+570){
for(i=0;i<30;i=i+20){
allow=0;
   for(p=0;p<k;p=p+4){
   store1=bigSmalldiff(arr[p],(j+18));
   store2=bigSmalldiff(arr[p+2],(i*11+115));
   if((store1<5)&&(store2<5)){
   allow=1;break;}}
   if(allow==0)
circle(18+j,115+(i*11),5);}}
circle(92,218,5);
   
//e configuration
setcolor(BROWN);
line(510,180,565,180);
line(510,180,510,250);
line(510,250,565,250);
line(565,180,565,215);
line(565,215,530,215);
line(530,215,530,235);
line(530,235,565,235);
line(565,235,565,250);
bar(525,185,540,200);
   
//octopus
delay(20);
bar((360+(5*hormove)),(200+(5*vermove)),(370+(5*hormove)),(210+(5*vermove)));
arr[k]=360+(5*hormove);
arr[k+1]=370+(5*hormove);
arr[k+2]=200+(5*vermove);
arr[k+3]=210+(5*vermove);k=k+4;
   
//killer
setcolor(YELLOW);
for(j=0;j<400;j=j+200){
for(i=0;i<600;i=i+200){
circle(150+i-(j/5),125+j,8);}
}
delay(50);
   
//getting the input movement from user
if(kbhit()){
switch(getch()){
case 'a':
flag=1;
break;
case 's':
flag=2;
break;
case 'w':
flag=3;
break;
case 'z':
flag=4;
break;
default:
break;}}
switch(flag){
case 1:
hormove--;
break;
case 2:
hormove++;
break;
case 3:
vermove--;
break;
case 4:
vermove++;
default:
break;}
  
//restriction so that octopus cannot go out of box
if(hormove==46)--hormove;   
else if(hormove==-74)hormove=hormove+1;
if((vermove==28)||((vermove==-4)&&(hormove>-4&&hormove<7)))--vermove;
else if(vermove==-22)vermove=vermove+1;
if(((vermove==-7)||(vermove==-11))&&(((hormove>-42)&&(hormove<-10))||
((hormove>-4)&&(hormove<12)))){
if(vermove==-7)
vermove++;
else vermove--;}
if(((vermove>-12)&&(vermove<8))&&(((hormove==17)||(hormove==21))||(hormove==-63)
||(hormove==-59))){
if((hormove==17)||(hormove==-63))--hormove;
else ++hormove;}
if(((hormove==-41)||(hormove==-26)||(hormove==-16)||(hormove==-31))&&
((vermove>-2)&&(vermove<8))){
if((hormove==-16)||(hormove==-31))++hormove;
else --hormove;}
if(((vermove==-1)||(vermove==9))&&(((hormove>-42)&&(hormove<-32))||
((hormove>-27)&&(hormove<-17)))){
if(vermove==9)++vermove;
else --vermove;}
if(((hormove==29)||(hormove==40))&&((vermove>-6)&&(vermove<10))){
if(hormove==29)--hormove;
else ++hormove;}
if(((vermove==-5)||(vermove==9))&&((hormove>29)&&(hormove<40))){
if(vermove==-5)--vermove;
else ++vermove;}
if(((vermove==-11)||(vermove==9))&&((hormove>-64)&&(hormove<-46))){
if(vermove==-11)--vermove;
else ++vermove;}
getch();
closegraph();
if(k==400)gameover=0;}

//calling functions
int main(){
clrscr();
intro();
while(gameover){
draw();}
getch();}
