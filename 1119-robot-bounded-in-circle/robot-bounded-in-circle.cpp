#include <string>
using namespace std;

class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0; // Starting position
        int dir = 0; // Initial direction: 0 - North, 1 - East, 2 - South, 3 - West

        // Directions:
        // 0 - North (up), 1 - East (right), 2 - South (down), 3 - West (left)
        int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        for (char instruction : instructions) {
            if (instruction == 'G') {
                x += directions[dir][0]; // Move in the current direction
                y += directions[dir][1];
            } else if (instruction == 'L') {
                dir = (dir + 3) % 4; // Change direction to the left
            } else if (instruction == 'R') {
                dir = (dir + 1) % 4; // Change direction to the right
            }
        }

        // If after one cycle, the robot is back at the starting point or facing a different direction, it will return to the starting point.
        // If after one cycle, the robot is not at the starting point and still facing the same direction, it will eventually move away from the starting point.
        return (x == 0 && y == 0) || dir != 0;
    }
};
