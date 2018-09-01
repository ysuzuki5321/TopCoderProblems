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
#include "CorporationSalary.h"
#include "RodCut.h"
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
	RodCut bc;
	cout << bc.Calc(2, { 1,3 }) << "\n";
	cout << bc.Calc(4, { 2,3,7,8 }) << "\n";
	cout << bc.Calc(6, { 2,4,7,9,12,13 }) << "\n";
	cout << bc.Calc(6, { 3,4,7,9,12,13 }) << "\n";
	return 0;
}