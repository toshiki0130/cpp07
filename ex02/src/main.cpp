#include <iostream>
#include "Array.hpp"

int main() {
    // パラメータなしのコンストラクタ
    Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;

    // パラメータ付きコンストラクタ
    unsigned int n = 5;
    Array<int> intArray(n);
    std::cout << "Int array size: " << intArray.size() << std::endl;

    // 要素に値を設定
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        intArray[i] = i * 2;
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

    // 範囲外アクセス
    try {
        std::cout << intArray[10] << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
