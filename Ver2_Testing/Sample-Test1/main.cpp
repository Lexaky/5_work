#include "head.hpp"
#include <iostream>

/*
ќпределить свою структуру данных, котора€ хранит числа + еще что-нибудь (число + название?)
„ерез перегрузку реализовать над структурой побитовые операции ( + будет побитовым "или", * побитовым "и" и тд)
» вывод в консольку красивый отформатированный через printf дл€ этой структуры :)
*/
int main()
{
    setlocale(LC_ALL, "rus");

    Point* newP1 = new Point(5, 12, 'A');
    Point* newP2 = new Point(8, 5, 'B');
    Point newP3 = *newP1 + *newP2;
    newP3.setName('C');

    printPoint(*newP1);
    printPoint(*newP2);
    printPoint(newP3);


    newP3 = *newP1 * *newP2;
    newP3.setName('C');
    printPoint(newP3);

    newP3 = !newP3;
    newP3.setName('C');
    printPoint(newP3);


    newP3 = *newP1 + *newP2;
    newP3.setName('C');
    printPoint(newP3);


    ///////////////////////////////////////////////////////////
    std::cout << "\n\nѕример форматированного вывода: \n";
    newP3 = *newP1 * *newP2;
    newP3.setName('C');
    printPoint(newP3);
    newP3 = !newP3;
    newP3.setName('C');
    printPoint(newP3);
    newP3 = *newP1 + *newP2;
    newP3.setName('C');
    printPoint(newP3);
    std::cout << "p1 < p2? " << (*newP1 < *newP2) << std::endl;
    std::cout << "p1 > p2? " << (*newP1 > *newP2) << std::endl;
    newP3 = *newP1 ^ *newP2;
    newP3.setName('C');
    printPoint(newP3);
    return 0;
}
