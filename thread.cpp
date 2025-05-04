#include<iostream>
using namespace std;
#include<mutex>
#include<thread>
mutex m1;

void fun()
{
m1.lock();
for(int i=0;i<10;i++)
{
cout<<i<<endl;
}
m1.unlock();
}

int main()
{
thread t1(fun);
thread t2(fun);
t1.join();
t2.join();
return(0);
}
