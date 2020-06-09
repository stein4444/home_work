#include<iostream>
#include"Clock.h"
#include"String.h"
using namespace std;


int main() {
	/*Time time(1488);
	time.print();
	*/
	String st1("asd12" );
	String st2("def4" );
	st1 += st2;
	st1.Print();
	String st3("asde2");
	String st4("gds32");
	String st5 = st3 * st4;
	st3.Print();

	st5.Print();
	return 0;
}