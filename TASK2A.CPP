#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main(){
    clrscr();
    int t, i, j, opens, absopens, closes;
    cin>>t;
    char *a;
    int *ans = new int[t];
    for(i=0;i<t;i++){
	gets(a);
	opens = 0;
	closes = 0;
	absopens = 0;
	for(j=0;a[j]!='\0';j++){
	    if(a[j] == '<'){
		opens++;
		absopens++;
	    }
	    else{
		if(opens == 0){
		    ans[i] = 1;
		    break;
		}
		opens--;
		absopens++;
	    }
	}
	ans[i] = absopens;

    }
    for(i=0;i<t;i++){
	cout<<ans[i]<<endl;
    }
    getch();
    delete(a);
    delete(ans);
}