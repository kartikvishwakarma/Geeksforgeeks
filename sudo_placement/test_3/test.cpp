#include <iostream>

using namespace std;

class Gfg
{
public:
    int main(int s)
    {
        cout << s << ", ";
        return 0;
    }
    int main(char *s)
    { 
        cout << s;
        return 0;
    }
    int main(int s ,int m)
    {
        cout << s << " " << m;
        return 0;
    }
};

int main()
{
    Gfg obj;
    obj.main(3);
    obj.main("Hello World!");
    obj.main(9, 6);
    return 0;
}