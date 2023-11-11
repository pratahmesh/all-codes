// #include <iostream>
// using namespace std;
// class Players
// {
// public:
//     int x, y;
//     int speed;

//     void Move(int xa, int ya)
//     {
//         x += xa * speed;
//         y += xa * speed;
//     }
// };
// struct vec2
// {
//     int a,b;
//     void Add (const vec2& other){}

// };

// int main()
// {
//     Players p;
//     p.Move(1, -1);
//     p.x = 5;
//     p.y = 6;
//     p.speed = 10;
//     std::cin.get();
// }

#include <iostream>
using namespace std;
class Log
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

private:
   int m_LogLevel = LogLevelInfo;

public:
    void Setlevel(int level)
    {
        m_LogLevel = level;
    }
    void Warn(const char *messages)
    {
        if (m_LogLevel >= LogLevelWarning)
            std::cout << "[warning] " << messages << std::endl;
    }
    void Error(const char *messages)
    {
        if (m_LogLevel >= LogLevelError)
            std::cout << "[Error] " << messages << std::endl;
    }
    void Info(const char *messages)
    {
        if (m_LogLevel >= LogLevelInfo)
            std::cout << "[Info] " << messages << std::endl;
    }
};
int main()
{
    Log l;

    l.Warn("hello");
    l.Error("its an error");
    l.Info("information");
    std::cin.get();
}