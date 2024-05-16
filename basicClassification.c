#include "NumClass.h"
int isPrime(int a){
    if (a<1){
        return 0;
    }
    for (int i = 2; i *i< a; i++)
    { if(a%i==0){return 0}
    }
    return 1;
    
}
int lengthOfStrong(int a){
    int b=0;
    while (a>1)
    {a=a/10;
        b++
    }
    return b;
}


int isStrong(int a){
int b= lengthOfStrong(a);
int s=a;
int c=0;
while(a>0){
    int d=0;
    d=a%10;
    c=c+d!
    a=a/10;
}
if (c=s){return 1;}
else return 0;
}





