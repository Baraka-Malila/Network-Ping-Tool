#include <iostream>
using namespace std;

// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"

// Startup Screen (with Maestro Ping)
void displayStartupScreen() {
    cout << CYAN;
    cout << "  __  __                     _____  _               _____ _     _             \n";
    cout << " |  \\/  |                   |  __ \\(_)             / ____| |   (_)            \n";
    cout << " | \\  / | ___ _ __ ___   ___| |__) |_ _ __ ___    | (___ | |__  _ _ __   __ _ \n";
    cout << " | |\\/| |/ _ \\ '_ ` _ \\ / _ \\  ___/| | '_ ` _ \\    \\___ \\| '_ \\| | '_ \\ / _` |\n";
    cout << " | |  | |  __/ | | | | |  __/ |    | | | | | | |   ____) | | | | | | | | (_| |\n";
    cout << " |_|  |_|\\___|_| |_| |_|\\___|_|    |_|_| |_| |_|\n\n";
    cout << YELLOW;
    cout << "                  Maestro Ping Tool - Version 1.0 \n";
    cout << "                  Creator: Baraka-Malila\n\n";
    cout << RESET;
}

// Display Menu
void displayMenu() {
    cout << BLUE;
    cout << "Main Menu\n";
    cout << "---------------------------------------------------\n";
    cout << "1. Ping by IP Address\n";
    cout << "2. Ping by Domain Name\n";
    cout << "3. Ping Statistics\n";
    cout << "4. Exit\n";
    cout << "---------------------------------------------------\n";
    cout << "Please select an option: \n";
    cout << RESET;
}

// Ping Result - Success Example
void displayPingSuccess() {
    cout << GREEN;
    cout << "Ping Result: Success!\n";
    cout << "--------------------------------------------------\n";
    cout << "   ____  [ 100ms ]  \n";
    cout << "  /    \\  [google.com] \n";
    cout << " |      |  \n";
    cout << "  \\____/   [ 100ms ]\n";
    cout << "--------------------------------------------------\n";
    cout << "Packets Sent: 4 | Received: 4 | Lost: 0 (0% loss)\n\n";
    cout << RESET;
}

// Ping Result - Failure Example
void displayPingFailure() {
    cout << RED;
    cout << "Ping Result: Timeout\n";
    cout << "--------------------------------------------------\n";
    cout << "   X  [ Timeout ]  \n";
    cout << "  / \\  \n";
    cout << " /   \\ \n";
    cout << "/     \\ \n";
    cout << "--------------------------------------------------\n";
    cout << "Packets Sent: 4 | Received: 0 | Lost: 4 (100% loss)\n\n";
    cout << RESET;
}

// Success Message
void displaySuccessMessage() {
    cout << GREEN;
    cout << "[✔] Ping successful! Everything is working perfectly.\n\n";
    cout << RESET;
}

// Error/Failure Message
void displayErrorMessage() {
    cout << RED;
    cout << "[✘] Ping failed! Please check the network connection.\n\n";
    cout << RESET;
}

// Exit Message
void displayExitMessage() {
    cout << YELLOW;
    cout << "[⬅] Exiting Program... Goodbye!\n";
    cout << RESET;
}

int main() {
    // Display the Startup Screen
    displayStartupScreen();
    
    // Display the Menu
    displayMenu();
    
    // Simulate Ping Results - Success Example
    displayPingSuccess();
    
    // Simulate Ping Results - Failure Example
    displayPingFailure();
    
    // Simulate Success Message
    displaySuccessMessage();
    
    // Simulate Error/Failure Message
    displayErrorMessage();
    
    // Simulate Exit
    displayExitMessage();
    
    return 0;
}

