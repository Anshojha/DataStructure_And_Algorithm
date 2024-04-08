#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int getPotentialOfWinner(vector<int> potential, long int k) {
    deque<int> queue;
    int consecutiveWins = 0;
    int winnerPotential = 0;
    
    for (int i = 0; i < potential.size(); i++) {
        if (queue.empty()) {
            queue.push_front(i);
        } else {
            while (!queue.empty() && potential[i] > potential[queue.front()]) {
                queue.pop_front();
                consecutiveWins++;
                if (consecutiveWins == k) {
                    // Adjust to return one less potential
                    return potential[i] - 1;
                }
            }
            queue.push_front(i);
        }
    }
    
    return winnerPotential;
}

int main() {
    vector<int> potential = {1, 3, 2, 4, 5};
    long int k = 2;
    
    int winnerPotential = getPotentialOfWinner(potential, k);
    cout << "Potential of the winning player: " << winnerPotential << endl;
    
    return 0;
}
