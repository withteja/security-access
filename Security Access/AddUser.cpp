#include <iostream>
#include <fstream>
#include<vector>
using namespace std;

int main(int argc, char *argv[]){
    ifstream ip;
    ip.open("test.csv");
    string iuser,ipass;
    
    if(!ip.is_open()) std::cout << "ERROR: File Open" << '\n';
    for(int i =1;i+1<argc;i++){
        string  tiuser=argv[1];
        iuser="!"+tiuser;
        
    }
    string user,pass;
    vector<pair<string,string> > v;
    while(ip.good()){
        getline(ip,user,',');
        getline(ip,pass,'\n');
        v.push_back(make_pair(user,pass));
    }
    bool ue=false;
    for(int i =0;i<v.size()-1;i++){
        if(iuser==v[i].first)ue=true;
    }
    if(ue==true){cout<<"User already exists"<<endl;}
    
    else{
        ip.close();
        
        ofstream op;
        op.open("test.csv",ios::app);
        if(!op) cout << "ERROR: File Open" << '\n';
        for(int i =1;i+1<argc;i++){
            op <<"!";
            op<<argv[i]<<",";
            op<<"@"<<argv[i+1]<<endl;}
        
    }
    
}



