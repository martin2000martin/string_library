#include <iostream>
template <class T1, class T2>
auto sum(T1 &a, T2 &b) -> decltype(a+b)
{
	return a+b;
}
template <class T1, class T2>
auto sub(T1 &a, T2 &b) -> decltype(a-b)
{
	return a-b;
}
template <class T1, class T2>
auto mult(T1 &a, T2 &b) -> decltype(a*b)
{
	return a*b;
}
template <class T1, class T2>
auto divi(T1 &a, T2 &b) -> decltype(a/b)
{
	if(b != 0) return a/b;
	else
	{
		std::cout << "Error! Division by Zero.\n";
		return 0;
	}
}
int mod(int a, int b)
{
	if(b != 0) return a/b;
	else
	{
		std::cout << "Error! Division by Zero.\n";
		return 0;
	}
}
template <class T1, class T2>
auto min(T1 &a, T2 &b) -> decltype(a+b)
{
	if (a < b) return a;
	else return b;
}
template <class T1, class T2>
auto max(T1 &a, T2 &b) -> decltype(a+b)
{
	if (a > b) return a;
	else return b;
}
template <class T1, class T2>
auto pow(T1 a, T2 b) -> decltype(a)
{
	T1 c = 1;
	for(int i = 0; i < b; i++)
	{
		c = c * a;
	}
	return c;
}
template <class T>
auto absolute(T a) -> decltype(a)
{
	if (a < 0) return a*(-1);
	else return a;
}
template <class T>
auto sqrt(T a) -> decltype(a)
{  
	T x = 1;
	for( int i = 0; i < 5; i++)
	{
		x = 0.5 * ( x+a / x );
	}
 
	return x;
}
template <class T>
auto sqr(T a) -> decltype(a)
{
	return a*a;
}
int fact(int a)
{
	if (a == 0 || a == 1) return 1;
	int f = 1;
	for(int i = 2; i <=a; i++)
		f = f * i;
	return f; 
}
int fib(int n)
{
	int n1 = 1;
	int n2 = 1;
	int next = 0;
	for(int i = 1; i <= n; i++)
	{
		if(i == 1 || i == 2)
			next = n1;
		else 
		{
			next = n1 + n2;
			n1 = n2;
			n2 = next;
		}
	}
	return next;
}
float sin(float x)
{
	const long double PI = 3.14159265358979323;
    float sum, t;  
    bool sign = true;
    while(x >= 360)
    	x = x - 360;
    if (x > 270 && x < 360)
 	{ 		
 		x = 360 - x;
     	sign = false;
 	}
    if (x > 180 && x <= 270)
 	{
 		x = x - 180;	
 		sign = false;	
 	}
 	if (x > 90 && x <= 180)
 		x = 180 - x;
    x=x*PI/180; 
    sum=x;  
    for(int i=1;i<5;i++)
    {
        t=pow(-1,i)*pow(x,2*i+1)/fact(2*i+1);
        sum=sum+t;
    }
    if (sign)
       return sum;
    else 
       return -sum;
}
float cos(float x)
{
	float c = sin(absolute(90-x));
    if ((x > 90 && x <= 360)) return -c;		
 	else return c; 
}
float tg(float x)
{	
	float c = cos(x);
	if (c != 0)
		return sin(x)/c;
	else std::cout << "NaN ";
}
float ctg(float x)
{
	float s = sin(x);
	if(s != 0)
		return cos(x)/s;
	else std::cout << "NaN " << std::endl;
}

double ln(float x)
{
	const double LN1_00001 = 0.00000999995; //ln(1.00001) = 0.0953101798
	double sum = 0;
	double a = 1.00001;
	while(a <= x)
	{
		sum += LN1_00001;
		a *= 1.00001; 	
	}
	return sum;
}
double fpow(double a, double b)
{
	const double e = 2.71828182846;
	double sum = 0;
	for(int i = 0; i < 10; i++)
		sum = sum + (pow(b*ln(a),i)/fact(i));
	return sum;
}

int main()
{
	float a;
	float b; 
	for(int i = 0; i < 10; i++) 
	{
	std::cout << "Enter 1st number:";
	std::cin >> a;
	std::cout << "Enter 2nd number:";
    std::cin >> b;
	std::cout << sum(a,b) << std::endl;
	std::cout << sub(a,b) << std::endl;
	std::cout << divi(a,b) << std::endl;
	std::cout << mult(a,b) << std::endl;
	std::cout << mod(a,b) << std::endl;
	std::cout << pow(a,b) << std::endl;
	std::cout << min(a,b) << std::endl;
	std::cout << max(a,b) << std::endl;
	std::cout << absolute(a)<< std::endl;
	std::cout << sqrt(a) << std::endl;
	std::cout << sqrt(b) << std::endl;
	std::cout << sqr(a) << std::endl;
	std::cout << fact(a) << std::endl;
	std::cout << fib(a) << std::endl;
	std::cout << "sin - " <<sin(a) << std::endl;
	std::cout << "cos - " <<cos(a) << std::endl;
	std::cout << "tg - " <<tg(a) << std::endl;
	std::cout << "ctg - " <<ctg(a) << std::endl;
	}
	std::cout << fpow(1.5,4.5) <<std::endl;
	std::cout << sqrt(8) << std::endl;
	std::cout << sqrt(2)<<std::endl;
	return 0;
}
