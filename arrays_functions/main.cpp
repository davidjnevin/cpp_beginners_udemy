#include <iostream>
#define NEWLINE() std::cout << std::endl << "====================" << std::endl
#define LOG(x) std::cout << x << std::endl

void show1(int nElements, std::string texts[]){
	// for(int i = 0; i < sizeof(texts)/sizeof(std::string); i++){
	// 	LOG(texts[i]);
	// }
	for(int i = 0; i < nElements; i++){
		LOG(texts[i]);
	}
}

void show2(int nElements, std::string *texts){
	// for(int i = 0; i < sizeof(texts)/sizeof(std::string); i++){
	// 	LOG(texts[i]);
	// }
	for(int i = 0; i < nElements; i++){
		LOG(texts[i]);
	}
}

void show3(std::string (&texts)[3]){
	// for(int i = 0; i < sizeof(texts)/sizeof(std::string); i++){
	// 	LOG(texts[i]);
	// }
	for(int i = 0; i < sizeof(texts)/sizeof(std::string); i++){
		LOG(texts[i]);
	}
}

int main(){

	std::string texts[] = {"apple", "orange", "banana"};
	show1(3, texts);
	show2(3, texts);
	show3(texts);

	return 0;
}
