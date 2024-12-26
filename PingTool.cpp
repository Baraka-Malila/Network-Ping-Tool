#include "PingTool.h"
#include <iostream>
#include <fstream>
#include <cstdlib> // For system command

PingTool::PingTool(const std::string& logFilePath) : logFilePath(logFilePath) {}

void PingTool::saveLog(const std::string& log) {
    std::ofstream logFile(logFilePath, std::ios::app);
    if (logFile.is_open()) {
        logFile << log << "\n";
        logFile.close();
    } else {
        std::cerr << "[!] Unable to open log file.\n";
    }
}
