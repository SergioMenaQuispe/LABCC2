#ifndef WIN_FACTORY
#define WIN_FACTORY

class WinFactory
{
public:
    virtual ~WinFactory(){}
    virtual void Draw() const = 0;
};

#endif