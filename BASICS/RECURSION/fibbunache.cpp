#include<iostream>

using namespace std;
void writeFibbu(int first , int second , int index,  int CurrIN = 0){
    if(CurrIN > index){
        return;
    }

    if(CurrIN == 0){
        cout << first << " " << second <<" "; 
        CurrIN = 3;
    }

    int sum  = first + second;

    cout << sum << " ";

    writeFibbu(second , sum , index , ++CurrIN);
    
    

}
int main(){
    writeFibbu(0 , 1 , 10 );
    return 0;
}