#include <iostream>
#include <fstream>
#include<vector>
#include<string.h>
using namespace std;

int main(int argc, char *argv[]){
    string tiopr,iopr,iuser,iobj;
    if(argc==4){
        for(int i =1;i+2<argc;i++){
            tiopr=argv[i];
            string tuser=argv[i+1];
            string tobj=argv[i+2];
            iopr="^"+tiopr;
            iuser="#"+tuser;
            iobj="$"+tobj;
        }
        ofstream op;
        op.open("test4.csv",ios::app);
        if(!op) cout << "ERROR: File Open" << '\n';
        for(int i =1;i+2<argc;i++){
            op <<"^";
            op<<argv[i]<<",";
            op<<"!";
            op<<argv[i+1]<<",";
            op<<"$";
            op<<argv[i+2]<<endl;
        }
        cout<<"Succes"<<endl;
        op.close();}
    if(argc==3){
        for(int i =1;i+1<argc;i++){
            tiopr=argv[i];
            string tuser=argv[i+1];
            iopr="^"+tiopr;
            iuser="#"+tuser;
            iobj="$null";
        }
        ofstream op;
        op.open("test4.csv",ios::app);
        if(!op) cout << "ERROR: File Open" << '\n';
        for(int i =1;i+1<argc;i++){
            op <<"^";
            op<<argv[i]<<",";
            op<<"!";
            op<<argv[i+1]<<",";
            op<<iobj<<endl;
        }
        cout<<"Succes"<<endl;
        op.close();
        
        
    }
    
}







