#include "StockHistory.h"
#include "BatchSystem.h"
#include "CutSticks.h"
#include "TwoStringMasks.h"
#include "InfiniteSequence2.h"
#include "FloorBoards.h"
#include "SortingGame.h"
#include "CountExpressions.h"
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
	CountExpressions ce;
	cout << ce.calcExpressions(7, 8, 16) << " : 9\n";
	cout << ce.calcExpressions(100, 1, 10000) << " : 12\n";
	cout << ce.calcExpressions(-100, 100, 2) << " : 0\n";
	cout << ce.calcExpressions(3, 5, 7) << " : 5\n";
	cout << ce.calcExpressions(34, 67, 95) << " : 0\n";
	cout << ce.calcExpressions(12, 24, 36) << " : 0\n";
	cout << ce.calcExpressions(25, 50, 1000) << " : 0\n";
	cout << ce.calcExpressions(99, 100, 98010000) << " : 6\n";
	cout << ce.calcExpressions(48, -65, -153985) << " : 1\n";
	cout << ce.calcExpressions(-53, -64, -179712) << " : 3\n";
	cout << ce.calcExpressions(-61, -77, -286594) << " : 3\n";
	cout << ce.calcExpressions(-13, -52, 0) << " : 14\n";
	cout << ce.calcExpressions(-87, 43, 43) << " : 1\n";
	cout << ce.calcExpressions(-96, -95, 18335) << " : 1\n";
	cout << ce.calcExpressions(-35, -38, 1444) << " : 6\n";
	cout << ce.calcExpressions(-87, -15, -113310) << " : 1\n";
	cout << ce.calcExpressions(73, -95, -497230) << " : 1\n";
	cout << ce.calcExpressions(-83, -31, -212598) << " : 1\n";
	cout << ce.calcExpressions(-80, -30, 5760000) << " : 6\n";
	cout << ce.calcExpressions(-99, 42, -1764) << " : 2\n";
	cout << ce.calcExpressions(-23, 5, 2640) << " : 3\n";
	cout << ce.calcExpressions(-84, -92, -649060) << " : 3\n";
	cout << ce.calcExpressions(-99, -22, -216106) << " : 1\n";
	cout << ce.calcExpressions(-72, -59, 7765) << " : 0\n";
	cout << ce.calcExpressions(-82, 58, -129) << " : 0\n";
	cout << ce.calcExpressions(-75, -92, -9202) << " : 0\n";
	cout << ce.calcExpressions(100, -100, 100000000) << " : 6\n";
	cout << ce.calcExpressions(100, -100, -100000000) << " : 0\n";
	cout << ce.calcExpressions(2, 3, 6) << " : 13\n";
	cout << ce.calcExpressions(1, 2, 6) << " : 15\n";
	cout << ce.calcExpressions(-1, 1, 0) << " : 36\n";
	cout << ce.calcExpressions(100, -100, 100) << " : 6\n";
	cout << ce.calcExpressions(100, -100, -100) << " : 6\n";
	cout << ce.calcExpressions(1, 2, 5) << " : 17\n";
	cout << ce.calcExpressions(-100, -99, 9901) << " : 4\n";
	cout << ce.calcExpressions(-100, -50, 100) << " : 7\n";
	cout << ce.calcExpressions(-100, -1, -1) << " : 8\n";
	cout << ce.calcExpressions(-100, -99, -200) << " : 9\n";
	cout << ce.calcExpressions(-100, -51, -200) << " : 10\n";
	cout << ce.calcExpressions(-100, -49, -200) << " : 11\n";
	cout << ce.calcExpressions(-4, -2, -4) << " : 16\n";
	cout << ce.calcExpressions(-100, -1, 0) << " : 19\n";
	cout << ce.calcExpressions(-100, 100, -10000) << " : 18\n";
	cout << ce.calcExpressions(-4, 4, -16) << " : 21\n";
	cout << ce.calcExpressions(-4, -2, 0) << " : 20\n";
	cout << ce.calcExpressions(-2, -1, 0) << " : 22\n";
	cout << ce.calcExpressions(-100, 100, 0) << " : 24\n";
	cout << ce.calcExpressions(-2, 2, 4) << " : 27\n";
	cout << ce.calcExpressions(-2, 0, 4) << " : 26\n";
	cout << ce.calcExpressions(-2, 2, 0) << " : 30\n";
	cout << ce.calcExpressions(-2, 2, -4) << " : 33\n";
	cout << ce.calcExpressions(0, 2, 4) << " : 38\n";
	cout << ce.calcExpressions(1, 0, 0) << " : 76\n";
	cout << ce.calcExpressions(100, 0, 1000) << " : 0\n";
	cout << ce.calcExpressions(2, 1, 6) << " : 15\n";
	cout << ce.calcExpressions(0, 1, 1) << " : 36\n";
	cout << ce.calcExpressions(0, 99, 99) << " : 17\n";
	cout << ce.calcExpressions(8, 7, 16) << " : 9\n";

	return 0;
}