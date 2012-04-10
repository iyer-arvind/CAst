typedef struct Vector
{
	double data[5];
	const char* name;
};

struct Vector addVector(struct Vector *a,struct Vector * b)
{
	int i;
	struct Vector res;
	for(i=0;i<5;i++)
	{
		res.data[i]=a->data[i]+b->data[i];
	}
	return res;
}
int main()
{
	struct Vector a={5,5,5,5,5,"test1"};
	struct Vector b={6,6,6,6,6,"test2"};
	addVector(&a,&b);
}
