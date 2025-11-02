#include<iostream>
#include<cmath>

using namespace std;

int getNOOfDigit(int n){
    int cnt = 0;
    while(n!=0){
        int dig = n %10;
        n /= 10;
        cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>> n; 

    int iniN =n;
    int sum = 0;
    int numberofdigits = getNOOfDigit(iniN);
        // cout<< getNOOfDigit(iniN) <<endl;
    for (int i = 0; i < numberofdigits; i++)
    {   
        int dig = n%10;
        n = n/10;
        cout << dig  << " : ";
        sum = sum + pow(dig, numberofdigits);
        cout<< sum <<endl;
    }

    if(sum == iniN){
        cout<<"yes , this is the armstrong no.";

    }
    else{
        cout<< "this is not the armstrong no.";
    }
    
    return 0;
}