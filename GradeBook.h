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
    void determinClassAverage() const;
    void inputGrades();
    void displayGradeReport() const;
    int maximum(int, int, int) const;
private:
    std::string courseName;
    std::string teacherName;
    unsigned int aCount;
    unsigned int bCount;
    unsigned int cCount;
    unsigned int dCount;
    unsigned int fCount;
    int maximumGrade;
};