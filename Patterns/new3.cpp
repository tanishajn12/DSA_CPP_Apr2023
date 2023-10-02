#include <bits/stdc++.h>
using namespace std;

//InventoryItem class for representing inventory item attributes,
//generates a unique code
class InventoryItem {
public:
    string name;
    string category;
    string uniqueCode;
    string issuedTo;
    bool isWorking;

    InventoryItem(string name, string category) {
        this->name=name;
        this->category=category;
        this->isWorking=true;

        static int itemCount = 0;
        itemCount++;
        uniqueCode = category.substr(0, 2) + "-" + to_string(itemCount);
    }

    //assign a item to a particular dept
    void assignToDepartment(string department) {
        issuedTo = department;
    }

    void reportIssue() {
        isWorking = false;
    }
};

class Department {
public:
    string name; //department name
    vector<InventoryItem*> inventory; 
    //vector of pointers to InventoryItem objects
    //it will store the inventory items associated with dept

    Department(string name){
        this->name=name;
    }

    //issueInventory -> It takes a pointer to an InventoryItem object as a parameter.
    void issueInventory(InventoryItem* item) {
        inventory.push_back(item); //adds the item to inventory vector of dept
        item->assignToDepartment(name); 
    }

    int countInventory(string category = "") {
        //counts the number of inventory items associated with the department
        if (category.empty()) {
            return inventory.size();
        } 
        
        else { //counts all the items in inventory
            int count = 0;
            for (const auto& item : inventory) {
                if (item->category == category) {
                    count++;
                }
            }
            return count;
        }
    }

    // returns a vector of strings containing the names of all inventory items 
    //associated with the department.
    vector<string> getInventoryList() {
        vector<string> itemList;
        for (const auto& item : inventory) {
            itemList.push_back(item->name);
        }
        return itemList;
    }
};

class University {
public:
    //variable called departments, which is a map that associates department names
    // (strings) with pointers to Department objects.
    map<string, Department*> departments;
    map<string, InventoryItem*> inventoryItems;

    void addDepartment(string departmentName) {
        departments[departmentName] = new Department(departmentName);
    }

    void addInventoryItem(string name, string category) {
        InventoryItem* item = new InventoryItem(name, category);
        inventoryItems[item->uniqueCode] = item;
        //adds the new InventoryItem object to the inventoryItems map using its unique code as the key.
    }

    Department* getDepartment(string departmentName) {
        return departments[departmentName];
    }

    InventoryItem* getInventory(string uniqueCode) {
        return inventoryItems[uniqueCode];
    }

    void reportInventoryIssue(string uniqueCode) {
        InventoryItem* item = getInventory(uniqueCode);
        if (item) {
            item->reportIssue();
        }
    }
};

int main() {
    University university;

    university.addDepartment("Computer Science");
    university.addDepartment("Electrical Engineering");

    university.addInventoryItem("Server", "Server"); //(name,category)
    university.addInventoryItem("Desktop Computer", "Computer");
    university.addInventoryItem("Laptop", "Computer");

    Department* csDepartment = university.getDepartment("Computer Science");
    Department* eeDepartment = university.getDepartment("Electrical Engineering");

    csDepartment->issueInventory(university.getInventory("SV-1"));
    csDepartment->issueInventory(university.getInventory("DC-2"));
    eeDepartment->issueInventory(university.getInventory("LT-3"));

    cout << "Number of computers in Computer Science department: " << 
    csDepartment->countInventory("Computer") << endl;
    cout << "Number of computers in Electrical Engineering department: " << 
    eeDepartment->countInventory("Computer") << endl;

    university.reportInventoryIssue("DC-2");

    cout << "Number of computers in Computer Science department after reporting issue: " << 
    csDepartment->countInventory("Computer") << endl;

    vector<string> csInventory = csDepartment->getInventoryList();
    cout << "Inventory in Computer Science department: ";
    for (const auto& item : csInventory) {
        cout << item << ", ";
    }

    cout << endl;
    return 0;
}


