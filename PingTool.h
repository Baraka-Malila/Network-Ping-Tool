#ifndef PINGTOOL_H
#define PINGTOOL_H

#include <string>
#include <vector>

class PingTool {
private:
    std::vector<std::string> networks; // List of nearby networks
    std::string logFilePath;           // Path to save logs
    void saveLog(const std::string& log); // Method to save log

public:
    PingTool(const std::string& logFilePath);       // Constructor
    void scanNetworks();                            // Method to scan nearby networks
    void pingNetwork(const std::string& ipAddress); // Ping a network
    void pingNetwork(const std::string& target, int count); // Ping with count
    std::vector<std::string> getNetworks() const;   // Get the list of networks
    void displayASCIIArt() const;                   // Display ASCII art
};

#endif // PINGTOOL_H
