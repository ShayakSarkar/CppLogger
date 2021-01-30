#include "./logger_class.hpp"

logger_class::logger_class(std::string filename){
    std::vector<int> temp(3);
    disabled=std::move(temp);
    for(int& elm : disabled){
        elm=true;
    }
    fptr=fopen(filename.c_str(),"w+");
}

logger_class::logger_class(const char* filename){
    std::vector<int> temp(3);
    disabled=std::move(temp);
    for(int& elm : disabled){
        elm=false;
    }
    fptr=fopen(filename,"w+");
}

void logger_class::log(std::string msg,int level){
    if(level>=3 || level<0){
        return;
    }
    if(disabled[level]){
        return;
    }
    switch(level){
        case INFO:
            msg="[INFO] "+msg+"\n";
            break;
        case WARN:
            msg="[WARN] "+msg+"\n";
            break;
        case ERROR:
            msg="[ERROR] "+msg+"\n";
    }
    fwrite(msg.c_str(),1,msg.size(),fptr);
}

void logger_class::disable_level(int level){
    if(level<0 || level>2){
        return;
    }
    disabled[level]=true;
}

void logger_class::enable_level(int level){
    if(level<0 || level>3){
        return;
    }
    disabled[level]=false;
}

logger_class::~logger_class(){
    fclose(fptr);
}