namespace TSA
{
	class MenuItem
	{
	public:
		typedef int(*function)();

		MenuItem(const char* str, function); 

		function func;
		const char* itemName;

		const char* getName();
		void setName(const char*);
		int run();
	};
}