#include<time.h>
j;main(c,v)char**v;{
	if(c>1&!strcmp(v[1],"--"))c--,v++;
	if(c-2|sscanf(v[1],"%d",&j)==strlen(v[1]))exit(1);
	for(time_t s=time(NULL);time(NULL)-s<j+1;);exit(0);
}
