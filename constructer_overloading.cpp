#include<iostream>
using namespace std;
class display{
    public:

    display(string name){
        cout<<"Name : "<<name<<endl;
    }
    display(string name,int rollno){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no. : "<<rollno<<endl;
    }
    display(string name,int rollno,string branch){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no. : "<<rollno<<endl;
        cout<<"Branch : "<<branch<<endl;
    }

};
int main(){
    display d("Shivam");
    return 0;
}