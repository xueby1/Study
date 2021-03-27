#include <iostream>

int main() {
    /**************************while循环*********************/
    /******************* 1.20加到100 ****************/
    /*
    int n = 50;
    int sum = 0;
    while (n < 101) {
        sum += n;
        ++n;
    }
    std::cout << "sum is: " << sum << std::endl;
    system("pause");
    return 0;
    */
    /******************* 2.100加到50 ****************/
    /*
    int n = 100;
    int sum = 0;
    while (n >= 50) {
        sum += n;
        --n;
    }
    std::cout << "sum is: " << sum << std::endl;
    system("pause");
    return 0;
    */
    /******************* 3.任意输入两个数，打印两数之间的所有整数 ****************/
    /*
    int a = 0;
    int b = 0;
    std::cout << "Please input two number: " << std::endl;
    std::cin >> a >> b;

    while (a > b) {
        std::cout << b++ << " ";
    }
    while (a < b) {
        std::cout << a++ << " ";
    }
    while (a = b) {
        std::cout << a << " ";
        break;
    }
    system("pause");
    return 0;
    */

    /************************for循环改造**********************/
    /******************* 1.sum求合 ****************/
    /*
    int n = 50;
    int sum = 0;
    for (n; n < 101; ++n) {
        sum += n; 
    }
    std::cout << "sum is: " << sum << std::endl;
    system("pause");
    return 0;
    */
    /******************* 2.100加到50 ****************/
    /*
    int n = 100;
    int sum = 0;
    for (n; n >= 50; --n) {
        sum += n; 
    }
    std::cout << "sum is: " << sum << std::endl;
    system("pause");
    return 0;
    */
    /******************* 3.任意输入两个数，打印两数之间的所有整数 ****************/
    /*
    int a = 0;
    int b = 0;
    int min = 0;
    int max = 0;
    std::cout << "Please input two number: " << std::endl;
    std::cin >> a >> b;
    min = a > b ? b : a;
    max = a > b ? a : b;
    for (min; min <= max; ++min) {
        std::cout << min << " ";
    }
    system("pause");
    return 0;
    */
    /************************ 1.16 输入不定量的数据，并求合 **********************/
    /*
    int value = 0;
    int sum = 0;
    std::cout << "Please input some number: " << std::endl;
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "The sum is: " << sum << std::endl;
    system("pause");
    return 0;
    */
    /************************ 1.17 输入不定量的数据，并求每个数据出现的次数 **********************/
    /*
    int count = 0;
    int value = 0;
    int cur_value = 0;
    std::cout << "Please input number: " << std::endl;
    if (std::cin >> cur_value) {
        count += 1;
        while (std::cin >> value) {
            if (value == cur_value) {
                count++;
            } else {
                std::cout << cur_value << " occurs " << count << " times " << std::endl;
                cur_value = value;
                count = 1;
            }
        }
        std::cout << cur_value << " occurs " << count << " times " << std::endl;
    }
    system("pause");
    return 0;
    */
}