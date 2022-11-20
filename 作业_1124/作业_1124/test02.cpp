//#include <iostream>
//using namespace std;
//
////Shirt类、基类
//class Shirt
//{
//protected:
//    int stock;
//    string name;
//    int price;
//    string place;
//    string material;
//    int sum;
//public:
//    void inStock(int inNum) {
//        this->stock += inNum;
//        cout << name << "入库了 " << inNum << " 件，库存为 " << stock << " 件" << endl;
//    };
//    void outStock(int outNum) {
//        this->stock -= outNum;
//        cout << name << "出库了 " << outNum << " 件，库存为 " << stock << " 件" << endl;
//    };
//    void display() {
//        sum = price * stock;
//        cout << name << "的商品总价为 " << sum << " 元" << endl;
//    };
//    Shirt(string name1, int price1, string place1, string material1, int stock1);
//};
//
//Shirt::Shirt(string name1, int price1, string place1, string material1, int stock1) :
//    name(name1), price(price1), place(place1), material(material1), stock(stock1)
//{
//}
//
//
////Hat类、继承Shirt类
//class Hat :public Shirt
//{
//    string hatType;
//public:
//    //void inStock(int inNum);
//    //void outStock(int outNum);
//    //void display();
//    Hat(string name2, int price2, string place2, string material2, int stock2, string hatType2);
//};
//
//Hat::Hat(string name2, int price2, string place2, string material2, int stock2, string hatType2) :
//    Shirt(name2, price2, place2, material2, stock2), hatType(hatType2) {}
//
//
////Closet类, 继承Shirt类
//class Closet :public Shirt
//{
//    string color;
//public:
//    //void inStock(int inNum);
//    //void outStock(int outNum);
//    //void display();
//    Closet(string name3, int price3, string place3, string material3, int stock3, string color3);
//};
//
//Closet::Closet(string name3, int price3, string place3, string material3, int stock3, string color3) :
//    Shirt(name3, price3, place3, material3, stock3), color(color3) {}
//
//
//int main() {
//    Shirt s("衬衣", 50, "南昌", "全棉", 300);
//    s.inStock(100);
//    s.outStock(50);
//    s.display();
//    Hat h1("帽子", 10, "景德镇", "全棉", 200, "尖顶");
//    h1.inStock(150);
//    h1.outStock(20);
//    h1.display();
//    Hat h2("帽子", 10, "景德镇", "全棉", 200, "平顶");
//    h2.inStock(100);
//    h2.outStock(50);
//    h2.display();
//    Closet c("立柜", 500, "景德镇", "实木", 200, "红");
//    c.inStock(50);
//    c.outStock(10);
//    c.display();
//}