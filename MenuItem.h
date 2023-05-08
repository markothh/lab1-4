using namespace std;

namespace TSA
{
	class MenuItem
	{
	public:
		typedef int(*function)();

		MenuItem(string str, function);

		function func;
		string itemName;

		string getName();
		void setName(string);
		int run();
	};
}