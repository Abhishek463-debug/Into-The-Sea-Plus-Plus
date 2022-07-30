#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>

void GimmeMyAge(int age)
{
	std::cout << "My age is " << age << std::endl;
}
void GimmeMyName(const std::string& name)
{
	std::cout << "My name is " << name << std::endl;
}

void UnpackVector(const std::vector<std::string>& unpack)
{
	for (const std::string& item : unpack)
	{
		std::cout << item << " ";
	}
	std::cout << std::endl;
}

void SayMyName(const std::string& name)
{
	std::cout << name << std::endl;
}
void GetMusicSongs(const std::vector<std::string>& VectorOfSongs)
{
	for (const std::string& song: VectorOfSongs)
	{
		std::cout << song << " ";
	}
	std::cout << std::endl;
}
void GetMyBestFriends(const std::vector<std::string>& friends)
{
	for (const std::string& name : friends)
	{
		std::cout << name + " ";
	}
	std::cout << std::endl;
}
void EnglishBadWords(const std::vector<std::string>& words)
{
	for (const std::string& word : words)
	{
		std::cout << word << " ";
	}
	std::cout << std::endl;
}
void CountingNumbers(const std::vector<std::string>& numbers)
{
	for (const std::string& number : numbers)
	{
		std::cout << number << " ";
	}
	std::cout << std::endl;
}
std::string SayWhatYouFeel(const std::string& words)
{
	return words;
}
std::vector<char> GiveMeAVector(const std::string& word)
{
	std::vector<char> vec1;
	for (char c : word)
	{
		vec1.push_back(c);
	}
	return vec1;
}

std::vector<int> GiveMeAVectorOfNumbers(int a, int b)
{
	std::vector<int> vec = {};
	for (int i = a; i <= b; ++i)
	{
		vec.emplace_back(i);
	}
	return vec;
}



int main()
{

	std::cout << "And it finally begins!" << std::endl;

}
