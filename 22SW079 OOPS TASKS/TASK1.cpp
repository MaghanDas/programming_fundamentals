

// 	Write a C++ program using Object Oriented Programming concepts to Input Votes for two candidates and 
// find winner of the Election based on the received votes

#include <iostream>
using namespace std;

class Candidate {
    private:
        string name;
        int votes;
    public:
        Candidate(string n) {
            name = n;
            votes = 0;
        }
        void addVote() {
            votes++;
        }
        int getVotes() {
            return votes;
        }
        string getName() {
            return name;
        }
};

int main() {
    Candidate candidate1("Candidate 1");
    Candidate candidate2("Candidate 2");

    int numVotes, vote;
    cout << "Enter the number of votes: ";
    cin >> numVotes;

    for (int i = 0; i < numVotes; i++) {
        cout << "Enter the vote (1 for " << candidate1.getName() << " and 2 for " << candidate2.getName() << "): ";
        cin >> vote;

        if (vote == 1) {
            candidate1.addVote();
        } else if (vote == 2) {
            candidate2.addVote();
        } else {
            cout << "Invalid vote!" << endl;
        }
    }

    if (candidate1.getVotes() > candidate2.getVotes()) {
        cout << candidate1.getName() << " wins with " << candidate1.getVotes() << " votes!" << endl;
    } else if (candidate2.getVotes() > candidate1.getVotes()) {
        cout << candidate2.getName() << " wins with " << candidate2.getVotes() << " votes!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}

