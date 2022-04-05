#include <iostream>

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif
    int a,b;
    std::cin>>a>>b;
    std::cout<<a+b<<std::endl;
    return 0;
}