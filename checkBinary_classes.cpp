#include<iostream>
using namespace std;

class binary{
    string s;
    public:
    void getData();
    void chk_binary();
    void ones_complement();
    void display1();
    void display2();
};
void binary :: getData(){
    cout<<"Enter the binary number: ";
    cin>>s;
}
void binary :: chk_binary(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"The number inputted is not in binary form.";
            exit(0);
        }
        // else{
        //     cout<<s<<": The number inputted is in binary form.";
        //     exit(0);
        // }
    }
}
void binary :: display1(){
    cout<<"Binary number before one's complement: ";
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
void binary :: ones_complement(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else if(s.at(i)=='1'){
            s.at(i)='0';
        }
    }
}
void binary :: display2(){
    cout<<"Binary number after one's complement: ";
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
}
int main(){
    binary b;
    b.getData();
    b.chk_binary();
    fflush(stdin);
    b.display1();
    b.ones_complement();
    b.display2();
    return 0;
}
