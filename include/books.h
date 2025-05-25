#ifndef BOOKS_H
#define BOOKS_H
#include <string>

//My Structure for books, using linked list;
class Books{
    private:
        std::string name;
        std::string author;
        std::string publisher;
        int copies;

    public:
        Books* next;

    //Constructor
    Books(const std::string& name, const std::string& author, const std::string& publisher,const  int copies)
    : name(name), author(author), publisher(publisher), copies(copies), next(nullptr){}

    //Getters
    std::string getName() const{return name;}
    std::string getAuthor() const{return author;}
    std::string getPublisher() const{return publisher;}
    int getCopies() const{return copies;}
};

#endif //BOOKS_H
