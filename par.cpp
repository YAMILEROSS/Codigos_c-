#include <bits/stdc++.h.>
using namespace std;
bool azul()
{
    int a; cin>>a;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            cout<<"no";
            return 1;
        }
    }
    cout<<"si";
    return 1;
}
  main()
  {
      azul();
  }

