/*
In this code, we will check whether primitive values crosses the limit or not.
We will check it using the following details of a student:
    * Application ID (long long)
    * Gender (char)
    * Batch (short)
    * Semester (short)
    * GPA (double)
*/

#include <iostream>

int main()
{
    unsigned int application_id{1234500000};
    char gender{'M'};
    short int batch{2026};
    short int semester{2};
    float gpa{8.86};

    std::cout << "Application ID: " << application_id << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Which batch? " << batch << std::endl;
    std::cout << "Semester: " << semester << std::endl;
    std::cout << "what was your GPA in the previous semester? " << gpa << std::endl;
    return 0;
}