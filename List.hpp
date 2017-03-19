#ifndef LIST_HPP
#define LIST_HPP

#include <stdio.h>
#include <fstream>
#include <iostream>

struct element
{
	int key;
	element* next;
	element* prev;
};

struct dls
{
private:
	element* head;
	element* tail;
	int size;
public:
	//head_0 <-> elem_1 <-> tail_2
	dls()
	{
		head = NULL;
		tail = NULL;
		size = 0;
	}
	void push_back(int key_c)
	{
		if (tail)
		{
			if (head == tail)
			{
				element* new_ = new element;
				new_->key = key_c;
				tail = new_;
				head->next = tail;
				tail->prev = head;
				tail->next = NULL;
				size++;
			}
			else
			{
				element* new_ = new element;
				new_->key = key_c;
				tail->next = new_;
				new_->prev = tail;
				new_->next = NULL;
				tail = new_;
				size++;
			}
		}
		else
		{
			head = new element;
			tail = head;
			head->next = NULL;
			head->prev = NULL;
			head->key = key_c;
			size++;
		}
	}
	void pop()
	{
		if (tail)
		{
			if (tail == head)
			{
				delete(tail);
				tail = NULL;
				head = NULL;
				size--;
			}
			else
			{
				element* fordel = tail;
				tail = tail->prev;
				delete(fordel);
				size--;
			}
		}
	}
	int operator[](int index)
	{
		if(index >= 0 && index < size)
		{
			element *current_runner = head;
			for(int i = 0; i < index; i++)
			{
				current_runner = current_runner->next;
			}
			return current_runner->key;
		}

	}
};

#endif


