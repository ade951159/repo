#include <iostream>

using namespace std;
void choinka ();
int n=1;
int p=1;
int s=0;

int main()
{


    int s;
    cout << ("Podaj jaka gróba ma być choinka");
    cin>>n;

    p=3;
    for(int i=1; i<=3; i++){

    choinka();


    p=p-1;
    }






    return 0;
}
void choinka (){


    for (int i=1; i<=n; i++){

        for (int j=1; j<= n-i; j++){
        cout<<" ";
        }

        if(p==3){
        if(p>1){
          for (int j=p; j>=1; j--){
            cout<<" ";}
            }}
        if(p==2){
        if(p>1){
          for (int j=p+1; j>=1; j--){
            cout<<" ";}
            }}
        if(p==1){
        if(p>1){
          for (int j=p+3; j>=1; j--){
            cout<<" ";}
            }
            }


    if(p==3){
        for (int j=1; j<=(i*2)-1; j++){
        cout<<"*";

        }}
            if(p==2){
        for (int j=1; j<=(i*2)+1; j++){
        cout<<"*";

        }}
            if(p==1){
        for (int j=1; j<=(i*2)+3; j++){
        cout<<"*";

        }}


        cout<<"\n";
    }
}
