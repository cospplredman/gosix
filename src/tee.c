#include<stdio.h>
#include<signal.h>
char*s="w";i=1,j;d;e;main(c,v)char**v;{
	for(;i<c&&*v[i]==45;)switch(e=v[i][++j]){
		case'i':
			signal(SIGINT,SIG_IGN);break;
		case'a':
			s="a";
	default:if(j==1||e)exit(1);j=0;i++;}
	FILE*f[c];if(setvbuf(stdin,NULL,_IONBF,1))exit(1);
	for(j=--i,f[j]=stdout;++i<c;)f[i]=fopen(v[i],s);
	for(;(d=getc(stdin))>=0;)for(i=j;i<c;i++)if(f[i])putc(d,f[i]),fflush(f[i]);
}
