#include <iostream>
#include <stdlib.h>
using namespace std;

float a1, b1, c1, a2, b2, c2, x, y;
int s1 = -1, s2 = -1, s3 = -1, s4 = -1;
bool s1p, s1m, s2p, s2m, s3p, s3m, s4p, s4m;
string in1, in2;

void getABC1(string in)
{
	for (unsigned int i = 0; i < in.length(); i++)
	{
		if (in[i] == 'x')
		{
			string s = in.substr(0, i);
			a1 = atof(s.c_str());
		} 
		else if (in[i] == '+')
		{
			if (s1 == -1)
			{
				s1 = i;
				s1p = true;
			}
			else
			{
				s2 = i;
				s2p = true;
			}
		}
		else if (in[i] == '-')
		{
			if (s1 == -1)
			{
				s1 = i;
				s1m = true;
			}
			else
			{
				s2 = i;
				s2m = true;
			}
		}
		else if (in[i] == 'y')
		{
			string s = in.substr(s1, (i-s1));
			for (unsigned int k = s.length(); k > 0; k--)
			{
			    if (s[k] == ' ')
			    {
			        s.erase(k-1, 2);
			    }
			}
			b1 = atof(s.c_str());
			if (s1m)
			{
			    b1 = -b1;
			}
		}
		else if (s2 != -1)
		{
		    string s = in.substr(s2, (in.length()-s2));
		    s.erase(0, 2);
		    for (unsigned int k = s.length(); k > 0; k--)
		    {
		        if (s[k] == ' ')
			    {
			        s.erase(k, 1);
			    }
			    else if (s[k] == '=')
			    {
			        s.erase(k, (s.length()-k));
			    }
		    }
		    c1 = atof(s.c_str());
		    if (s2m)
		    {
		        c1 = -c1;
		    }
		}
	}
}

void getABC2(string in)
{
	for (unsigned int i = 0; i < in.length(); i++)
	{
		if (in[i] == 'x')
		{
			string s = in.substr(0, i);
			a2 = atof(s.c_str());
		} 
		else if (in[i] == '+')
		{
			if (s3 == -1)
			{
				s3 = i;
				s3p = true;
			}
			else
			{
				s4 = i;
				s4p = true;
			}
		}
		else if (in[i] == '-')
		{
			if (s3 == -1)
			{
				s3 = i;
				s3m = true;
			}
			else
			{
				s4 = i;
				s4m = true;
			}
		}
		else if (in[i] == 'y')
		{
			string s = in.substr(s3, (i-s3));
			for (unsigned int k = s.length(); k > 0; k--)
			{
			    if (s[k] == ' ')
			    {
			        s.erase(k-1, 2);
			    }
			}
			b2 = atof(s.c_str());
			if (s3m)
			{
			    b2 = -b2;
			}
		}
		else if (s4 != -1)
		{
		    string s = in.substr(s4, (in.length()-s4));
		    s.erase(0, 2);
		    for (unsigned int k = s.length(); k > 0; k--)
		    {
		        if (s[k] == ' ')
			    {
			        s.erase(k, 1);
			    }
			    else if (s[k] == '=')
			    {
			        s.erase(k, (s.length()-k));
			    }
		    }
		    c2 = atof(s.c_str());
		    if (s4m)
		    {
		        c2 = -c2;
		    }
		}
	}
}

void solve(float a, float b, float c, float d, float e, float f)
{
    
}

int main()
{	
    cout<<"!- N.B. a >= 0"<<endl;
	cout<<"Inserisci la prima equazione (nella forma ax + by + c = 0):  ";
	cin>>in1;
//	cout<<"15x + 5y + 3 = 0";
//	in1 = "15x + 10y + 109 = 0";
	cout<<endl;
	cout<<"Inserisci la seconda equazione (nella forma ax + by + c = 0):  ";
	//cin>>in2;
	cout<<"10x + 7y + 9 = 0";
	in2 = "10x + 7y + 9 = 0";
	
	getABC1(in1);
	getABC2(in2);
	
	cout<<endl<<"X  1  2"<<endl<<"A  "<<a1<<" "<<a2<<endl<<"B  "<<b1<<"  "<<b2<<endl<<"C  "<<c1<<"  "<<c2<<endl;
	solve(a1, b1, c1, a2, b2, c2);
	
	cout<<endl<<"x = "<<x<<"; y = "<<y;
	
	return 0;
}
