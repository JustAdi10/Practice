#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle{

    public:

    int width,height;
    int read_input(){

        cin>>width;
        cin>>height;

        return width ,height;
    }
};

class RectangleArea : public Rectangle{
    public:
        void display.Rectangle(){
            cout<<width<<endl;
            cout<<height<<endl;
        }

        int display(){
            int area = (width*height);
            cout<<area;
            return area;
        }

};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}