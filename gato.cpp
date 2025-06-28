#include <iostream>
using namespace std;

int main(){
    string miau;
    system("cls");
    cout<<"Programa gato"<<endl;
    cout<<"Escriba miau: "; cin>>miau;
    if(miau=="miau"){
        cout << R"( 
    /\_/\  
    ( o.o ) 
     > ^ < 
    )";
    cout<<endl<<endl;
    }
    else{
        cout<<"Error: no miau";
    }
    system("pause");
    return 0;
}