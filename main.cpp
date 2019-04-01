#include <iostream>
#include <string>
using namespace std;

void NumberLines(int);
void countryRepeat(string);
int main()
{
    int nLines;
    cin >> nLines;
    NumberLines(nLines);
    return 0;
}

void NumberLines(int nLines)
{
    string country;
    string girlLoved;
    for (int i = 0; i <= nLines; i++)
    {
        cin >> country >> girlLoved;
        countryRepeat(country);
    }
}