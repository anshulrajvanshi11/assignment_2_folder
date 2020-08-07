#include<iostream>
using namespace std;
int main()
{
int length=0,width=0,i,j;
cout<<"enter the value of lenght\n";
cin>>length;
cout<<"enter the value of width\n";
cin>>width;
for(i=0; i<length; i++)
{
for(j=0;j<width;j++)
{
if(i==0||i==length-1||j==0||j==width-1)

cout<< "*";

else

cout<< " ";

}

cout<<endl;
}
}

