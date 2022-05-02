#include<iostream>
#include<string>

using namespace std;
string name[10] = {"零","一","二","三","四","五","六","七","八","九"};
string name2[5] = {"十","百","千","万","亿"};
string saythousand(int num);
int main(){
    int num;
    cout << "输入一个数字,我将把它转化为汉字:";
    cin >> num;
    cout << num << endl;
    if(num < 0){
        cout << "负";
        num = - num;
    }
    if(num > 100000000)
    {
        cout << saythousand(num / 100000000);
        num %= 100000000;
        cout << name2[4];
    }
    if(num > 10000)
    {
        cout << saythousand(num / 10000);
        num %= 10000;
        cout << name2[3];
    }
    if(num > 0)
    {
        cout << saythousand(num);
        num = 0;
    }

    return 0;

}

string saythousand(int num)
{
    int ss[4];
    string s;
    if(ss[0] != 0)
    {
        
    }
    else if(ss[1] != 0)
    {

    }
    else if(ss[2] == 0)
    {

    }
    else if(ss[3] == 0)
    {

    }

    return s;
}

