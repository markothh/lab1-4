#pragma once

using namespace std;

namespace TSA
{
	template <typename T>
	class Iterator
	{
	private:
		T* p;

	public:
		Iterator(Iterator&);

		T operator*();
		T& operator++();
	};


	template <typename T>
	Iterator<T>::Iterator(Iterator& it) : p(it.p) {}

	template <typename T>
	T Iterator<T>::operator*()
	{
		return* p;
	}

	template <typename T>
	T& Iterator<T>::operator++()
	{
		p++;
		return *this;
	}
}