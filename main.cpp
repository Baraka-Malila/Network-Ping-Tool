#include "PingTool.h"
#include <iostream>
#include <string>

void displayIntro() {
    std::cout << "\033[1;36m"; // Cyan color for ASCII art and details
    std::cout << "   __  __          _ _              ____  _             \n";
    std::cout << "  |  \\/  | ___  __| (_)_ __   __ _ / ___|| |_ ___  _ __ \n";
    std::cout << "  | |\\/| |/ _ \\/ _` | | '_ \\ / _` | |    | __/ _ \\| '__|\n";
    std::cout << "  | |  | |  __/ (_| | | | | | (_| | |___ | || (_) | |   \n";
    std::cout << "  |_|  |_|\\___|\\__,_|_|_| |_|\\__, |\\____(_)__\\___/|_|   \n";
    std::cout << "                              |___/                    \n";
    std::cout << "\033[0m"; // Reset color

    std::cout << "\033[1;32m"; // Green color for details
    std::cout << "\nMaestroPing - Version 1.0\n";
    std::cout << "Licensed under MIT License\n";
    std::cout << "Creator: Baraka Malila\n";
    std::cout << "\033[0m\n"; // Reset color
}

void displayMenu() {
    std::cout << "\033[1;34m"; // Blue color for the menu
    std::cout << "\n--- Main Menu ---\n";
    std::cout << "1. Scan Nearby Networks\n";
    std::cout << "2. Ping a Network\n";
    std::cout << "3. Exit\n";
    std::cout << "\033[0m"; // Reset color
    std::cout << "Choose an option: ";
}

void displayPingMenu() {
    std::cout << "\033[1;34m"; // Blue color for the menu
    std::cout << "\n--- Ping Menu ---\n";
    std::cout << "1. Ping by IP Address\n";
    std::cout << "2. Ping by Domain Name\n";
    std::cout << "3. Specify Number of Pings\n";
    std::cout << "4. Back to Main Menu\n";
    std::cout << "\033[0m"; // Reset color
    std::cout << "Choose an option: ";
}

int main() {
    // Create a PingTool object with the log file path
    PingTool pingTool("ping_logs.txt");

    // Display intro with ASCII art and program details
    displayIntro();

    bool running = true;
    while (running) {
        displayMenu();
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                pingTool.scanNetworks();
                break;

            case 2: {
                bool pingMenu = true;
                while (pingMenu) {
                    displayPingMenu();
                    int pingChoice;
                    std::cin >> pingChoice;

                    switch (pingChoice) {
                        case 1: {
                            std::cout << "Enter the IP address to ping: ";
                            std::string ipAddress;
                            std::cin >> ipAddress;
                            pingTool.pingNetwork(ipAddress);
                            break;
                        }
                        case 2: {
                            std::cout << "Enter the domain name to ping: ";
                            std::string domainName;
                            std::cin >> domainName;
                            pingTool.pingNetwork(domainName); // Add domain handling
                            break;
                        }
                        case 3: {
                            std::cout << "Enter the number of pings: ";
                            int count;
                            std::cin >> count;
                            std::cout << "Enter the IP or domain: ";
                            std::string target;
                            std::cin >> target;
                            pingTool.pingNetwork(target, count); // Adjust implementation
                            break;
                        }
                        case 4:
                            pingMenu = false; // Back to main menu
                            break;

                        default:
                            std::cout << "[!] Invalid option. Try again.\n";
                            break;
                    }
                }
                break;
            }

            case 3:
                std::cout << "[*] Exiting Maestro Ping Tool. Goodbye!\n";
                running = false;
                break;

            default:
                std::cout << "[!] Invalid option. Try again.\n";
                break;
        }
    }

    return 0;
}
