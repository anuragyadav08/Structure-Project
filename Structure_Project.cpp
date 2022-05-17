
#include <iostream>

using namespace std;

struct Alph
{
    char ch;
    
}a;
int main()
{
    cout<<"Enter Charecter :";
    cin>>a.ch;
    if(a.ch=='a'||a.ch=='e'||a.ch=='i'||a.ch=='o'||a.ch=='u'||a.ch=='A'||a.ch=='E'||a.ch=='I'||a.ch=='O'||a.ch=='U')
    {
        cout<<a.ch<<" is a Vowel";
    }
    else if((a.ch>='a'&&a.ch<='z')||(a.ch>='A'&&a.ch<='Z'))
    {
        cout<<a.ch<<" is a Consonent";
    }
    else
    {
        cout<<"Nither Vowel and Nor Consonent !";
    }
    return 0;
}
