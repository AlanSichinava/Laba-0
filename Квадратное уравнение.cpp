#include <iostream>
#include <cmath>
using namespace std;
main ()
{
	int a,b,c,D;
	float x1,x2;
	cout<<"Nahojdenie kornei kvadratnogo uravnenia."<<endl;
	cout<<"Vvedite argumenti..."<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	D=pow(b,2)-4*a*c;
	if (D>0)
	{
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		cout<<"Korni uravnenia.."<<endl<<"X1 = "<<x1<<endl<<"X2 = "<<x2<<endl;
	}
	if (D==0)
	{
		x1=(-b)/(2*a);
		x2=x1;
		cout<<"Korni uravnenia ravni.."<<endl<<"X1 = X2 = "<<x1<<endl;
	}
	if (D<0)
		cout<<"Kornei net!"<<endl;
	cin.get();
	return 0;
	
}
