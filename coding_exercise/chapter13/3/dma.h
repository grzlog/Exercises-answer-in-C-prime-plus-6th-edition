#ifndef DMA_H_
#define DMA_H_
class ABC{
private:
    char* label;
    int rating;
public:
    ABC(const char* l, int r);
    ABC(const ABC& abc);
    virtual ~ABC();
    ABC& operator=(const ABC& abc);
    virtual void view() const=0;
};

class baseDMA:public ABC{
private:
public:
    baseDMA(const char*l, int r);
    virtual void view() const;
};

class lackDMA:public ABC{
private:
    enum {COL_LEN=40};
    char color[COL_LEN];
public:
    lackDMA(const char* c, const char* l,int r);
    virtual void view() const;
};

class hasDMA:public ABC{
private:
    char* style;
public:
    hasDMA(const char* s, const char* l ,int r);
    hasDMA(const hasDMA& h);
    hasDMA& operator=(const hasDMA& h);
    virtual ~hasDMA();
    virtual void view() const;
};
#endif