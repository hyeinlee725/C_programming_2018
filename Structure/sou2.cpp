#include <stdio.h>
#include<string.h>

struct point
{
	int x1, y1;

};
struct rectangle
{
	struct point  tr1, tr2;

};
double area(struct point tr1, struct point tr2)
{
	double dis;
	dis = (tr2.x1 - tr1.x1)*(tr1.y1 - tr2.y1);
	return dis;
}
double perimeter(struct point tr1, struct point tr2)
{
	double dul;
	dul = ((tr2.x1 - tr1.x1) * 2 + (tr1.y1 - tr2.y1)) * 2;
	return dul;
}
int is_squre(struct point a, struct point b)
{
	if ((a.x1 - b.x1) == (a.y1 - b.y1))
	{
		return 1;
	}
	else
		return 0;
}
int main(void)
{
	struct point a, b;
	scanf("%d %d", &a.x1, &a.y1);
	scanf("%d %d", &b.x1, &b.y1);

	printf("%f\n", area(a, b));
	printf("%f\n", perimeter(a, b));
	printf("%d\n", is_squre(a, b));


	return 0;
}