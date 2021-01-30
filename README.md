# CppLogger
A simple logger for easier debugging of C++ programs

## Installation
  * Clone the repo<br><br>
  * Go to the source directory<br><br>
  * Run `make`. This will generate a `logger.o`  object file<br><br> 
 
## Usage
  * Include the header `<logger class directroy>/logger_class.hpp` in your source<br><br>
  * While compilation, supply the object file `logger_class.o` alongwith the sources<br>
    ex: `g++ main.cpp ./<logger_class directory>/logger_class.o -o a.out`<br><br>
  * Run your code<br><br>

## Docs
  * Create an object of the `logger_class` for ex: `logger_class logger(log_file_name)`<br><br>
  * There are three log levels `logger.WARN`, `logger.ERROR`, `logger.INFO`<br><br>
  * To enable a log level `logger.enable_level(logger.WARN)`. This will allow the<br>
    `WARN` log messages to be logged to the log file. Same can be done for other levels<br><br>
  * To disable a log level, `logger.disable_level(logger.ERROR)`. This will prevent<br>
    all `ERROR` logs to be logged to the log file. Same can be done for the other levels<br><br>
  * To log a message, `logger.log("message",logger.INFO)`
