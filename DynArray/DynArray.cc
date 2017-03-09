 #include "DynArray.hh"


DynArray::DynArray() 
{
	m_data = new int[DYN_ARRAY_DEFAULT_SIZE];
	m_capacity = DYN_ARRAY_DEFAULT_SIZE;
	m_size = 0;
};

DynArray::DynArray(size_t size) 
{
	m_data = new int[size];
};

DynArray::DynArray(size_t size, const int &value)
{


	
};

DynArray::DynArray(int *arr, size_t size)
{
	
	arr = new int[size];
	m_capacity = size;
	m_size = 0;
};


DynArray::~DynArray(void) 
{
	delete m_data;
};