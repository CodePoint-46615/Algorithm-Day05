//#inlcude<iostream>
#include<bits/stdc++.h>
using namespace std;

int fibonachi(int n){
    if(n<=1)
        return n;
    else
        return fibonachi(n-1)+ fibonachi(n-2);
}


int main(){

//cout<<fibonachi(10);

   for(int i=0; i<=45; i++){
        cout<<i<<" "<<fibonachi(i)<<endl;
    }

/*for(int i=0; i<=10; i++){
    cout<<i<<" ";
}
cout<<endl;
for(int i=0; i<=10; i++){
    cout<<fibonachi(i)<<" ";
}*/


return 0;
}
