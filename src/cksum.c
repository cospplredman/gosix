#include<stdint.h>
#include<stdio.h>

#define X(a,...) for(a)for(r=(r<<8)^(e&0xff)^__VA_ARGS__,e=0,i=31;i>23;i--)if(r&(1<<i))r^=(1<<i)|(q>>(32-i)),e^=q<<(i-24);

uint_least32_t q=0x04c11db7,r;d,e,i,t,j;main(c,v)char**v;{
	if(c>1&!strcmp(v[1],"--"))c--,v++;
	if(c-2)exit(1);
	FILE*f=fopen(v[1],"r");
	X(;(d=getc(f))>=0;t++,d)X(j=t;j;,(j&0xff),j>>=8)X(j=3;j--;,0)
	printf("%u %d %s\n", ~((r<<8)|(e&0xff)), t, v[1]);
}
