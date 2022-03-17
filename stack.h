#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

#define top(S) ((S).top)
#define info(S) ((S).info)

typedef char infotype;

const int MaxIndex = 10;

struct Stack{
    infotype info[MaxIndex];
    int top;
};

void createStack(Stack &S);
void push(Stack &S, infotype x);
char pop(Stack &S);
void printInfo(Stack S);
bool isPalindrom(char word[], int Max);


#endif // STACK_H_INCLUDED
