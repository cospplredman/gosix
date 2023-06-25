main(c,v)char**v;{for(c>1&&printf("%s",v++[1])<0?exit(1):0;*++v;)if(printf(" %s",*v)<0)exit(1);exit(puts("")<0);}
