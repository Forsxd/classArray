#include <iostream>
#include <string>

using namespace std;

class Pixel { /*Массивы в классах*/
private:
    int r;
    int g;
    int b;

public:
    Pixel() {
        r = g = b = 0;
    }
    Pixel(int r, int g, int b) {
        this->r = r;
        this->g = g;
        this->b = b;
    }
    string getInfo() {
        return "Pixel: r = " + to_string(r) + " g = " + to_string(g) + " b = " + to_string(b);
    }
    void setPixel(int r, int g, int b) {
        this->r = r;
        this->g = g;
        this->b = b;
    }
}; 

int main()
{
    setlocale(LC_ALL, "ru");
    const int LENGHT = 5;
    Pixel arr[LENGHT];
    Pixel *dArr = new Pixel[LENGHT];
    cout << arr[1].getInfo() << endl;
    arr[1].setPixel(255, 255, 255);
    cout << arr[1].getInfo() << endl;
    cout << arr[0].getInfo() << endl;
    delete[] dArr;
}