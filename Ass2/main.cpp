// Wordh Ul Hasan
// 1330471642
// Assignment to show a Push down automata that accepts  strings Of (0^n)(1^n) where n>=1


#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

int main()
{
    int i,n;
    char a[1000];
    std::cout<<"\nA program for a PDA which accpets strings Of (0^n)(1^n) where n>=1 \n";
    std::cout<<"\nEnter String::";
    std::cin>>a;
    n = strlen(a);
    std::stack<char> pdastack;


    for(i=0;i<n;i++)
    {
        if(a[i]=='0' || a[i]=='1')
        {
            if(a[i]=='0')               /*keep pushing untill 0*/
            {
                pdastack.push(a[i]);
            }
            else                        /*start poping when hit 1*/
            {
                pdastack.pop();

            }
        }
        else
        {
            break;
        }
    }


if(!pdastack.empty())

    {
        std::cout<<"\n NO \n";
    }

else
    {
        std::cout<<"\n YES \n";
    }

    return 0;
}

