
#include "../header/rectangle.hpp"

Rectangle::Rectangle() : width(0), height(0) {}

Rectangle::Rectangle(int w, int h) : width(w), height(h) {}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area(){
    return this->width * this->height;
}

int Rectangle::perimeter() {
    return this->width * 2 + this->height * 2;
}

//FOR TESTING PURPOSES
int Rectangle::getWidth() {
    return this->width;
}

int Rectangle::getHeight() {
    return this->height;
}