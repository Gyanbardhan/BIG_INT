#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string st1;
	cout<<"Enter First Number=";
	cin>>st1;
	string st2;
	cout<<"Enter Second Number=";
	cin>>st2;
	long long int num1,num2;
	long long int s,c=0;
	string str="",sr="";
	long long int u=st1.length(),v=st2.length();
	while(u>0&&v>0)
	{
		if(u-18>0)
			num1=stoll(st1.substr(u-18,18));
		else
			num1=stoll(st1.substr(0,u));
		if(v-18>0)
			num2=stoll(st2.substr(v-18,18));
		else
			num2=stoll(st2.substr(0,v));
		u=u-18;
		v=v-18;
		s=num1+num2+c;
		if(s>999999999999999999)
			c=1;
		else
			c=0;
		s=s%1000000000000000000;
		sr=to_string(s);
		int l=sr.length();
		for(int k=l;k<18;k++)
			sr="0"+sr;
		str=sr+str;
	}
	while(u>0)
	{
		if(u-18>0)
			num1=stoll(st1.substr(u-18,18));
		else
			num1=stoll(st1.substr(0,u));
		u=u-18;
		s=num1+c;
		if(s>999999999999999999)
			c=1;
		else
			c=0;
		s=s%1000000000000000000; 
		sr=to_string(s); 
		int l=sr.length(); 
		for(int k=l;k<18;k++) 
			sr="0"+sr; 
		str=sr+str;
	}
	while(v>0)
	{
		if(v-18>0)
			num2=stoll(st2.substr(v-18,18));
		else
			num2=stoll(st2.substr(0,v));
		v=v-18;
		s=num2+c;
		if(s>999999999999999999)
			c=1;
		else
			c=0;
		s=s%1000000000000000000;
	       	sr=to_string(s);
	       	int l=sr.length();
	       	for(int k=l;k<18;k++) 
			sr="0"+sr;
	       	str=sr+str;
	}
	if(c==1)
		str="1"+str;
	int i;
	for(i=0;i<str.length();i++)
	{
		if(str[i]!='0')
		break;
	}
	string result;
	result=str.substr(i);
	cout<<"Result="<<result;
	return 0;
}
