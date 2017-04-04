 #include "DynArray.hh"


DynArray::DynArray():
	m_data(new int[m_capacity]),
	m_capacity(DYN_ARRAY_DEFAULT_SIZE),
	m_size(0)
{	
};

DynArray::DynArray(size_t size)
{
};

DynArray::DynArray(size_t size, const int &value):
	m_capacity(size),
	m_size(size),
	m_data(new int[size])
{
	fill(begin(), end(), value);
};

DynArray::DynArray(int *arr, size_t size):
	m_capacity(size),
	m_size(size),
	m_data(new int[size])
{
};

DynArray::~DynArray(void) 
{
	delete m_data;
};

void push(const int &val)
{

}