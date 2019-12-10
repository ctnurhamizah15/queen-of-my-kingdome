#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int p;
	
	cout << "------------Boolean Calculator-------------" << endl;
	cout << " << 1 >> Boolean Operation AND in Decimal " << endl;
	cout << " << 2 >> Boolean Operation AND in Binary " << endl;
	cout << " << 3 >> Boolean Operation AND in Hexadecimal " << endl;
	cout << " << 4 >> Boolean Opertaion OR in Decimal " << endl;
	cout << " << 5 >> Boolean Operation OR in Binary " << endl;
	cout << " << 6 >> Boolean Operation OR in Hexadecimal " << endl;
	cout << " << 7 >> Boolean Operation XOR in Decimal " << endl;
	cout << " << 8 >> Boolean Operation XOR in Binary " << endl;
	cout << " << 9 >> Boolean Operation XOR in Hexadecimal " << endl;
	cout << " << 10 >> Boolean Operation NOT in Decimal " << endl;
	cout << " << 11 >> Boolean Operation NOT in Binary " << endl;
	cout << " << 12 >> Boolean Operation NOT in Hexadecimal " << endl << endl;
	
	cout << " Enter value from the above :\n " << endl;
	cin >> p;
	
	if (p==1)
	{
		int a ,b ,x;
		
		cout << " Enter Integer A (in Decimal) :\n ";
		cin >> a;
		cout << " Enter Integer B (in Decimal) :\n ";
		cin >> b;
		x = a && b;
		cout << "\nOutput =" << x << endl;
		system ("PAUSE");
	}
	else if (p==2)
	{
		int a ,b ,x;
		
		cout << " Enter Integer A (in Binary) :\n ";
		cin >> a;
		cout << " Enter Integer B (in Binary) :\n ";
		cin >> b;
		x = a && b;
		cout << "\nOutput =" << x << endl;
		system ("PAUSE");
	}
	else if (p==3)
	{
	    int a ,b ,x;
		
		cout << " Enter Integer A (in Hexadecimal) :\n ";
		cin >> a;
		cout << " Enter Integer B (in Hexadecimal) :\n ";
		cin >> b;
		x = a && b;
		cout << "\nOutput =" << x << endl;
		system ("PAUSE");
	}
	else if (p==4)
	{		
	    int a ,b ,x;
		
		cout << " Enter Integer A (in Decimal) :\n ";
		cin >> a;
		cout << " Enter Integer B (in Decimal) :\n ";
		cin >> b;
		x = a || b;
		cout << "\nOutput =" << x << endl;
		system ("PAUSE");
	}
	else if (p==5)
	{		
	    int a ,b ,x;
		
		cout << " Enter Integer A (in Binary) :\n ";
		cin >> a;
		cout << " Enter Integer B (in Binary) :\n ";
		cin >> b;
		x = a || b;
		cout << "\nOutput =" << x << endl;
		system ("PAUSE");
	}
	else if (p==6)
	{		
	    int a ,b ,x;
		
		cout << " Enter Integer A (in Hexadecimal) :\n ";
		cin >> a;
		cout << " Enter Integer B (in Hexadecimal) :\n ";
		cin >> b;
		x = a || b;
		cout << "\nOutput =" << x << endl;
		system ("PAUSE");
	}
	else if (p==7)
	{		
	    int a ,b ,x;
		
		cout << " Enter Integer A (in Decimal) :\n ";
		cin >> a;
		cout << " Enter Integer B (in Decimal) :\n ";
		cin >> b;
		x = !!(a) ^ !!(b);
		cout << "\nOutput =" << x << endl;
		system ("PAUSE");
	}
	else if (p==8)
	{		
	    int a ,b ,x;
		
		cout << " Enter Integer A (in Binary) :\n ";
		cin >> a;
		cout << " Enter Integer B (in Binary) :\n ";
		cin >> b;
		x = !!(a) ^ !!(b);
		cout << "\nOutput =" << x << endl;
		system ("PAUSE");
	}
	else if (p==9)
	{		
	    int a ,b ,x;
		
		cout << " Enter Integer A (in Hexadecimal) :\n ";
		cin >> a;
		cout << " Enter Integer B (in Hexadecimal) :\n ";
		cin >> b;
		x = !!(a) ^ !!(b);
		cout << "\nOutput =" << x << endl;
		system ("PAUSE");
	}
	else if (p==10)
	{		
	    int a ,b ,x;
		
		cout << " Enter Integer A (in Decimal) :\n ";
		cin >> a;
		cout << " Enter Integer B (in Decimal) :\n ";
		cin >> b;
		x =!(a && b);
		cout << "\nOutput =" << x << endl;
		system ("PAUSE");
	}
	else if (p==11)
	{		
	    int a ,b ,x;
		
		cout << " Enter Integer A (in Binary) :\n ";
		cin >> a;
		cout << " Enter Integer B (in Binary) :\n ";
		cin >> b;
		x =!(a && b);
		cout << "\nOutput =" << x << endl;
		system ("PAUSE");
	}
	else if (p==12)
	{		
	    int a ,b ,x;
		
		cout << " Enter Integer A (in Hexadecimal) :\n ";
		cin >> a;
		cout << " Enter Integer B (in Hexadecimal) :\n ";
		cin >> b;
		x =!(a && b);
		cout << "\nOutput =" << x << endl;
		system ("PAUSE");
	}
	
	return 0;	
	
}
