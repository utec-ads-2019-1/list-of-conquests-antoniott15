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
    vector<string> Country, Girl2;
    string ccountry, cgirl, cgirl2;
    for (int i = 0; i < nLines; i++)
    {
        cout << "nombre apellido : \n";
        cin >> ccountry >> cgirl >> cgirl2;
        Country.push_back(ccountry);
        Girl2.push_back(cgirl2);
        int Csize = Country.size(), CCount = 1;
        cgirl2, ccountry = Girl2[0], Country[0];
        for (int i = 0; i < Csize; i++)
        {
            if (ccountry != Country[i])
            {
                if (cgirl2 != Girl2[i])
                {
                    cout << ccountry << " " << CCount << "\n";
                    CCount = 0;
                    ccountry = Country[i];
                    cgirl2 = Girl2[i];
                }
            }
            CCount++;
        }
    }
}
