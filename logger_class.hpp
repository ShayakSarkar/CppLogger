#include <bits/stdc++.h>

class logger_class{
    FILE* fptr;
    std::vector<int> disabled;
public:
    enum{
        INFO,
        WARN,
        ERROR
    };
    logger_class(std::string filename);
    logger_class(const char* filename);
    ~logger_class();
    void log(std::string msg, int level);
    void disable_level(int level);
    void enable_level(int level);;
};
