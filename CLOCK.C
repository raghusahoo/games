#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

int main(){
//clear screen command
     clrscr();

//variables used
     int raghu,ii,jj;
     int m=0,xx=0,yy=0;
     double ten=0,count=0,re;
     double tem=0,aer[100],kk=0;

//predefined command to access for graphics
     int gd=DETECT,gm;
     initgraph(&gd,&gm,"c://tc//bgi");

//drawing the numerials of clock
     for(ii=0;ii<=250;ii=ii+50){
         for(jj=0;jj<=250;jj=jj+50){
             if(ii==150&&jj==240)
                printf("3");
          }
       }

//command to draw the circle of clock
      circle(150,150,100);

//command to draw center point of clock
      circle(150,150,7);

//hour hand coordinate
      line(150,150,150,200);
      line(150,150,90,150); 

//minute_hand coordinate
      line(150,50,150,60);
      line(150,250,150,240);

//second_hand coordinate
      line(50,150,60,150);
      line(250,150,240,150);


//positioning of numerals
     //1,2,3,4,5,......,12
      for(m=0;m<=120;m=m+100){
         if(m==100)
            line(202-m,68,195-m+15,75);
         else 
           line(202,68,195,75);

         if(m==100)
           line(235-m-70,104,225-m+20-70,111);
         else 
           line(235,104,225,111);

         if(m==100)
           line(235-m-70,192,230-m+10-70,189);
         else 
           line(237,192,230,189);

         if(m==100)
           line(200-m,232,193-m+15,224);
         else 
           line(200,232,193,224);
      }

//command to start the clock
      scanf("%d",&raghu);

//command to stop the clock
      if(raghu==1)
        exit(0);

  label5:
    double arr[100],ar[100],ai[100],arrr[100],i,j,s=0,t=0,g=0,k=0;
    double n=0,p=0,r=0,q=0;

//second hand movement command
    label1:
        setcolor(WHITE);
        line(150,150,150+n,80+n);
        arr[k]=n;k++;
        n=n+4.5;
//delay command to adjust the movement of clock
        delay(1000);

        if(n<=70){
           for(i=0;i<k;i++){
             setcolor(BLACK);
             line(150,150,150+arr[i],80+arr[i]);
           }
        goto label1;
      }

//minute hand movement command
     label2:
       setcolor(WHITE);
       line(150,150,230-p,150+p);
       ar[t]=p;t++;
       p=p+4.5;
       delay(1000);

       if(p<=80){
          for(i=0;i<t;i++){
          setcolor(BLACK);
          line(150,150,150+arr[k-1],80+arr[k-1]);
          line(150,150,230-ar[i],150+ar[i]);
        }
      goto label2;
     }

//hour hand movement command 
     label3:
        setcolor(WHITE);
        line(150,150,150,220);
        line(150,150,150-s,230-s);
        ai[r]=s;r++;
        s=s+4.5;
       if(s<=80){
          delay(1000);
          for(i=0;i<r;i++){
              setcolor(BLACK);
              line(150,150,230-ar[t-1],150+ar[t-1]);
              line(150,150,150-ai[i],230-ai[i]);
           }
          goto label3;
      }


     label4:
        setcolor(WHITE);
        line(150,150,80,150);
        line(150,150,70+q,150-q);
        arrr[g]=q;g++;
        q=q+4.5;
        if(q<=85){
           delay(1000);

           for(i=0;i<g;i++){
               setcolor(BLACK);
               line(150,150,150-ai[r-1],230-ai[r-1]);
               line(150,150,70+arrr[i],150-arrr[i]);
            }
             goto label4;
         }
         setcolor(BLACK);
         line(150,150,70+arrr[i],150-arrr[i]);
         ten++;
         aer[count]=kk;count++;
         kk=kk+4.5;

        for(re=0;re<ten;re++){
           setcolor(BLACK);
           line(150,150,90+aer[re],150-aer[re]);
        }
        setcolor(WHITE);
        line(150,150,90+kk,150-kk);
   goto label5;

 getch();
 closegraph();
}