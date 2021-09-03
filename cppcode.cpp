#include<iostream>
using namespace std;

int main(){
    int sum[100] = {0};
    int i = 0;
    int a = 0,b = 0,temp = 0;
    while(cin >> temp)
    {
        i++;
        if(i%2==0){
           b = temp; 
           sum[i/2] = a + b;
           cout << endl;
        }
        else
            a = temp; 

    }
    for(int j = 0;j++;j<i/2)
        cout << sum[j]<<endl;
    return 0;
}