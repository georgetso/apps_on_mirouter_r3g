#include <sstream>

namespace std {
        template<typename T>
        string to_string(const T& t) {
                ostringstream ss;
                ss << t;
                return ss.str();
        }
}
