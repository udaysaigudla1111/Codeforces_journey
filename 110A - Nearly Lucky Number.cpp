#include<iostream>

int main()
{
    int count=0;
    long long n;
    std::cin>>n;
    while(n!=0)
    {
        int r = n%10;
        if(r==4||r==7)
        {
            count++;
        }
        n=n/10;
    }
    if(count==4||count==7)
    {
        std::cout<<"YES";
        return 0;
    }
    std::cout<<"NO";
}