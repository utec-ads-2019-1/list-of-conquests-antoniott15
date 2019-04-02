#include <iostream>
#include <string>
#include <vector>
using namespace std;

void NumberLines(int);
void countryRepeat(vector<string>, vector<string>,string,string);
int main()
{
    int nLines;
    cin >> nLines;
    NumberLines(nLines);
    return 0;
}

void NumberLines(int nLines)
{
    vector<string> Country;
    vector<string> Girl;
    string ccountry, cgirl;
    for (int i = 0; i < nLines; i++)
    {
        cin >> ccountry >> cgirl;
        Country.push_back(ccountry);
        Girl.push_back(cgirl);
        countryRepeat(Country, Girl, ccountry, cgirl);
    }
}

void countryRepeat(vector<string> Country, vector<string> Girl, string ccountry,string cgirl)
{
    int Csize = Country.size();
    int Gsize = Girl.size();
    int CCount = 0;
    cgirl = Girl[0];
    ccountry = Country[0];
    for(int i = 0; i < Csize; i++)
    {

    }
}