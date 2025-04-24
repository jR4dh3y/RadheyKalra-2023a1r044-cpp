#include <iostream>
#include <string>
using namespace std;

class CyberSecuritySystem;
void resetAttempts(CyberSecuritySystem& system); 


class CyberSecuritySystem {
private:
    string username;
    string password;

    static int failedAttempts;
    static const int maxAttempts = 3;
    static bool isLocked;

public:
    CyberSecuritySystem(string user, string pass)
        : username(user), password(pass) {}

    void login(string userInput, string passInput) {
        if (isLocked) {
            cout << "[!] System is locked due to multiple failed login attempts.\n";
            return;
        }

        if (userInput == username && passInput == password) {
            cout << "[+] Login successful!\n";
            resetAttempts(*this);
        } else {
            failedAttempts++;
            cout << "[-] Login failed! Attempt " << failedAttempts << "/" << maxAttempts << "\n";

            if (failedAttempts >= maxAttempts) {
                isLocked = true;
                cout << "[!] Too many failed attempts. System is now locked.\n";
            }
        }
    }

    void displayStatus() const {
        cout << "Failed attempts: " << failedAttempts
                  << " | Locked: " << (isLocked ? "Yes" : "No") << "\n";
    }
    friend void resetAttempts(CyberSecuritySystem& system);
};

int CyberSecuritySystem::failedAttempts = 0;
bool CyberSecuritySystem::isLocked = false;

void resetAttempts(CyberSecuritySystem& system) {
    CyberSecuritySystem::failedAttempts = 0;
    cout << "[*] Failed attempts reset after successful login.\n";
}

int main() {
    CyberSecuritySystem system("admin", "secure123");

    // Simulate some login attempts
    system.login("admin", "wrongpass"); // 1st fail
    system.login("admin", "wrongpass"); // 2nd fail
    system.displayStatus();

    system.login("admin", "secure123"); // success
    system.displayStatus();

    system.login("admin", "bad"); // 1st fail again
    system.login("admin", "bad"); // 2nd fail
    system.login("admin", "bad"); // 3rd fail, triggers lock

    system.login("admin", "secure123"); // try login after lock
}
