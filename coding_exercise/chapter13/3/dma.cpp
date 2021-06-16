#include "dma.h"
#include <bits/stdc++.h>

ABC::ABC(const char* l, int r):rating(r){
    label =new char[strlen(l)+1];
    strcpy(label,l);
}

ABC::ABC(const ABC& abc){
    label = new char[strlen(abc.label)]+1;
    strcpy(label,abc.label);
    rating = abc.rating;
}

ABC& ABC::operator=(const ABC& abc){
    if(this==&abc)
        return *this;
    delete [] label;
    label = new char[strlen(abc.label)]+1;
    strcpy(label,abc.label);
    rating = abc.rating;
    return *this;
}

ABC::~ABC(){
    delete [] label;
}

void ABC::view() const{
    std::cout<<"Label: "<<label<<std::endl;
    std::cout<<"Rating: "<<rating<<std::endl;
}

baseDMA::baseDMA(const char*l, int r):ABC(l,r){}

void baseDMA::view()const{
    ABC::view();
}

lackDMA::lackDMA(const char* c, const char* l ,int r):ABC(l,r){
    strcpy(color, c);
}

void lackDMA::view()const{
    ABC::view();
    std::cout<<"Color: "<<color<<std::endl;
}

hasDMA::hasDMA(const char* s,const char* l, int r):ABC(l,r){
    style= new char[strlen(s)+1];
    strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA& h):ABC(h){
    style= new char[strlen(h.style)+1];
    strcpy(style, h.style);
}

hasDMA& hasDMA::operator=(const hasDMA& h){
    if(this==&h)
        return *this;
    ABC::operator=(h);
    delete [] style;
    style= new char[strlen(h.style)+1];
    strcpy(style, h.style);
    return *this;
}

hasDMA::~hasDMA(){
    delete [] style;
}

void hasDMA::view()const{
    ABC::view();
    std::cout<<"Style: "<<style<<std::endl;
}