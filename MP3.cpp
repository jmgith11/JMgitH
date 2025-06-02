#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    const int gridSize = 20; // Radar grid size (20x20)
    const int rangeLimit = 10; // Maximum tracking range in 10 km

    // Print top border
    std::cout << "  +";
    for (int i = 0; i < gridSize; ++i) std::cout << "---";
    std::cout << "+\n";

    // Loop through each row in the grid
    for (int y = 0; y < gridSize; ++y) {
        std::cout << " |"; // Left border
        for (int x = 0; x < gridSize; ++x) {
            // Calculate the distance from the center (radar origin)
            int distance = static_cast<int>(std::sqrt((x - 5) * (x - 5) + (y - 5) * (y - 5)));

            // Simulate tracking: if within range, mark with 'O', else 'X'
            if (distance <= rangeLimit) {
                std::cout << " O "; // Tracked area
            } else {
                std::cout << " X "; // Out of range
            }
        }
        std::cout << "| " << (y + 1) << "\n"; // Right border and row number
    }

    // Print bottom border
    std::cout << "  +";
    for (int i = 0; i < gridSize; ++i) std::cout << "---";
    std::cout << "+\n";
    std::cout << "    ";
    for (int i = 1; i <= gridSize; ++i) std::cout << " " << i << " "; // Column numbers
    std::cout << "\n";

    return 0;
}
