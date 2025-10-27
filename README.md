# Qt E-Commerce Platform (Shopee-Inspired)

[![Qt](https://img.shields.io/badge/Qt-5.x-green.svg)](https://www.qt.io/)
[![C++](https://img.shields.io/badge/C++-11-blue.svg)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-Academic-yellow.svg)]()

> A sophisticated e-commerce platform developed during my **sophomore year (大二)** as an Advanced Object-Oriented Programming (AOOP) final project. This application demonstrates professional software engineering practices, design patterns, and GUI development using Qt Framework.

## 📋 Table of Contents
- [Overview](#overview)
- [Key Features](#key-features)
- [Technical Architecture](#technical-architecture)
- [Technologies Used](#technologies-used)
- [Project Structure](#project-structure)
- [Installation & Setup](#installation--setup)
- [Usage](#usage)
- [Object-Oriented Design](#object-oriented-design)
- [Database Schema](#database-schema)
- [Future Enhancements](#future-enhancements)
- [Academic Context](#academic-context)

## 🎯 Overview

This project is a fully functional e-commerce platform inspired by Shopee, built entirely in C++ with Qt Framework. It implements a complete buyer-seller ecosystem with product management, user authentication, and transaction capabilities. The application showcases advanced OOP concepts including inheritance, polymorphism, encapsulation, and design patterns.

**Development Period:** Sophomore Year (大二)  
**Course:** Advanced Object-Oriented Programming (AOOP)  
**Framework:** Qt 5.x with Qt Widgets and Qt SQL

## ✨ Key Features

### User Management
- **Dual-role Authentication System**: Users can function as both buyers and sellers
- **Secure Account Creation**: Password validation and duplicate account prevention
- **Profile Management**: Customizable user profiles with avatar support
- **Session Management**: Persistent login state with secure logout

### Seller Features
- **Product Upload**: Multi-field product creation with image support
- **Inventory Management**: Real-time stock tracking and updates
- **Pricing Control**: Flexible pricing with slider-based UI
- **Product Categorization**: Type-based organization system
- **Sales Analytics**: Track total sales and product performance

### Buyer Features
- **Product Browsing**: Interactive product catalog with filtering
- **Product Search**: Category and type-based search functionality
- **Purchase System**: Integrated buying mechanism with inventory validation
- **Product Details**: Comprehensive product information display
- **User Wallet**: Virtual deposit system for transactions

### Technical Features
- **MySQL Database Integration**: Persistent data storage with two-database architecture
- **Real-time Updates**: Dynamic UI updates based on database changes
- **Image Handling**: Product image upload and display capabilities
- **Date/Time Tracking**: Automatic timestamp for product uploads
- **Responsive UI**: Qt-based modern interface with multiple pages

## 🏗️ Technical Architecture

### Design Patterns Implemented
1. **Inheritance Hierarchy**: `Boss` → `Account` → `Buyer` + `Seller`
2. **Composition Pattern**: `MainWindow` contains multiple specialized widgets
3. **Model-View Architecture**: Separation of business logic and presentation
4. **Factory Pattern**: Dynamic product creation through seller interface
5. **Observer Pattern**: UI updates based on data model changes

### Class Hierarchy
```
Boss (Base Class)
├── Account
│   ├── Buyer
│   └── Seller
│       └── Product Management
├── MainWindow (Qt GUI)
└── Product
    └── ProductButton (UI Component)
```

## 💻 Technologies Used

| Technology | Purpose |
|------------|---------|
| **C++11** | Core programming language |
| **Qt Framework 5.x** | GUI development and application framework |
| **Qt Widgets** | User interface components |
| **Qt SQL** | Database connectivity and operations |
| **MySQL** | Relational database management |
| **Qt Designer** | UI design and layout |
| **qmake** | Build automation |

## 📁 Project Structure

```
SHOPEE_QT/
├── src/                    # Source files (.cpp)
│   ├── main.cpp           # Application entry point
│   ├── mainwindow.cpp     # Main window implementation
│   ├── account.cpp        # Account management logic
│   ├── buyer.cpp          # Buyer functionality
│   ├── seller.cpp         # Seller functionality
│   ├── product.cpp        # Product data model
│   ├── productbutton.cpp  # Product UI component
│   ├── boss.cpp           # Base class implementation
│   └── uploadproduct.cpp  # Product upload logic
│
├── include/               # Header files (.h)
│   ├── mainwindow.h      # Main window declarations
│   ├── account.h         # Account class interface
│   ├── account_procession.h
│   ├── buyer.h           # Buyer class interface
│   ├── seller.h          # Seller class interface
│   ├── product.h         # Product class interface
│   ├── productbutton.h   # Product button widget
│   ├── boss.h            # Base class declarations
│   └── uploadproduct.h   # Upload functionality
│
├── ui/                   # Qt Designer UI files
│   └── mainwindow.ui     # Main interface design
│
├── assets/               # Application resources
│   └── product_Images/   # Product image storage
│
├── docs/                 # Documentation
│   └── report.pdf        # Project report (Chinese)
│
├── AOOP_FinalProject.pro # Qt project configuration
└── README.md            # This file
```

## 🚀 Installation & Setup

### Prerequisites
- Qt 5.x or higher
- Qt Creator (recommended) or any C++ IDE
- MySQL Server 5.7+
- C++11 compatible compiler (GCC, MSVC, or Clang)

### Build Instructions

1. **Clone the repository**
```bash
git clone <repository-url>
cd SHOPEE_QT
```

2. **Configure MySQL Database**
   - Create two databases: `account_db` and product database
   - Update database credentials in `src/mainwindow.cpp`:
   ```cpp
   database.setHostName("your-host");
   database.setUserName("your-username");
   database.setPassword("your-password");
   ```

3. **Open in Qt Creator**
   - Open `AOOP_FinalProject.pro`
   - Configure Qt Kit (Desktop Qt 5.x)

4. **Build & Run**
   - Press `Ctrl+R` or click the Run button
   - Application will compile and launch

### Alternative Build (Command Line)
```bash
qmake AOOP_FinalProject.pro
make
./AOOP_FinalProject  # or AOOP_FinalProject.exe on Windows
```

## 📖 Usage

### First-Time Setup
1. Launch the application
2. Create an account via "Sign Up" page
3. Login with your credentials

### As a Seller
1. Navigate to Seller Page from the menu
2. Click "Upload Product"
3. Fill in product details (name, price, inventory, description, type)
4. Upload product image (optional)
5. Submit to add product to marketplace

### As a Buyer
1. Browse products on the home page
2. Use category filters to find specific items
3. Click on products to view details
4. Press "Buy" to purchase (requires sufficient deposit)

## 🎓 Object-Oriented Design

### Core OOP Principles Demonstrated

#### 1. **Encapsulation**
- Private data members with public accessor methods
- Data hiding in `Account`, `Product`, and `Seller` classes
- Protected member variables in inheritance hierarchy

#### 2. **Inheritance**
```cpp
class Boss { /* Base functionality */ };
class Account : public Boss { /* User data */ };
class Buyer { /* Buyer-specific features */ };
class Seller { /* Seller-specific features */ };
```

#### 3. **Polymorphism**
- Virtual functions for extensible behavior
- Dynamic object creation based on user roles
- Interface-based design for flexibility

#### 4. **Abstraction**
- `Boss` class provides common utilities (Timer, DateTime)
- `Account` abstracts user authentication
- `Product` encapsulates product data model

### Key Classes

#### `Account` Class
```cpp
class Account {
    QString Accountname;
    QString Password;
    unsigned long long deposit;
    Seller *seller;
    Buyer *buyer;
    bool sellerOpened;
};
```

#### `Product` Class
```cpp
class Product {
    int product_id;
    QString ProductName;
    long int price;
    int inventory;
    QString Seller_id;
    QString description;
    QString imagepath;
    int totalSalesNum;
};
```

## 🗄️ Database Schema

### Account Database (`account_db`)
- User credentials and authentication
- Profile information
- Wallet/deposit tracking

### Product Database
- Product catalog
- Seller information linkage
- Inventory management
- Sales statistics

## 🔮 Future Enhancements

- [ ] Shopping cart functionality
- [ ] Order history and tracking
- [ ] Product rating and review system
- [ ] Advanced search with filters (price range, ratings)
- [ ] Payment gateway integration
- [ ] Real-time notifications
- [ ] Admin dashboard for platform management
- [ ] Multi-language support
- [ ] Mobile responsive design
- [ ] RESTful API for web integration

## 📚 Academic Context

**Institution:** [Your University]  
**Year:** Sophomore (大二)  
**Course:** Advanced Object-Oriented Programming (AOOP)  
**Project Type:** Final Project  
**Team:** [Individual/Group - specify]

### Learning Outcomes
This project demonstrates proficiency in:
- Advanced C++ programming and STL
- Object-oriented design and implementation
- GUI development with Qt Framework
- Database integration and SQL operations
- Software architecture and design patterns
- Version control and project management
- Requirements analysis and system design

### Skills Developed
- **Programming:** C++11, Qt Framework, SQL
- **Software Engineering:** OOP, Design Patterns, MVC Architecture
- **Database:** MySQL, Qt SQL Module, Schema Design
- **Tools:** Qt Creator, qmake, Git
- **Problem Solving:** Complex system design, debugging, optimization

---

## 📄 License

This project was developed for academic purposes. Please contact for usage permissions.

## 📞 Contact

For questions or collaboration opportunities, please reach out:
- **Project Repository:** [GitHub Link]
- **Email:** [Your Email]
- **LinkedIn:** [Your Profile]

---

*Developed with ❤️ using Qt Framework during Sophomore Year (大二)*
