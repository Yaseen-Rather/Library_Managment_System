#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include "books.h"

class Librarian{
      private:
      Books* head;

      public:
            Librarian();

            //function of Librarian
            void add_book(const std::string& n, const std::string& a, const std::string& p, int copies);
            void view_books() const;
            void delete_books(const std::string& n);
            void search_books(const std::string& n);
            void last_issued_book() const;
};
#endif //LIBRARIAN_H
