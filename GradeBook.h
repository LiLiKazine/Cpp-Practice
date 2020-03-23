#include<iostream>
#include<string>

class GradeBook {
    public:
    explicit GradeBook(std::string name): courseName(name) { }

    void setCourseName(std::string name) {
        courseName = name;
    }

    std::string getCourseName() const {
        return courseName;
    }

    void displayMEssage() const {
        std::cout << "Welcome to the grade book for\n"<<getCourseName()<<"!"<<std::endl;
    }

    private:
    std::string courseName;
};