#include <iostream>
using namespace std;

template <typename DTYPE> class Data {
    private:
        DTYPE data;

    public:
        Data(DTYPE info);
        DTYPE get_data();
};

int main() {
	Data<string> str_data("C++");
	Data<int> int_data(10);
	
	cout << "str_data : " << str_data.get_data() << endl;	
	cout << "int_data : " << int_data.get_data() << endl;

	return 0;
}

template <typename DTYPE> Data<DTYPE>::Data(DTYPE info) {
	data = info;
}

template <typename DTYPE> DTYPE Data<DTYPE>::get_data() {
	return data;
}