#include <iostream>
#include <fstream>
#include<vector>
#include<string.h>
using namespace std;

int main(int argc, char *argv[]){
    string tiobj,iobj,igrp;
    for(int i =1;i+1<argc;i++){
        tiobj=argv[i];
        string tgrp=argv[i+1];
        iobj="!"+tiobj;
        igrp="#"+tgrp;
    }
    ofstream op;
    op.open("test3.csv",ios::app);
    if(!op) cout << "ERROR: File Open" << '\n';
    for(int i =1;i+1<argc;i++){
        op <<"!";
        op<<argv[i]<<",";
        op<<"#"<<argv[i+1]<<endl;}
    cout<<"Succes"<<endl;
    op.close();
    ifstream ip;
    ip.open("test3.csv");
    string tempobj,tempgrp;
    
    cout<<"DIsplaying the objects "<<endl;
    
    while(ip.good()){
        getline(ip,tempobj,',');
        getline(ip,tempgrp,'\n');
        //            cout<<igrp<<endl;
        if(igrp==tempgrp){
            for(int i =1;i<tempobj.length();i++)cout<<tempobj[i];
            cout<<endl;}
    }
    ip.close();
}






