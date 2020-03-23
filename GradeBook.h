#include <string>

class GradeBook
{
public:
    explicit GradeBook(std::string);
    explicit GradeBook(std::string, std::string);
    void setCourseName(std::string);
    void setTeacherName(std::string);
    std::string getCourseName() const;
    void displayMessage() const;

private:
    std::string courseName;
    std::string teacherName;
};