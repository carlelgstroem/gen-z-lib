#include "gen_z_lib/GenZLib.hpp"

namespace GenZLib {

    GenZ::GenZ() {
        // Constructor implementation 
    }

    GenZ::~GenZ() {
        // Destructor implementation 
    }

    std::string GenZ::reverseString(const std::string& input) {
        return std::string(input.rbegin(), input.rend());
    }

    void GenZ::rizz_print(const std::string& message) {
        // Using printf to print the message
        printf("%s\n", message.c_str());
    }

} // namespace GenZLib
