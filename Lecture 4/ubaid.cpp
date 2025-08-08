#include <iostream>
using namespace std;

int main() {
    int pages[100], n, frames[10], capacity, i, j, k;
    int pageFaults = 0;
    bool found;

    // Take input
    cout << "Enter number of pages: ";
    cin >> n;

    cout << "Enter the page numbers:\n";
    for (i = 0; i < n; i++) {
        cin >> pages[i];
    }

    cout << "Enter number of frames: ";
    cin >> capacity;

    // Initialize frames to -1 (empty)
    for (i = 0; i < capacity; i++) {
        frames[i] = -1;
    }

    int pos = 0; // To keep track of which frame to replace (FIFO)

    // Go through each page
    for (i = 0; i < n; i++) {
        found = false;

        // Check if page is already in frames
        for (j = 0; j < capacity; j++) {
            if (frames[j] == pages[i]) {
                found = true;
                break;
            }
        }

        // If page not found, it's a page fault
        if (!found) {
            frames[pos] = pages[i]; // Replace using FIFO
            pos = (pos + 1) % capacity; // Move to next frame
            pageFaults++;
        }

        // Print current frame status
        cout << "Page " << pages[i] << " -> [ ";
        for (k = 0; k < capacity; k++) {
            if (frames[k] == -1)
                cout << "_ ";
            else
                cout << frames[k] << " ";
        }
        cout << "]\n";
    }

    // Final output
    cout << "\nTotal Page Faults = " << pageFaults << endl;

    return 0;
}