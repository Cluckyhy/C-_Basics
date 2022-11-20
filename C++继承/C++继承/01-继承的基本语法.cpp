//#include <iostream>
//using namespace std;
//
////继承的好处：减少重复的代码
////语法：class 子类 : 继承方式 父类
////子类   也称为派生类
////父类   也称为基类或超类
//
//
//
//
//
////普通实现页面
////java页面
////class Java {
////public:
////	void header() {
////		cout << "首页、公共课、登录、注册、.....(公共头部)" << endl;
////	}
////	void left() {
////		cout << "java、Python、C++、....(公共分类列表)" << endl;
////	}
////	void content() {
////		cout << "Java学科视频" << endl;
////	}
////	void footer() {
////		cout << "帮助中心、交流合作、站内地图.....（公共底部）" << endl;
////	}
////};
////class Python {
////public:
////	void header() {
////		cout << "首页、公共课、登录、注册、.....(公共头部)" << endl;
////	}
////	void left() {
////		cout << "java、Python、C++、....(公共分类列表)" << endl;
////	}
////	void content() {
////		cout << "Python学科视频" << endl;
////	}
////	void footer() {
////		cout << "帮助中心、交流合作、站内地图.....（公共底部）" << endl;
////	}
////};
////class CPP {
////public:
////	void header() {
////		cout << "首页、公共课、登录、注册、.....(公共头部)" << endl;
////	}
////	void left() {
////		cout << "java、Python、C++、....(公共分类列表)" << endl;
////	}
////	void content() {
////		cout << "C++学科视频" << endl;
////	}
////	void footer() {
////		cout << "帮助中心、交流合作、站内地图.....（公共底部）" << endl;
////	}
////};
//
//
////继承实现页面
//
////公共页面类
//class BasePage {
//	public:
//		void header() {
//			cout << "首页、公共课、登录、注册、.....(公共头部)" << endl;
//		}
//		void left() {
//			cout << "java、Python、C++、....(公共分类列表)" << endl;
//		}
//		void footer() {
//			cout << "帮助中心、交流合作、站内地图.....（公共底部）" << endl;
//		}
//};
//
////Java页面
//class Java : public BasePage {
//public:
//	void content() {
//		cout << "Java学科视频" << endl;
//	}
//};
//
////Python页面
//class Python : public BasePage {
//public:
//	void content() {
//		cout << "Python学科视频" << endl;
//	}
//};
////C++页面
//class Cpp : public BasePage {
//public:
//	void content() {
//		cout << "C++学科视频" << endl;
//	}
//};
//
//
//void test01() {
//	cout << "Java下载视频页面如下：" << endl;
//	Java ja;
//	ja.header();
//	ja.left();
//	ja.content();
//	ja.footer();
//
//	cout << "-------------------------" << endl;
//	Python py;
//	py.header();
//	py.left();
//	py.content();
//	py.footer();
//
//	cout << "-------------------------" << endl;
//	Cpp cpp;
//	cpp.header();
//	cpp.left();
//	cpp.content();
//	cpp.footer();
//}
//
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}