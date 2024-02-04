#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <memory>
class Base{
public:
    int number;
    std::string name;
    Base(){
    }
       virtual  void test(){
        std::cout<<"the base class worked"<<std::endl;
    }

};
class Derived:public Base{
public :
    int derived_number;
    std::string derived_name;
    Derived(int derived_number, std::string derived_name)
    :derived_number{derived_number},
     derived_name{derived_name}{
    }
//    Derived(const Derived&obj):Base(){
//
//    }
    virtual void test(){
        std::cout<<"the derived class worked"<<std::endl;
    }
};
int main(){
    std::vector<Base*>base;
    Base base;
     Derived d(100,"derived worked");
    base.push_back(&d);
    base[0]->derived_number();

    return 0;
}












//
//
//
//
//class Shapes{
//public:
//     std::string shape_name;
//     float pos_x;
//     float pos_y;
//     float move_speed1;
//     float move_speed2;
//     int r, g, b;
//     Shapes(std::string shape_name,float pos_x, float pos_y, float move_speed1, float move_speed2, int r, int g, int b)
//      :shape_name{shape_name},
//        pos_x{pos_x},
//        pos_y{pos_x},
//        move_speed1{move_speed1},
//        move_speed2{move_speed2},
//        r{r},
//        g{g},
//        b{b}
//
//    {
//
//    }
//    void test(){
//        std::cout<<"this is from shape class"<<std::endl;
//    }
//};
//class circleshape:public Shapes {
//public:
//    sf::CircleShape circle;
//     float radius;
//     circleshape(std::string shape_name,float pos_x, float pos_y, float move_speed1, float move_speed2, int r, int g, int b, float radius)
//      :Shapes{ shape_name, pos_x,  pos_y,  move_speed1,  move_speed2,  r,  g,  b},
//      radius{radius}
//    {
//
//    }
//    void create_shape(){
//        circle.setRadius(radius);
//        circle.setPosition(pos_x,pos_y);
//        circle.setFillColor(sf::Color(r,g,b));
//    }
//    sf::CircleShape get_shape(){
//        return circle;
//    }
//    void derived_test(){
//        std::cout<<"derived worked in circle"<<std::endl;
//    }
//};
//
//
//class rectangleshape:public Shapes{
//public:
//     sf::RectangleShape rectangle;
//     int breadth;
//     int length;
//    rectangleshape(std::string shape_name,float pos_x, float pos_y, float move_speed1, float move_speed2, int r, int g, int b,int length,int breadth)
//       :Shapes{ shape_name, pos_x,  pos_y,  move_speed1,  move_speed2,  r,  g,  b},
//        length{length},
//        breadth{breadth}
//    {
//
//    }
//    void create_shape(){
//       rectangle.setSize(sf::Vector2f(length,breadth));
//       rectangle.setPosition(pos_x,pos_y);
//       rectangle.setFillColor(sf::Color(r,g,b));
//    }
//    sf::RectangleShape get_shape(){
//        return rectangle;
//    }
//
//
//     void derived_test(){
//        std::cout<<"derived worked in rectangle"<<std::endl;
//    }
//
//};
//void process(std::vector<std::string>data,std::stringstream&ss,std::vector<Shapes*>&shapes);
//template<typename Template1,typename Template2,typename Template3>
//void animate(Template1 &sfml_obj,Template2 &shape_obj,Template3 window_width,Template3 window_height){
//   for(auto&i:sfml_obj){
//       auto bounds = i.getLocalBounds();
//         for(auto&j:shape_obj){
//            if(i.getPosition().x==j.pos_x&&i.getPosition().y==j.pos_y){
//                    if((i.getPosition().x+bounds.width>=window_width&&i.getPosition().y+bounds.height>=window_height)||(i.getPosition().x+bounds.width>=window_width&&i.getPosition().y<=0)){
//                        std::cout<<"right width"<<std::endl;
//                        j.move_speed1*=-1.0f;
//                        j.move_speed2*=-1.0f;
//                     }
//                    else if((i.getPosition().y+bounds.height>=window_height&&i.getPosition().x<=0)||(i.getPosition().x<=0&&i.getPosition().y<=0)){
//                        j.move_speed1*=-1.0f;
//                        j.move_speed2*=-1.0f;
//                     }
//                    else if((i.getPosition().y+bounds.height>=window_height&&i.getPosition().x>0)||(i.getPosition().y<=0&&i.getPosition().x>0)){
//                        j.move_speed2*=-1.0f;
//                    }
//
//                    else if((i.getPosition().x<=0&&i.getPosition().y>0)||(i.getPosition().x+bounds.width>=window_width&&i.getPosition().y>0)){
//                        j.move_speed1*=-1.0f;
//                    }
//                    i.setPosition(i.getPosition().x+j.move_speed1,i.getPosition().y+j.move_speed2);
//                    j.pos_x = i.getPosition().x;
//                    j.pos_y = i.getPosition().y;
//            }
//
//         }
//     }
//};
//
//int main(){
//  std::vector<circleshape>Circle_shape;
//  std::vector<rectangleshape>Rectangle_shape;
//  std::vector<Shapes*>shapes;
//  std::vector<std::vector<std::string>>elements;
//  int window_width;
//  int window_height;
//  const std::string config_path = "Config.txt";
//  std::fstream config_file{config_path, std::ios::in};
//  if(config_file.is_open()){
//    std::cout<<"file opened successfully "<<std::endl;
//  }
//  else{
//    std::cerr<<"could not load file something went wrong "<<std::endl;
//  }
//std::string word;
// while (std::getline(config_file,word)){
//   std::string temp ="";
//   std::vector<std::string>collection;
//   for (size_t i=0; i<word.size();i++){
//        if(isspace(word[i])){
//            collection.push_back(temp);
//            temp="";
//        } else if (i == (word.size()-1)){
//            temp=temp+word[i];
//            collection.push_back(temp);
//            temp="";
//        }
//         else{
//            temp=temp+word[i];
//        }
//   }
//   elements.push_back(collection);
// };
// for(size_t i =0; i<elements.size(); i++){
//
//     std::stringstream ss;
//    if(elements[i][0]=="window"){
//        ss<<elements[i][1];
//        ss>>window_width;
//        ss.clear();
//        ss<<elements[i][2];
//        ss>>window_height;
//    }
//    else if(elements[i][0]=="circle"){
//        process(elements[i],ss,shapes);
//    }else{
//       process(elements[i],ss,shapes);
//    }
// }
// //SFML
//   sf::RenderWindow window(sf::VideoMode(window_width,window_height), "sfml is cool");
////   window.setFramerateLimit(60);
//   std::vector<sf::CircleShape>circles;
//   std::vector<sf::RectangleShape>rectangles;
//      for(auto i:shapes){
//        (*i).derived_test();
//      }
//
//      while(window.isOpen()){
//
//      // basic animation
////         animate<std::vector<sf::CircleShape>,std::vector<circleshape>,int>(circles,Circle_shape,window_width,window_height);
////         animate<std::vector<sf::RectangleShape>,std::vector<rectangleshape>,int>(rectangles,Rectangle_shape,window_width,window_height);
//          window.clear();
////          for(auto j:shapes){
////            window.draw((*j).get_shape());
////          }
//
//            window.display();
//   }
//    return 0;
//}
//
//
//
//
//void process(std::vector<std::string>data, std::stringstream&ss,std::vector<Shapes*>&shapes){
//        Shapes*shape;
//        std::string shape_name;
//        float pos_x, pos_y;
//        float move_speed1,move_speed2;
//        int r, g, b;
//        float radius;
//        int length,breadth;
//        ss<<data[1];
//        ss>>shape_name;
//        ss.clear();
//        ss<<data[2];
//        ss>>pos_x;
//        ss.clear();
//        ss<<data[3];
//        ss>>pos_y;
//        ss.clear();
//        ss<<data[4];
//        ss>>move_speed1;
//        ss.clear();
//        ss<<data[5];
//        ss>>move_speed2;
//        ss.clear();
//        ss<<data[6];
//        ss>>r;
//        ss.clear();
//        ss<<data[7];
//        ss>>g;
//        ss.clear();
//        ss<<data[8];
//        ss>>b;
//        ss.clear();
//        if(data[0]=="circle"){
//            ss<<data[9];
//           ss>>radius;
//           shape=new circleshape(shape_name,pos_x,pos_y,move_speed1,move_speed2,r,g,b,radius);
//           shapes.push_back(shape);
//        }
//        else{
//            ss<<data[9];
//            ss>>length;
//            ss.clear();
//            ss<<data[10];
//            ss>>breadth;
//            shape=new rectangleshape(shape_name,pos_x,pos_y,move_speed1,move_speed2,r,g,b,length,breadth);
//            shapes.push_back(shape);
//        }
//}






