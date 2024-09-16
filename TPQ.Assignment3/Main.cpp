#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	struct Book
	{
		string Title;
		string Author;
		int Year = 0;
		int Pages = 0;
	};


	const int NUM_BOOKS = 4;
	Book books[NUM_BOOKS] =
	{
		{ "Carrie", "Stephen King", 1979, 438},
		{"Harry Potter", "J. K. Rowling", 1989, 320},
		{"Dune", "Frank Herbert", 1951, 900},
		{"The Hobbit", "J. R. R. Tolkien", 1949, 500}
	};
	
	for (int i = 0; i < NUM_BOOKS; i++)
	{
		cout << (i +1) << ". " << "Title: " << books[i].Title << "\n"
			<< "Author: " << books[i].Author << "\n"
			<< "Year Published: " << books[i].Year << "\n" 
			<< "Pages: " << books[i].Pages << "\n" << "\n";
		
	}
	int bookID;
	cout << "Enter the ID of the book you would like to update (1-4): "; 
	cin >> bookID;
		if (bookID < 1 || bookID > NUM_BOOKS)
		{
			cout << "Invalid book ID";
			return 1;
		}

		//indexing
		int index = bookID - 1;

		cout << "Selected Book Details:\n"
			 << "Title: " << books[index].Title << "\n"
			 << "Current Author: " << books[index].Author << "\n"
			 << "Current Year Published: " << books[index].Year << "\n"
			 << "Current Number of Pages: " << books[index].Pages << "\n" << "\n";

	string updateAuthor;
	int updateYear;
	int updatePages;

	cout << "Enter new author: ";
	cin >> updateAuthor;

	cout << "Enter new year published: ";
	cin >> updateYear;

	cout << "Enter new number of pages: ";
	cin >> updatePages;

	char saveChanges;
	cout << "Save these Changes?: ";
	cin >> saveChanges;
	
	//get y or n anwser from user
	if (saveChanges == 'y' || saveChanges == 'Y')
	{		
		books[index].Author = updateAuthor;
		books[index].Year = updateYear;
		books[index].Pages = updatePages;
		
	}
	else {
		
		cout << "Changes not saved.\n";
	}	

	cout << "\n" << (index + 1) << ". " << "Title: " << books[index].Title << "\n"
		<< "Author: " << books[index].Author << "\n"
		<< "Year Published: " << books[index].Year << "\n"
		<< "Pages: " << books[index].Pages << "\n" << "\n";	


	(void)_getch();
	return 0;
}