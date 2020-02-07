#include<iostream>
#include<string.h>
using namespace std;
void permutation(char a[],int first,int last)
{
	if(first==last)
	
	{
		cout<<a<<endl;
	}
	else
	{
		for(int i=first;i<=last;i++)
		{
			swap(a[first],a[i]);
			permutation(a,first+1,last);
			swap(a[first],a[i]);
		}
	}
}

int main()
{
	int num;
	cout<<"enter the number of character ";
	cin>>num;
	char str[num+1];
	for(int i=0,k=97;i<num;i++,k++)
	{
		str[i]=k;
	}
	str[num]='\0';
	cout<<num<<endl;
	//cout<<str<<endl;
	permutation(str,0,num-1);
}
