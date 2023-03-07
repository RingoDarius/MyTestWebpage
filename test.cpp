#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    const int DAYS = 7;
    string days[DAYS] = {"sun", "mon", "tue", "wed", "thu", "fri", "sat"};

    for (auto &&i : days)
    {
        i = "holiday";
    }

    for (auto i : days)
    {
        cout << i << " ";
    }

    return 0;
}
