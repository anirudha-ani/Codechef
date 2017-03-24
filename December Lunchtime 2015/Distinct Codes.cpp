#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int T,count , length;
    string input;
    scanf("%d", &T);

    for (int i = 0 ; i < T ; i++)
    {
        bool flag[27][27] = {false};

        cin >> input;

        length = input.length();
        count = 0;

        for(int i = 0 ; i < length-1 ; i++)
        {
            if(flag[input[i]-'A'][input[i+1]-'A'] == false)
            {
                flag[input[i]-'A'][input[i+1]-'A'] = true;
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
