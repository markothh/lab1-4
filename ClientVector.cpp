#include "ClientVector.h"

using namespace std;

namespace TSA
{
	ClientVector::ClientVector()
	{
		capacity = 1;
		vector = new Client[capacity];
		size = 0;
	}
	ClientVector::~ClientVector()
	{
		delete[] vector;
	}

	Client* ClientVector::begin()
	{
		return &vector[0];
	}

	Client* ClientVector::end()
	{
		return &vector[size];
	}

	void ClientVector::AddMemory()
	{
		Client* tmp = new Client[capacity];
		for (int i = 0; i < size; i++)
		{
			tmp[i] = vector[i];
		}
		delete[] vector;

		capacity *= 2;
		vector = new Client[capacity];
		for (int i = 0; i < size; i++)
		{
			vector[i] = tmp[i];
		}
		delete[] tmp;
	}

	void ClientVector::Add(Client client)
	{
		if (size >= capacity)
		{
			AddMemory();
		}

		vector[size] = client;
		size++;
	}

	void ClientVector::Remove(int index)
	{
		for (int i = 0; i < size - 1; i++)
		{
			vector[i] = vector[i + 1];
		}

		vector[size] = Client();
		size--;
	}

	void ClientVector::SortBySurname()
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (vector[i] < vector[j])
				{
					std::swap(vector[i], vector[j]);
				}
			}
		}
	}

	int ClientVector::getSize()
	{
		return size;
	}

	bool ClientVector::isEmpty()
	{
		return size == 0;
	}

	Client& ClientVector::operator[] (int index)
	{
		return vector[index];
	}

	ostream& operator<<(ostream& out, ClientVector& clients)
	{
		for (int i = 0; i < clients.size; i++)
		{
			out << clients[i] << endl;
		}

		return out;
	}
}