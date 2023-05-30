// Rectangle.cpp
# include "Rectangle.h"
// 클래스 멤버 함수를 클래스 외부에 정의하고 있음
int Rectangle::getArea() {
    return getWidth() * getHeight() ;
}
void Rectangle::moveBy(int deltaX, int deltaY) {
    setLeftTop(leftTopX+deltaX, leftTopY+deltaY) ;
    setRightBottom(rightBottomX+deltaX, rightBottomY+deltaY) ;
}
