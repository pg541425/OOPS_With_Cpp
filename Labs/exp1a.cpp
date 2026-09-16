#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    int grade;

    void input(){
        cout<<"enter the name of the student : "<<endl;
        cin>>name;
        cout<<"enter the roll no. of the student : "<<endl;
        cin>>rollno;
        cout<<"enter the grade of the student : "<<endl;
        cin>>grade;

        if(grade>100){
            cout<<"invalid grade"<<endl;
        }else if (grade>=90){
            cout<<"A grade"<<endl;
        }else if (grade>=80){
            cout<<"B grade"<<endl;
        }else if (grade>=70){
            cout<<"C grade"<<endl;
        }else if (grade>=60){
            cout<<"D grade"<<endl;
        }else {
            cout<<"Failed"<<endl;
        }
    }
    void display(){
        cout<<"name of the student is : "<<name<<endl;
        cout<<"roll no. of the student is : "<<rollno<<endl;
        cout<<"grade of the student is : "<<grade<<endl;
    }
};

int main(){
    student s;
    s.input();
    s.display();
    return 0;
}