
struct Owner 
{	char id[10000];
	char name[100];
	long long int no;
	int FN;//allocated flat no
	int PN;//allocated Parking slot
	struct Owner *next;
};
struct Owner *info=NULL;
