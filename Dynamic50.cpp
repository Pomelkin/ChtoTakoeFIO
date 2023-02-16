#include "pt4.h"
using namespace std;

bool Flag = 0;
int DataStop;
void take_to_back(PNode P)
{
    PNode VarNode = P;
    if (P->Next == NULL) return;

    P->Next->Prev = P->Prev;

    if (P->Prev != NULL) P->Prev->Next = P->Next;
    while (P->Next != NULL) P = P->Next;
    VarNode->Next = NULL;
    VarNode->Prev = P;
    P->Next = VarNode;
}

void Solve()
{
    Task("Dynamic50");
    PNode P, P2;
    pt >> P;
    P2 = P;
    while (P->Next != NULL && P->Data != DataStop)
    {
        if (P->Data % 2 != 0)
        {
            if (Flag == 0)
            {
                Flag = 1;
                DataStop = P->Data;
            }
            P = P->Next;
            take_to_back(P->Prev);
        }
        else P = P->Next;
    }
    while (P->Prev != NULL) P = P->Prev;
    pt << P;
}
