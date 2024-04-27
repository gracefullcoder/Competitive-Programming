#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Location {
protected:
    string name;

public:
    Location(string name) : name(name) {}

    virtual void displayInfo() const = 0;
};

class City : public Location {
public:
    City(string name) : Location(name) {}

    void displayInfo() const override {
        cout << "City: " << name << endl;
    }
};

class Theater : public Location {
private:
    map<int, string> screens;

public:
    Theater(string name) : Location(name) {}

    void addScreen(int screenNumber, string timing) {
        screens[screenNumber] = timing;
    }

    void displayInfo() const override {
        cout << "Theater: " << name << endl;
    }

    friend class BoxOfficeCollection;
};

class Screen : public Location {
private:
    int screenNumber;

public:
    Screen(string name, int screenNumber) : Location(name), screenNumber(screenNumber) {}

    void displayInfo() const override {
        cout << "Screen " << screenNumber << " (" << name << ")" << endl;
    }

    friend class BoxOfficeCollection;
};

class Movie : public Location {
public:
    Movie(string name) : Location(name) {}

    void displayInfo() const override {
        cout << "Movie: " << name << endl;
    }

    friend class BoxOfficeCollection;
};

class Booking {
private:
    Movie movie;
    Theater theater;
    Screen screen;
    int numTickets;

public:
    Booking(const Movie& movie, const Theater& theater, const Screen& screen, int numTickets)
        : movie(movie), theater(theater), screen(screen), numTickets(numTickets) {}

    void displayBookingDetails() const {
        movie.displayInfo();
        theater.displayInfo();
        screen.displayInfo();
        cout << "Number of Tickets: " << numTickets << endl;
    }

    friend class BoxOfficeCollection;
};

class BoxOfficeCollection {
private:
    vector<Theater> theaters;

public:
    void addTheater(const Theater& theater) {
        theaters.push_back(theater);
    }

    double calculateTotalCollection() const {
        double totalCollection = 0;
        for (const Theater& theater : theaters) {
            for (const auto& screen : theater.screens) {
                // Assuming ticket price is $10
                totalCollection += 10 * screen.second.size(); // 10 is the ticket price
            }
        }
        return totalCollection;
    }
};

int main() {
    City city("City 1");

    Theater inox("Inox");
    inox.addScreen(1, "10.00-1.00");
    inox.addScreen(2, "1.10-4.10");
    inox.addScreen(3, "4.20-7.20");
    inox.addScreen(4, "7.30-10.30");

    Screen screen1("Screen 1", 1);
    Screen screen2("Screen 2", 2);

    Movie movie1("Movie 1");
    Movie movie2("Movie 2");

    Booking booking1(movie1, inox, screen1, 2);
    Booking booking2(movie2, inox, screen2, 3);

    city.displayInfo();
    booking1.displayBookingDetails();
    booking2.displayBookingDetails();

    BoxOfficeCollection boxOffice;
    boxOffice.addTheater(inox);

    cout << "Total Collection: $" << boxOffice.calculateTotalCollection() << endl;

    return 0;
}
