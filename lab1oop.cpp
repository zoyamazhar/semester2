#include<iostream>
using namespace std;
//STUDENT RECORD SYSTEM-----------------------------------------------task1 
//class student {
//	public:
//	string name;
//	int rollNumber;
//	float marks;
//	public:
//	void getdata(){
//		cout<<"enter name";
//		cin>>name;
//		cout<<"enter roll number";
//		cin>>rollNumber;
//		cout<<"enter marks";
//		cin>>marks;
//	}
//	void displaydata(){
//		cout<<"name of student is = "<<name<<endl;
//		cout<<"roll number of student is = "<<rollNumber<<endl;
//		cout<<"marks of student is = "<<marks<<endl;
//	}
//};
//int main(){
//	student std;
//	std.getdata();
//	std.displaydata();
//	return 0;
//}

//AREA AND PERIMETER OF RECTANGLE------------------------------------------------task2
//class rectangle{
//	public:
//	int length;
//	int width;
//	public:
//	void setDimensions(){
//		cout<<"enter length of rectangle";
//		cin>>length;
//		cout<<"enter width of rectangle";
//		cin>>width;
//	}
//	void area(){
//		cout<<"area of rectangle = "<<length*width<<endl;
//	}
//	void perimeter(){
//		cout<<"perimeter of rectangle = "<<2*(length+width)<<endl;
//	}
//};
//int main(){
//	rectangle rec;
//	rec.setDimensions();
//	rec.area();
//	rec.perimeter();
//	return 0;
//	
//}


//VOTER ELIGIBILITY-----------------------------------------------task3
//class Voter {
//public:
//    std::string name;
//    int age;
//
//    // Constructor to initialize the Voter object
//    Voter(std::string voterName, int voterAge) {
//        name = voterName;
//        age = voterAge;
//    }
//};
//
//// Function to check if the voter is eligible to vote
//void checkEligibility(const Voter& voter) {
//    if (voter.age > 18) {
//        std::cout << voter.name << " is eligible to vote." << std::endl;
//    } else {
//        std::cout << voter.name << " is not eligible to vote. You must be over 18." << std::endl;
//    }
//}
//
//int main() {
//    std::string name;
//    int age;
//
//    // Take input from the user
//    std::cout << "Enter your name: ";
//    std::getline(std::cin, name);
//    std::cout << "Enter your age: ";
//    std::cin >> age;
//
//    // Create a Voter object with user input
//    Voter voter(name, age);
//
//    // Check and display eligibility
//    checkEligibility(voter);
//
//    return 0;
//}


//TEMPRATURE CONVERTER----------------------------task4

//class Temperature {
//public:
//    double celsius; // Public data member to store temperature in Celsius
//
//    // Function to convert Celsius to Fahrenheit
//    double toFahrenheit() {
//        return (celsius * 9 / 5) + 32;
//    }
//
//    // Function to display the converted temperature
//    void displayFahrenheit() {
//        double fahrenheit = toFahrenheit();
//        std::cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << std::endl;
//    }
//};
//
//int main() {
//    Temperature temp;
//
//    // Take temperature input from the user in Celsius
//    std::cout << "Enter temperature in Celsius: ";
//    std::cin >> temp.celsius;
//
//    // Display the converted temperature in Fahrenheit
//    temp.displayFahrenheit();
//
//    return 0;
//}



//ENCAPSULATION------------------------------------------------------


#include <iostream>
#include <string>

class Product {
private:
    std::string name;  // Private member for product name
    double price;      // Private member for product price
    int quantity;      // Private member for product quantity

public:
    // Setter for name
    void setName(std::string n) {
        if (!n.empty()) {
            name = n;
        } else {
            std::cout << "Error: Name cannot be empty." << std::endl;
        }
    }

    // Setter for price
    void setPrice(double p) {
        if (p > 0) {
            price = p;
        } else {
            std::cout << "Error: Price must be greater than 0." << std::endl;
        }
    }

    // Setter for quantity
    void setQuantity(int q) {
        if (q >= 0) {
            quantity = q;
        } else {
            std::cout << "Error: Quantity cannot be negative." << std::endl;
        }
    }

    // Getter for name
    std::string getName() {
        return name;
    }

    // Getter for price
    double getPrice() {
        return price;
    }

    // Getter for quantity
    int getQuantity() {
        return quantity;
    }
};

int main() {
    Product p;
    std::string name;
    double price;
    int quantity;

    // Taking user input
    std::cout << "Enter product name: ";
    std::cin.ignore();  // Clear input buffer
    std::getline(std::cin, name);
    p.setName(name);

    std::cout << "Enter product price: ";
    std::cin >> price;
    p.setPrice(price);

    std::cout << "Enter product quantity: ";
    std::cin >> quantity;
    p.setQuantity(quantity);

    // Displaying product details
    std::cout << "\nProduct Details:" << std::endl;
    std::cout << "Name: " << p.getName() << std::endl;
    std::cout << "Price: $" << p.getPrice() << std::endl;
    std::cout << "Quantity: " << p.getQuantity() << std::endl;

    return 0;
}




