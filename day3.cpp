// programming for problem solving 1
// day3.cpp
//textbook
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
/// @brief 
int main() 
{
    sql::mysql::MySQL_Driver *driver;
    sql::Connection *con;
    sql::Statement *stmt;
    sql::ResultSet *res;

    driver = sql::mysql::get_mysql_driver_instance();
    con = driver->connect("tcp://127.0.0.1:3306", "your_user", "your_password");
    con->setSchema("your_db_name");

    stmt = con->createStatement();
    res = stmt->executeQuery("SELECT * FROM admin");

    while (res->next()) {
        std::cout << "UserID: " << res->getInt("Userid")
                  << ", Name: " << res->getString("name")
                  << ", Password: " << res->getString("password") << std::endl;
    }
    printf ("welcome to batman courier");
    std::string password;
    int a;
    printf ("Enter your userid");
    scanf ("%d", &a);
    printf ("please enter your password: ");
    std::cin >> password;
    
        delete res;
    delete stmt;
    delete con;
    return 0;
}