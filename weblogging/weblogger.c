#include <stdlib.h>

int errorcode=0;

int main()
{
	while( errorcode != -1 )
	{
		errorcode = system( "/usr/local/sbin/webanalysis" );
		errorcode = system( "/usr/local/sbin/webanalysis-splitter" );
	}
}
