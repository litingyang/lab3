#include<iostream>
#include<algorithm>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
int size,n,x;
ifstream filein("file.in",ios::in);
filein>>size;
vector<int>v1(size);
for(n=0;n<size;n++){
filein>>x;
v1.at(n)=x;}
//int array[]={5,4,3,2,1};
sort(v1.begin(),v1.end());
//cout<<v1.at(1)<<endl;
x=0;
for(n=size-5;n<size;n++)
{
x=x+v1.at(n);
}
cout<<x<<endl;







return 0;}
