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

void PingTool::scanNetworks() {
    std::cout << "[*] Scanning for nearby networks...\n";
    networks = {"192.168.1.1", "192.168.1.2", "10.0.0.1"}; // Dummy data for now
    std::cout << "[+] Networks found:\n";
    for (size_t i = 0; i < networks.size(); ++i) {
        std::cout << "    " << i + 1 << ". " << networks[i] << "\n";
    }
}


