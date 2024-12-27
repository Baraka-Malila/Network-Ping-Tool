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


void PingTool::pingNetwork(const std::string& ipAddress) {
    std::cout << "[*] Pinging " << ipAddress << "...\n";
    std::string command = "ping -c 4 " + ipAddress; // Linux ping command
    int result = system(command.c_str());
    if (result == 0) {
        std::cout << "[+] Ping to " << ipAddress << " succeeded.\n";
    } else {
        std::cout << "[!] Ping to " << ipAddress << " failed.\n";
    }
}


void PingTool::pingNetwork(const std::string& target, int count) {
    std::cout << "[*] Pinging " << target << " (" << count << " times)...\n";
    std::string command = "ping -c " + std::to_string(count) + " " + target; // Linux ping with count
    int result = system(command.c_str());
    if (result == 0) {
        std::cout << "[+] Ping to " << target << " succeeded.\n";
    } else {
        std::cout << "[!] Ping to " << target << " failed.\n";
    }
}
