#include "StockHistory.h"
#include "BatchSystem.h"
#include "CutSticks.h"
#include "TwoStringMasks.h"
#include "InfiniteSequence2.h"
#include "FloorBoards.h"
#include "SortingGame.h"
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
	SortingGame sg;
	cout << sg.fewestMoves({ 8, 6, 5, 2, 3, 4, 7, 1 }, 4) << " : 10\n";
	cout << sg.fewestMoves({ 5, 4, 3, 2, 1 }, 4) << " : 5\n";
	cout << sg.fewestMoves({ 1, 2 }, 2) << " : 0\n";
	cout << sg.fewestMoves({ 2, 1 }, 2) << " : 1\n";
	cout << sg.fewestMoves({ 4, 3, 1, 5, 2 }, 2) << " : 6\n";
	cout << sg.fewestMoves({ 3, 2, 1 }, 3) << " : 1\n";
	cout << sg.fewestMoves({ 5, 4, 3, 2, 1 }, 2) << " : 10\n";
	cout << sg.fewestMoves({ 8, 7, 6, 5, 4, 3, 2, 1 }, 2) << " : 28\n";
	cout << sg.fewestMoves({ 1, 2, 3, 4, 5, 6 }, 3) << " : 0\n";
	cout << sg.fewestMoves({ 1, 2, 3 }, 3) << " : 0\n";
	cout << sg.fewestMoves({ 3, 2, 4, 1, 5 }, 4) << " : -1\n";
	cout << sg.fewestMoves({ 1, 4, 3, 2, 5 }, 5) << " : -1\n";
	cout << sg.fewestMoves({ 2, 5, 1, 4, 3 }, 3) << " : -1\n";
	cout << sg.fewestMoves({ 2, 5, 3, 4, 1 }, 3) << " : -1\n";
	cout << sg.fewestMoves({ 2, 1, 4, 3, 5 }, 3) << " : -1\n";
	cout << sg.fewestMoves({ 5, 4, 1, 2, 3 }, 3) << " : 3\n";
	cout << sg.fewestMoves({ 5, 2, 1, 4, 3 }, 3) << " : 2\n";
	cout << sg.fewestMoves({ 5, 4, 3, 2, 1 }, 3) << " : 4\n";
	cout << sg.fewestMoves({ 2, 4, 6, 5, 3, 1 }, 2) << " : 9\n";
	cout << sg.fewestMoves({ 6, 3, 1, 2, 5, 4 }, 2) << " : 8\n";
	cout << sg.fewestMoves({ 3, 4, 6, 2, 5, 1 }, 4) << " : -1\n";
	cout << sg.fewestMoves({ 4, 1, 2, 3, 5, 6 }, 3) << " : -1\n";
	cout << sg.fewestMoves({ 3, 4, 2, 6, 5, 1 }, 2) << " : 8\n";
	cout << sg.fewestMoves({ 2, 5, 6, 3, 1, 4 }, 4) << " : 6\n";
	cout << sg.fewestMoves({ 5, 6, 3, 2, 1, 4 }, 3) << " : 5\n";
	cout << sg.fewestMoves({ 2, 6, 4, 3, 7, 5, 1 }, 3) << " : -1\n";
	cout << sg.fewestMoves({ 2, 4, 6, 7, 1, 5, 3 }, 4) << " : 7\n";
	cout << sg.fewestMoves({ 1, 2, 3, 4, 5, 6, 7 }, 2) << " : 0\n";
	cout << sg.fewestMoves({ 5, 4, 2, 1, 6, 3, 7 }, 2) << " : 9\n";
	cout << sg.fewestMoves({ 2, 1, 5, 4, 3, 7, 6 }, 2) << " : 5\n";
	cout << sg.fewestMoves({ 1, 4, 6, 7, 2, 5, 3 }, 4) << " : -1\n";
	cout << sg.fewestMoves({ 2, 6, 4, 1, 7, 3, 5 }, 2) << " : 9\n";
	cout << sg.fewestMoves({ 1, 5, 2, 3, 4, 7, 6 }, 3) << " : -1\n";
	cout << sg.fewestMoves({ 1, 6, 3, 4, 2, 7, 5 }, 5) << " : -1\n";
	cout << sg.fewestMoves({ 3, 2, 7, 4, 5, 6, 1 }, 5) << " : 4\n";
	cout << sg.fewestMoves({ 2, 3, 4, 5, 6, 7, 1 }, 6) << " : 6\n";
	cout << sg.fewestMoves({ 7, 6, 5, 4, 3, 2, 1 }, 6) << " : 7\n";
	cout << sg.fewestMoves({ 7, 6, 5, 4, 3, 2, 1 }, 2) << " : 21\n";
	cout << sg.fewestMoves({ 8, 7, 6, 5, 4, 3, 2, 1 }, 2) << " : 28\n";
	cout << sg.fewestMoves({ 8, 5, 1, 2, 4, 3, 6, 7 }, 3) << " : -1\n";
	cout << sg.fewestMoves({ 7, 2, 1, 6, 8, 4, 3, 5 }, 4) << " : 7\n";
	cout << sg.fewestMoves({ 8, 1, 4, 6, 5, 7, 2, 3 }, 2) << " : 16\n";
	cout << sg.fewestMoves({ 6, 2, 5, 8, 3, 1, 7, 4 }, 5) << " : -1\n";
	cout << sg.fewestMoves({ 6, 7, 3, 2, 4, 5, 8, 1 }, 3) << " : -1\n";
	cout << sg.fewestMoves({ 7, 8, 5, 6, 3, 4, 1, 2 }, 3) << " : 12\n";
	cout << sg.fewestMoves({ 8, 7, 6, 5, 4, 3, 2, 1 }, 7) << " : -1\n";
	cout << sg.fewestMoves({ 5, 6, 7, 8, 1, 2, 3, 4 }, 7) << " : 4\n";
	cout << sg.fewestMoves({ 8, 7, 6, 5, 4, 3, 2, 1 }, 8) << " : 1\n";
	cout << sg.fewestMoves({ 8, 7, 6, 5, 4, 3, 2, 1 }, 2) << " : 28\n";
	cout << sg.fewestMoves({ 7, 4, 1, 6, 3, 8, 5, 2 }, 5) << " : 7\n";
	cout << sg.fewestMoves({ 8, 7, 6, 5, 4, 3, 2, 1 }, 6) << " : 28\n";
	cout << sg.fewestMoves({ 8, 7, 6, 5, 4, 3, 2, 1 }, 8) << " : 1\n";
	cout << sg.fewestMoves({ 7, 6, 5, 4, 3, 2, 1 }, 3) << " : 9\n";
	cout << sg.fewestMoves({ 6, 1, 4, 2, 7, 5, 3 }, 4) << " : 9\n";
	cout << sg.fewestMoves({ 3, 6, 7, 4, 1, 2, 5 }, 5) << " : 7\n";
	cout << sg.fewestMoves({ 5, 6, 3, 4, 1, 2 }, 3) << " : 6\n";
	cout << sg.fewestMoves({ 6, 4, 2, 5, 3, 1 }, 4) << " : 11\n";
	cout << sg.fewestMoves({ 3, 2, 1, 6, 5, 4 }, 5) << " : 3\n";
	cout << sg.fewestMoves({ 1, 2, 3, 4, 5, 6, 8, 7 }, 4) << " : -1\n";
	cout << sg.fewestMoves({ 7, 5, 3, 4, 8, 2, 6, 1 }, 2) << " : 19\n";
	cout << sg.fewestMoves({ 3, 2, 1 }, 3) << " : 1\n";
	cout << sg.fewestMoves({ 7, 2, 1, 6, 8, 4, 3, 5 }, 4) << " : 7\n";
	cout << sg.fewestMoves({ 5, 4, 3, 2, 1 }, 2) << " : 10\n";
	cout << sg.fewestMoves({ 7, 2, 1, 6, 8, 4, 3, 5 }, 2) << " : 14\n";
	cout << sg.fewestMoves({ 8, 4, 7, 2, 1, 5, 3, 6 }, 4) << " : -1\n";
	cout << sg.fewestMoves({ 8, 7, 6, 5, 4, 3, 2, 1 }, 6) << " : 28\n";
	cout << sg.fewestMoves({ 4, 2, 5, 7, 1, 8, 3, 6 }, 6) << " : 21\n";
	cout << sg.fewestMoves({ 7, 1, 2, 8, 6, 4, 3, 5 }, 6) << " : 14\n";
	cout << sg.fewestMoves({ 8, 7, 6, 5, 4, 3, 2, 1 }, 4) << " : 6\n";
	cout << sg.fewestMoves({ 5, 3, 2, 4, 1, 7, 8, 6 }, 3) << " : -1\n";
	cout << sg.fewestMoves({ 7, 2, 1, 6, 8, 4, 3, 5 }, 3) << " : -1\n";
	cout << sg.fewestMoves({ 4, 5, 3, 8, 7, 1, 2, 6 }, 4) << " : -1\n";
	cout << sg.fewestMoves({ 6, 4, 1, 7, 3, 8, 5, 2 }, 6) << " : 23\n";
	cout << sg.fewestMoves({ 5, 3, 8, 2, 1, 4, 6, 7 }, 6) << " : 18\n";


	return 0;
}