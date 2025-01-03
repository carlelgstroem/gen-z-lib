#ifndef GEN_Z_LIB_HPP
#define GEN_Z_LIB_HPP

#include <string>

namespace GenZLib {

    class GenZ {
    public:
        GenZ();
        ~GenZ();

        // Reverses a string
        std::string reverseString(const std::string& input);
    };

} // namespace GenZLib

#endif // GEN_Z_LIB_HPP
