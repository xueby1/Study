#include <iostream>
#include <vector>
#include <map>
#include "Sales_item.h"

int main () {
    /************************ 1.20 类的读写 **********************/
    /*
    // 由于该类成员变量是私有的，通过成员函数/友元函数访问私有变量
    Sales_item sales_item;
    std::cout << "Please input Sales_item: " << std::endl;
    std::cin >> sales_item;
    std::cout << sales_item << std::endl;
    system("pause");
    return 0;
    */
    /************************ 1.21 类,两个相同的ID，求和 **********************/
    /*
    Sales_item book1;
    Sales_item book2;
    Sales_item sum_books;
    std::cout << "Please input two book: " << std::endl;
    std::cin >> book1 >> book2;
    sum_books = book1 + book2;
    std::cout << "Sum is: " << sum_books << std::endl;
    system("pause");
    return 0;
    */
    /************************ 1.22 类,多个相同的ID，分别求和 Vector实现，还存在问题 **********************/
    /*
    using namespace std;
    
    unsigned int books_num = 0;
    Sales_item book;
    std::vector<Sales_item> v_sales_item;

    std::cout << "Please input books number: " << std::endl;
    std::cin >> books_num;
    std::cout << "Please input books info: " << std::endl;
    for (unsigned int i = 0; i < books_num; ++i) {
        std::cin >> book;
        for (unsigned int j = 0; (v_sales_item.size() == 0) || j < v_sales_item.size(); ++j) {
            if (v_sales_item.size() > 0 && (book.isbn() == v_sales_item[j].isbn())) {
                v_sales_item[j] += book;
                cout<<"111"<<endl;
                break;
            } else {
                v_sales_item.push_back(book);
                cout<<"222"<<endl;
               // std::cout << v_sales_item[j].isbn() << " Sum is: " << v_sales_item[j] << std::endl;
                // 这里如何才能把ID不存在的加进去？？？
                break;
            }
        }
    }
    for (unsigned int i = 0; i < v_sales_item.size(); ++i) {
        std::cout << v_sales_item[i].isbn() << " Sum is: " << v_sales_item[i] << std::endl;
    }

    system("pause");
    return 0;
    */
    /************************ 1.22 类,多个相同的ID，分别求和 map实现 **********************/
    /*
    unsigned int books_num = 0;
    Sales_item book;
    std::map<std::string, Sales_item> m_sales_item;
    
    std::cout << "Please input books number: " << std::endl;
    std::cin >> books_num;
    std::cout << "Please input books info: " << std::endl;

    std::map<std::string, Sales_item>::iterator iter;
    for (unsigned int i = 0; i < books_num; ++i) {
        std::cin >> book;
        iter =  m_sales_item.find(book.isbn());
        if(iter != m_sales_item.end()){
            iter->second += book;
        }else{
            m_sales_item.insert(std::map<std::string, Sales_item>::value_type(book.isbn(),book));
        }        
    }
    for (iter = m_sales_item.begin(); iter != m_sales_item.end(); ++iter) {
        std::cout << iter->first << " Sum is: " << iter->second << std::endl;
    }
    system("pause");
    return 0;
    */
    /************************ 1.25 书店程序 **********************/

}
