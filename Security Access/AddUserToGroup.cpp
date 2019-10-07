#include <iostream>
#include <fstream>
#include<vector>
#include<string.h>
using namespace std;

int main(int argc, char *argv[]){
    ifstream ip;
    ip.open("test.csv");
    string iuser,igrp;
    string  tiuser;
    if(!ip.is_open()) std::cout << "ERROR: File Open" << '\n';
    for(int i =1;i+1<argc;i++){
        tiuser=argv[i];
        string tgrp=argv[i+1];
        iuser="!"+tiuser;
        igrp="#"+tgrp;
    }
    string user;
    string temp;
    vector<string> v;
    while(ip.good()){
        getline(ip,user,',');
        getline(ip,temp,'\n');
        v.push_back(user);
    }
    bool ue=true;
    for(int i =0;i<v.size()-1;i++){
        if(iuser==v[i]){ue=false;}
    }
    if(ue==true){cout<<"User doesn't exists"<<endl;
        
    }
    
    
    else{
        ip.close();
        
        ofstream op;
        op.open("test2.csv",ios::app);
        if(!op) cout << "ERROR: File Open" << '\n';
        for(int i =1;i+1<argc;i++){
            op <<"!";
            op<<argv[i]<<",";
            op<<"#"<<argv[i+1]<<endl;}
        cout<<"Succes"<<endl;
        op.close();
        ifstream ip;
        ip.open("test2.csv");
        string tempuser,tempgrp;
        
        cout<<"DIsplaying the users "<<endl;
        
        while(ip.good()){
            getline(ip,tempuser,',');
            getline(ip,tempgrp,'\n');
            //            cout<<igrp<<endl;
            if(igrp==tempgrp){
                for(int i =1;i<tempuser.length();i++)cout<<tempuser[i];
                cout<<endl;}
        }
        ip.close();
    }
    
}




