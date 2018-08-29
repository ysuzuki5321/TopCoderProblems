#include "StockHistory.h"
#include "BatchSystem.h"
#include "CutSticks.h"
#include "TwoStringMasks.h"
#include "InfiniteSequence2.h"
#include "FloorBoards.h"
#include "SortingGame.h"
#include "CountExpressions.h"
#include "AvoidingProduct.h"
#include "FIELDDiagrams.h"
using namespace std;
template<typename T>
void display(vector<T> left, vector<T> right) {
	if (left.size() != right.size()) {

		cout << "Deferent size!!!!\n";
		return;
	}
	bool fail = false;
	for (size_t i = 0; i < left.size(); i++)
	{
		if (left[i] != right[i]) {
			cout << "left :" << left[i] << " right : " << right[i] << "\n";
			fail = true;
		}
	}
	if (!fail)cout << "Success!!!!!\n"; 
}
int main() {
	FIELDDiagrams fd;
	cout << fd.countDiagrams(2) << "\n";
	cout << fd.countDiagrams(3) << "\n";
	cout << fd.countDiagrams(5) << "\n";

	return 0;
}