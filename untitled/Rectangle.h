# ifndef __RECTANGLE_H
# define __RECTANGLE_H
class Rectangle {
//private: // default
    int leftTopX, leftTopY ;
    int rightBottomX, rightBottomY ;
// 클래스 내부에서 정의된 멤버 함수는 기본적으로 inline 함수임
    void setLeftTop(int x, int y) { leftTopX = x ; leftTopY = y ; }
    void setRightBottom(int x, int y) { rightBottomX = x ; rightBottomY = y ; }
public:
// 생성자가 정의되지 않았으면 컴파일러가 자동으로 생성함: Rectangle() {}
// 자신의 멤버 함수를 호출함
    void set(int x1, int y1, int x2, int y2) { setLeftTop(x1, y1) ; setRightBottom(x2, y2) ; }
    void getLeftTop(int& x, int& y) { x = leftTopX ; y = leftTopY ; }
    void getRightBottom(int& x, int& y) { x = rightBottomX ; y = rightBottomY ; }
    int getWidth() { return rightBottomX - leftTopX ; }
    int getHeight() { return rightBottomY - leftTopY ; }
// 별도의 구현 파일을 이용함
    int getArea() ;
    void moveBy(int deltaX, int deltaY) ;
} ;
# endif