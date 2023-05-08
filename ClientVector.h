#pragma once

#include "Client.h"

using namespace std;

namespace TSA
{
	class ClientVector
	{
	private:
		Client* vector;
		int size;
		int capacity;

	public:
		ClientVector();
		~ClientVector();

		Client* begin();
		Client* end();

		void AddMemory();
		void Add(Client);
		void Remove(int);

		int getSize();

		bool isEmpty();
		void SortBySurname();

		Client& operator[] (int);

		friend ostream& operator<<(ostream&, ClientVector&);
	};
}
