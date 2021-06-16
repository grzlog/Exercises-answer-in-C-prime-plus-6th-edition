#include "cd.h"
#include <bits/stdc++.h>
Cd::Cd(){
    performance = new char[4];
    strcpy(performance,"\0");
    label = new char[4];
    strcpy(label,"\0");
    selections=0;
    playtime=0;
}

Cd::Cd(char* s1,char* s2,int n ,double t):selections(n),playtime(t){
    performance = new char[strlen(s1)+1];
    strcpy(performance, s1);
    label = new char[strlen(s2)+1];
    strcpy(label, s2);
}

Cd::Cd(const Cd& c){
    performance = new char[strlen(c.performance)+1];
    strcpy(performance,c.performance);
    label  =new char[strlen(c.label)+1];
    strcpy(label, c.label);
    selections = c.selections;
    playtime = c.playtime;
}

Cd& Cd::operator=(const Cd& c){
    if(this == &c)
        return *this;
    delete [] performance;/////要删除原来的
    performance = new char[strlen(c.performance)+1];
    strcpy(performance,c.performance);
    delete [] label;
    label  =new char[strlen(c.label)+1];
    strcpy(label, c.label);
    selections = c.selections;
    playtime = c.playtime;
    return *this;
}

Cd::~Cd(){
    delete [] performance;
    delete [] label;
}

void Cd::Report()const{
    std::cout<<"Performers: "<<performance<<std::endl;
    std::cout<<"Type: "<<label<<" with "<< selections<< "songs."<<std::endl;
    std::cout<<"Total time: "<<playtime<<std::endl;  
}

Classic::Classic(){
    mainWorks=new char[4];
    strcpy(mainWorks,"\0");
}

Classic::Classic(char* s1,char* s2, char* s3, int n, double t):Cd(s2,s3,n,t){
    mainWorks=new char[strlen(s1)+1];
    strcpy(mainWorks,s1);    
}

Classic::Classic(const Classic& c):Cd(c){ /////////////key
    mainWorks = new char[strlen(c.mainWorks)+1];
    strcpy(mainWorks, c.mainWorks);
}

Classic::~Classic(){
    delete [] mainWorks;
}
Classic& Classic::operator=(const Classic& c){ 
    if(this==&c)
        return *this;
    Cd::operator=(c);
    delete [] mainWorks;/////要删除原来的
    mainWorks = new char[strlen(c.mainWorks)+1];
    strcpy(mainWorks, c.mainWorks);
    return *this;
}
void Classic::Report()const{
    Cd::Report();
    std::cout<<"Main works: "<<mainWorks<<std::endl;
}