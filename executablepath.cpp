#include <iostream>
#include <filesystem>

int main() {
    // Get the folder path of the current executable
    std::filesystem::path executablePath = std::filesystem::current_path();

    // Output the folder path
    std::cout << "Executable folder path: " << executablePath.parent_path() << std::endl;

    return 0;
}
