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

        // Added rizz_print function
        void rizz_print(const std::string& message);
    };

} // namespace GenZLib

#endif // GEN_Z_LIB_HPP
