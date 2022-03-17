#include <iostream>
#include "stack.h"
#include "queue.h"

int main()
{

    //stack
    cout<<"MENU STACK"<<endl;
    char word1[] = "nyonya";
    char word2[] = "madam";
    char word3[] = "kaos soak";

    cout<<"'"<<word1<<" is palindrom ? ";
    if(isPalindrom(word1,sizeof(word1))){
        cout << "true"<<endl;
    }else{
        cout << "false"<<endl;
    }
    cout<<"'"<<word2<<" is palindrom ? ";
    if(isPalindrom(word2,sizeof(word2))){
        cout << "true"<<endl;
    }else{
        cout << "false"<<endl;
    }
    cout<<"'"<<word3<<" is palindrom ? ";
    if(isPalindrom(word3,sizeof(word3))){
        cout << "true"<<endl;
    }else{
        cout << "false"<<endl;
    }


    cout<<""<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<""<<endl;

    //queue
    cout<<"MENU QUEUE"<<endl;
    int  i, jumlah;
    adr P;
    string MatKul, Dosen;
    Queue Q;
    createQueue(Q);

    cout<<"Masukkan Jumlah Matkul : ";
    cin>>jumlah;
    cout<<""<<endl;

    i = 1;
    while(i <= jumlah){
        cout<<" "<<endl;
        cout<<"Input ke-"<<i<<endl;
        createElm(MatKul, Dosen, P);
        add(Q, P);
        i++;
    }
    cout<<""<<endl;
    cout<<"Riwayat Data"<<endl;
    showDaftarMK(Q);

    return 0;





}
