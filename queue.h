#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>

using namespace std;

#define kodeMatKul(P) (P)->kodeMatKul
#define NamaDosen(P) (P)->NamaDosen
#define next(P) (P)->next
#define head(L) ((L).head)
#define tail(L) ((L).tail)

typedef struct ElmQueue *adr;

struct ElmQueue{
    string kodeMatKul;
    string NamaDosen;
    adr next;
};

struct Queue{
    adr head;
    adr tail;
};

void createQueue(Queue &Q);
void add(Queue &Q, adr P);
void showDaftarMK(Queue Q);
void createElm(string kodeMatKul, string NamaDosen, adr &P);

#endif // QUEUE_H_INCLUDED
