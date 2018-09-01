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
#include "RevealTriangle.h"
#include "RelativePath.h"
#include "SymmetricPie.h"
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
	SymmetricPie sp;
	cout << sp.getLines({ 25, 25, 25, 25 }) << " : 2\n";
	cout << sp.getLines({ 50, 50 }) << " : 1\n";
	cout << sp.getLines({ 100 }) << " : 0\n";
	cout << sp.getLines({ 95, 5 }) << " : 0\n";
	cout << sp.getLines({ 12, 25, 13, 25, 25 }) << " : 2\n";
	cout << sp.getLines({ 1, 23, 27, 12, 37 }) << " : 1\n";
	cout << sp.getLines({ 10, 10, 10, 10, 10, 10, 20, 20 }) << " : 4\n";
	cout << sp.getLines({ 10, 20, 30, 40 }) << " : 1\n";
	cout << sp.getLines({ 25, 25, 1, 1, 2, 2, 22, 22 }) << " : 4\n";
	cout << sp.getLines({ 1, 1, 2, 2, 22, 22, 25, 25 }) << " : 4\n";
	cout << sp.getLines({ 33, 67 }) << " : 0\n";
	cout << sp.getLines({ 25, 10, 15, 25, 10, 15 }) << " : 3\n";
	cout << sp.getLines({ 1, 2, 3, 4, 5, 6, 7, 72 }) << " : 0\n";
	cout << sp.getLines({ 67, 24, 8, 1 }) << " : 0\n";
	cout << sp.getLines({ 10, 18, 39, 13, 9, 11 }) << " : 1\n";
	cout << sp.getLines({ 92, 1, 5, 1, 1 }) << " : 0\n";
	cout << sp.getLines({ 61, 7, 12, 14, 6 }) << " : 0\n";
	cout << sp.getLines({ 98, 1, 1 }) << " : 0\n";
	cout << sp.getLines({ 82, 17, 1 }) << " : 0\n";
	cout << sp.getLines({ 45, 45, 5, 1, 2, 1, 1 }) << " : 2\n";
	cout << sp.getLines({ 26, 38, 27, 9 }) << " : 0\n";
	cout << sp.getLines({ 74, 20, 3, 3 }) << " : 0\n";
	cout << sp.getLines({ 84, 3, 1, 9, 1, 2 }) << " : 0\n";
	cout << sp.getLines({ 37, 6, 25, 2, 8, 12, 8, 2 }) << " : 0\n";
	cout << sp.getLines({ 25, 60, 11, 4 }) << " : 0\n";
	cout << sp.getLines({ 50, 4, 34, 10, 1, 1 }) << " : 1\n";
	cout << sp.getLines({ 70, 27, 3 }) << " : 0\n";
	cout << sp.getLines({ 90, 5, 4, 1 }) << " : 0\n";
	cout << sp.getLines({ 74, 13, 2, 3, 1, 5, 2 }) << " : 0\n";
	cout << sp.getLines({ 56, 38, 4, 2 }) << " : 0\n";
	cout << sp.getLines({ 25, 46, 6, 10, 9, 2, 2 }) << " : 1\n";
	cout << sp.getLines({ 2, 56, 4, 14, 11, 6, 2, 5 }) << " : 0\n";
	cout << sp.getLines({ 60, 19, 16, 3, 2 }) << " : 0\n";
	cout << sp.getLines({ 28, 70, 2 }) << " : 0\n";
	cout << sp.getLines({ 85, 15 }) << " : 0\n";
	cout << sp.getLines({ 11, 20, 53, 8, 2, 1, 2, 3 }) << " : 0\n";
	cout << sp.getLines({ 12, 37, 21, 27, 1, 2 }) << " : 1\n";
	cout << sp.getLines({ 49, 48, 3 }) << " : 0\n";
	cout << sp.getLines({ 75, 9, 4, 10, 2 }) << " : 0\n";
	cout << sp.getLines({ 63, 12, 18, 5, 1, 1 }) << " : 0\n";
	cout << sp.getLines({ 88, 4, 6, 2 }) << " : 0\n";
	cout << sp.getLines({ 46, 4, 31, 14, 1, 1, 3 }) << " : 2\n";
	cout << sp.getLines({ 50, 35, 2, 4, 5, 2, 2 }) << " : 1\n";
	cout << sp.getLines({ 23, 27, 45, 5 }) << " : 1\n";
	cout << sp.getLines({ 50, 11, 38, 1 }) << " : 1\n";
	cout << sp.getLines({ 16, 28, 6, 25, 19, 2, 4 }) << " : 2\n";
	cout << sp.getLines({ 8, 41, 1, 35, 12, 2, 1 }) << " : 2\n";
	cout << sp.getLines({ 20, 18, 10, 2, 50 }) << " : 1\n";
	cout << sp.getLines({ 14, 36, 18, 8, 24 }) << " : 1\n";
	cout << sp.getLines({ 49, 1, 19, 28, 3 }) << " : 1\n";
	cout << sp.getLines({ 50, 23, 18, 9 }) << " : 1\n";
	cout << sp.getLines({ 21, 29, 33, 8, 9 }) << " : 1\n";
	cout << sp.getLines({ 20, 19, 11, 16, 18, 16 }) << " : 1\n";
	cout << sp.getLines({ 30, 7, 5, 3, 5, 50 }) << " : 1\n";
	cout << sp.getLines({ 46, 4, 50 }) << " : 1\n";
	cout << sp.getLines({ 50, 11, 24, 14, 1 }) << " : 1\n";
	cout << sp.getLines({ 7, 12, 7, 21, 3, 7, 43 }) << " : 2\n";
	cout << sp.getLines({ 37, 12, 1, 4, 10, 19, 17 }) << " : 1\n";
	cout << sp.getLines({ 29, 8, 4, 9, 37, 6, 4, 3 }) << " : 3\n";
	cout << sp.getLines({ 49, 51 }) << " : 0\n";
	cout << sp.getLines({ 50, 49, 1 }) << " : 1\n";
	cout << sp.getLines({ 50, 48, 2 }) << " : 1\n";
	cout << sp.getLines({ 1, 48, 48, 1, 1, 1 }) << " : 3\n";
	cout << sp.getLines({ 1, 48, 48, 3 }) << " : 0\n";
	cout << sp.getLines({ 30, 10, 10, 30, 5, 5, 5, 5 }) << " : 4\n";
	cout << sp.getLines({ 30, 10, 10, 30, 5, 10, 5 }) << " : 3\n";
	cout << sp.getLines({ 24, 25, 25, 25, 1 }) << " : 2\n";
	cout << sp.getLines({ 37, 11, 1, 1, 27, 23 }) << " : 1\n";
	cout << sp.getLines({ 50, 29, 20, 1 }) << " : 1\n";
	cout << sp.getLines({ 21, 29, 23, 14, 1, 6, 3, 3 }) << " : 2\n";
	cout << sp.getLines({ 40, 7, 3, 14, 10, 16, 10 }) << " : 2\n";
	cout << sp.getLines({ 11, 28, 11, 43, 7 }) << " : 1\n";
	cout << sp.getLines({ 50, 5, 45 }) << " : 1\n";
	cout << sp.getLines({ 41, 5, 1, 3, 50 }) << " : 1\n";
	cout << sp.getLines({ 39, 2, 3, 4, 2, 17, 16, 17 }) << " : 1\n";
	cout << sp.getLines({ 10, 40, 3, 43, 3, 1 }) << " : 1\n";
	cout << sp.getLines({ 50, 7, 38, 5 }) << " : 1\n";
	cout << sp.getLines({ 12, 12, 14, 12, 12, 12, 14, 12 }) << " : 4\n";
	cout << sp.getLines({ 13, 12, 13, 12, 12, 13, 13, 12 }) << " : 4\n";
	cout << sp.getLines({ 12, 12, 76 }) << " : 0\n";
	cout << sp.getLines({ 12, 12, 12, 12, 12, 12, 12, 16 }) << " : 0\n";
	cout << sp.getLines({ 10, 40, 10, 40 }) << " : 2\n";
	cout << sp.getLines({ 10, 50, 40 }) << " : 1\n";
	cout << sp.getLines({ 50, 50 }) << " : 1\n";
	cout << sp.getLines({ 1, 48, 1, 1, 48, 1 }) << " : 3\n";
	cout << sp.getLines({ 2, 2, 96 }) << " : 0\n";
	cout << sp.getLines({ 10, 10, 40, 40 }) << " : 2\n";
	cout << sp.getLines({ 95, 5 }) << " : 0\n";
	cout << sp.getLines({ 1, 7, 3, 5, 37, 6, 38, 3 }) << " : 2\n";
	cout << sp.getLines({ 12, 7, 14, 1, 18, 24, 11, 13 }) << " : 2\n";
	cout << sp.getLines({ 40, 40, 10, 10 }) << " : 2\n";
	cout << sp.getLines({ 11, 12, 10, 3, 14, 14, 25, 11 }) << " : 3\n";
	cout << sp.getLines({ 40, 40, 9, 5, 5, 1 }) << " : 2\n";
	cout << sp.getLines({ 10, 10, 10, 10, 10, 10, 10, 30 }) << " : 3\n";
	cout << sp.getLines({ 20, 20, 20, 20, 5, 5, 5, 5 }) << " : 4\n";
	cout << sp.getLines({ 1, 1, 1, 1, 48, 48 }) << " : 3\n";
	cout << sp.getLines({ 10, 10, 10, 10, 15, 15, 15, 15 }) << " : 4\n";
	cout << sp.getLines({ 25, 23, 1, 35, 1, 15 }) << " : 1\n";
	cout << sp.getLines({ 15, 15, 15, 15, 10, 10, 10, 10 }) << " : 4\n";
	cout << sp.getLines({ 33, 33, 34 }) << " : 0\n";
	cout << sp.getLines({ 48, 48, 2, 2 }) << " : 2\n";
	cout << sp.getLines({ 25, 20, 25, 30 }) << " : 1\n";
	cout << sp.getLines({ 10, 10, 10, 10, 10, 50 }) << " : 1\n";
	cout << sp.getLines({ 48, 48, 1, 1, 1, 1 }) << " : 3\n";
	cout << sp.getLines({ 30, 10, 20, 10, 5, 10, 5, 10 }) << " : 3\n";
	cout << sp.getLines({ 10, 10, 5, 5, 11, 24, 21, 14 }) << " : 3\n";
	cout << sp.getLines({ 37, 37, 13, 13 }) << " : 2\n";
	cout << sp.getLines({ 40, 30, 20, 10 }) << " : 1\n";
	cout << sp.getLines({ 49, 1, 25, 25 }) << " : 1\n";
	cout << sp.getLines({ 100 }) << " : 0\n";
	cout << sp.getLines({ 15, 25, 10, 10, 5, 13, 12, 10 }) << " : 3\n";
	cout << sp.getLines({ 30, 30, 20, 20 }) << " : 2\n";
	cout << sp.getLines({ 5, 20, 30, 45 }) << " : 1\n";
	cout << sp.getLines({ 20, 30, 30, 20 }) << " : 2\n";
	cout << sp.getLines({ 5, 40, 40, 5, 10 }) << " : 2\n";
	cout << sp.getLines({ 1, 2, 3, 47, 47 }) << " : 2\n";
	cout << sp.getLines({ 30, 20, 20, 20, 10 }) << " : 2\n";
	cout << sp.getLines({ 15, 45, 35, 5 }) << " : 1\n";
	cout << sp.getLines({ 25, 25, 30, 20 }) << " : 1\n";


	return 0;
}