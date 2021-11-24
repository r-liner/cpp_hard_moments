#include <iostream>
#include <string>
#include <optional>
#include <tuple>
using namespace std;


struct Person
{
private:
	std::string name;
	std::string sur;
	std::optional<std::string> patr;
public:
	Person() {}
	Person(std::string n, std::string s) : name(n), sur(s)
	{}
	Person(std::string n, std::string s, std::optional<std::string> p) : Person(n, s)
	{
		patr = p;
	}
	friend std::ostream& operator<<(std::ostream& os, const Person& a);
};

	std::ostream& operator<<(std::ostream& out, const Person& a)
	{
   		out << a.patr << " " << a.name << " " << a.sur;
    	return out;
	}
int main(){
return 0;
}

//не справился
