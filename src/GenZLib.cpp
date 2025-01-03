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

} // namespace GenZLib
