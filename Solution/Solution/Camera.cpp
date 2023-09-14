#include "Camera.h"

Camera::Camera()
{
	view = 60;
	cout << "Camera 생성" << endl;
}

Camera::~Camera()
{
	cout << "Camera 삭제" << endl;
}

void Camera::Information() const
{
	cout << "view의 값: " << view << endl;
}
