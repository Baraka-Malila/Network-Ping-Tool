# Network Ping Tool

A simple and efficient command-line tool for monitoring the availability and response times of network hosts by sending ICMP ping requests.

## Features

- Send ICMP ping requests to one or multiple targets.
- Measure and display response times (latency).
- Support for continuous or limited ping requests.
- Summary statistics for packet loss and average latency.
- Adjustable timeout and interval settings.
- Cross-platform support (Linux, macOS, and Windows).

## Prerequisites

To run this tool, you need:

- **Python 3.8+** installed on your system.
- Administrator/root privileges (required for ICMP operations).

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/network-ping-tool.git
   cd network-ping-tool
   ```

2. Install the required Python dependencies:
   ```bash
   pip install -r requirements.txt
   ```

## Usage

### Basic Usage

To ping a single host:
```bash
python ping_tool.py <host>
```
Example:
```bash
python ping_tool.py google.com
```
### Advanced Options

- **Ping multiple hosts:**
  ```bash
  python ping_tool.py <host1> <host2> <host3>
  ```

- **Set the number of requests:**
  ```bash
  python ping_tool.py <host> --count <number>
  ```

- **Adjust the interval between requests:**
  ```bash
  python ping_tool.py <host> --interval <seconds>
  ```

- **Set a custom timeout for responses:**
  ```bash
  python ping_tool.py <host> --timeout <seconds>
  ```

- **Run in continuous mode:**
  ```bash
  python ping_tool.py <host> --continuous
  ```
