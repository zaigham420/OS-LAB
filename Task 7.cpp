#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;

int main() {
 //ofstream file("ghost.txt");
    FILE* file = fopen("ghost.txt", "r");

    if (file == nullptr)
        perror("Failed to open file");

    return 0;
}