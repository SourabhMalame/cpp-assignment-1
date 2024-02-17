#include <iostream>
#include <string>
#include <vector>

struct Book {
    int bookNo;
    std::string bookName;
    float bookPrice;
};

int main() {
    std::vector<Book> books;  // Vector to store books

    while (true) {
        // Display menu
        std::cout << "\nMenu:\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Display Book\n";
        std::cout << "3. Search Book\n";
        std::cout << "4. Display all books\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // Add Book
                Book newBook;
                std::cout << "Enter Book No: ";
                std::cin >> newBook.bookNo;
                std::cin.ignore();  // Clear the buffer
                std::cout << "Enter Book Name: ";
                std::getline(std::cin, newBook.bookName);
                std::cout << "Enter Book Price: Rs. ";
                std::cin >> newBook.bookPrice;
                books.push_back(newBook);
                std::cout << "Book added successfully!\n";
                break;
            }
            case 2: {
                // Display Book
                int bookNo;
                std::cout << "Enter Book No to display: ";
                std::cin >> bookNo;

                bool found = false;
                for (const Book& book : books) {
                    if (book.bookNo == bookNo) {
                        std::cout << "Book No: " << book.bookNo << "\n";
                        std::cout << "Book Name: " << book.bookName << "\n";
                        std::cout << "Book Price: Rs. " << book.bookPrice << "\n";
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    std::cout << "Book not found.\n";
                }
                break;
            }
            case 3: {
                // Search Book
                std::string searchName;
                std::cout << "Enter Book Name to search: ";
                std::cin.ignore();  // Clear the buffer
                std::getline(std::cin, searchName);

                bool found = false;
                for (const Book& book : books) {
                    if (book.bookName == searchName) {
                        std::cout << "Book No: " << book.bookNo << "\n";
                        std::cout << "Book Name: " << book.bookName << "\n";
                        std::cout << "Book Price: Rs. " << book.bookPrice << "\n";
                        found = true;
                    }
                }

                if (!found) {
                    std::cout << "Book not found.\n";
                }
                break;
            }
            case 4: {
                // Display all books
                if (books.empty()) {
                    std::cout << "No books to display.\n";
                } else {
                    std::cout << "All Books:\n";
                    for (const Book& book : books) {
                        std::cout << "Book No: " << book.bookNo << "\n";
                        std::cout << "Book Name: " << book.bookName << "\n";
                        std::cout << "Book Price: Rs. " << book.bookPrice << "\n";
                        std::cout << "-------------------------\n";
                    }
                }
                break;
            }
            case 5:
                // Exit the program
                std::cout << "Exiting the program.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}







