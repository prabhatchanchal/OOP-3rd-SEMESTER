#include<iostream>
using namespace std;
int staircase(int n){
    if(n<0){           
        return 0;
    }

    if(n==0){           
        return 1;
    }

    int count = 0;
    count += staircase(n-1);    //Stepping 1 step
    count += staircase(n-2);    //Stepping 2 step
    count += staircase(n-3);    //Stepping 3 step

    return count;
}


//Main 
int main(){
    int n;
    cout<<"Enter number of stairs"<<endl;
    cin>>n;
    
    cout<<"No of ways to climb stairs are ";
    cout<<staircase(n)<<endl;

    return 0;

}
