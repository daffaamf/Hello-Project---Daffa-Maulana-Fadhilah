#include "stack.h"
#include "queue.h"


//stack
void createStack(Stack &S){
    top(S) = 0;
}

void push(Stack &S, infotype x){
    if(top(S) < MaxIndex && top(S) != MaxIndex){
        top(S) = top(S) + 1;
        info(S)[top(S)-1] = x;
    }
}

char pop(Stack &S){
    infotype x;
    x = info(S)[top(S)];
    top(S) = top(S) - 1;
    return x;
}

void printInfo(Stack S){
  int i;
   while(top(S) != 0) {
        cout<<info(S)[top(S)]<<" ";
        top(S) = top(S)-1;
   }
   cout<<endl;
}

bool isPalindrom(char word[], int Max){
    Stack tempStack;
    createStack(tempStack);

    for(int i = 0; i < Max-1; i++){
        push(tempStack, word[i]);
    }
    int index = 0;
    bool palindrom = true;
    while (index <(Max/2) && palindrom) {
        if(word[index] != word[Max - index - 2]){
            palindrom = false;
            break;
        }
        index=index+1;
    }
    return palindrom;
}

//queue

void createQueue(Queue &Q){
    head(Q) = NULL;
    tail(Q) = NULL;
}

void add(Queue &Q, adr P){
    if(head(Q) == NULL){
        head(Q) = P;
        tail(Q) = P;
    }else{
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}

void showDaftarMK(Queue Q){
    adr x;
    x = head(Q);
    int i = 1;
    while(x != NULL){
        cout<<"Data Ke-"<<i<<endl;
        cout<<"Kode MK: "<<kodeMatKul(x)<<endl;
        cout<<"Nama Dosen: "<<NamaDosen(x)<<endl;
        x = next(x);
        i++;
        cout<<""<<endl;
    }
    cout<<"Semua Data sudah Ditampilkan"<<endl;

}

void createElm(string kodeMatKul, string NamaDosen, adr &P){
    cout<<"Masukkan kode MK : ";
    cin>>kodeMatKul;
    cout<<"Masukan Nama Dosen : ";
    cin>>NamaDosen;
    P = new ElmQueue;
    kodeMatKul(P) = kodeMatKul;
    NamaDosen(P) = NamaDosen;
    next(P) = NULL;
}
