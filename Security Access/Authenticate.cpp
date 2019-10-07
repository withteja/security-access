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
        string tipass=argv[2];
        iuser="!"+tiuser;
        ipass="@"+tipass;
    }
//    cout<<"iuser "<<iuser<<endl;
//    cout<<"ipass "<<ipass<<endl;
//    cout<<iuser<<" "<<ipass<<endl;
    string user;
    string pass;
    vector<pair<string,string> > v;
    while(ip.good()){
        getline(ip,user,',');
        getline(ip,pass,'\n');
        v.push_back(make_pair(user,pass));
    }
    bool ue=false;
    bool pe=false;
    for(int i =0;i<v.size()-1;i++){
        
        if(iuser==v[i].first)ue=true;
        if (iuser==v[i].first&&ipass==v[i].second){ue=true;pe=true;}
    }
    if(ue==true&&pe==false)cout<<"bad password"<<endl;
    else if (ue==false)cout<<"no user exists"<<endl;
    else if(ue==true&&pe==true)cout<<"Success"<<endl;
    
    ip.close();
}

