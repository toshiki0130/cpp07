#include <iostream>
#include <cstdlib>
#include <string>
#include "Array.hpp"

void test_int() {
    std::cout << "=========== test int =============" << std::endl;
    // パラメータなしのコンストラクタ
    Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;

    // パラメータ付きコンストラクタ
    unsigned int n = 5;
    Array<int> intArray(n);
    std::cout << "Int array size: " << intArray.size() << std::endl;

    // 要素に値を設定
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        intArray[i] = i;
    }

    // 要素を表示
    std::cout << "Int array elements: ";
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;
    

    // コピーコンストラクタ
    Array<int> copyArray(intArray);
    std::cout << "Copy array elements: ";
    for (unsigned int i = 0; i < copyArray.size(); ++i) {
        std::cout << copyArray[i] << " ";
    }
    std::cout << std::endl;

    // 代入演算子
    Array<int> assignedArray;
    assignedArray = intArray;
    std::cout << "Assigned array elements: ";
    for (unsigned int i = 0; i < assignedArray.size(); ++i) {
        std::cout << assignedArray[i] << " ";
    }
    std::cout << std::endl;

    // 要素を上書き
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        intArray[i] = i * 2;
    }

    // 要素を表示
    std::cout << "Int array elements after x2: ";
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;


    // 範囲外アクセス
    try {
        std::cout << intArray[10] << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}

void test_str() {
    std::cout << "=========== test str =============" << std::endl;
    // パラメータなしのコンストラクタ
    Array<std::string> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;

    // パラメータ付きコンストラクタ
    unsigned int n = 5;
    Array<std::string> strArray(n);
    std::cout << "Int array size: " << strArray.size() << std::endl;

    // 要素に値を設定
    for (unsigned int i = 0; i < strArray.size(); ++i) {
        strArray[i] = "omg";
    }

    // 要素を表示
    std::cout << "Int array elements: ";
    for (unsigned int i = 0; i < strArray.size(); ++i) {
        std::cout << strArray[i] << " ";
    }
    std::cout << std::endl;
    

    // コピーコンストラクタ
    Array<std::string> copyArray(strArray);
    std::cout << "Copy array elements: ";
    for (unsigned int i = 0; i < copyArray.size(); ++i) {
        std::cout << copyArray[i] << " ";
    }
    std::cout << std::endl;

    // 代入演算子
    Array<std::string> assignedArray;
    assignedArray = strArray;
    std::cout << "Assigned array elements: ";
    for (unsigned int i = 0; i < assignedArray.size(); ++i) {
        std::cout << assignedArray[i] << " ";
    }
    std::cout << std::endl;
    
    // 要素を上書き
    for (unsigned int i = 0; i < strArray.size(); ++i) {
        strArray[i] = "happy";
    }

    // 要素を表示
    std::cout << "Int array elements after exchanging word: ";
    for (unsigned int i = 0; i < strArray.size(); ++i) {
        std::cout << strArray[i] << " ";
    }
    std::cout << std::endl;

    // 範囲外アクセス
    try {
        std::cout << strArray[10] << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}


void test_subject()
{
    std::cout << "=========== test subject =============" << std::endl;
    #define MAX_VAL 750
    
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
}

int main()
{
    test_int();
    test_str();
    test_subject();
}
