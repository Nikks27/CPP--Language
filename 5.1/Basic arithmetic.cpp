#include<iostream>
using namespace std;

class A
{
   protected :
        int a,b,c,d,e;
		public :	
		
		void calculater(int a,int b)
		{
			this->a=a;
			this->b=b;
			cout << "Division is :" << this ->a / this->b << endl;
		}
			void calculater(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			cout << "Subtraction is :" << this ->a - this->b - this->c << endl;
		}
			void calculater(int a,int b,int c,int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			cout << "Multiplication is :" << this ->a * this->b * this->c * this->d << endl;
		}
			void calculater(int a,int b,int c,int d,int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
			cout << "Addition is :" << this ->a + this->b + this->c + this->d + this->e << endl;
		}
};
main()
{
	A a1;
	a1.calculater(10,20);
	a1.calculater(10,20,30);
	a1.calculater(10,20,30,40);
	a1.calculater(10,20,30,40,50);
}
