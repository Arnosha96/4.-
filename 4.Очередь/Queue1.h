#pragma once
template <typename T>

class Queue1
{
private:
	T *arr;
	int index;
	int max;
	int min;


public:
	Queue1(int size)
	{
		max = size;
		index = 0;
		min = 0;
		arr = new T[size];
	}

	Queue1(const Queue1<T> & elem)
	{
		min = elem.min;
		max = elem.max;
		index = elem.index;
		arr = new int[index];

		for (int i(0); i < index; i++)  arr[i] = elem.arr[i];

	}

	~Queue1()
	{
		delete[] arr;
	}

	Queue1 & operator = (Queue1 & arr2)
	{
		delete[] arr;
		index = arr2.index;
		arr = new int[index];
		for (int i(0); i < index; i++)
		{
			arr[i] = arr2.arr[i];
		}
		return *this;
	}
	void Push(T k)
	{
		if (index == max)
		{
			throw  "Переполнение очереди";
		}
		else
		{
			arr[index] = k;
			cout << arr[index] << endl;
			index++;
		}
	}

	T Pop()
	{
		if (min < index) return arr[min++];
	}

	void resize()
	{
		min = 0;
		index = 0;
	}
};

