char *calloc(int n,int size);

struct test
{
	char c;
	int i;
};


int main()
{
	struct test b;
	struct test a;
	a.c=2;
	a.i=5;
	b.c=a.c+a.i;
	b.i=20;
	return a.c*b.c+a.i*b.i;
}