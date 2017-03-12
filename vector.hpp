#include <iostream>
#include <algorithm>
using namespace std;

#ifndef VECTOR_HPP
#define VECTOR_HPP

template <class T> 
class vector{
    private:
        T *array;
        int array_size; 
        int realsize;
    public:
    vector()
    {
        array_size = 0;
        realsize = 0;
        array = new T[array_size];
    }

    vector(vector &Another)
    {
        this->array_size = Another.size();
        realsize = Another.real_size();
        array = new T[realsize];
        for(int i = 0 ;i < realsize; i++)
            array[i] = Another[i];
    }

    ~vector()
    {
        delete(array);
    }

    int size()
    {
        return array_size;
    }

    int real_size()
    {
        return realsize;
    }

    T operator[](int index)
    {
        if(index >= 0 && index < array_size)
            return array[index]; 
    }

    friend void swap(vector &a, vector &b)
    {
        using std::swap;
        swap(a.array_size, b.array_size);
        swap(a.realsize, b.realsize);
        swap(a.array, b.array);
    }

    vector &operator= (const vector &Another)
    {
        vector tmp(Another);
        swap(*this, tmp);
        return *this;
    }

    // realsize = {0,1,2,4,7,...} size = {0,1,2,3,4,..}
    void push_back(T data)
    {
        if(array_size == 0)
        {
            T *result = new T[1];
            result[0] = data;
            delete[] array;
            array = result;
            array_size++;
            realsize++;
        }
        else
        {
            array_size++;
            if(array_size > realsize)
            {
                realsize *= 3;
                realsize /= 2;
                realsize += 1;
                T *result = new T[realsize];
                for(int i = 0; i < array_size - 1; i++)
                {
                    result[i] =  array[i];
                }
                result[array_size - 1] = data;
                for(int i = array_size; i < realsize; i++)
                {
                    result[i] = 0;
                }
                delete[]array;
                array = result;
            }
            else
            {
                array_size++;
                array[array_size - 1] = data;
            }
        }
    }

    void pop()
    {
        if(array_size >= 1)
            array_size--;
    }
/*
    void write()
    {
        for(int i = 0; i < array_size; i++)
            cout << " " << array[i];
    }*/
};

#endif
