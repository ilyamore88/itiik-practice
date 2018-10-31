#pragma once

template<class T, class T1> class array
{
public:
	array(int size);
	T1 sum();
	T average_value();
	void show_array();
	int add_value(T);
private:
	T *data;
	int size;
	int index;
};

