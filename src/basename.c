main(c,v)char**v;{if(c>3|c<2)exit(1);char*p=v[1],*e=p+strlen(p),*q=p;for(;--e>q&*e==47;*e=0);for(;q<e;p=*q++-47?p:q);c>2&&!strcmp(v[2],e-=strlen(v[2])-1)&e>p?*e=0:0;exit(puts(p)<0);}
