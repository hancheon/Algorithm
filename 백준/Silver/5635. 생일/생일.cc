#include <iostream>
#include <string>

struct Student
{
    std::string name;
    int day;
    int month;
    int year;
};

int main(void)
{
    struct Student birthday[100];
    int num;
    int max_d = 31, max_m = 12, max_y = 2010;
    int min_d = 1, min_m = 1, min_y = 1990;
    std::string max_n;
    std::string min_n;
    
    std::cin >> num;
    
    for (int i = 0; i < num; i++) {
        std::cin >> birthday[i].name;
        std::cin >> birthday[i].day;
        std::cin >> birthday[i].month;
        std::cin >> birthday[i].year;
        
        if (max_y > birthday[i].year) {
            max_y = birthday[i].year;
            max_n = birthday[i].name;
            max_m = birthday[i].month;
            max_d = birthday[i].day;
        } else if (max_y == birthday[i].year) {
            if (max_m > birthday[i].month) {
                max_m = birthday[i].month;
                max_n = birthday[i].name;
                max_y = birthday[i].year;
                max_d = birthday[i].day;
            } else if (max_m == birthday[i].month) {
                if (max_d > birthday[i].day) {
                    max_d = birthday[i].day;
                    max_n = birthday[i].name;
                    max_y = birthday[i].year;
                    max_m = birthday[i].month;
                } else if (max_d == birthday[i].day) {
                    max_y = birthday[i].year;
                    max_m = birthday[i].month;
                    max_d = birthday[i].day;
                }
            }
        }
        
        if (min_y < birthday[i].year) {
            min_y = birthday[i].year;
            min_n = birthday[i].name;
            min_m = birthday[i].month;
            min_d = birthday[i].day;
        } else if (min_y == birthday[i].year) {
            if (min_m < birthday[i].month) {
                min_m = birthday[i].month;
                min_n = birthday[i].name;
                min_y = birthday[i].year;
                min_d = birthday[i].day;
            } else if (min_m == birthday[i].month) {
                if (min_d < birthday[i].day) {
                    min_d = birthday[i].day;
                    min_n = birthday[i].name;
                    min_y = birthday[i].year;
                    min_m = birthday[i].month;
                } else if (min_d == birthday[i].day) {
                    min_y = birthday[i].year;
                    min_m = birthday[i].month;
                    min_d = birthday[i].day;
                }
            }
        } 
    }
    std::cout << min_n << std::endl;
    std::cout << max_n << std::endl;
    
    return 0;
}