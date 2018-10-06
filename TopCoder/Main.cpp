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
	TemplateMatching tm;
	cout << tm.bestMatch("ab", "b", "a") << " : b\n";

	cout << tm.bestMatch("hzvkz", "eto", "papstvo") << " : h\n";
	cout << tm.bestMatch("ogpu rjgq mtf z", " k", "gzk") << " :  rjg\n";
	cout << tm.bestMatch("xxxeabxxxfeaxxx", "dfe", "abc") << " : fea\n";

	cout << tm.bestMatch("zbcdefghjik", "q", "zbcdefghjik") << " : zbcdefghjik\n";

	cout << tm.bestMatch(" e mcytuzce u msgh fgi lw quyukw b", " wapl yl s kq", "abw rv") << " : q\n";
	cout << tm.bestMatch("a a a a a a", "a a", "a") << " : a a\n";
	cout << tm.bestMatch("something", "awesome", "ingenious") << " : something\n";
	cout << tm.bestMatch("havka", "eto", "papstvo") << " : a\n";
	cout << tm.bestMatch("a", "b", "c") << " : a\n";
	cout << tm.bestMatch("abracadabra", "habrahabr", "bracket") << " : abrac\n";
	cout << tm.bestMatch("mississippi", "promise", "piccolo") << " : ippi\n";
	cout << tm.bestMatch("z vt no k bdmztq ct lk ot e bref vr czff", "tcrmy qrxw cl w", "cj zi dp") << " :  bdmztq c\n";
	cout << tm.bestMatch("n xfixx g j ouii tez uaqmehobr bh ltdw qu", "z s mi nv xlc a", "qif") << " : aq\n";
	cout << tm.bestMatch(" yvy iz hoc t awib p g", " yl g", " n s") << " :  g\n";
	cout << tm.bestMatch("x jv u tnj jfdh hz zhr emo nmv", "gmu", "m c") << " : u tnj jfdh hz zhr em\n";
	cout << tm.bestMatch(" a pc e cg h y g opyeijc t eonjwoh kdm q o", "h", "m rhnp nnzig qj") << " : h kdm \n";
	cout << tm.bestMatch("e pnwd zwthplk l k ybkbv elbbcqi w cbv d wyz wab", " ln irp qamkui g d ndwb", "pj hci ef t v r j ulpdg p i j") << " : b\n";
	cout << tm.bestMatch(" xx crahded mitc aj i y k qiamjtls", " ud kg", "acp fte iaj") << " :  a\n";
	cout << tm.bestMatch("eu mdvv un z y laer fk vk f vx x xb g kwmu gg", " e iua a", "t kpwbd m") << " : a\n";
	cout << tm.bestMatch("gn i", "ro", " h") << " :  \n";
	cout << tm.bestMatch("bwpoq hd jo q recw bg obmq k vr ct kkljcjx", "u ljikxxhzc as", "hyd p") << " :  h\n";
	cout << tm.bestMatch(" xb yl qmof di ctqpq na icdrlgkq fjbej", " n", " lw") << " :  na \n";
	cout << tm.bestMatch("kqkoefah ys i jfhguzrd qm q k lra", "qe kp mmr", "m dfp bc y m vt") << " : rd qm \n";
	cout << tm.bestMatch("tmuh rlbfqxdn t g atd zggby", "gfv fb", " mo un vpi v s") << " : bfqxdn \n";
	cout << tm.bestMatch("zppowg qzreqw rjj qh pixa v", "suc", "zpa d t") << " : zp\n";
	cout << tm.bestMatch("eq hc q t lnvw", "x", " ef ok t") << " :  \n";
	cout << tm.bestMatch(" u wczb v", "z", "sox") << " : z\n";
	cout << tm.bestMatch("bqevduspk jn jnw k u gv yf ax bjwwis ymh w knup", "ghwdrovpwwbywm ryr", "pp qqd") << " :  ax bjwwis ymh w knup\n";
	cout << tm.bestMatch(" fed vvd gweac odk a lbderviy la q tyar r snr p", "o yhg rgda", "zv opmmcquup") << " : a\n";
	cout << tm.bestMatch("kgs gjb klormak s cbx xvh im oaj o dt c n l", "b j dojez foxyi", " yto v z aibbe r pde g") << " : im \n";
	cout << tm.bestMatch(" xcq n l ldro k kgb n j xwkno ukc b l t r agmah b", "p y he", " bwokq hav") << " :  agmah b\n";
	cout << tm.bestMatch(" cu ldp oyjy c tso rw b hkp pd", " bm q ihn", " ccxw") << " :  c\n";
	cout << tm.bestMatch(" kcy", " g", "o x") << " :  \n";
	cout << tm.bestMatch("gpz t c vd u yqof", "on fkz", " n") << " : z \n";
	cout << tm.bestMatch(" xnt reje l uvi lzca tlbqelkjd wp kik", "d zpg yvnota", "o") << " : a\n";
	cout << tm.bestMatch("fl wn dkf", " vx m", "d") << " :  d\n";
	cout << tm.bestMatch("jhxc le lizh zt", "w", "vvucg v") << " :  \n";
	cout << tm.bestMatch("qn okxyo", " ybx p", " d") << " :  \n";
	cout << tm.bestMatch("pcu r byga x g z k ab x hcn e qw th", "ktukuq j q", "pp gmi") << " :  q\n";
	cout << tm.bestMatch(" dkx vo j", "g", "sqc") << " :  \n";
	cout << tm.bestMatch("r o tejmrmdpdyu daz zw jnattfbhpo", "o gt p jcnapp", " ksd f ww y") << " : pdyu \n";
	cout << tm.bestMatch(" d wbhxydy v twjpc aj c dazklu qt cexf ed", " ycc i dgto vn", " lgf zz q g") << " :  \n";
	cout << tm.bestMatch("ig lv msttp wk iuki ezwfnuxdq odg", "wf lsi ua hbaa", "epg mfvs ft lpwk x") << " :  e\n";
	cout << tm.bestMatch(" k t zdr", "m", "c") << " :  \n";
	cout << tm.bestMatch(" ght w xq g m g r", " s w ue", "tp") << " :  ght\n";
	cout << tm.bestMatch("q kbf pzyc tqlw ateaozmdprzkw s t v ieyofyn", "dtmx w mehp e", "gkkac") << " : e\n";
	cout << tm.bestMatch("z s agzjztn iqo b qnu m d zb jd hi figsckyho q", "f rfkw dxt hf q m", "jrxwfis xt f padqx c hfl ut ") << " :  m d zb j\n";
	cout << tm.bestMatch("x gv xdw vvj v hmlwsaz atftosucne fc ocf", " pryxfkt v s m z wr k p jftz byc ", "s i arf wyleqmyou frxs lk") << " : c \n";
	cout << tm.bestMatch(" p lqq g ix ndc oix gnh lk qiw gafz mzqxqp vxw ", " qcsq mn", "u") << " : n\n";
	cout << tm.bestMatch("e stjlv s iis lphme io k jgvj ls p at", "svfv a zic dlz sb gej ", " w x tpye ") << " : j \n";
	cout << tm.bestMatch(" teysti ycqvy djqvu zpusk py iflwnmf zf cw e", " l f m dbwr pr dtg", " s y vt tjb e q w l upovs") << " :  \n";
	cout << tm.bestMatch("bg f mcc pgviscr vd d orom qje bnduuoc", "qfof hyfkix xiyuxk p", " s cca onl u") << " :  pgviscr \n";
	cout << tm.bestMatch("opgez sii rahs ny em xwy crboz zfmnkkoioe ", " lfwo bpww nd lfkaa ftvemdmdvc wom ie", " sxiu ws d r j obbu xnsm nfs ond sa") << " : ez s\n";
	cout << tm.bestMatch("ml ctqwd soaug dhwj zm u ewwo z ef", "mdy tcxsvja s bsng zjqrpya ajsdy sl k c l ", "qciwpmeti hn j w tr hhisdi bhzq h ") << " : l ctq\n";
	cout << tm.bestMatch("lcxeux pambpclh gs i ik eg n lkmn aw yl", "y dsg e uqtz th xvm wahe ", " r tmp hb j wrzb odhgon jniq ov zir") << " :  \n";
	cout << tm.bestMatch("ayo lth y f zhosk qphy gryyt og dmpnzm g we ", " j f y gx tezejhrx atizkmu x ", " ou wftloc n hcnkbzv slhv") << " :  f zhosk qphy gryyt o\n";
	cout << tm.bestMatch("mwdvp bu lu z gbnex h zqd njfe denxm yplj", "frktdsdyqx gv w pey", "slpxkqltc t ffhlbfcywtf") << " : y\n";
	cout << tm.bestMatch("cz cu orlmjfksa jlqabom dh kqbtzbs qavdo k v ", "x hcb zho zn arg cuu udc mb", " npo e pedhtbh uvw ") << " : bom \n";
	cout << tm.bestMatch(" we sybh nr pxrrq m hob pqcenf ntjzypxo", " e slkmbu mlpxsyai g efryp opl qw aa x", "zrie qujljv nglukgam enhjq") << " : xrrq m hob pqcenf ntjz\n";
	cout << tm.bestMatch("f fv hr jakiy qz o zxaismar p ergzmoovxojwg", "xc g d ul r a o l ym urin lolg c csni ", "nq eyeb") << " :  \n";
	cout << tm.bestMatch(" jkqcquk tfdrkbtffr t fk bctrcbkbjcvc r sm y mm", " y mndmwvue t yptd f dij", "n y slowf mtgew g lewkb ") << " : j\n";
	cout << tm.bestMatch("qythmoqh rq boftg ypex g og g p wis c dh r", " frnjzkvuqv lw gi gy dftt isgmmwds aupdhi", "ay w f y pu dcq kdu nyn ") << " : i\n";
	cout << tm.bestMatch("qp pesgwq ox ue n up xeuopw w ypawctwax qs g", "z fym jh b uq rufmp heogc mwvxz zrnuci", "cjszu soubczr") << " :  n up xeuopw w ypawc\n";
	cout << tm.bestMatch("kay msqblixtzxau qit omk xz kltfmevbdsvj ud", "zsvl gpmk ionqrgjuirbss no xbos pfl", "w") << " : l\n";
	cout << tm.bestMatch("syvf yh g brfsj vxhgofk k ecey zknp ttp cjn tg ", "rn ofjic i dbtji a y szdqo", " ") << " : ofk \n";
	cout << tm.bestMatch("qlmujs midzkpuon glikqm t t puxu c jspmbpujur", "t zui ppw jyd ", "uof w k slkfkf sfbhsu vbz vsa kznq ") << " :  midzkpuo\n";
	cout << tm.bestMatch("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa") << " : aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n";
	cout << tm.bestMatch(" oriyty gln ghn zhpxyzqqn ar vxbln dg zmzzfcaf ", " d ox rds gwblg bcx qb vf czf kdgyliyy j esoy", "bfbpi hhlxg obd g e ruqhq ie xy lxm t u ef ") << " : y gln ghn zhpxyzqqn ar vxb\n";
	cout << tm.bestMatch("ahdaqbfwyjc y x h qlkteom mf it krj juuvbsttva f", " h ptnybkqd m wemklzn o fcf breg ie lyxlx w", "b gs b t u af mw p zj jq iwdg ew t w h uh") << " : wyjc y x h qlkteom mf it krj juuvb\n";
	cout << tm.bestMatch("wrr zzo qt hgm rpneh awte o pcjvaa rb axgu cx", "yigx e wpujledx ohut a ey v de lkzt x juvl", "h ke rjpskpidwbg zojhc rsdjsi hobbxglyr rp tgh a ") << " :  zzo qt hgm rpneh \n";
	cout << tm.bestMatch("wrr zzo qt hgm rpneh awte o pcjvaa rb axgu cx", " zzo qt hgm rpneh awte o pcjvaa rb axgu cx", "wrr zzo qt hgm rpneh awte o pcjvaa rb axgu") << " :  zzo qt hgm rpneh awte o pcjvaa rb axgu cx\n";
	cout << tm.bestMatch("wrr zzo qt hgm rpneh awte o pcjvaa rb axgu cx", "wrr zzo qt hgm rpneh awte o pcjvaa rb axgu", " zzo qt hgm rpneh awte o pcjvaa rb axgu cx") << " : wrr zzo qt hgm rpneh awte o pcjvaa rb axgu cx\n";
	cout << tm.bestMatch("missidsgssippi", "proddmise", "piddccolo") << " : dsgssippi\n";
	cout << tm.bestMatch("bcd", "efg", "hjk") << " : b\n";
	cout << tm.bestMatch("b", "x", "y") << " : b\n";
	cout << tm.bestMatch("abababbab", "ababababaab", "abaababab") << " : aba\n";
	cout << tm.bestMatch("aaaa aaaaaa", " qqqqqqqqqq", " ssss s") << " :  \n";
	cout << tm.bestMatch("iiiiii", "a", "b") << " : i\n";
	cout << tm.bestMatch("tttt", "aaa", "bbb") << " : t\n";
	cout << tm.bestMatch("bbbb", "aaaa", "ccccc") << " : b\n";
	cout << tm.bestMatch(" ", "a", "b") << " :  \n";
	cout << tm.bestMatch("r", "x", "b") << " : r\n";
	cout << tm.bestMatch("bc", "d", "e") << " : b\n";
	cout << tm.bestMatch("zz", "a", "a") << " : z\n";
	cout << tm.bestMatch("b", "a", "a") << " : b\n";
	cout << tm.bestMatch("bacabadabacabaeabacabadabacaba", "abacabada", "bacac") << " : abacabadabaca\n";
	cout << tm.bestMatch("az", "b", "c") << " : a\n";
	cout << tm.bestMatch("abc", "e", "f") << " : a\n";
	cout << tm.bestMatch("abcdefghijklmnopq r s t uvwx", "abcdefg r s jldf fjd", "uvwxyz") << " : defghijklmnopq r s t uvwx\n";
	cout << tm.bestMatch("bxxxxxefgcdxxxxabxxxxcd", "ttab", "efgcdtt") << " : bxxxxxefgcd\n";
	cout << tm.bestMatch("cabacbaddadaaddbabccaddaddbdacadbabddbbcdacdcbc", "dbddaddaaadacadabdaadbbcaadddaaaabcbdabadaabcdcdb", "dbddaddaaadacadabdaadbbcaadddaaaabcbdabadaabcdcdb") << " : dbabccaddaddbd\n";
	cout << tm.bestMatch("abcd", "abc", "bcd") << " : abcd\n";
	cout << tm.bestMatch("abdbaabcba", "ab", "ba") << " : abcba\n";
	cout << tm.bestMatch("aafdasdfasdaasfdasdffdasdfasdaafdasdfasd", "afasdfatrhertghsfsdhsdfaassaafdasdfasddfasdfasdf", "aasdfasdfaafdasdasfasdfasfdasfdyrefasdaafdasdfasda") << " : asdfasdaas\n";
	cout << tm.bestMatch("aaaaa", "f", "aaaa") << " : aaaa\n";
	cout << tm.bestMatch("z", "x", "y") << " : z\n";
	cout << tm.bestMatch("b", "c", "d") << " : b\n";
	cout << tm.bestMatch("bcd", "x", "z") << " : b\n";
	cout << tm.bestMatch("axxxxxxxtyyyaxxxxkkktyyy", "llla", "tlll") << " : axxxxkkkt\n";
	cout << tm.bestMatch("ab", "fgg", "ghhh") << " : a\n";
	cout << tm.bestMatch("aba", "xxx", "aba") << " : aba\n";
	cout << tm.bestMatch("bb", "a", "c") << " : b\n";
	cout << tm.bestMatch("bcd", "gf", "ij") << " : b\n";
	cout << tm.bestMatch("chetan", "he", "ta") << " : heta\n";
	cout << tm.bestMatch("havak", "eto", "papstvo") << " : a\n";
	cout << tm.bestMatch("ab", "x", "y") << " : a\n";



	return 0;
}