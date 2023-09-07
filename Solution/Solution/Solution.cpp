#include <iostream>

void Damage(int &hp) {
	hp -= 100;
}

void heal(int &hp) {
	hp += 50;
}

int main()
{
#pragma region 스트림
	// 시간에 흐름에 따라 연속적으로 발생하는 데이터의 흐름
	// 스트림은 운영제체에 의해 생성되며, 스트림 자체에 버퍼라는 임시 메모리 공간이 존재한다.
	char alphabet = 'A';
	int data = 100;
	//스트림의 경우 입력된 데이터는 출력장치로 전달하며, "<<" 연산자를 사용하여 자신이 참조한 값을 반환
	//std::cout << "data의 값: " << data << std::endl;
	//std::cout << "alphabet의 값: " << (int) alphabet << std::endl;
	
	//std::cin >> data;
	//스트림으로 입력받을 때 ">>" 연산자를 사용하여 버퍼에 저장한 다음 NULL 문자까지만 버퍼 안의 내용을 출력한다.
	//std::cout << "data의 값: " << data << std::endl;

#pragma endregion

#pragma region 동적 할당과 해제
	//int *ptr = new int;
	//
	//*ptr = 255;
	//
	//std::cout << "ptr 가리키는 값: " << *ptr << std::endl;
	////std::cout << "ptr 주소 값: " << &ptr << std::endl;
	//delete ptr; //ptr 메모리 영역(힙) 해제
	//ptr = nullptr; //해당 포인터 초기화
	//
	//ptr = new int[5];
	//
	//for (int i = 0; i < 5; i++) {
	//	ptr[i] = i;
	//	std::cout << ptr[i] << std::endl;
	//}
	//
	//delete[] ptr;

#pragma endregion

#pragma region 참조자
	//int value = 200;
	//int &ref = value;
	//Damage(value);
	//
	//std::cout << "value의 값" << value << std::endl;
	//heal(value);
	//std::cout << "value의 값" << value << std::endl;
	//ref = 999;
	//std::cout << "value의 값" << value << std::endl;
	//std::cout << "ref의 값" << ref << std::endl;

#pragma endregion

#pragma region 범위 기반 for문
	//int dataList[5] = { 1,2,3,4,5 };
	//
	//for (const int &element : dataList) {
	//	std::cout << element << std::endl;
	//}
#pragma endregion
	return 0;
}
