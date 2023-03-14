#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string st1,st2;
	cin>>st1>>st2;
	long long int x=0,num1,num2,sub,br=0;
	string str="",sr="";
	if(st2.length()>st1.length())
	{
		x=-1;
		string str1=st2;
		st2=st1;
		st1=str1;
	}
	else if(st2.length()<st1.length())
		x=1;
	else
	{
		for(int i=0;i<st1.length();i++)
		{
			if(st1[i]<st2[i])
			{
				x=-1;
				string str1=st2;
				st2=st1;
				st1=str1;
				break;
			}
			else if(st1[i]>st2[i])
			{
				x=1;
				break;
			}			
			else
			{
				if(i==st1.length()-1)
					x=0;
			}
		}
	}
	long long int i=st1.length(),j=st2.length();
	while(i>0&&j>0)
	{
		if(i-18>0)			
			num1=stoll(st1.substr(i-18,18));
		else
			num1=stoll(st1.substr(0,i));
		if(j-18>0)
			num2=stoll(st2.substr(j-18,18));
		else
			num2=stoll(st2.substr(0,j));
		i=i-18;
		j=j-18;
		num1=num1-br;
		if(num1<num2)
		{
			num1=num1+1000000000000000000;
			br=1;
		}
		else
			br=0;
		sub=num1-num2;
		sr=to_string(sub);
		int l=sr.length();
		for(int k=l;k<18;k++)
			sr="0"+sr;
		str=sr+str;
	}
	while(i>0)
	{
		if(i-18>0)
			num1=stoll(st1.substr(i-18,18));
		else
			num1=stoll(st1.substr(0,i));
		i=i-18;
		num1=num1-br;
		sub=num1;
		sr=to_string(sub);
		int l=sr.length();
		for(int k=l;k<18;k++)
			sr="0"+sr;
		str=sr+str;
	}
	for(i=0;i<str.length();i++)
	{
		if(str[i]!='0')
			break;
	}
	string result=str.substr(i);
	if(x==-1)
		result="-"+result;
	else if(x==0)
	    result="0";
	cout<<result;
	return 0;
}
