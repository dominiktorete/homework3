#include "exceptfigure.h"

ExceptFigure::ExceptFigure(const std::string& str) : std::domain_error(str), error_message(str) {}
const char* ExceptFigure::what() const noexcept{
    return error_message.c_str();
}
