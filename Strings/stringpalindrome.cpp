#include<iostream>
#include<string>
using namespace std;
bool strpalindrome(string a)
{

    for(int i=0,j=a.length()-1;i<j;i++,j--)
    {

        if(a[i]!=a[j])
        {
            return false;
        }

    }
  return true;
}
int main()
{

    cout<<"ENTER STRING";
    string a;
    cin>>a;
   bool x=strpalindrome(a);
   cout<<x;
    return 0;

}
