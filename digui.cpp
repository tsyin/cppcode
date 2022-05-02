#include<iostream>

using namespace std;
void showNum(int arr[],int,int);
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    showNum(arr,0,9);
    return 0;

}

void showNum(int arr[],int num,int index)
{
    if(index > num)
    {
        showNum(arr,num + 1,index);
    }else if(index == num)
    {
        cout << arr[num];
    }

}
