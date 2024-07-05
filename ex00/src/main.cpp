#include <iostream>
#include "whatever.hpp"

void test_swap()
{
    std::cout << "======= test_swap =======" << std::endl;
    {
        std::cout << "--- int ---" << std::endl;
        int a = -100;
        int b = 100;
        std::cout << "before int a: " << a << ", int b: " << b << std::endl;
        ::swap(a,b);
        std::cout << "after  int a: " << a << ", int b: " << b << std::endl;
    }
    {
        std::cout << "--- float ---" << std::endl;
        float a = -100.0f;
        float b = 100.0f;
        std::cout << "before float a: " << a << ", float b: " << b << std::endl;
        ::swap(a,b);
        std::cout << "after  float a: " << a << ", float b: " << b << std::endl;
    }
    {
        std::cout << "--- char ---" << std::endl;
        char a = 'a';
        char b = 'b';
        std::cout << "before char a: " << a << ", char b: " << b << std::endl;
        ::swap(a,b);
        std::cout << "after  char a: " << a << ", char b: " << b << std::endl;
    }
    {
        std::cout << "--- string ---" << std::endl;
        std::string a = "aabcd";
        std::string b = "aaccd";
        std::cout << "before string a: " << a << ", string b: " << b << std::endl;
        ::swap(a,b);
        std::cout << "after  string a: " << a << ", string b: " << b << std::endl;
    }
}

void test_min()
{
    std::cout << "======= test_min =======" << std::endl;
    {
        std::cout << "--- int ---" << std::endl;
        int a = -100;
        int b = 100;
        std::cout << "int a: " << a << ", int b: " << b
        << ". min is " << ::min(a, b) << std::endl;
    }
    {
        std::cout << "--- float ---" << std::endl;
        float a = -100.0f;
        float b = 100.0f;
        std::cout << "float a: " << a << ", float b: " << b
        << ". min is " << ::min(a, b) << std::endl;
    }
    {
        std::cout << "--- char ---" << std::endl;
        char a = 'a';
        char b = 'b';
        std::cout << "char a: " << a << ", char b: " << b
        << ". min is " << ::min(a, b) << std::endl;
    }
    {
        std::cout << "--- string ---" << std::endl;
        std::string a = "aabcd";
        std::string b = "aaccd";
        std::cout << "string a: " << a << ", string b: " << b
        << ". min is " << ::min(a, b) << std::endl;
    }
}

void test_max()
{
    std::cout << "======= test_max =======" << std::endl;
    {
        std::cout << "--- int ---" << std::endl;
        int a = -100;
        int b = 100;
        std::cout << "int a: " << a << ", int b: " << b
        << ". max is " << ::max(a, b) << std::endl;
    }
    {
        std::cout << "--- float ---" << std::endl;
        float a = -100.0f;
        float b = 100.0f;
        std::cout << "float a: " << a << ", float b: " << b
        << ". max is " << ::max(a, b) << std::endl;
    }
    {
        std::cout << "--- char ---" << std::endl;
        char a = 'a';
        char b = 'b';
        std::cout << "char a: " << a << ", char b: " << b
        << ". max is " << ::max(a, b) << std::endl;
    }
    {
        std::cout << "--- string ---" << std::endl;
        std::string a = "aabcd";
        std::string b = "aaccd";
        std::cout << "string a: " << a << ", string b: " << b
        << ". max is " << ::max(a, b) << std::endl;
    }
}
void test_from_subject() {
    std::cout << "==== test_from_subject ====" << std::endl;
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

int main()
{
    test_swap();
    test_min();
    test_max();
    test_from_subject();
    return 0;
}