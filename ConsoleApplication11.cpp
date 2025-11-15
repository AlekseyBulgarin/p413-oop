#include <iostream>
#include <vector>

using namespace std;

class Book {
private:
    string Author;
    string Title;
    string Publisher;
    int year;
    int pages;

    
public:
    explicit Book(string Author, string Title, string Publisher, int year, int pages){}



    void printBookOfAuthor() {
        for (int i; i < ; i++) {

        }
    }

    void printBookOfPublisher() {
        for (int i; i < ; i++) {

        }
    }

    void printBookOfYear() {
        for (int i; i < ; i++) {

        }
    }
};



int main()
{
    setlocale(LC_ALL, "RU");

    vector <string> Author = { "Джордж Оруэлл", "Джейн Остен", "Федор Достоевский" };
    vector <string> Title = { "1984", "Гордость и предубеждение", "Преступление и наказание" };
    vector <string> Publisher = { "Эксмо", "Азбука", "АСТ" };
    vector <int> year = { 1949, 1813, 1866 };
    vector <int> pages = { 320, 272, 544 };
    

    Book book();

    printBookOfAuthor()
}
