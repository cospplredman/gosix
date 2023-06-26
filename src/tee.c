#include<stdio.h>
//TODO arguments
i;d;main(c,v)char**v;{
	FILE*f[c];*f=stdout;
	if(setvbuf(stdin,NULL,_IONBF,1))exit(1);
	for(;++i<c;)f[i]=fopen(v[i],"w");
	for(;(d=getc(stdin))>=0;)
		for(i=0;i<c;i++){
			if(setvbuf(f[i],NULL,_IONBF,1))exit(1);
			putc(d,f[i]);
		}
}
