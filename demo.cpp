#include<iostream>
using namespace std;

int main(){
    
    int a,b;
   cin>>a>>b;
   


    for (int i = 1; i <=a; i++){
       for (int t = 1; t <=b; t++){
        if (i==1 || i==a)
        {
           cout<<"*";
        }
        else if (t==1 || t==b)
        {
            cout<<"*";
        }
        else{
        cout<<" ";
        }
           
        }
        cout<<endl;

   
    }
    return 0; 
}