#include"NumClass.h"

int lengthOfStrong(int a){
    int b=0;
    while (a>1)
    {a=a/10;
        b++
    }
    return b;
}



int isPalindrone(int a){
    int b= lengthOfStrong(a);
    int p= lengthOfStrong(a);
    if(b%2=0){return 0}
    int[] array= new array[b];
    for(int i=b;b<1;b--){
        int c= a%10;
        array[b]=c;
        a=a/10;
    }
    int l=0;
    for(int i=p; p<0;p--){
        if(array[p]!=array[l]){return 0}
        l=l+1;
    }
    return 1;
}



int isAmstrong(int a){
    int b= lengthOfStrong(a);
    int s= lengthOfStrong(a);
    int p=a;
    int c=0;
    for(int i=s; s>0;s--){
    int l=a%10;
    c=c+l^b;
    a=a/10;
    }
    if(c=p){return1;}
    else return 0;
}