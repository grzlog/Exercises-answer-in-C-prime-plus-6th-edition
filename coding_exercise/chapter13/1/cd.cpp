#include "cd.h"
#include <bits/stdc++.h>

Cd::Cd(){
    strcpy(performers, "None");
    strcpy(label, "None");
    selections = 0;
    playtime =0;
}
Cd::Cd(char * s1, char* s2, int n, double t):selections(n),playtime(t){
    strcpy(performers,s1);
    strcpy(label,s2);
}

void Cd::Report() const{
    std::cout<<"Performers: "<<performers<<std::endl;
    std::cout<<"Type: "<<label<<" with "<< selections<< "songs."<<std::endl;
    std::cout<<"Total time: "<<playtime<<std::endl;  
}

Classic::Classic(){
    strcpy(mainWorks,"None");
}

Classic::Classic(char *s1, char* s2, char*s3, int n, double t):Cd(s2,s3,n,t){
    strcpy(mainWorks,s1);
}

void Classic::Report() const{
    Cd::Report();
    std::cout<<"Main works: "<<mainWorks<<std::endl;
}