#include<stdio.h>
#include<signal.h>
char*s="w";i=1,j;d;e;main(c,v)char**v;{
	for(;i<c&&*v[i]==45;)e=v[i][++j],e=='i'?(signal(SIGINT,SIG_IGN),0):e=='a'?s="a":j==1||e?(exit(1),0):(j=0,i++);
	FILE*f[c];if(setvbuf(stdin,NULL,_IONBF,1))exit(1);
	for(j=--i,f[j]=stdout;++i<c;)f[i]=fopen(v[i],s);
	for(;(d=getc(stdin))>=0;)for(i=j;i<c;i++)if(f[i])putc(d,f[i]),fflush(f[i]);
}
