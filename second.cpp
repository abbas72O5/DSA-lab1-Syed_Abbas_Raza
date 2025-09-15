#include<iostream>
using namespace std;

int Substr(string message, string submessage ){
   int index=message.find(submessage);
   if(index==string::npos)
      return -1;
    return index;
}

int main(){
    string message="The region of Pakistan";
    string submessage="The";
    cout<<Substr(message,submessage)<<endl;
    submessage="Pakistan";
    cout<<Substr(message,submessage)<<endl;
    submessage="Qatar";
    cout<<Substr(message,submessage)<<endl;
    submessage="";
    cout<<Substr(message,submessage)<<endl;

}