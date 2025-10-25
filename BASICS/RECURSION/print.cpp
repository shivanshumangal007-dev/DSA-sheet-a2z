#include<iostream>

using namespace std;

void printNtimes(int N, int i)
{
    if(i < 1){
        return ;
    }

    cout << i << " ";

    printNtimes(N , --i);
}

int main(){
    printNtimes(13 ,13);

    return 0;
}