#include <iostream>
#include <iomanip>
using namespace std;
int main (void)
{
    float n1,n2,n3,media;
    cout <<"Digite tres numeros nao inteiros"<<endl;
    cout <<"n1: ";
    cin >> n1;
    cout << "n2: ";
    cin >> n2;
    cout << "n3: ";
    cin >> n3;
    if (n1>n2 && n1>n3)
    {
        cout<< n1 << " e o maior numero"<<endl;
            if (n2>n3){
                cout << n3 <<"e o menor numero"<<endl;
            }
            if (n3>n2){
                cout << n2 << "e o menor numero"<<endl;
            }
    }
    if (n2>n1 && n2>n3)
    {
        cout<< n2 << " e o maior numero"<<endl;
            if(n3>n1){
                cout << n1 <<"e o menor numero"<<endl;
            }
            if (n1>n3){
                cout<< n3 <<"e o menor numero"<<endl;
            }
    }

    else if (n3>n1 && n3>n2) {
        cout<< n3 << " e o maior numero"<<endl;
            if (n1>n2){
                cout << n2 <<"e o menor numero"<<endl;
            }
            if (n2>n1){
                cout << n1<<" e o menor numero"<<endl;
            }
    }
    media = (n1+n2+n3)/3;
    cout <<"A media desses tres numeros e: "<<media<<endl;
    return 0;
}
