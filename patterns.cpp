#include <bits/stdc++.h>
using namespace std;

void pattern1(int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"# ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"# ";
        }
        cout<<endl;
    }
}
void pattern3(int n){

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n){
for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int n){
    //space , star, space
for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<"-";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        
        for(int j=0; j<n-i-1; j++){
            cout<<"-";
        }
        cout<<endl;
    }
}
void pattern8(int n){
    //space , star, space
for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<"-";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        
        for(int j=0; j<i; j++){
            cout<<"-";
        }
        cout<<endl;
    }
}
void pattern9(int n){
    //space , star, space
for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<"-";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        
        for(int j=0; j<n-i-1; j++){
            cout<<"-";
        }
        cout<<endl;
    }
for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<"-";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        
        for(int j=0; j<i; j++){
            cout<<"-";
        }
        cout<<endl;
    }
}
void pattern10(int n){
for(int i=0; i<=2*n-1; i++){
    int start=i;
    if(i>n){start = 2*n -i;} 
    for(int j=0; j<start;j++){
    cout<<"*";
    
    }
    cout<<endl;
}
}
void pattern11(int n){
    int start=1;
    for(int i=0; i<n; i++){
        if(i%2 == 0) start=1;
        else start=0;
        for(int j=0; j<=i; j++){
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<endl;
    }
}
void pattern12(int n){
        int space = 2*(n-1);
    for(int i=1; i<=n; i++){
        //numbers
        for(int j=1; j<=i; j++){
            cout<<j;
        }

        //space
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        //numbers
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        space -= 2;
        cout<<endl;
    }
}
void pattern13(int n){
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num += 1;
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<= 'A'+i; ch++ ){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<'A'+n-i; ch++ ){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern16(int n){
    for(int i=0; i<n; i++){
        char ch = 'A'+i;
        for(int j=0; j<=i; j++ ){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern17(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //char
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1; j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }

        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}
void pattern18(int n){

    for(int i=0; i<n; i++){
        for(char ch= 'E'-i; ch<='E'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
void pattern19(int n){

    int iSpace=0;
    for(int i=0; i<n; i++){
        //star
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<iSpace; j++){
            cout<<"#";
        }
        //star

        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
        iSpace +=2;
    }
int inSpace=(2*n-2);
    for(int i=0; i<n; i++){
        //star
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<inSpace; j++){
            cout<<"#";
        }
        //star

        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
        inSpace -=2;
    }

}
void pattern20(int n){
    int spaces= 2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int stars =i;
        if(i>n) stars = (2*n-i);
        for(int j=0; j<stars; j++){
            cout<<"*";
        }
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }

        for(int j=0; j<stars; j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces-=2;
        else spaces+=2;
    }
}
void pattern21(int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i== n-1 || j==n-1){
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
void pattern22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top=i;
            int left =j;
            int right = 2*n-2-j;
            int bottom = 2*n-2-i;
            cout<<(n- min(min(top,bottom), min(left, right)));
        }
        cout<<endl;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t;
cin>>t;
for(int i=0;i<t; i++){
    int n;
    cin>>n;
    pattern22(n);
}
}