#include<stdio.h>
#define MAX_DEGREE 101
#define COMPARE(x,y)(((x)>(y))?1:((x)==(y)?0:-1))
int iszero(poly p,int d)
{	int i,flag=0;
	for(i=0;i<d;i++)
	{
		if(p.coef[i]==0)
		{
			continue;
		}
		else if(p.coef[i]!=0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	return 0;
	else
	return 1;
}
int lead_expo(poly p)
{
	return p.degree;
}
void remove(poly p,int degree)
{
	p.degree=p.degree-1;
}
int coef(poly p,int d)
{
	return p.coef[d];
}
void attach(poly p,float coffient,int d)
{	p.coef[d]=coffient;
}
	

	
	typedef struct pi
	{
		int degree;
		float coef[MAX_DEGREE];
	}poly;
	poly a,b,d;
	void main()
{	int i,m,n,sum=0;
	
	printf(" enter the degree of polynomia A\n");
	scanf("%d",&a.degree);
	m=a.degree;
	for(i=m;i>=0;i--)
	{
		printf(" enter the coffient for degree %d",i);
		scanf("%f",&a.coef[i]);
	}
	printf(" enter the degree of the polynomial B\n");
	scanf("%d",&b.degree);
	n=b.degree;
	for(i=n;i>=0;i--)
	{
		printf(" enter the coffient for degree %d",i);
		scanf("%f",&b.coef[i]);
	}
	while(!iszero(a,m)&&!iszero(b,n) 
	{ switch(COMPARE(lead_expo(a),lead_expo(b))
		{
			case -1:
				d=attach(d,coef(b,lead_expo(b)),lead_expo(b));
				b=remove(b,lead_expo(b));
				break;

			case 0:
				sum=coef(a,lead_expo(a))+coef(b,lead_expo(b));
				if(sum)
				{
					attach(d,sum,lead_expo(a));
					
					a=remove(a,lead_expo(a));
					b=remove(b,lead_expo(b));
				}
				break;
			case 1:
				d=attach(d,coef(a,lead_expo(a)),lead_expo(a));
				a=remove(b,lead_expo(a));
				break;
		}
	}	
}



