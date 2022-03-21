#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char x[20]="LUDO";char s[20];char t[20];char u[20];char v[20],can=0,op=0;
int gameover=0,raghu=0,temp=0,coun=0,tem=0,temm=0,tr=0,te=0,raj=0;
int app=0,apps=0,appss=0;
int arr[200],ar[200],aa=0;
int cc[200],ccc[200],c=0;
int dd[200],ddd[200],d=0;
int ee[200],eee[200],e=0;
void draw(){
if(coun==5)coun=0;
coun++;
int r,raju=0;
if(raghu==0){
printf("enter four players names:\n");
scanf("%s%s%s%s",&s,&t,&u,&v);}raghu++;
int z=0,o=0;
int i,j,k=0,count=0,co=0;
for(i=0;i<20;i++){
for(j=-3;j<43;j++){
int ch=0,temp=rand()%7;
for(int z=0;z<aa;z++){
if(op==2)z++;
if(arr[z]==i&&ar[z]==j){ ch=1;printf("x");}  }
for(z=0;z<d;z++){
if(dd[z]==i&&ddd[z]==j){ch=1;printf("y");}}
for(z=0;z<c;z++){
if(cc[z]==i&&ccc[z]==j){ch=1;printf("z");}}
for(z=0;z<e;z++){
if(appss==2)z++;
if(ee[z]==i&&eee[z]==j){ch=1;printf("w");}}
if(i==7&&j==2&&temp==6&&coun==2){
printf("x");tem++;ch=1;temp=0;raj=tem;arr[aa]=i;ar[aa]=j;aa++;}
 else if(i==7&&j==((5*temp)-6)&&coun==2&&can==2&&raj>0){
 printf("x");op=can;ch=1;can=0;temp=0;arr[aa]=i;ar[aa]=j;aa++;}
else if(i==7&&j==37&&temp==6&&coun==3){
printf("z");temm++; ch=1;temp=0;cc[c]=i;ccc[c]=j;c++;}
else if(i==11&&j==2&&temp==6&&coun==4){
printf("y");te++;dd[d]=i;temp=0;ddd[d]=j;d++;}
else if(i==11&&j==37&&temp==6&&coun==5){
printf("w");tr++;temp=0;app=tr;ee[e]=i;eee[e]=j;e++;}
else if(i==11&&j==(37-(4*temp)-2)&&app>0&&apps==2&&coun==5){
printf("w");appss=apps;ee[e]=i;eee[e]=j;e++;ch=1;}
else if((j==-2)&&(i>1&&i<7)){ch=1;
printf("%c",s[k]);}
else if((j==41)&&(i>1&&i<7)){ch=1;
printf("%c",t[k]);k++;}
else if((j==-2)&&(i>13&&i<19)){ch=1;
printf("%c",u[o]);}
else if(j==41&&(i>13&&i<19)){ch=1;
printf("%c",v[o]);o++;}
else if((i==6||i==12)&&(j==0||j==-3||j==13||j==23||j==26||j==6||j==42||j==39))printf("|");
else if((j==14||j==15||j==24||j==25)&&((i>0&&i<6)||(i>12&&i<18)))printf("_");
else if(i==12&&(j==3||j==9||j==29||j==36))printf("|");
else if((j==16||j==32)&&(i>0&&i<39))printf("|");
else if(j==20&&(i>7&&i<12)){
printf("%c",x[raju]);raju++;}
else if((j>16&&j<23)&&(i>0&&i<18))printf("_");
else if(i==18&&(j==0||j==13||j==-3||j==6||j==23||j==26||j==39||j==42))printf("|");
else if(i==0||i==18||i==6||i==12)printf("_");
else if(j==0||j==-3||j==6||j==26||j==39||j==13||j==23||j==42)printf("|");
else if((i>=6&&i<=11)&&(j==29||j==36||j==32||j==3||j==6||j==9))printf("|");
else if(i==19&&j==1){ch=1;printf("r");}
else if((i==3||i==15||i==8||i==10)&&((j>=-3&&j<16)||(j>26&&j<39)||j==24||j==23||j==25))printf("_");
else if((j==6||j==32)&&((i>0&&i<6)||(i>12&&i<18)))printf("|");
else if((i==1||i==4||i==13||i==16)&&(j==3||j==10)){
count++;
if(tem>0&&((i==1&&(j==3||j==10))||(i==4&&(j==3||j==10)))){ch=1;tem--;printf(" ");}
else if((count)<5){
printf("x");}
if(te>0&&i==13&&j==3)printf(" ");
else if((count)>=5&&(count)<9)printf("y");
else if((i==1||i==4||i==13||i==16)&&(j==36||j==29)){
co++;
if(temm>0&&i==1&&j==29)printf(" ");
 else if((co)<5)printf("z");
 if(tr>0&&i==13&&j==29)printf(" ");
 else if((co)>=5&&(co)<9)printf("w");
else if(ch==0)
printf(" ");}
printf("\n");} tem=raj;
printf("%d\n",temp);
if(coun==1)printf("%s turn\n",s);
else if(coun==2)printf("%s turn\n",t);   
else if(coun==3)printf("%s turn\n",v);
else if(coun==4)printf("%s turn\n",u);
printf("press 1 to continue:");
scanf("%d",&r);
if(coun==1){
label1:
temp=rand()%7;
if(temp==0)goto label1;
can++;printf("%d",temp);}
else if(coun==2){
label3:
temp=rand()%7;
if(temp==0)goto label3;}
else if(coun==3){
label4:
temp=rand()%7;
if(temp==0)goto label4;}
else if(coun==4){
label2:
temp=rand()%7;
if(temp==0)goto label2;
apps++;}
if(r==0)gameover=1;}
  }
}
int main(){
while(!gameover){
draw();}
}