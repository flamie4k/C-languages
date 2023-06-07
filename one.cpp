#include <iostream>
#include <cstring>
using namespace std;

enum UserType { Corporate, Individual };
char key[6];

struct User {
    int id;
    char userName[4];
    UserType userType; 
    char licenseKeys[25][6]; 
    int numOfLicenses;
    int price;
};

User users[5] = {
    { 1, "ram", Individual, { "aXz5" }, 1, 5000 },
    { 2, "eec", Corporate, { "by3K", "66Y2", "4Uee", "0Q5r" }, 4, 15000 },
    { 3, "pec", Corporate, { "Lred", "re8K", "22Y8" }, 3, 10000 },
    { 4, "kec", Corporate, { "8tW2", "uUSe", "pPi0", "eR71", "Tup4", "v9Bg" }, 6, 25000 },
    { 5, "sam", Individual, { "bB39" }, 1, 5000 }
};

class exe {
protected:
    char name[4];

public:
    void get_data() {
        cout << "Enter username: ";

        cin >> name;
        cout << "Enter key: ";
        cin >> key;
    }

    void display() {
        for (int i = 0; i < 5; i++) {
            if (strcmp(name, users[i].userName) == 0) {
                cout << endl;
                cout << "User name : "<< users[i].userName << endl;
                cout << "User ID: " << users[i].id << endl;
                cout << "User Type: " << (users[i].userType == Individual ? "Individual" : "Corporate") << endl;
                cout << "Number of Licenses: " << users[i].numOfLicenses << endl;
                cout << "License Keys: ";
                for (int j = 0; j < users[i].numOfLicenses; j++) {
                    cout << users[i].licenseKeys[j] << "  ";
                }
                cout << endl;
                cout << "Price: $" << users[i].price<< endl;
                break;
            }
        }
        }

    void display_2(){
        int totalkeys = 0;
        int totalamt = 0;
        cout<<endl;
        cout<<"Total number of users : "<<users[4].id<<endl;
        for (int i = 0; i < 5; i++) {
        totalkeys += users[i].numOfLicenses;
        totalamt += users[i].price;
        }
        cout<<"Total number of keys : "<<totalkeys;
        cout<<endl;
        cout<<"Total amount paid : $"<<totalamt;
        cout<<endl;
    }

};

int main() {
    exe e;
    e.get_data();
    if (strcmp(key, "aXz5") == 0 || strcmp(key, "by3K") == 0 || strcmp(key, "66Y2") == 0 ||
        strcmp(key, "4Uee") == 0 || strcmp(key, "0Q5r") == 0 || strcmp(key, "Lred") == 0 ||
        strcmp(key, "re8K") == 0 || strcmp(key, "22Y8") == 0 || strcmp(key, "8tW2") == 0 ||
        strcmp(key, "uUSe") == 0 || strcmp(key, "pPi0") == 0 || strcmp(key, "eR71") == 0 ||
        strcmp(key, "Tup4") == 0 || strcmp(key, "v9Bg") == 0) {
        e.display();
        cout << endl;
        e.display_2();
    }
    else {
        cout << "Incorrect Key.";
    }
    return 0;
}
