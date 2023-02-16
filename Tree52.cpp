#include "pt4.h"
using namespace std;
PNode P1, P2;
int l = 0;
bool Flag = 0;
void found1(PNode P, int level)
{
    if (!P) return;
    if (P == P1) 
    {
        Flag = 1;
        l = level;
        return;
    }
    found1(P->Left,level+1);
    found1(P->Right, level+1);
}


void Solve()
{
    Task("Tree52");

    pt >> P1 >> P2;
    found1(P2, 0);
    Flag == 1 ? pt << l : pt << -1;
}
