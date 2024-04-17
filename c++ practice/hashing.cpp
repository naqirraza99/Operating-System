#include <iostream>
using namespace std;

const int TABLE_SIZE = 10;

class HashTable {
private:
    int table[TABLE_SIZE];

public:
    HashTable() {
        for (int i = 0; i < TABLE_SIZE; ++i) {
            table[i] = -1; // Initialize all slots to -1, indicating empty
        }
    }

    int hashFunction(int key) {
        return key % TABLE_SIZE; // Simple division method for hashing
    }

    void insert(int key) {
        int index = hashFunction(key);

        // Linear probing to handle collisions
        while (table[index] != -1) {
            index = (index + 1) % TABLE_SIZE;
        }

        table[index] = key;
    }

    void display() {
        cout << "Hash Table:" << endl;
        for (int i = 0; i < TABLE_SIZE; ++i) {
            if (table[i] != -1) {
                cout << "Index " << i << ": " << table[i] << endl;
            }
        }
    }
};

int main() {
    HashTable hashTable;

    // Insert some values into the hash table
    hashTable.insert(12);
    hashTable.insert(25);
    hashTable.insert(35);
    hashTable.insert(45);
    hashTable.insert(55);
    hashTable.insert(65);

    // Display the hash table
    hashTable.display();

    return 0;
}

