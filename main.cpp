#include <iostream>
#include <chrono>
#include <cmath>
#define MAS_LEN 262144
#define WARM_NUM 100
#define NUM_CYCLE 10
using namespace std;
int main(int argc, const char * argv[]) {
	int l = 0;
	auto begin = chrono::steady_clock::now();
	auto end = chrono::steady_clock::now();
	auto elapsed_ms = chrono::duration_cast< chrono::milliseconds>(end - begin);

	for (int SizeNum = 0; SizeNum < 5; ++SizeNum) {

		if (SizeNum == 4) l = MAS_LEN * 12;
		else l = MAS_LEN*(int)pow(2, SizeNum);
		int* array = new int[l];
		cout << "          " << l / MAS_LEN << "Mb  ->  " ;

		
		for (int j = 0; j < WARM_NUM; ++j) {         // "Разогрев"
			for (size_t i = 0; i < l; ++i) {
				array[i] = 1;
			}
		}
		cout << "Warm Success" << endl<<endl;

		
		begin = chrono::steady_clock::now();         //  Forward direction
		for (int j = 0; j <NUM_CYCLE; ++j) {
			for (size_t i = 0; i < l; ++i) {
				array[i] = 1;
			}
		}
		end = chrono::steady_clock::now();
		elapsed_ms = chrono::duration_cast< chrono::milliseconds>(end - begin);
		cout << "Forward direction time " << elapsed_ms.count() << " ms" << '\n';

		// Reverse Diresction
		begin = chrono::steady_clock::now();
		for (int j = 0; j <NUM_CYCLE; ++j) {
			for (size_t i = l - 1; i > 0; --i) {
				array[i] = 1;
			}
		}
		end = chrono::steady_clock::now();
		elapsed_ms = chrono::duration_cast< chrono::milliseconds>(end - begin);
		cout << "Reversed direction time " << elapsed_ms.count() << " ms" << '\n';

		
		
		begin = chrono::steady_clock::now();       // Random direction
		for (int j = 0; j < NUM_CYCLE; ++j) {
			for (size_t i = 0; i < l; ++i) {
			 int	t = (int)(rand() % (l));
				array[t] = 1;
			}
		}
		end = chrono::steady_clock::now();
		elapsed_ms = chrono::duration_cast< chrono::milliseconds>(end - begin);
		cout << "Randomly chosen time " << elapsed_ms.count() << " ms" << '\n';
		delete[] array;
	}
	cin.get();
	return 0;
}
