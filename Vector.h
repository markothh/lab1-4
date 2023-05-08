#pragma once

#include "Iterator.h"
#include <iostream>

using namespace std;

namespace TSA
{
	template <typename T>
	class Vector
	{
	private:
		T* vector;
		int size;
		int capacity;

	public:
		Vector();
		~Vector();

		T* begin();
		T* end();

		void AddMemory();
		void Add(T);
		void Remove(int);

		int getSize();

		bool isEmpty();
		void SortBySurname();

		T& operator[] (int);

		friend ostream& operator<<(ostream&, Vector&);
	};

	template <typename T>
	Vector<T>::Vector()
	{
		capacity = 1;
		vector = new T[capacity];
		size = 0;
	}

	template <typename T>
	Vector<T>::~Vector()
	{
		delete[] vector;
	}

	template <typename T>
	T* Vector<T>::begin()
	{
		return &vector[0];
	}

	template <typename T>
	T* Vector<T>::end()
	{
		return &vector[size];
	}

	template <typename T>
	void Vector<T>::AddMemory()
	{
		T* tmp = new T[capacity];
		for (int i = 0; i < size; i++)
		{
			tmp[i] = vector[i];
		}
		delete[] vector;

		capacity *= 2;
		vector = new T[capacity];
		for (int i = 0; i < size; i++)
		{
			vector[i] = tmp[i];
		}
		delete[] tmp;
	}

	template <typename T>
	void Vector<T>::Add(T item)
	{
		if (size >= capacity)
		{
			AddMemory();
		}

		vector[size] = item;
		size++;
	}

	template <typename T>
	void Vector<T>::Remove(int index)
	{
		for (int i = 0; i < size - 1; i++)
		{
			vector[i] = vector[i + 1];
		}

		vector[size] = T();
		size--;
	}

	template <typename T>
	void Vector<T>::SortBySurname()
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

	template <typename T>
	int Vector<T>::getSize()
	{
		return size;
	}

	template <typename T>
	bool Vector<T>::isEmpty()
	{
		return size == 0;
	}

	template <typename T>
	T& Vector<T>::operator[] (int index)
	{
		return vector[index];
	}

	template <typename T>
	ostream& operator<<(ostream& out, Vector<T>& items)
	{
		for (int i = 0; i < items.size; i++)
		{
			out << items[i] << endl;
		}

		return out;
	}
}
