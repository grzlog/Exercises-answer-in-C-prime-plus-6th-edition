#include <bits/stdc++.h>
#include "dma.h"

const int CLIENTS=4;

int main(){
    using std::cin;
    using std::cout;
    using std::endl;
    ABC* p_clients[4];
    char label_tmp[30];
    int rating_tmp;
    char kind;
    for(int i=0;i<CLIENTS;i++){
        cout<<"Enter Label: ";
        cin.getline(label_tmp,30);
        cout<<"Enter Rating: ";
        cin >> rating_tmp;
        cout<<"Enter 1 for baseDMA, 2 for lackDMA, 3 for hasDMA:";
        while(cin>>kind && kind !='1' && kind!='2' && kind!='3'){
            cout<<"Enter 1 for baseDMA, 2 for lackDMA, 3 for hasDMA:";
        }
        switch(kind){
            case '1':
                p_clients[i]=new baseDMA(label_tmp,rating_tmp);
                cin.get();
                break;
            case '2':
                cin.get();
                char color[40];
                cout<<"Enter the color of lackDMA: ";
                cin.getline(color,40);
                p_clients[i]=new lackDMA(color,label_tmp, rating_tmp);
                break;
            case '3':
                cin.get();
                char style[40];
                cout<<"Enter the style of hasDMA: ";
                cin.getline(style,40);
                p_clients[i]=new hasDMA(style,label_tmp,rating_tmp);
                break;
        }
        cout<<endl;
    }
    for(int i=0;i<CLIENTS;i++){
        p_clients[i]->view();
        cout<<endl;
    }
    for(int i=0;i<CLIENTS;i++){
        delete p_clients[i];
    }
    cout<<"done!";
    return 0;
}