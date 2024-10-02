#include <iostream>
#include <string>

class Car {
private:
    std::string color;
    std::string model;
    std::string country;
    std::string manufacturer;
    double price;
    int year;

public:
    Car(const std::string& color, const std::string& model, const std::string& country,
        const std::string& manufacturer, double price, int year)
        : color(color), model(model), country(country), manufacturer(manufacturer),
        price(price), year(year) {}

    Car() : price(0.0), year(0) {}

    std::string getColor() const { return color; }
    std::string getModel() const { return model; }
    std::string getCountry() const { return country; }
    std::string getManufacturer() const { return manufacturer; }
    double getPrice() const { return price; }
    int getYear() const { return year; }

    void setColor(const std::string& color) { this->color = color; }
    void setModel(const std::string& model) { this->model = model; }
    void setCountry(const std::string& country) { this->country = country; }
    void setManufacturer(const std::string& manufacturer) { this->manufacturer = manufacturer; }
    void setPrice(double price) { this->price = price; }
    void setYear(int year) { this->year = year; }

    void input() {
        std::cout << "Enter car color: ";
        std::getline(std::cin, color);
        std::cout << "Enter car model: ";
        std::getline(std::cin, model);
        std::cout << "Enter country of manufacture: ";
        std::getline(std::cin, country);
        std::cout << "Enter car manufacturer: ";
        std::getline(std::cin, manufacturer);
        std::cout << "Enter car price: ";
        std::cin >> price;
        std::cout << "Enter year of manufacture: ";
        std::cin >> year;
        std::cin.ignore();
    }

    void output() const {
        std::cout << "Car details:\n";
        std::cout << "Color: " << color << "\n";
        std::cout << "Model: " << model << "\n";
        std::cout << "Country of manufacture: " << country << "\n";
        std::cout << "Manufacturer: " << manufacturer << "\n";
        std::cout << "Price: $" << price << "\n";
        std::cout << "Year: " << year << "\n";
    }
};

int main() {
    Car car;
    car.input();
    car.output();

    return 0;
}
