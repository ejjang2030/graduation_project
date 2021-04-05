#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
	std::cout << "Motion Detected" << std::endl;
	system("/home/pi/temperary/pushbulletexe.sh High!!");
	return 0;
}
