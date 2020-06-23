#include<iostream>
using namespace std;
int add(int a, int b)//2
{
	return(a+b);
}
double add(double a, double b)//2
{
	return(a+b);
}
int main()
{
	cout<<add(1,2);//1
	cout<<add(3.4,4.3);//2
	return 0;
}
