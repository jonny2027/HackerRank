#include<bits/stdc++.h>

using namespace std;

class Box
{
public:
	Box():length(0), breadth(0), height(0) {}
	Box(const int l,const int b, const int h) { length = l; breadth = b; height = h; }
	Box(const Box &b) { length = b.length; breadth = b.breadth; height = b.height; }

	int getLength() { return length; }
	int getBreadth() { return breadth; }
	int getHeight() { return height; }

	long long CalculateVolume()
	{
		return static_cast<long long>(length) * breadth * height;
	}

	bool operator<(const Box& b)
	{
		if (length < b.length)
			return true;
		else if (length == b.length && breadth < b.breadth)
			return true;
		else if (length == b.length && breadth == b.breadth && height < b.height)
			return true;
		else
			return false;
	}

	friend ostream& operator<<(ostream &os , const Box& b)
	{
		os << b.length << " " << b.breadth << " " << b.height;
		return os;
	}

private:
	int length = 0;
	int breadth = 0;
	int height = 0;
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}