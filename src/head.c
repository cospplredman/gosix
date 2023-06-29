#include<stdio.h>
FILE*f;n=24;l;d;i;main(c,v)char**v;{
	if(c>2&&!strcmp(v[1],"-n"))sscanf(v[2],"%d",&n)==strlen(v[2])&&n>=0?v+=2,c-=2:(exit(1),0);
	if(c>2)printf("==> %s <==\n",v[i+1]);
	if(c==1)c++;
	for(;++i<c;){
		f=v[i]?fopen(v[i],"r"):stdin;
		if(!f)exit(1);
		for(;l<n&&(d=getc(f))>=0;d==10&&l++)
			if(putchar(d)<0)
				exit(1);
		if(fclose(f)<0)exit(1);
		if(i+1<c&&printf("\n==> %s <==\n",v[i+1])<0)
			exit(1);
		l=0;
	}
}

