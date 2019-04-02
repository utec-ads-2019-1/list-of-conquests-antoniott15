#include <iostream>
#include <string>
#include <vector>
using namespace std;

void NumberLines(int);
int main()
{
    int nLines;
    cout << "lines: \n";
    cin >> nLines;
    NumberLines(nLines);
    return 0;
}

void NumberLines(int nLines)
{
    vector<string> Country, Girl;
    string ccountry, cgirl;
    for (int i = 0; i < nLines; i++)
    {
        cout << "nombre apellido : \n";
        cin >> ccountry >> cgirl;
        Country.push_back(ccountry);
        Girl.push_back(cgirl);
        int Csize = Country.size(), CCount = 1;
        cgirl, ccountry = Girl[0], Country[0];
        for (int i = 0; i < Csize; i++)
        {
            if (ccountry != Country[i])
            {
                if (cgirl != Girl[i])
                {
                    cout << ccountry << " " << CCount << "\n";
                    CCount = 0;
                    ccountry = Country[i];
                    cgirl = Girl[i];
                }
            }
            CCount++;
        }
    }
}
