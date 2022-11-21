#ifndef HEAD
#define HEAD

#include <iostream>

class Point
{
private:
    int x = 0, y = 0; // ���������� �����
    char name; //��� �����
public:
    //������������� ��������� ������������
    Point();
    Point(int x, int y);
    Point (int x, int y, char name);
    //������������� ��������� ������������

    //���������� ����������
    Point operator + (Point p)
        { return Point(p.getX() + this->getX(), p.getY() + this->getY(), this->getName()); } //���������� ���������� ����� p � ���������� ������ �����
    Point operator * (Point p)
        { return Point(p.getX() * this->getX(), p.getY() * this->getY(), this->getName()); } //�������� ���������� ����� p �� ���������� ������ �����
    Point operator - (Point p)
        { return Point(this->getX() - p.getX(), this->getY() - p.getY(), this->getName()); } //�������� ���������� ����� p �� ���������� ������ �����
    Point operator / (Point p)
        { return Point(this->getX() / p.getX(), this->getY() / p.getY(), this->getName()); } //����� ���������� ����� p �� ���������� ������ �����
    Point operator ! ()
        { return Point(~this->getX(), ~this->getY(), this->getName()); } // ��������� �������� ������ �����
    bool operator < (Point p) //��������� �� ����� p ������ ��� ���� ������������ ����� � ���������� ������� ���������
    { if ((this->getX() <= p.getX()) && (this->getY() <= p.getY())) return true;
        else return false; }
    bool operator > (Point p) //��������� �� ����� p ����� ��� ���� ������������ ����� � ���������� ������� ���������
        { if (this->getX() >= p.getX() && this->getY() >= p.getY()) return true;
            else return false; }
    Point operator ^ (Point p) //���������� �������� ���������� ����� ������� p � ������ ����� (� ����� ��������� � ����������� � ������� �������)
        { return Point((p.getX() + this->getX())/2, (p.getY() + this->getY())/2, this->getName()); }
    //����� ���������� ����������

    //�������� �������
    int getX();
    int getY();
    char getName();
    void setName(char newName);
    void setX(int newX);
    void setY(int newY);
    //����� �������� �������
};
void printPoint(Point p);
//�������� ���������� �������������
#endif // HEAD
