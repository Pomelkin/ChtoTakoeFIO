#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "pt4exam.h"
using namespace std;

double Max1 = 0, Max2 = 0, Max3 = 0, Max4 = 0;
int i1 = 0, i2 = 0, i3 = 0, i4 = 0;

typedef struct
{
    int ApNUm;
    string Name;
    double debt;
}humans;

void Solve()
{
    Task("ExamExt41");
    humans resident[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> resident[i].ApNUm >> resident[i].Name >> resident[i].debt;
        if (resident[i].ApNUm > 0 && resident[i].ApNUm < 37)
        {
            if (resident[i].debt > Max1)
            {
                Max1 = resident[i].debt;
                i1 = i;
            }
        }
        else
            if (resident[i].ApNUm > 36 && resident[i].ApNUm < 73)
            {
                if (resident[i].debt > Max2)
                {
                    Max2 = resident[i].debt;
                    i2 = i;
                }
            }
            else
                if (resident[i].ApNUm > 72 && resident[i].ApNUm < 109)
                {
                    if (resident[i].debt > Max3)
                    {
                        Max3 = resident[i].debt;
                        i3 = i;
                    }
                }
                else
                    if (resident[i].ApNUm > 108 && resident[i].ApNUm < 145)
                    {
                        if (resident[i].debt > Max4)
                        {
                            Max4 = resident[i].debt;
                            i4 = i;
                        }
                    }
    }

    if (Max1 != 0) cout << 1 << " " << resident[i1].ApNUm << " " << resident[i1].Name << " " << resident[i1].debt << endl;
    if (Max2 != 0) cout << 2 << " " << resident[i2].ApNUm << " " << resident[i2].Name << " " << resident[i2].debt << endl;
    if (Max3 != 0) cout << 3 << " " << resident[i3].ApNUm << " " << resident[i3].Name << " " << resident[i3].debt << endl;
    if (Max4 != 0) cout << 4 << " " << resident[i4].ApNUm << " " << resident[i4].Name << " " << resident[i4].debt << endl;
}
