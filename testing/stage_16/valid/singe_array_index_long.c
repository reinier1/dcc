int main()
{
	long a[10];
	for(int i=0;i<10;i=i+1)
		a[i]=i;
	int total=0;
	for(int i=0;i<10;i=i+1)
		total=total+a[i];
	return total;
}