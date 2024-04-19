#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    int calculateTotalScore(int n) {
        int arr[n][5];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> arr[i][j];
            }
        }

        int sum;
        vector<int> sumf; // Declare vector to store total scores

        for (int i = 0; i < n; i++) {
            sum = 0; // Reset sum for each student
            for (int j = 0; j < 5; j++) {
                sum += arr[i][j]; // Calculate total score for each student
            }
            sumf.push_back(sum); // Store total score in the vector
        }

        int kristen_score = sumf[0]; // Kristen's score is at index 0
        int count = 0;

        for (int i = 1; i < n; i++) { // Start from i = 1 to compare with Kristen's score
            if (sumf[i] > kristen_score) {
                count++;
            }
        }

        cout << count;

        return count;
    }
};

int main() {
    Student kristen;

    int n;
    cin >> n;
    kristen.calculateTotalScore(n);

    return 0;
}
