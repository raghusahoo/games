#include<stdio.h>   
//fact of the given input number
int fact(int a){ 
    if(a==0)return 1;
    else return a*fact(a-1);
}

int main(){
    int arr[100000],i=0,j,a=0,c=0,b=0,d=0,factorial=0,k=0,temp=0,tem=0,num=0;   //variables 
    int lower=0,upper=0,store=0,ar[20],copy=0;    
    char x[20];
    //taking input string from the user
    printf("enter your string:"); 
    gets(x);  
    //counting the length of given input string
    while(x[i]!='\0'){  
        a++; i++;
    }i=0; c=a;
    //storing the each character ASCII value into another array of a string
    for(i=0;i<a;i++) 
        ar[i]=i;   
       factorial=fact(a); copy=factorial;  
    //      
    while(tem!=a){      
            temp=factorial/c;  
            store=temp;
        while(d!=(copy/store)){  
            temp=store;                                                       
            label1:       
            if(b==a)b=0;
            for(i=0;i<tem;i++){   //check for repetition of digit in one arrangement of data
            if(arr[(k*a)+tem-i-1]==ar[b]){
                 b++;
                goto label1;}
            }
            while(temp!=0){
                   arr[(k*a)+tem]=ar[b];  
                   temp--;  k++; num++; } 
                d++;  b++;
        } 
        factorial=store; 
        tem++;  k=0;  c--;  b=0;  d=0;
    } 
        for(i=0;i<num;i++){  //printing of permutation of your data
            printf("%c",x[arr[i]]);
         if(((i+1)%a)==0)printf("\n");}

return 0;}