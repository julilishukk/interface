#include"Header.h"

struct students* SortStudents(struct students* pRoot)
{
    struct students* NewRoot = nullptr;
    while (pRoot != nullptr)
    {
        struct students* Node = pRoot;
        pRoot = pRoot->next;
        if (NewRoot == nullptr || strcmp(Node->ÒSurname, NewRoot->ÒSurname) < 0) {
            Node->next = NewRoot;
            NewRoot = Node;
        }
        else
        {
            struct students* Current = NewRoot;
            while (Current->next != nullptr && strcmp(Current->next->ÒSurname, Node->ÒSurname) < 0)
            {
                Current = Current->next;
            }
            Node->next = Current->next;
            Current->next = Node;
        }
    }
    return NewRoot;
}

struct students* RemoveTheWorst(struct students* pStart)
{
    struct students* newfirst = pStart;
    int nPosition = 0, nCurNumber = 0;
    double minn = 6.0;
    while (pStart) {
        nCurNumber++;
        double dAver = (pStart->nMarks[0] + pStart->nMarks[1] + pStart->nMarks[2]) / 3.0;
        if (dAver < minn) {
            minn = dAver; nPosition = nCurNumber;
        }
        pStart = pStart->next;
    }
    nCurNumber = 1;
    pStart = newfirst;
    if (nPosition != 1) {
        while (1) {
            nCurNumber++;
            struct students* pp = pStart;
            pStart = pStart->next;
            if (nCurNumber == nPosition) {
                pp->next = pStart->next;
                free(pStart);
                break;
            }
        }
    }
    else {
        if (pStart->next)  newfirst = pStart->next;
        else newfirst = NULL;
        free(pStart);
    }
    return newfirst;
}