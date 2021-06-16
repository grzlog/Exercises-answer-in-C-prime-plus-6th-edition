#ifndef CD_H_
#define CD_H_
class Cd{
private:
    char* performance;
    char* label;
    int selections;
    double playtime;
public:
    Cd();
    Cd(char* s1, char* s2, int n, double t);
    Cd(const Cd& c);
    Cd& operator=(const Cd& c);
    virtual ~Cd();
    virtual void Report() const;
};


class Classic : public Cd{
private:
    char* mainWorks;
public:
    Classic();
    Classic(char* s1,char* s2, char* s3, int n, double t);
    Classic(const Classic& c);
    Classic & operator=(const Classic& c);
    virtual ~Classic();
    virtual void Report() const;
};


#endif
