#include "CExample.h"


// Constructor
CExample::CExample(int a, int b){
	i = a;
	j = b;
};

// Methods
void CExample::m_Run() {
	std::cout << "Hello World in Class CExample!" << std::endl;
}