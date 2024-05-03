#include<iostream>
using namespace std;
class A{
    protected:
    int x;
    public:
    void input(int a){
x=a;
    }
};
class B:virtual public A{
    public:
    void print(){
        cout<<endl <<x;
    }
};
class C:virtual A{
    public:
    void fun(){
        cout<<endl<<"i am class C";
    }
};
class D:public B,public C{
    public:
void findit(){
    cout<<endl<<"i am the last class";
}
};
int main()
{
D obj;
obj.input(5);
obj.print();
obj.fun();
obj.findit();
  return 0;
}