#define X(a)for(;--e>p&'/'a*e;*e=0);
main(c,v)char**v;{
	if(c>1&&!strcmp(v[1],"--"))c--,v++;
	if(c-2)exit(1);
	char*p=v[1],*e=p+strlen(p);
	X(==)X(!=)if(e==p)exit(puts(".")<0);
	X(==)e[1]=0;
	exit(puts(*p?p:"/"));
}
