#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
struct students {
    char ÒSurname[40];
    char cName[40];
    char cDate[10];
    int nMarks[3];
    struct students* next;
};
struct students* SortStudents(struct students* proot);
struct students* RemoveTheWorst(struct students* pstart);
