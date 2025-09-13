#ifndef EXCEPTFIGURE_H
#define EXCEPTFIGURE_H
#include <stdexcept>
#include <string>
class ExceptFigure : public std::domain_error
{
    std::string error_message{};
public:
    explicit ExceptFigure(const std::string& str);
    const char* what() const noexcept override;
};

#endif // EXCEPTFIGURE_H
