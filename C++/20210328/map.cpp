
#include<iostream>
#include<map>
using namespace std;
 
int main()
{
    map<int, string> mp;
    //map的插入方法有4种
    //insert返回值为pair   原型：typedef pair<iterator, bool> _Pairib
    //方法1.pair 	在插入重复键的情况下前三种方法类似，这里只测试第一种
    pair<map<int,string>::iterator, bool> pair1 = mp.insert(pair<int,string>(1,"aaaaa11111"));
    if (pair1.second == true)
    {
        cout<< "success" <<endl;
    }
    else
    {
        cout<< "error" <<endl;
    }
 
    pair<map<int,string>::iterator, bool> pair2 = mp.insert(pair<int,string>(1,"aaaaa22222"));
    if (pair2.second == true)
    {
        cout<< "success" <<endl;
    }
    else
    {
        cout<< "error" <<endl;
    }
    //方法2.make_pair
    mp.insert(make_pair<int,string>(3,"bbbbb33333"));
    pair<map<int,string>::iterator, bool> pair3 = mp.insert(make_pair<int,string>(3,"bbbbb44444"));
    if (pair3.second == true)
    {
        cout<< "success" <<endl;
    }
    else
    {
        cout<< "error" <<endl;
    }
    //方法3.value_type
    mp.insert(map<int, string>::value_type(5,"ccccc55555"));
    mp.insert(map<int, string>::value_type(5,"ccccc66666"));
 
    //方法4.[]
    mp[7] = "ddddd77777";
    mp[7] = "ddddd88888";
 
    for (map<int,string>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        cout<< it->first << "\t" << it->second <<endl;
    }
    cout<< "--------------------------------" <<endl;
    //删除
    while(!mp.empty())
    {
        map<int,string>::iterator it = mp.begin();
        cout<< it->first << "\t" << it->second <<endl;
        mp.erase(it);
    }
    system("pause");
    return 0;
}