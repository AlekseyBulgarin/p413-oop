#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
private:
    string author;
    string title;
    string publisher;
    int year;
    int pages;

public:
    explicit Book(string a, string t, string p, int y, int pg) 
        : author(a), title(t), publisher(p), year(y), pages(pg) {}

    string getAuthor() const { return author; }
    string getTitle() const { return title; }
    string getPublisher() const { return publisher; }
    int getYear() const { return year; }
    int getPages() const { return pages; }

    void printInfo() const {
        cout << "Автор: " << author 
             << "\nНазвание: " << title 
             << "\nИздательство: " << publisher 
             << "\nГод: " << year 
             << "\nСтраниц: " << pages << "\n\n";
    }
};

void printBooksByAuthor(const vector<Book>& books, const string& targetAuthor) {
    cout << "Книги автора " << targetAuthor << ":\n";
    for (const auto& book : books) {
        if (book.getAuthor() == targetAuthor) {
            book.printInfo();
        }
    }
}

void printBooksByPublisher(const vector<Book>& books, const string& targetPublisher) {
    cout << "Книги издательства " << targetPublisher << ":\n";
    for (const auto& book : books) {
        if (book.getPublisher() == targetPublisher) {
            book.printInfo();
        }
    }
}

void printBooksAfterYear(const vector<Book>& books, int targetYear) {
    cout << "Книги после " << targetYear << " года:\n";
    for (const auto& book : books) {
        if (book.getYear() > targetYear) {
            book.printInfo();
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    vector<Book> books = {
        Book("Джордж Оруэлл", "1984", "Эксмо", 1949, 320),
        Book("Джейн Остен", "Гордость и предубеждение", "Азбука", 1813, 272),
        Book("Федор Достоевский", "Преступление и наказание", "АСТ", 1866, 544),
        Book("Джордж Оруэлл", "Скотный двор", "Эксмо", 1945, 144),
        Book("Федор Достоевский", "Идиот", "АСТ", 1869, 640)
    };

    printBooksByAuthor(books, "Джордж Оруэлл");
    printBooksByPublisher(books, "АСТ");
    printBooksAfterYear(books, 1860);

    return 0;
}
