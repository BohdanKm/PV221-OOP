#pragma once
#include<iostream>

using namespace std;


class Area
{
	static int count;

    Area()
    {

    }

public:

    /// <summary>
    /// ���������� ����� ������������
    /// </summary>
    /// <param name="width"> - �������</param>
    /// <param name="heigth"> - ������</param>
    /// <returns>����� ������������</returns>
    static float SquareRectangle(float width, float heigth)
    {
        count++;
        return width * heigth;
    }
};

int Area::count = 0;