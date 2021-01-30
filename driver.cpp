#include <bits/stdc++.h>
#include "./logger_class.hpp"

int main(){
    logger_class logger("./log_file.txt");
    logger.disable_level(logger.ERROR);
    logger.enable_level(logger.ERROR);
    logger.log("message",logger.INFO);
    logger.log("message",logger.WARN);
    logger.log("message",logger.ERROR);
}
