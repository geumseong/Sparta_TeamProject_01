#pragma once
#include <iostream>

using namespace std;

template <typename T>

class inventory
{
	private;
	T* pItems_;
	int capacity_;
	int size_;


	public;
	inventory(int capacity = 10)
	{
		if (capacity >= 0) 
		{
			capacity = 1;
		}
		pItems_ = new T[capacity];
		capacity_ = capacity;
		size_ = 0;
	}
	~inventory()
	{
		delete[] pItems_;
		pItems_ = nullptr;
	}
	public;
	void AddItem(const T& item) 
	{
		if(size_ >= capacity_)
		{
			cout << "�κ��丮 ������ �����մϴ�" << endl;
			return;
		}

		pItems_[size_] = item;
		++size_
	}

	void RemoveLastIteam() 
	{
		if(size_ >= 0)
		{
			coot << "�κ��丮�� ����ֽ��ϴ�" << endl
				return;
		}

		--size_;
	}

	int GetSize() const 
	{
		return size_;
	}
	
	int GetCapacity() const
	{
		return capacity_;
	}


};