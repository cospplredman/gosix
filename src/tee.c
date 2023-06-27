#include<stdio.h>
#include<signal.h>
//TODO arguments
char*s="w";
i=0,j;d;main(c,v)char**v;{
	FILE*f[c];

	for(;++i<c&&*v[i]==45;){
		j++;
		if(v[i][j] == 'i'){
			i--;
			signal(SIGINT,SIG_IGN);
		}else if(v[i][j] == 'a'){
			i--;
			s="a";
		}else{
			if(j==1||v[i][j])
				exit(1);
			j=0;
		}
	}

	if(setvbuf(stdin,NULL,_IONBF,1))exit(1);
	for(j=--i,f[j]=stdout;++i<c;)f[i]=fopen(v[i],s);
	for(;(d=getc(stdin))>=0;)
		for(i=j;i<c;i++)
			if(f[i])putc(d,f[i]),fflush(f[i]);
}
