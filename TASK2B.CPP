#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main(){
    clrscr();
    long int n, i, Start, End, Adder, Max;
    int q, j;
    cin>>n;
    long int *num = new long int[n];
    cin>>q;
    for(i=0;i<n;i++){
	num[i] = i;
    }
    for(j=0;j<q;j++){
	cin>>Start;
	cin>>End;
	cin>>Adder;
	for(i=Start-1;i<(End-1);i++){
	    num[i]+=Adder;
	}
    }
    Max = num[0];
    for(j=1;j<n;j++)
	if(num[j]>Max)
	    Max = num[j];
    cout<<Max;

    getch();
}