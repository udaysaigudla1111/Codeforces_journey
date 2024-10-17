#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c,count=0;
    std::cin>>n;
    while(n--)
    {
        std::cin>>a>>b>>c;
        if(a+b+c>=2)
        {
            count++;
        }

    }
    std::cout<<count;
}