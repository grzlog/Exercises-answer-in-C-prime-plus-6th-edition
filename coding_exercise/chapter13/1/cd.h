#ifndef CD_H_
#define CD_H_
class Cd{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(char* s1, char * s2,int n, double t);
    Cd();
    virtual ~Cd(){};
    virtual void Report() const;
};

class Classic :public Cd{
private:
    char mainWorks[100];
public:
    Classic();
    Classic(char *s1, char* s2, char*s3, int n, double t);
    virtual void Report() const;
};
#endif
