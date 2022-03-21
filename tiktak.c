//program to desing tiktak toe game
//two players are there
//one player first followed by other choose there place to fill out of 3*3 place
//whoever completed his/her horizontal/vertical/diagonal with its symbol wins the game
#include<stdio.h>
#include<stdlib.h>
int chk(int a){
    int count=1;    //function to check invalid position
int arr[9]={11,12,13,21,22,23,31,32,33};   
for(int i=0;i<9;i++)
    if(arr[i]==a)return --count;}
int i,j,k=0,temp=0,count=0,gameover=0,p,x,r,rem,z,c=0,b=0,l,a,arr[200];   //varible used
int ar[200],ai[200];char q[20];char w[20],raghu,op=0,ap=0,o=0,oo=0;
void intro(){                           
      printf("hello dear! welcome to raghu's version of tik tak toe..\n");    //name taken from both the player
      printf("enter your good name:");
      gets(q);
      printf("hello %s!\n",q);
      printf("enter your opponent name:");      
      gets(w);
      printf("hello %s!\n",w);
      printf("enter 1 to play the game ot 0 to exit the game:");   //permission taken from user whether he/she is ready or not 
      scanf("%d",&l);
      if(l==0)exit(0);   
}
void setup(){
system("cls");    //command to delete previous frame when new frame build
   for(i=0;i<13;i++){
      for(j=0;j<19;j++){
        if(i==0||i==4||i==8||i==12)printf(".");
        else if(j==0||j==6||j==12||j==18)printf(".");  //command to make outline border
        else if(i==r&&j==rem&&(count%2)==0)printf("x");
        else if(i==r&&j==rem&&(count%2)!=0)printf("y");  //filling the box as entered by the players
        else { int ch=0;
           for(p=0;p<k;p++){
              r=2*(2*(arr[p]/10)-1);     //to seperate x and y coordinate
              rem=3*(2*(arr[p]%10)-1);
              if(i==r&&j==rem&&(temp%2)==0){ch=1;printf("x");}  //printing x and y
              else if(i==r&&j==rem&&(temp%2)!=0){ch=1;printf("y");}temp++;}temp=0;
              if(ch==0)
              printf(" ");}
        }
      printf("\n");
    }
int l=0,m=0,g=0,h=0,s,t;
    for(s=0;s<k/2;s++){  //checking if any player wins horizontally
    l=0,m=0,g=0,h=0;
        for(t=s+1;t<=k/2;t++){
           if(ar[2*s]==ar[2*t])l++;
           else if(ai[2*s]==ai[2*t])m++;

           if(ar[2*s+1]==ar[2*t+1])g++;    //checking if any player wins vertically
           else if(ai[2*s+1]==ai[2*t+1])h++;

           if(l==2||m==2){printf("%s wins\n",q);gameover=1;break;}   //command to check winner of the game
           else if(g==2||h==2){printf("%s wins\n",w);gameover=1;break;}
        }
    }
        if(k%2!=0&&k>0){
           if(arr[k-1]%11==0)op++;  //checking if any player wins diagonally
           if((arr[k-1]==13||arr[k-1]==22)||arr[k-1]==31)o++;
        }
        else if(k%2==0&&k>0){
           if(arr[k-1]%11==0)ap++;  //checking if any player wins diagonally
           if((arr[k-1]==13||arr[k-1]==22)||arr[k-1]==31)oo++;
        }
        if(op==3||o==3){printf("%s wins\n",q);gameover=1;}    //command to check winner of the game
        else if(ap==3||oo==3){printf("%s wins\n",w);gameover=1;}
if(gameover==0){
       label1:
    printf("enter your position:");  //input taken from the user
    scanf("%d",&x);
    if(chk(x)){   //function to check for invalid move
      printf("invalid move\n");
    goto label1;
    }
    for(z=0;z<k;z++){  //command to check whether user had given filled box data
        if(arr[z]==x){printf("already filled\n");goto label1;}
    }
        r=2*(2*(x/10)-1);
        rem=3*(2*(x%10)-1);
        arr[k]=x;ar[k]=r;ai[k]=rem;k++;
        if(x==0)gameover=1;
        if(count==9){printf("match drawn");gameover=1;}   //checking the result of the game
    }
}  
int main(){
intro();
while(!gameover){   //calling functions
count++;
setup(); }
return 0;}
