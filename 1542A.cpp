#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odd=0;
        int even=0;
        for(int i=0;i<2*n;i++){
                int a;
        cin>>a;
            if(a%2==0){
            even++;
        }
        else{
            odd++;
        }
        }

        if(even==odd){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
