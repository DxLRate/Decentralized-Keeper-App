#include<iostream>
using namespace std;

int main(){
    extern int i;
    i=10;
    cout<<i;


    return 0;
}