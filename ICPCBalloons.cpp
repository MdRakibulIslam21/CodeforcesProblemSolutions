#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s, check = "";
        cin >> s;

        int total = 0;

        for(int i = 0; i < n; i++)
        {
            bool found = false;

            for(int j = 0; j < check.length(); j++)
            {
                if(s[i] == check[j])
                {
                    found = true;
                    break;
                }
            }

            if(found == false)
            {
                total += 2;
                check += s[i];
            }
            else
            {
                total += 1;
            }
        }

        cout << total << endl;
    }

    return 0;
}
