#include<stdio.h>
#include<stdlib.h>

#define DEBUG
#undef DEBUG

double get_uptime(void)
{
	FILE *fp;
	double uptime;
	int ret;
	fp = fopen("/proc/uptime","r");
	ret=fscanf (fp,"%lf",&uptime);
#ifdef DEBUG
	fprintf(stdout,"%d %lf\n",ret,uptime);
#endif
	return uptime;
}
