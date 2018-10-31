#include "Header.h"

template<class T, class T1> array<T, T1>::array(int size)
{
	data = new T[size];
	if (data == std::NULL)
	{
		std::cerr << "Error memory ---- exit program" << std::endl;
		std::exit(1);
	}
	array::size = size;
	array::index = 0;
}
template<class T, class T1> T1 array<T, T1>::sum()
{
	T1 sum = 0;
	for (int i = 0; i < index; i++) sum += data[i];
	return(sum);
}
template<class T, class T1> T array<T, T1>::average_value()
{
	T1 sum = 0;
	for (int i = 0; i < index; i++) sum += data[i];
	return (sum / index);
}
template<class T, class T1> void array<T, T1>::show_array()
{
	for (int i = 0; i < index; i++) std::cout << data[i] << ' ';
	std::cout << std::endl;
}
template<class T, class T1> int array<T, T1>::add_value(T value)
{
	if (index == size)
		return(-1);
	else
	{
		data[index] = value;
		index++;
		return(0);
	}
}