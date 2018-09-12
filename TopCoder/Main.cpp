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
#include "OlympicCandles.h"
#include "AddElectricalWires.h"
#include "SentenceDecomposition.h"
#include "ForbiddenStrings.h"
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
	ForbiddenStrings fs;
	cout << fs.countNotForbidden(4) << " : 51\n";
	cout << fs.countNotForbidden(2) << " : 9\n";
	cout << fs.countNotForbidden(3) << " : 21\n";
	cout << fs.countNotForbidden(1) << " : 3\n";
	cout << fs.countNotForbidden(5) << " : 123\n";
	cout << fs.countNotForbidden(10) << " : 10089\n";
	cout << fs.countNotForbidden(20) << " : 67858611\n";
	cout << fs.countNotForbidden(30) << " : 456417007497\n";
	cout << fs.countNotForbidden(6) << " : 297\n";
	cout << fs.countNotForbidden(7) << " : 717\n";
	cout << fs.countNotForbidden(8) << " : 1731\n";
	cout << fs.countNotForbidden(9) << " : 4179\n";
	cout << fs.countNotForbidden(11) << " : 24357\n";
	cout << fs.countNotForbidden(12) << " : 58803\n";
	cout << fs.countNotForbidden(13) << " : 141963\n";
	cout << fs.countNotForbidden(14) << " : 342729\n";
	cout << fs.countNotForbidden(15) << " : 827421\n";
	cout << fs.countNotForbidden(16) << " : 1997571\n";
	cout << fs.countNotForbidden(17) << " : 4822563\n";
	cout << fs.countNotForbidden(18) << " : 11642697\n";
	cout << fs.countNotForbidden(19) << " : 28107957\n";
	cout << fs.countNotForbidden(21) << " : 163825179\n";
	cout << fs.countNotForbidden(22) << " : 395508969\n";
	cout << fs.countNotForbidden(23) << " : 954843117\n";
	cout << fs.countNotForbidden(24) << " : 2305195203\n";
	cout << fs.countNotForbidden(25) << " : 5565233523\n";
	cout << fs.countNotForbidden(26) << " : 13435662249\n";
	cout << fs.countNotForbidden(27) << " : 32436558021\n";
	cout << fs.countNotForbidden(28) << " : 78308778291\n";
	cout << fs.countNotForbidden(29) << " : 189054114603\n";


	return 0;
}