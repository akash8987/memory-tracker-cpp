#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class MemoryTracker {
private:
    unordered_map<string, size_t> allocations;
    size_t totalAllocated;

public:
    MemoryTracker() : totalAllocated(0) {}

    void allocate(const string& tag, size_t size) {
        allocations[tag] += size;
        totalAllocated += size;
        cout << "[ALLOC] " << size << " bytes -> " << tag << endl;
    }

    void deallocate(const string& tag) {
        if (allocations.count(tag)) {
            totalAllocated -= allocations[tag];
            cout << "[FREE ] " << allocations[tag] << " bytes <- " << tag << endl;
            allocations.erase(tag);
        } else {
            cout << "[WARN ] No allocation found for tag: " << tag << endl;
        }
    }

    void report() const {
        cout << "\n--- Memory Report ---" << endl;
        for (const auto& entry : allocations) {
            cout << entry.first << " : " << entry.second << " bytes" << endl;
        }
        cout << "Total Allocated: " << totalAllocated << " bytes" << endl;
    }
};

int main() {
    MemoryTracker tracker;

    tracker
