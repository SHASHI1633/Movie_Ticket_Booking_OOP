#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

// Class to represent a movie
class Movie {
public:
    string name;
    vector<string> showTimings;

    Movie(string name, vector<string> showTimings) {
        this->name = name;
        this->showTimings = showTimings;
    }
};

// Class to represent a ticket
class Ticket {
public:
    string customerName;
    string phoneNumber;
    int seatNumber;

    Ticket(string customerName, string phoneNumber, int seatNumber) {
        this->customerName = customerName;
        this->phoneNumber = phoneNumber;
        this->seatNumber = seatNumber;
    }
};

// Comparator function for sorting movies by name
bool compareMoviesByName(const Movie* a, const Movie* b) {
    return a->name < b->name;
}

// Class to represent a node in a linked list
class Node {
public:
    Ticket* ticket;
    Node* next;

    Node(Ticket* ticket) {
        this->ticket = ticket;
        this->next = nullptr;
    }
};

// Class to represent a linked list of tickets
class TicketList {
private:
    Node* head;

public:
    TicketList() {
        head = nullptr;
    }

    void addTicket(Ticket* ticket) {
        Node* newNode = new Node(ticket);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    Node* getHead() {
        return head;
    }
};

// Class to represent the movie ticket booking system
class MovieTicketBookingSystem {
private:
    vector<Movie*> movies;
    queue<Ticket*> ticketQueue;

public:
    // Add a movie to the system
    void addMovie(Movie* movie) {
        movies.push_back(movie);
    }

    // Sort movies by name
    void sortMoviesByName() {
        sort(movies.begin(), movies.end(), compareMoviesByName);
    }

    // Get all movies in the system
    vector<Movie*> getMovies() {
        return movies;
    }

    // Book a ticket
    void bookTicket(string customerName, string phoneNumber, int seatNumber) {
        Ticket* ticket = new Ticket(customerName, phoneNumber, seatNumber);
        ticketQueue.push(ticket);
    }

    // Display all tickets booked
    void displayTickets() {
        cout << "\nTickets Booked:\n";
        while (!ticketQueue.empty()) {
            Ticket* ticket = ticketQueue.front();
            cout << "Customer Name: " << ticket->customerName << ", Phone Number: " << ticket->phoneNumber << ", Seat Number: " << ticket->seatNumber << endl;
            ticketQueue.pop();
        }
    }
};

int main() {
    // Creating movies
    Movie* movie1 = new Movie("Movie1", {"10:00", "13:00", "16:00"});
    Movie* movie2 = new Movie("Movie2", {"11:00", "14:00", "17:00"});
    Movie* movie3 = new Movie("Movie3", {"12:00", "15:00", "18:00"});

    // Creating the ticket booking system
    MovieTicketBookingSystem ticketBookingSystem;

    // Adding movies to the system
    ticketBookingSystem.addMovie(movie1);
    ticketBookingSystem.addMovie(movie2);
    ticketBookingSystem.addMovie(movie3);

    // Sorting movies by name
    ticketBookingSystem.sortMoviesByName();

    int choice;
    string customerName, phoneNumber;
    int seatNumber;
    do {
        cout << "\n----------------------------------";
        cout << "\n\t\t\t BOX OFFICE";
        cout << "\n----------------------------------";
        cout << "\n\t\t\t Welcome Customer!";
        cout << "\n\n\t\t\t <1> Pick a Movie and Timing";
        cout << "\n\t\t\t <2> Display Tickets";
        cout << "\n\t\t\t <3> Exit\n\n";
        cout << "\t\t\t Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "\nAvailable Movies:\n";
                int index = 1;
                for (Movie* movie : ticketBookingSystem.getMovies()) {
                    cout << "\n" << index << ". " << movie->name << endl;
                    cout << "   Show Timings:\n";
                    int timingIndex = 1;
                    for (string timing : movie->showTimings) {
                        cout << "   " << timingIndex << ". " << timing << endl;
                        timingIndex++;
                    }
                    index++;
                }

                int movieChoice, timingChoice;
                cout << "\nEnter the movie number: ";
                cin >> movieChoice;
                cout << "Enter the timing number: ";
                cin >> timingChoice;

                cout << "\nEnter your name: ";
                cin >> customerName;
                cout << "Enter your phone number: ";
                cin >> phoneNumber;
                cout << "Enter the seat number you want to book: ";
                cin >> seatNumber;

                ticketBookingSystem.bookTicket(customerName, phoneNumber, seatNumber);
                cout << "\nTicket booked successfully!\n";
                break;
            }
            case 2:
                ticketBookingSystem.displayTickets();
                break;
            case 3:
                cout << "\nTHANK YOU AND VISIT AGAIN!\n\n";
                break;
            default:
                cout << "\nInvalid choice. Please try again.\n";
                break;
        }
    } while (choice != 3);

    return 0;
}
