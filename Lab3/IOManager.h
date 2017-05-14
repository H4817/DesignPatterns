#pragma once

#include <iostream>
#include <fstream>

class IOManager {
public:
    IOManager() = delete;

    static std::string ReadFile(std::string inpFileName);

    static void WriteFile(std::string outFileName, std::string content);

};


