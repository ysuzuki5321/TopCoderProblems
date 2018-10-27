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
#include "Embassy.h"
#include "ShipLoading.h"
#include "NextNumber.h"
#include "TemplateMatching.h"
#include "TwoLotteryGames.h"
#include "Undo.h"
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
	Undo ud;
	cout << ud.getText({ "type e", "type c", "type t", "undo 3", "type a", "undo 2", "type x", "undo 2" }, { 1, 2, 5, 7, 9, 12, 13, 1000 }) << " : ecax\n";
	cout << ud.getText({ "type a", "type b", "undo 2", "undo 2" }, { 1, 2, 3, 4 }) << " : a\n";
	cout << ud.getText({ "type i", "undo 2", "undo 2", "undo 4", "undo 1" }, { 1, 2, 3, 4, 5 }) << " : \n";
	cout << ud.getText({ "type i", "undo 2", "undo 2", "undo 4"}, { 1, 2, 3,4}) << " : \n";


	cout << ud.getText({ "type a", "type b", "type c", "undo 3" }, { 1, 2, 3, 5 }) << " : a\n";
	cout << ud.getText({ "type a", "undo 1", "undo 1" }, { 1, 2, 3 }) << " : a\n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 10" }, { 1, 2, 3, 1000 }) << " : abc\n";
	cout << ud.getText({ "undo 1" }, { 1 }) << " : \n";
	cout << ud.getText({ "type a", "undo 1", "undo 2", "undo 3", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "undo 12", "undo 13", "undo 14", "undo 15", "undo 16", "undo 17", "undo 18", "undo 19", "undo 20", "undo 21", "undo 22", "undo 23", "undo 24", "undo 25", "undo 26", "undo 27", "undo 28", "undo 29", "undo 30", "undo 31", "undo 32", "undo 33", "undo 34", "undo 35", "undo 36", "undo 37", "undo 38", "undo 39", "undo 40", "undo 41", "undo 42", "undo 43", "undo 44", "undo 45", "undo 46", "undo 47", "undo 48", "undo 49" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 }) << " : \n";
	cout << ud.getText({ "type a", "undo 1", "undo 1", "undo 2", "undo 3", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "undo 12", "undo 13", "undo 14", "undo 15", "undo 16", "undo 17", "undo 18", "undo 19", "undo 20", "undo 21", "undo 22", "undo 23", "undo 24", "undo 25", "undo 26", "undo 27", "undo 28", "undo 29", "undo 30", "undo 31", "undo 32", "undo 33", "undo 34", "undo 35", "undo 36", "undo 37", "undo 38", "undo 39", "undo 40", "undo 41", "undo 42", "undo 43", "undo 44", "undo 45", "undo 46", "undo 47", "undo 48" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 }) << " : a\n";
	cout << ud.getText({ "type a", "undo 1", "undo 1", "undo 2", "undo 3", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "undo 12", "undo 13", "undo 14", "undo 15", "undo 16", "undo 17", "undo 18", "undo 19", "undo 20", "undo 21", "undo 22", "undo 23", "undo 24", "undo 25", "undo 26", "undo 27", "undo 28", "undo 29", "undo 30", "undo 31", "undo 32", "undo 33", "undo 34", "undo 35", "undo 36", "undo 37", "undo 38", "undo 39", "undo 40", "undo 41", "undo 42", "undo 43", "undo 44", "undo 45", "undo 46", "undo 47" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 }) << " : a\n";
	cout << ud.getText({ "type a", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 }) << " : \n";
	cout << ud.getText({ "type a", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 }) << " : a\n";
	cout << ud.getText({ "type e", "type z", "type h", "type i", "type k", "type i", "type h", "type r", "type y", "type u", "type s", "type h", "type e", "type c", "type h", "type k", "type i" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 }) << " : ezhikihryushechki\n";
	cout << ud.getText({ "type i" }, { 1 }) << " : i\n";
	cout << ud.getText({ "type d" }, { 1 }) << " : d\n";
	cout << ud.getText({ "type g" }, { 1 }) << " : g\n";
	cout << ud.getText({ "undo 1" }, { 1 }) << " : \n";
	cout << ud.getText({ "undo 1" }, { 1 }) << " : \n";
	cout << ud.getText({ "type w" }, { 709 }) << " : w\n";
	cout << ud.getText({ "type a" }, { 162 }) << " : a\n";
	cout << ud.getText({ "type y" }, { 557 }) << " : y\n";
	cout << ud.getText({ "undo 184" }, { 431 }) << " : \n";
	cout << ud.getText({ "undo 235" }, { 790 }) << " : \n";
	cout << ud.getText({ "type t" }, { 129300153 }) << " : t\n";
	cout << ud.getText({ "type s" }, { 556203967 }) << " : s\n";
	cout << ud.getText({ "type v" }, { 576478126 }) << " : v\n";
	cout << ud.getText({ "undo 929707708" }, { 845404810 }) << " : \n";
	cout << ud.getText({ "type p" }, { 545371077 }) << " : p\n";
	cout << ud.getText({ "type l" }, { 71188256 }) << " : l\n";
	cout << ud.getText({ "type q" }, { 264964176 }) << " : q\n";
	cout << ud.getText({ "type n" }, { 127273860 }) << " : n\n";
	cout << ud.getText({ "type q" }, { 552408809 }) << " : q\n";
	cout << ud.getText({ "type m" }, { 939884353 }) << " : m\n";
	cout << ud.getText({ "type i", "type j" }, { 1, 2 }) << " : ij\n";
	cout << ud.getText({ "type u", "undo 1" }, { 1, 2 }) << " : \n";
	cout << ud.getText({ "type g", "type x" }, { 1, 2 }) << " : gx\n";
	cout << ud.getText({ "type n", "undo 1" }, { 1, 2 }) << " : \n";
	cout << ud.getText({ "type u", "type o" }, { 1, 2 }) << " : uo\n";
	cout << ud.getText({ "type t", "type q" }, { 3, 19 }) << " : tq\n";
	cout << ud.getText({ "type m", "type m" }, { 151, 182 }) << " : mm\n";
	cout << ud.getText({ "type w", "undo 559" }, { 146, 779 }) << " : w\n";
	cout << ud.getText({ "undo 603", "type i" }, { 844, 989 }) << " : i\n";
	cout << ud.getText({ "type u", "type m" }, { 79, 162 }) << " : um\n";
	cout << ud.getText({ "type c", "type f" }, { 428084459, 999572752 }) << " : cf\n";
	cout << ud.getText({ "type m", "type n" }, { 319910807, 960390214 }) << " : mn\n";
	cout << ud.getText({ "undo 825618543", "type l" }, { 164324038, 235147543 }) << " : l\n";
	cout << ud.getText({ "undo 789294499", "undo 367777466" }, { 36571142, 969085441 }) << " : \n";
	cout << ud.getText({ "type c", "type h" }, { 83053244, 580269453 }) << " : ch\n";
	cout << ud.getText({ "type s", "type b" }, { 449157849, 877712634 }) << " : sb\n";
	cout << ud.getText({ "type c", "type c" }, { 335010327, 795402386 }) << " : cc\n";
	cout << ud.getText({ "type x", "type j" }, { 320267400, 380905143 }) << " : xj\n";
	cout << ud.getText({ "undo 133845870", "undo 737897709" }, { 322773133, 540236808 }) << " : \n";
	cout << ud.getText({ "undo 159594969", "undo 962504047" }, { 633156333, 759908179 }) << " : \n";
	cout << ud.getText({ "type f", "type i", "type g" }, { 1, 2, 3 }) << " : fig\n";
	cout << ud.getText({ "type f", "type v", "type y" }, { 1, 2, 3 }) << " : fvy\n";
	cout << ud.getText({ "undo 2", "type c", "undo 2" }, { 1, 2, 3 }) << " : \n";
	cout << ud.getText({ "undo 3", "undo 3", "type k" }, { 1, 2, 3 }) << " : k\n";
	cout << ud.getText({ "type b", "type w", "undo 1" }, { 1, 2, 3 }) << " : b\n";
	cout << ud.getText({ "type m", "type n", "type j" }, { 409, 781, 931 }) << " : mnj\n";
	cout << ud.getText({ "type p", "type p", "type x" }, { 114, 642, 808 }) << " : ppx\n";
	cout << ud.getText({ "type g", "undo 688", "undo 826" }, { 608, 806, 908 }) << " : \n";
	cout << ud.getText({ "undo 294", "undo 519", "undo 136" }, { 1, 353, 863 }) << " : \n";
	cout << ud.getText({ "type f", "type m", "type v" }, { 118, 203, 449 }) << " : fmv\n";
	cout << ud.getText({ "type c", "type p", "type o" }, { 382109170, 466130267, 479816363 }) << " : cpo\n";
	cout << ud.getText({ "type m", "type k", "type y" }, { 62427568, 742457490, 829873673 }) << " : mky\n";
	cout << ud.getText({ "type e", "undo 465873346", "undo 248787200" }, { 448086244, 771669996, 797057937 }) << " : e\n";
	cout << ud.getText({ "undo 925311910", "undo 756946912", "undo 156758903" }, { 198292286, 210871048, 350012866 }) << " : \n";
	cout << ud.getText({ "type d", "type r", "undo 831369157" }, { 331930060, 832980154, 977388327 }) << " : \n";
	cout << ud.getText({ "type w", "type i", "type r" }, { 148174444, 604459445, 895544254 }) << " : wir\n";
	cout << ud.getText({ "type z", "type o", "type y" }, { 5511227, 256786770, 744388637 }) << " : zoy\n";
	cout << ud.getText({ "type s", "type e", "undo 420758490" }, { 10436845, 220136252, 743899008 }) << " : se\n";
	cout << ud.getText({ "undo 975175702", "undo 793015132", "undo 182477510" }, { 594469261, 726984762, 774707152 }) << " : \n";
	cout << ud.getText({ "undo 341034307", "type d", "undo 992243612" }, { 305499106, 632450708, 968604298 }) << " : \n";
	cout << ud.getText({ "type q", "type l", "type p", "type w", "type f" }, { 1, 2, 3, 4, 5 }) << " : qlpwf\n";
	cout << ud.getText({ "type k", "type w", "type u", "type h", "type w" }, { 1, 2, 3, 4, 5 }) << " : kwuhw\n";
	cout << ud.getText({ "undo 2", "type h", "undo 1", "undo 2", "undo 3" }, { 1, 2, 3, 4, 5 }) << " : \n";
	cout << ud.getText({ "undo 4", "undo 5", "undo 5", "undo 5", "undo 4" }, { 1, 2, 3, 4, 5 }) << " : \n";
	cout << ud.getText({ "type h", "type h", "type s", "type y", "type d" }, { 23, 395, 540, 634, 651 }) << " : hhsyd\n";
	cout << ud.getText({ "type s", "type z", "type d", "type c", "type t" }, { 87, 244, 297, 649, 856 }) << " : szdct\n";
	cout << ud.getText({ "undo 878", "type l", "undo 883", "type i", "undo 663" }, { 54, 383, 637, 919, 925 }) << " : \n";
	cout << ud.getText({ "undo 764", "type i", "undo 406", "undo 995", "undo 856" }, { 154, 320, 488, 660, 822 }) << " : \n";
	cout << ud.getText({ "type n", "type h", "type y", "type k", "type e" }, { 136, 211, 289, 632, 875 }) << " : nhyke\n";
	cout << ud.getText({ "type j", "type s", "type m", "type o", "type x" }, { 182309487, 555622643, 571482213, 936336584, 980304117 }) << " : jsmox\n";
	cout << ud.getText({ "type e", "type w", "type l", "type i", "type w" }, { 155069522, 183076919, 253585532, 612196279, 717646992 }) << " : ewliw\n";
	cout << ud.getText({ "type d", "type m", "type e", "undo 485005384", "type q" }, { 50455469, 189227564, 246200428, 464309976, 907963744 }) << " : q\n";
	cout << ud.getText({ "undo 283326591", "undo 374661262", "undo 219236156", "type f", "undo 516026257" }, { 65729082, 136646160, 214646796, 424512558, 983815634 }) << " : f\n";
	cout << ud.getText({ "type j", "type o", "undo 62668486", "undo 365189199", "type q" }, { 51911187, 113899767, 249549590, 447073549, 646436292 }) << " : jq\n";
	cout << ud.getText({ "type t", "type j", "type v", "type k", "type j" }, { 266827127, 520914516, 847521271, 855815245, 976935714 }) << " : tjvkj\n";
	cout << ud.getText({ "type m", "type j", "type m", "type r", "type a" }, { 158486597, 211305227, 360271372, 704909352, 937315153 }) << " : mjmra\n";
	cout << ud.getText({ "undo 817641488", "type p", "type g", "type f", "type l" }, { 115668140, 130012450, 198098790, 507375363, 906698980 }) << " : pgfl\n";
	cout << ud.getText({ "undo 134588346", "undo 462673147", "undo 760039652", "undo 454178183", "undo 271036442" }, { 261752873, 312704441, 325885010, 622549677, 624836822 }) << " : \n";
	cout << ud.getText({ "type f", "undo 353953230", "undo 451886688", "undo 520440406", "undo 782324867" }, { 127541363, 169583012, 255108676, 259169028, 675292103 }) << " : \n";
	cout << ud.getText({ "type s", "type r", "type q", "type f", "type t", "type y", "type e", "type w", "type z", "type e" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) << " : srqftyewze\n";
	cout << ud.getText({ "type t", "type t", "type b", "undo 5", "type a", "type o", "type g", "type h", "type b", "type m" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) << " : aoghbm\n";
	cout << ud.getText({ "type n", "undo 7", "undo 6", "type b", "undo 3", "type v", "undo 9", "undo 5", "undo 1", "undo 7" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) << " : \n";
	cout << ud.getText({ "undo 2", "undo 8", "undo 10", "undo 2", "undo 9", "undo 9", "undo 5", "undo 1", "undo 9", "type l" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) << " : l\n";
	cout << ud.getText({ "type m", "undo 9", "undo 4", "undo 9", "undo 4", "undo 5", "undo 7", "undo 9", "undo 4", "undo 5" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) << " : \n";
	cout << ud.getText({ "type y", "type o", "type h", "type w", "type i", "type w", "type w", "type a", "type r", "type f" }, { 342, 367, 404, 424, 456, 551, 588, 711, 733, 928 }) << " : yohwiwwarf\n";
	cout << ud.getText({ "type g", "type s", "type u", "type q", "type c", "type c", "type e", "type q", "type b", "type a" }, { 45, 99, 241, 375, 407, 512, 554, 826, 852, 895 }) << " : gsuqcceqba\n";
	cout << ud.getText({ "undo 517", "type g", "undo 877", "type z", "type s", "undo 751", "type y", "undo 540", "type s", "type o" }, { 101, 115, 202, 342, 390, 503, 540, 600, 671, 981 }) << " : so\n";
	cout << ud.getText({ "undo 45", "undo 701", "undo 455", "undo 65", "undo 230", "undo 237", "undo 460", "undo 597", "undo 678", "undo 51" }, { 74, 328, 333, 509, 637, 699, 749, 795, 866, 930 }) << " : \n";
	cout << ud.getText({ "undo 954", "undo 568", "type e", "undo 543", "type p", "undo 145", "type o", "undo 176", "undo 31", "undo 475" }, { 41, 229, 306, 442, 491, 576, 694, 765, 778, 862 }) << " : e\n";
	cout << ud.getText({ "type e", "type s", "type b", "type w", "type y", "type s", "type r", "type w", "type e", "type h" }, { 235959124, 247379309, 541487020, 561835118, 600717721, 705956919, 765831844, 793495684, 866375858, 954724037 }) << " : esbwysrweh\n";
	cout << ud.getText({ "type x", "type n", "type w", "type o", "undo 818260188", "type b", "type o", "undo 143991676", "type k", "type m" }, { 42660387, 49577098, 96471660, 330110591, 508798077, 640683148, 774201361, 833913886, 860143696, 982237432 }) << " : bkm\n";
	cout << ud.getText({ "undo 638472115", "undo 140497302", "undo 435187310", "type j", "type m", "undo 519147714", "undo 740256766", "undo 578650209", "undo 879222510", "undo 401540733" }, { 4433182, 100446237, 178972521, 572860594, 710740369, 789086058, 822650146, 844522930, 881664699, 922469661 }) << " : \n";
	cout << ud.getText({ "undo 213772074", "undo 779737852", "undo 26878266", "undo 869075790", "undo 166752088", "undo 865566053", "undo 327894873", "undo 377202906", "type j", "undo 580164007" }, { 194451196, 201424463, 220614570, 255852516, 445075418, 547691847, 555262357, 578174855, 728602616, 825269210 }) << " : \n";
	cout << ud.getText({ "undo 959299346", "type h", "undo 336689688", "undo 659372137", "undo 241096969", "type n", "undo 99123835", "undo 968821576", "undo 61515390", "undo 429386150" }, { 54355212, 212305176, 351454120, 393609119, 608705031, 673028825, 849144474, 957487337, 986346973, 993709690 }) << " : \n";
	cout << ud.getText({ "type b", "type c", "type e", "type t", "type m", "type h", "type p", "type b", "type d", "type g" }, { 31170008, 66623909, 73773706, 207833264, 274860826, 351022811, 442135967, 574950163, 653091052, 781945587 }) << " : bcetmhpbdg\n";
	cout << ud.getText({ "type f", "type r", "type f", "type v", "type k", "type g", "type c", "type h", "type s", "type f" }, { 61951515, 141739334, 148723623, 178322218, 240931541, 332135809, 341603577, 487579622, 538266945, 683429406 }) << " : frfvkgchsf\n";
	cout << ud.getText({ "type q", "type j", "undo 846861219", "type j", "undo 829047028", "undo 771625657", "type x", "undo 408496142", "type l", "undo 270296284" }, { 26694774, 42947398, 134270450, 300334606, 396858183, 449747036, 775552926, 797878240, 815111475, 953442006 }) << " : \n";
	cout << ud.getText({ "undo 236448218", "undo 883037715", "undo 751116650", "undo 748327383", "type h", "undo 982235726", "undo 136257966", "undo 757797460", "undo 111027505", "undo 155005008" }, { 477640407, 557837896, 601999710, 690226030, 692059096, 693424970, 770251533, 876455121, 881013282, 967938482 }) << " : \n";
	cout << ud.getText({ "undo 900221804", "undo 466024634", "type v", "type y", "undo 131388485", "undo 531477733", "undo 857332441", "undo 581331003", "undo 255580669", "undo 608012961" }, { 3192561, 41593135, 125580709, 280960495, 318371691, 451571540, 805465374, 953424498, 970983601, 991605339 }) << " : v\n";
	cout << ud.getText({ "type v", "type h", "type j", "type b", "type l", "type s", "type m", "type z", "type n", "type m", "type t", "type a", "type k", "type e", "type l", "type r", "type x", "type h", "type x", "type u" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }) << " : vhjblsmznmtakelrxhxu\n";
	cout << ud.getText({ "type g", "type z", "undo 8", "type n", "type x", "type y", "type d", "type t", "type r", "type r", "type r", "type k", "type b", "type g", "undo 13", "type q", "type q", "type a", "type s", "type r" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }) << " : gqqasr\n";
	cout << ud.getText({ "undo 19", "undo 10", "undo 13", "type q", "undo 10", "undo 3", "type k", "undo 10", "undo 17", "type n", "type o", "type i", "undo 17", "undo 11", "type p", "undo 6", "type t", "undo 13", "undo 4", "type z" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }) << " : z\n";
	cout << ud.getText({ "undo 2", "undo 17", "undo 10", "undo 12", "undo 4", "undo 12", "undo 19", "undo 15", "undo 13", "undo 19", "undo 18", "undo 1", "type d", "undo 19", "undo 3", "undo 9", "undo 16", "undo 9", "type t", "undo 14" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }) << " : \n";
	cout << ud.getText({ "type n", "type y", "undo 7", "type v", "type f", "undo 16", "type o", "type v", "type a", "undo 20", "type l", "type x", "type z", "type h", "type o", "type g", "type h", "undo 18", "type e", "undo 10" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }) << " : ova\n";
	cout << ud.getText({ "type w", "type h", "type o", "type h", "type x", "type j", "type c", "type w", "type h", "type c", "type u", "type k", "type r", "type y", "type b", "type n", "type w", "type a", "type y", "type x" }, { 33, 212, 221, 222, 228, 280, 296, 314, 332, 377, 503, 530, 562, 604, 615, 641, 695, 814, 962, 973 }) << " : whohxjcwhcukrybnwayx\n";
	cout << ud.getText({ "type j", "type w", "type t", "type l", "type t", "type r", "type b", "type o", "type u", "type x", "type j", "type m", "type e", "type x", "type y", "type a", "type i", "type w", "type c", "undo 427" }, { 129, 292, 430, 451, 472, 534, 540, 550, 586, 589, 694, 712, 767, 780, 797, 813, 837, 963, 985, 989 }) << " : jwtltrbo\n";
	cout << ud.getText({ "undo 845", "undo 720", "type z", "type r", "type g", "undo 712", "type q", "type k", "type t", "type k", "undo 673", "type p", "undo 859", "type j", "undo 385", "undo 841", "undo 853", "undo 945", "undo 623", "undo 108" }, { 26, 42, 103, 126, 173, 195, 201, 223, 312, 517, 593, 601, 647, 739, 762, 768, 785, 817, 904, 988 }) << " : \n";
	cout << ud.getText({ "undo 368", "undo 615", "type x", "undo 694", "undo 153", "undo 843", "undo 424", "type t", "undo 58", "type t", "undo 568", "undo 466", "type l", "undo 38", "undo 699", "undo 728", "undo 615", "undo 456", "undo 983", "undo 131" }, { 239, 315, 350, 395, 396, 419, 460, 462, 517, 561, 600, 638, 692, 694, 715, 760, 805, 871, 945, 953 }) << " : \n";
	cout << ud.getText({ "undo 662", "type z", "type x", "type g", "type p", "type n", "type q", "type x", "undo 127", "type v", "type w", "undo 872", "type f", "undo 268", "undo 334", "type y", "type m", "undo 802", "type a", "undo 828" }, { 28, 87, 132, 157, 184, 224, 238, 454, 458, 527, 577, 623, 639, 708, 727, 774, 779, 835, 840, 959 }) << " : z\n";
	cout << ud.getText({ "type d", "type p", "type t", "type o", "type r", "type p", "type h", "type r", "type v", "type b", "type z", "type u", "type g", "type j", "type t", "type h", "type d", "type j", "type x", "type i" }, { 11535217, 25864113, 75659568, 239219278, 316380762, 535907876, 543997884, 566197841, 572797697, 621195556, 631190417, 632174196, 664865957, 773514520, 782849670, 837876123, 917738472, 959966068, 981217297, 986934723 }) << " : dptorphrvbzugjthdjxi\n";
	cout << ud.getText({ "type z", "type f", "type h", "type u", "type m", "type y", "type a", "type s", "type r", "type v", "type d", "type l", "type y", "type i", "type r", "type t", "type b", "type w", "type o", "type n" }, { 14698847, 25895966, 30923419, 84686611, 254840449, 375627030, 380605114, 381679036, 392542097, 437998312, 439036964, 456246819, 533851272, 615895761, 631169489, 636851257, 659479135, 799078308, 827061012, 997197665 }) << " : zfhumyasrvdlyirtbwon\n";
	cout << ud.getText({ "undo 307345080", "type i", "type m", "undo 860645311", "undo 932471401", "type v", "type j", "undo 956902082", "type q", "undo 775991531", "type k", "type d", "undo 628225384", "type z", "type e", "type l", "undo 257831193", "undo 25167053", "type o", "type i" }, { 28969196, 51298507, 143785204, 149228489, 157464340, 162144665, 177673472, 381804095, 425068319, 527304321, 536463316, 625729879, 682024482, 716059843, 765391244, 811391917, 873182347, 881849686, 894665193, 977807442 }) << " : izeloi\n";
	cout << ud.getText({ "undo 774946957", "undo 120339313", "undo 329300060", "type y", "undo 56501792", "undo 364359052", "undo 39561658", "undo 168704633", "undo 375883497", "type x", "undo 978010105", "undo 87734114", "type c", "type d", "undo 949433290", "undo 361379627", "type z", "undo 889945753", "undo 422266387", "undo 204690430" }, { 4062095, 178259475, 238316729, 257431024, 317611117, 362177864, 393333436, 468004886, 493202055, 586887950, 606618130, 614209398, 616174632, 643396238, 667332664, 699711589, 704289199, 785324433, 804338781, 861942771 }) << " : cd\n";
	cout << ud.getText({ "undo 690866963", "undo 652808186", "type c", "undo 478600932", "undo 826503359", "undo 761721806", "type i", "type y", "type r", "type s", "undo 207043686", "type v", "undo 26594191", "type r", "undo 491508163", "type w", "type a", "type c", "type t", "undo 516145236" }, { 14577978, 100134503, 144069310, 155418877, 211265427, 227069182, 278091631, 291576951, 298084740, 374897331, 419443658, 429037482, 432764562, 503056487, 522623680, 602843276, 650610926, 848081823, 868700042, 876509741 }) << " : iyr\n";
	cout << ud.getText({ "type h", "type s", "type k", "type s", "type v", "type w", "type f", "type l", "type p", "type c", "type j", "type r", "type u", "type r", "type f", "type f", "type u", "type t", "type e", "type v" }, { 12820165, 60387973, 67614302, 75124256, 146468853, 210425643, 225006811, 261003728, 289054790, 366882398, 381182182, 407945652, 424381808, 559766736, 564993400, 737694529, 754963812, 824812774, 841471664, 843652833 }) << " : hsksvwflpcjrurffutev\n";
	cout << ud.getText({ "undo 624426772", "type e", "type l", "type r", "type z", "type t", "type w", "type v", "type r", "type b", "type e", "type h", "type b", "type s", "type d", "type t", "type w", "type m", "type s", "type v" }, { 9049857, 31494708, 37135740, 62018610, 91034986, 153496125, 184989176, 350645170, 355670146, 363422055, 374154685, 413455663, 464048141, 502595827, 524970105, 698076477, 866272199, 890660137, 929837456, 957857307 }) << " : elrztwvrbehbsdtwmsv\n";
	cout << ud.getText({ "type y", "undo 459188956", "undo 803930088", "undo 303698233", "type j", "type m", "type q", "undo 508200067", "type e", "type f", "undo 298100595", "type v", "type w", "type n", "type q", "undo 834331199", "type i", "type u", "type p", "undo 478535561" }, { 3187875, 6209207, 28770358, 86816217, 104863149, 147833424, 156307814, 163640231, 165351797, 300376650, 460331252, 485995121, 609110852, 651028567, 676887811, 890771933, 909320078, 911791645, 930938908, 951225104 }) << " : jmq\n";
	cout << ud.getText({ "undo 947614103", "undo 739637167", "type p", "undo 494706681", "undo 575354034", "undo 990789400", "undo 531471516", "undo 106124082", "type x", "undo 784735419", "undo 266226268", "undo 8567060", "undo 809896861", "undo 906492237", "undo 355401173", "undo 649379083", "undo 345743067", "undo 615246725", "undo 700916616", "undo 15676072" }, { 58082483, 66614995, 84490057, 87336151, 221625595, 248142138, 261787288, 267229349, 275868572, 406512955, 456052682, 623251208, 652966541, 655486038, 656693851, 730036515, 806976476, 931353896, 969041575, 994197223 }) << " : \n";
	cout << ud.getText({ "type u", "undo 660429882", "undo 270555355", "undo 191858532", "undo 348055907", "undo 156997489", "undo 485247896", "undo 390728272", "undo 164847588", "undo 531415763", "undo 130331410", "undo 379144691", "undo 923786211", "undo 444394857", "undo 972016422", "type l", "undo 215051601", "undo 952635435", "undo 482839626", "undo 532443831" }, { 59605308, 78242012, 106881771, 134123521, 269904974, 357184330, 486859295, 491468339, 508636522, 526439208, 531807884, 576731773, 821519280, 843481381, 913275515, 930968428, 934880249, 952920012, 965066705, 992305551 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "undo 2", "undo 2" }, { 1, 2, 3, 4 }) << " : a\n";
	cout << ud.getText({ "type a", "undo 1", "undo 2", "undo 3", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "undo 12", "undo 13", "undo 14", "undo 15", "undo 16", "undo 17", "undo 18", "undo 19", "undo 20", "undo 21", "undo 22", "undo 23", "undo 24", "undo 25", "undo 26", "undo 27", "undo 28", "undo 29", "undo 30", "undo 31", "undo 32", "undo 33", "undo 34", "undo 35", "undo 36", "undo 37", "undo 38", "undo 39", "undo 40", "undo 41", "undo 42", "undo 43", "undo 44", "undo 45", "undo 46", "undo 47", "undo 48", "undo 48" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 }) << " : a\n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 100000", "undo 100000000", "undo 1000000000" }, { 1, 2, 3, 100000, 100000000, 1000000000 }) << " : \n";
	cout << ud.getText({ "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "undo 1000000000" }, { 1, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1000000, 2000000, 3000000, 4000000, 5000000, 6000000, 7000000, 8000000, 9000000, 10000000, 20000000, 100000000, 1000000000 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "type d", "undo 1000000000", "undo 999999999", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "type a", "type b", "type c", "undo 1", "undo 2", "undo 3", "type a", "type c", "type d", "type e", "undo 9", "undo 9", "undo 4", "undo 8", "undo 7", "undo 9", "undo 1", "undo 10", "undo 11", "undo 7", "undo 8", "undo 8", "type d", "type e", "undo 1", "type f", "undo 3", "undo 2", "undo 7", "undo 2", "undo 3", "type a", "undo 1", "undo 2", "undo 3", "undo 4", "undo 5" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 }) << " : aabacd\n";
	cout << ud.getText({ "type a", "type b", "undo 3", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "undo 12", "undo 13", "undo 14", "undo 15", "undo 16", "undo 17", "undo 18", "undo 19", "undo 20", "undo 21", "undo 22", "undo 23", "undo 24", "undo 25", "undo 26", "undo 27", "undo 28", "undo 29", "undo 30", "undo 31", "undo 32", "undo 33", "undo 34", "undo 35", "undo 36", "undo 37", "undo 38", "undo 39", "undo 40", "undo 41", "undo 42", "undo 43", "undo 44", "undo 45", "undo 46", "undo 47", "undo 48", "undo 49", "undo 50" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 }) << " : \n";
	cout << ud.getText({ "undo 5", "type a", "type b", "undo 1", "undo 13", "type c", "type d", "undo 1", "undo 999999" }, { 5, 6, 7, 8, 9, 10, 11, 12, 100000 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 10" }, { 1, 2, 3, 1000 }) << " : abc\n";
	cout << ud.getText({ "type z", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 }) << " : \n";
	cout << ud.getText({ "type x", "undo 1", "undo 2", "undo 3", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "undo 12", "undo 13", "undo 14", "undo 15", "undo 16", "undo 17", "undo 18", "undo 19", "undo 20", "undo 21", "undo 22", "undo 23", "undo 24", "undo 25", "undo 26", "undo 27", "undo 28", "undo 29", "undo 30", "undo 31", "undo 32", "undo 33", "undo 34", "undo 35", "undo 36", "undo 37", "undo 38", "undo 39", "undo 40", "undo 41", "undo 42", "undo 43", "undo 44", "undo 45", "undo 46", "undo 47", "undo 48", "undo 49" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 }) << " : \n";
	cout << ud.getText({ "undo 1", "type a", "type b", "undo 2", "undo 7", "undo 1000000", "type z" }, { 1, 5, 9, 11, 15, 100, 101 }) << " : z\n";
	cout << ud.getText({ "type a", "type b", "type c", "type d", "type e", "undo 2", "undo 3", "type f", "undo 4" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }) << " : abcd\n";
	cout << ud.getText({ "type a", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 999" }, { 1, 2, 3, 1000 }) << " : \n";
	cout << ud.getText({ "type a", "undo 1", "undo 1" }, { 1, 2, 3 }) << " : a\n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 10", "type p", "type k", "type z", "undo 1" }, { 1, 5, 12, 15, 16, 17, 18, 19 }) << " : apk\n";
	cout << ud.getText({ "type a", "type b", "type c", "type d", "type e", "type f", "undo 12" }, { 1, 2, 5, 6, 8, 15, 20 }) << " : abcd\n";
	cout << ud.getText({ "type a", "undo 10" }, { 1, 5 }) << " : \n";
	cout << ud.getText({ "undo 5", "type a", "type b", "undo 1", "undo 13", "type c", "type d", "undo 1", "undo 1" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9 }) << " : cd\n";
	cout << ud.getText({ "type a", "type r", "undo 5", "undo 2", "type h" }, { 1, 2, 3, 12, 13 }) << " : h\n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 10" }, { 1, 2, 3, 11 }) << " : \n";
	cout << ud.getText({ "type a", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 999999998" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 999999991, 999999992, 999999993, 999999994, 999999995, 999999996, 999999997, 999999998, 999999999, 1000000000 }) << " : a\n";
	cout << ud.getText({ "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "undo 10" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }) << " : a\n";
	cout << ud.getText({ "type a", "undo 20" }, { 1, 2 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "undo 10" }, { 1, 10, 15 }) << " : a\n";
	cout << ud.getText({ "type a", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 }) << " : \n";
	cout << ud.getText({ "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50 }) << " : \n";
	cout << ud.getText({ "type a", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 21, 22, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 51, 52, 53, 54, 55, 56, 57, 58, 59, 61, 62 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 1000" }, { 1, 2, 3, 4 }) << " : \n";
	cout << ud.getText({ "type a", "type r", "undo 5", "undo 2", "type h", "undo 2" }, { 1, 2, 3, 12, 13, 14 }) << " : \n";
	cout << ud.getText({ "undo 1", "type z", "undo 1", "undo 1", "undo 1", "type y", "undo 1", "undo 1", "type a", "undo 1", "undo 1", "undo 2", "type c" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 }) << " : yac\n";
	cout << ud.getText({ "type a", "undo 1", "undo 1", "undo 1" }, { 1, 2, 3, 4 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "type b", "type c", "undo 100000" }, { 1, 2, 3, 5, 55 }) << " : \n";
	cout << ud.getText({ "type a", "undo 1000" }, { 1, 10 }) << " : \n";
	cout << ud.getText({ "type c", "type u", "type s", "type t", "type o", "type p", "type w", "type a", "type a", "type w", "type w", "type q", "type d", "type o", "type o", "undo 5", "type a", "undo 7", "type o", "type a", "undo 8", "type o", "type p", "undo 3", "type q", "type x", "type l", "type l", "undo 2", "type w", "type x", "type l", "undo 3", "type w", "type q", "type x", "type l", "type o", "type p", "type o", "type w", "undo 2", "type s", "type w", "undo 1", "type o", "type a", "undo 1", "type q" }, { 1, 2, 4, 5, 6, 8, 10, 11, 12, 13, 14, 16, 100, 105, 106, 107, 108, 109, 110, 111, 113, 1000, 1001, 1002, 1003, 1005, 1006, 1009, 1010, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2009, 2010, 2011, 2012, 2013, 2400, 2500, 2600, 3000, 3001, 3002, 3003, 3004 }) << " : custopwaawwqdqxlwqxlopowswoq\n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 12" }, { 1, 2, 3, 14 }) << " : a\n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 61" }, { 1, 2, 100, 150 }) << " : ab\n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 3", "type d" }, { 1, 2, 3, 5, 6 }) << " : ad\n";
	cout << ud.getText({ "type a", "undo 1", "type a", "undo 4", "undo 1", "undo 1000000000" }, { 1, 2, 3, 5, 1000, 1000000000 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 123" }, { 1, 2, 3, 123 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "type c", "type d", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "undo 11", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "undo 11" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 }) << " : abc\n";
	cout << ud.getText({ "undo 1000000000" }, { 1000000000 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 10" }, { 1, 2, 3, 12 }) << " : a\n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 3" }, { 1, 2, 3, 4 }) << " : \n";
	cout << ud.getText({ "type o", "undo 1000000000", "undo 1000000000", "type a", "undo 1", "undo 2", "type b", "undo 1", "undo 2", "undo 40000", "undo 1", "undo 20", "type c" }, { 1, 2, 3, 90000000, 90000001, 90000002, 900000003, 900000004, 900000005, 900000007, 990000000, 990000001, 1000000000 }) << " : c\n";
	cout << ud.getText({ "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "type c", "type a", "type b", "type c", "undo 12" }, { 1, 2, 3, 5, 6, 7, 8 }) << " : \n";
	cout << ud.getText({ "type a", "type a", "type b", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "undo 5", "type a", "type a", "type a", "type a", "undo 10", "type a", "type a", "type a", "type a", "type a", "undo 20", "type a", "type a", "undo 2" }, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28 }) << " : aaba\n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 75" }, { 1, 2, 50, 100 }) << " : ab\n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 8" }, { 5, 7, 9, 10 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 10" }, { 1, 2, 3, 4 }) << " : \n";
	cout << ud.getText({ "type c" }, { 1 }) << " : c\n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 2", "type z" }, { 1, 2, 300000, 900000000, 999999999 }) << " : abcz\n";
	cout << ud.getText({ "type b", "type c", "undo 1", "undo 2", "type a", "undo 1006" }, { 1, 2, 3, 4, 5, 1010 }) << " : b\n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 10" }, { 1, 1997, 1998, 2000 }) << " : a\n";
	cout << ud.getText({ "type d", "type x", "undo 2" }, { 1, 2, 3 }) << " : \n";
	cout << ud.getText({ "undo 1000000000" }, { 10 }) << " : \n";
	cout << ud.getText({ "type a", "undo 10" }, { 1, 2 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 1000000" }, { 1, 9, 250000, 1000005 }) << " : a\n";
	cout << ud.getText({ "type a", "undo 1" }, { 1, 2 }) << " : \n";
	cout << ud.getText({ "type a", "type b", "type c", "undo 10", "undo 3", "type b", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "type z", "type h" }, { 1, 2, 3, 9, 20, 100, 101, 102, 1000, 9999, 99999999, 1000000000 }) << " : zh\n";
	cout << ud.getText({ "undo 2" }, { 1 }) << " : \n";
	cout << ud.getText({ "type a", "undo 100" }, { 1, 2 }) << " : \n";
	cout << ud.getText({ "undo 100", "undo 200", "type a", "type b", "type b", "type a", "type a", "type b", "undo 4500", "type a", "type b", "type b", "type b", "type a", "type b", "type x", "type x", "type x", "type x", "type z", "undo 900000", "undo 1400000", "undo 3000000", "undo 6000000", "type h", "type y", "type l", "undo 27000000", "type t", "type o", "type p", "type c", "type o", "type d", "type e", "type r" }, { 10, 30, 1000, 2000, 3000, 3009, 5000, 6000, 6500, 7000, 8000, 10000, 30000, 50000, 80000, 100000, 300000, 500000, 800000, 1300000, 2100000, 3400000, 5000000, 8000000, 10000000, 20000000, 30000000, 40000000, 50000000, 60000000, 70000000, 80000000, 90000000, 100000000, 110000000, 120000000 }) << " : aabbbabxxxxzhtopcoder\n";
	cout << ud.getText({ "type a", "type b", "type a", "type b", "type a", "type b", "type a", "type b", "type a", "type b", "type a", "undo 10" }, { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23 }) << " : ababab\n";
	cout << ud.getText({ "type a", "type a", "type a", "type a", "type a", "undo 1", "undo 17", "undo 1", "undo 3", "undo 5", "undo 7", "undo 9", "undo 11", "undo 13", "undo 15", "undo 17", "undo 19", "undo 21", "undo 23", "undo 25", "undo 27", "undo 29", "undo 31", "undo 33", "undo 35", "undo 37", "undo 39", "undo 41", "undo 43", "undo 45", "undo 47", "undo 51", "undo 100", "undo 102", "undo 104" }, { 1, 10, 20, 30, 40, 50, 60, 70, 99999900, 99999901, 99999902, 99999903, 99999904, 99999907, 99999908, 99999909, 99999910, 99999911, 99999912, 99999913, 99999952, 99999953, 99999954, 99999955, 99999956, 99999957, 99999958, 99999961, 99999962, 99999963, 99999964, 99999965, 99999966, 99999967, 99999968 }) << " : aaaaa\n";
	cout << ud.getText({ "undo 999999997", "undo 999999998", "undo 999999999" }, { 999999998, 999999999, 1000000000 }) << " : \n";

		return 0;
}