#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "books.h>

class IssuedBooks {
     private:
          Books* issuedHead;
          int date;

class student {
     private:
          int studentID;
          std::string studentName;
          books* issuedBooksHead;
          static nextID;

     public:
          //Constructor;
          student(std::string name);

          //getters;
          int getStudentID(); const;
          std::string getStudentName() const;


#endif //STUDENT_H
