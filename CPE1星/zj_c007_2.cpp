#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int counter = 0;
    string s;
    while(getline(cin,s))
    {
        for(char &i : s)
        {
            if(i == '\"')
            {
                if(counter == 0)
                {
                    cout << "``";
                    counter = 1;
                }
                else if (counter == 1)
                {
                    cout << "''";
                    counter = 0;
                }
            }
            else
            {
                cout << i;
            }
        }

        cout<<"\n";
    }
}