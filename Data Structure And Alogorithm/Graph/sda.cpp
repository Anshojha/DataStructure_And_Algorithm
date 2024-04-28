#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void backtrack(vector<string>& relations, string currentOrder, vector<bool>& used, int& validOrders) {
    // Check if the currentOrder is a valid ordering
    if (currentOrder.length() == used.size()) {
        validOrders++;
        return;
    }
    
    // Try to add each person in the next position
    for (int i = 0; i < relations.size(); i++) {
        char first = relations[i][0];
        char second = relations[i][2];
        int firstIndex = first - 'A';
        int secondIndex = second - 'A';
        
        // Check if the relation can be satisfied and both persons are not used yet
        if (used[firstIndex] && !used[secondIndex] && currentOrder.find(first) != string::npos) {
            used[secondIndex] = true;
            backtrack(relations, currentOrder + second, used, validOrders);
            used[secondIndex] = false;
        }
    }
}

int LineOrdering(string strArr[], int arrLength) {
    // Create a vector to store relations
    vector<string> relations(strArr, strArr + arrLength);
    
    // Sort the relations to ensure consistent order
    sort(relations.begin(), relations.end());
    
    // Define variable varOcg to keep track of the number of valid orderings
    int varOcg = 0; // _define-ocg_
    
    // Create a vector to mark if each person is used
    vector<bool> used(26, false);
    
    // Start with each person as the first person in the line
    for (int i = 0; i < 26; i++) {
        used[i] = true;
        backtrack(relations, string(1, 'A' + i), used, varOcg);
        used[i] = false;
    }
    
    // Return the number of valid orderings
    return varOcg;
}

   int main() {
    // Read input from stdin
    int arrLength ;
    cin >> arrLength;
    string A[arrLength];
    for (int i = 0; i < arrLength; i++) {
        cin >> A[i];
    }
    
    // Output the result
    cout << LineOrdering(A, arrLength);
    return 0;
}


