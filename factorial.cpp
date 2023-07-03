#include<bits/stdc++.h>
using namespace std;

unsigned long long int fact(unsigned long long int n){

    if(n<=0) return 1;
    else return n * fact(n-1);


}



int main(){
//cout<<fact(5);

 for(int i=0; i<=100; i++){
        cout<<i<<" "<<fact(i)<<endl;
    }
return 0;
}
