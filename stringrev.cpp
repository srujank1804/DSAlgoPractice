#include<iostream>
#include<string>
using namespace std;
void revstring(string a)
{
   for(int i=a.length()-1;i>=0;i--)
   {


   cout<<a[i];
   }
}
int main()
{
    string a;
    cout<<"enter string";
    cin>>a;
    revstring(a);
    return 0;
}
