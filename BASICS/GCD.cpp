#include<iostream>
#include<cmath>

using namespace std;
int getGCD(int n1 , int n2){
    if(n2 ==0){
        return n1;
    }

    return getGCD(n2 , n1% n2);
}
int main(){
    cout << getGCD(106 ,  40);
    return 0;
}