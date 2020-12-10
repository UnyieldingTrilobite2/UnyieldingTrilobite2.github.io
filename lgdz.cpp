#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#define p 24
#define recol                                                 \
  color(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | \
        FOREGROUND_INTENSITY)
#define cls system("cls")
#define func(x) inline void x()
inline char gete(std::ifstream &fin) { return fin.get(); }
#define get getchar()
#define leave lev()
#define rand() (rnd::rad())
#define copy_puts(s) copy_printf("%s\n", (s))
#define endl "\n"
using namespace std;
string batxt;
HANDLE hOut;
inline void color(int x) {
  SetConsoleTextAttribute(hOut, x);
  char ss[1000];
  memset(ss, 0, sizeof(ss));
  sprintf(ss, "[\\col{%d}]", x);
  batxt = batxt + ss;
}
struct ofs {
  ofs operator<<(const string &s) {
    cout << s;
    batxt = batxt + s;
    return *this;
  }
  ofs operator<<(const char &s) {
    cout << s;
    batxt = batxt + s;
    return *this;
  }
  ofs operator<<(const int &s) {
    cout << s;
    static char ss[1000];
    memset(ss, 0, sizeof(ss));
    sprintf(ss, "%d", s);
    batxt = batxt + ss;
    return *this;
  }
} copy_cout;
inline void copy_printf(const char *format, ...) {
  static char s[1000];
  memset(s, 0, sizeof(s));
  va_list ap;
  va_start(ap, format);
  vsprintf(s, format, ap);
  printf(s);
  batxt = batxt + s;
  va_end(ap);
}
bool isprime(int x) {
  for (int i = 2; i <= sqrt(x); ++i)
    if (x % i == 0) return 0;
  return 1;
}
namespace rnd {
bool isInit;
const long long crsh1 = 2567483615LL;
const long long crsh2 = 2636928640LL;
const long long crsh3 = 4022730752LL;
long long index;
long long MT[624];
inline void srand(long long seed) {
  index = 0;
  isInit = 1;
  MT[0] = seed;
  for (long long i = 1; i < 624; ++i) {
    long long t = 1812433253 * (MT[i - 1] ^ (MT[i - 1] >> 30)) + i;
    MT[i] = t & 0xffffffff;
  }
}
func(generate) {
  for (long long i = 0; i < 624; ++i) {
    long long y = (MT[i] & 0x80000000) + (MT[(i + 1) % 624] & 0x7fffffff);
    MT[i] = MT[(i + 397) % 624] ^ (y >> 1);
    if (y & 1) MT[i] ^= crsh1;
  }
}
int rad() {
  if (!isInit) srand((long long)time(NULL));
  if (!index) generate();
  long long y = MT[index];
  y = y ^ (y >> 11);
  y = y ^ ((y << 7) & crsh2);
  y = y ^ ((y << 15) & crsh3);
  y = y ^ (y >> 18);
  index = (index + 1) % 624;
  return (int)(y & 2147483647);
}
inline int randin(int l, int r) { return l + rand() % (r - l + 1); }
inline int randof(int base, int err) { return randin(base - err, base + err); }
};  // namespace rnd
string str() {
  string hhhhh;
  cin >> hhhhh;
  return hhhhh;
}
string str(ifstream &fin) {
  string hhhhh;
  getline(fin, hhhhh);
  return hhhhh;
}
inline int num() {
  int hhhhh;
  cin >> hhhhh;
  return hhhhh;
}
int num(ifstream &fin) {
  int hhhhh;
  fin >> hhhhh;
  gete(fin);
  return hhhhh;
}
struct man {
  int atk;
  int def;
  int hp;
  int tch;
  int crt;
  int out;
  double critim;
  bool zt1, zt0;
  int skin;
} a, b, *x, *y;
string namep[] = {"CYaRon", "fAKe", "咕咕", "zyx", "大雾", "日爆"};
string knd[] = {"攻击力", "防御力", "血量", "暴击率", "闪避率", "暴击效果"};
void cy(man &r) {
  copy_printf("攻击力上升！");
  r.atk += 30;
}
void fk(man &r) {
  copy_printf("防御力上升！");
  r.def += 5;
  r.def = min(r.def, 70);
}
void gg(man &r) {
  copy_printf("血量上升！");
  r.hp += 80;
}
void zyx(man &r) {
  copy_printf("暴击率上升！");
  r.crt += 8;
  r.crt = min(r.crt, 80);
}
void fog(man &r) {
  copy_printf("闪避率上升！");
  r.out += 5;
  r.out = min(r.out, 70);
}
void crm(man &r) {
  copy_printf("暴击效果上升！");
  r.critim += 0.35;
  r.critim = min(r.critim, 4.);
}
void (*mfun[])(man &) = {cy, fk, gg, zyx, fog, crm};
int mjina, mjinb;
int dlt;
int know;
bool ended;
bool did;
bool tg;
bool lg1, lg2;
bool zz1, zz2;
bool zy1, zy2;
int prev1, prev2;
const string namex[] = {
    "chen_zhe", "小粉兔",       "zcysky",   "NaCly_Fish",    "kkksc03",
    "noip",     "老K",          "happyabc", "灵空",          "洛谷",
    "lin_toto", "xht37",        "小糯米",   "Unknown_Error", "return20071007",
    "soha",     "memset0",      "向北方",   "语文王子",      "lzn",
    "Siyuan",   "Harry_Potter", "zhouwc",   "StudyingFather"};
const string zersk[] = {"TOT",  "切题", "退役", "布球", "封号", "Ynoi",
                        "QAQ",  "盖楼", "虚无", "不灭", "文言", "天痕",
                        "教主", "神贴", "颓废", "空气", "禁言", "引战",
                        "不逊", "建站", "吊打", "举报", "自闭", "志愿"};
const string onesk[] = {"卖萌", "虐菜", "白羽", "装弱", "谷主", "毒瘤",
                        "复读", "灌水", "言灵", "辉煌", "改名", "陶片",
                        "女装", "珂学", "玄学", "队形", "orz",  "源泉",
                        "催审", "隐退", "超神", "鼻祖", "野心", "谔谔"};
int unable[p];
bool vst[p];
vector<string> sk[p];
vector<int> skcol[p];
vector<string> tex[p][2];
vector<string> jin[p][2];
vector<string> jil;
vector<int> pk1, pk2;
vector<string> nameof;
func(lev) {
  FILE *output = fopen("skin.luogu", "w");
  for (int i = 0; i < p; ++i)
    for (int j = unable[i]; j < sk[i].size(); ++j)
      fprintf(output, "%d\n%s\n%d\n%s\n%s\n%s\n%s\n", i, sk[i][j].c_str(),
              skcol[i][j], tex[i][0][j].c_str(), tex[i][1][j].c_str(),
              jin[i][0][j].c_str(), jin[i][1][j].c_str());
  fclose(output);
}
func(end) {
  if (a.hp > 0 && b.hp > 0) return;
  if (a.hp > 0) {
    if (b.tch != 9 || lg2)
      copy_puts("你AK了敌方！");
    else {
      copy_printf("敌方");
      if (!b.skin)
        copy_printf("洛谷触发了技能【不灭");
      else {
        color(skcol[b.tch][b.skin]);
        copy_cout << sk[b.tch][b.skin];
        recol;
        copy_cout << "触发了技能【";
        copy_cout << jin[b.tch][1][b.skin];
      }
      copy_puts("】，原地复活！");
      b.hp = a.hp - b.hp + 100;
      lg2 = 1;
      ended = 0;
      return;
    }
  } else {
    if (a.tch != 9 || lg1)
      copy_puts("敌方AK了你！");
    else {
      copy_printf("我方");
      if (!a.skin)
        copy_printf("洛谷触发了技能【不灭");
      else {
        color(skcol[a.tch][a.skin]);
        copy_cout << sk[a.tch][a.skin];
        recol;
        copy_cout << "触发了技能【";
        copy_cout << jin[a.tch][1][a.skin];
      }
      copy_puts("】，原地复活！");
      a.hp = b.hp - a.hp + 100;
      lg1 = 1;
      ended = 0;
      return;
    }
  }
  lg1 = lg2 = 0;
  ended = 1;
  batxt = batxt + "[\\end]\n";
}
func(null) { did = 0; }
func(rol) {
  if (ended) return;
  x->hp -= dlt;
  copy_printf(tg ? "你向敌方造成了" : "敌方向你造成了");
  copy_printf("%d点伤害！\n", dlt);
  if (x->hp <= 0) ended = 1;
}
func(cz0) {
  did = 0;
  if (ended) return;
  int dtt = dlt;
  dtt *= (rand() % 36 + 55);
  dtt /= 100;
  dtt += rand() % 61 - 30;
  dtt = max(dtt, 30);
  y->hp -= dtt;
  if (y->hp <= 0) ended = 1;
  copy_printf(tg ? "敌方" : "我方");
  if (!x->skin)
    copy_printf("chen_zhe触发了技能【TOT");
  else {
    color(skcol[x->tch][x->skin]);
    copy_cout << sk[x->tch][x->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[x->tch][0][x->skin];
  }
  copy_printf("】，");
  copy_printf(tg ? "我方受到了" : "敌方受到了");
  copy_printf("%d点伤害！\n", dtt);
  did = 1;
}
func(cz1) {
  did = 0;
  if (ended) return;
  if (x->hp <= y->hp) {
    copy_printf(tg ? "敌方" : "我方");
    if (!x->skin)
      copy_printf("chen_zhe触发了技能【卖萌");
    else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][1][x->skin];
    }
    copy_puts("】，防御力上升！");
    x->def += 3;
    x->def = min(x->def, 60);
    did = 1;
  }
}
func(rbt0) {
  did = 0;
  if (ended) return;
  copy_printf((!tg) ? "我方" : "敌方");
  if (!x->skin)
    copy_printf("小粉兔触发了技能【切题");
  else {
    color(skcol[x->tch][x->skin]);
    copy_cout << sk[x->tch][x->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[x->tch][0][x->skin];
  }
  copy_puts("】，暴击属性上升！");
  x->critim += 0.6, x->crt += 20;
  x->critim = min(x->critim, 3.0);
  x->crt = min(x->crt, 50);
  x->atk += 100;
  did = 1;
}
func(rbt1) {
  did = 0;
  if (y->hp > x->hp) {
    int h = max(round(y->hp * 2 / x->hp), 3.);
    int dltdlt = y->atk * h + rand() % 51 - 25;
    if (dltdlt <= 0) return;
    copy_printf(tg ? "我方" : "敌方");
    if (!y->skin)
      copy_printf("小粉兔触发了技能【虐菜");
    else {
      color(skcol[y->tch][y->skin]);
      copy_cout << sk[y->tch][y->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[y->tch][1][y->skin];
    }
    copy_printf("】，伤害+%d！\n", dltdlt);
    dlt += dltdlt;
    did = 1;
  }
}
func(zcy1) {
  did = 0;
  if (y->hp >= x->hp + dlt && !(rand() % 5)) {
    x->hp += dlt;
    y->hp -= dlt;
    copy_printf(tg ? "敌方" : "我方");
    if (!x->skin)
      copy_printf("zcysky触发了技能【白羽");
    else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][1][x->skin];
    }
    copy_puts("】，伤害反弹！");
    if (x->hp > 0) ended = 0;
    if (y->hp <= 0) ended = 1;
    dlt = 0;
    did = 1;
  }
}
func(zcy0) {
  did = 0;
  if (y->hp >= x->hp + dlt) {
    int h = dlt * (ended ? 0.6 : 0.7);
    h = h + rand() % 51 - 25;
    x->hp += h;
    if (x->hp > 0) {
      copy_printf(tg ? "敌方" : "我方");
      if (!x->skin)
        copy_printf("zcysky触发了技能【退役");
      else {
        color(skcol[x->tch][x->skin]);
        copy_cout << sk[x->tch][x->skin];
        recol;
        copy_cout << "触发了技能【";
        copy_cout << jin[x->tch][0][x->skin];
      }
      copy_printf("】，回复了%d点血量！\n", h);
      ended = 0;
      did = 1;
    }
  }
}
func(fish0) {
  did = 0;
  if (ended) return;
  if (y->hp > x->hp + dlt) {
    int tmp = x->hp;
    x->hp = y->hp - (dlt / 2.75), y->hp = tmp + (dlt / 2.75);
    copy_printf(tg ? "敌方" : "我方");
    if (!x->skin)
      copy_printf("NaCly_Fish触发了技能【布球");
    else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][0][x->skin];
    }
    copy_puts("】，更改了双方血量！");
    did = 1;
  }
}
func(fish1) {
  did = 0;
  if (ended) return;
  if (y->hp < x->hp) {
    int h = dlt >> 2;
    copy_printf((!tg) ? "敌方" : "我方");
    if (!y->skin)
      copy_printf("NaCly_Fish触发了技能【装弱");
    else {
      color(skcol[y->tch][y->skin]);
      copy_cout << sk[y->tch][y->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[y->tch][1][y->skin];
    }
    copy_printf("】，回复了%d点血量！\n", h);
    y->hp += h;
    did = 1;
  }
}
func(kkk0) {
  did = 0;
  if (y->hp <= x->hp + 500 && rand() & 7) {
    x->hp -= dlt;
    copy_printf(tg ? "你向敌方造成了" : "敌方向你造成了");
    copy_printf("%d点伤害！\n", dlt);
    dlt = 0;
    copy_printf(tg ? "我方" : "敌方");
    if (!y->skin)
      copy_printf("kkksc03触发了技能【封号");
    else {
      color(skcol[y->tch][y->skin]);
      copy_cout << sk[y->tch][y->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[y->tch][0][y->skin];
    }
    copy_printf("】，");
    copy_printf(tg ? "敌方" : "我方");
    copy_puts("防御技能失效！");
    if (x->hp <= 0) ended = 1;
    did = 1;
  }
}
func(kkk1) {
  did = 0;
  if (ended) return;
  copy_printf(tg ? "敌方" : "我方");
  if (!x->skin)
    copy_printf("kkksc03触发了技能【谷主");
  else {
    color(skcol[x->tch][x->skin]);
    copy_cout << sk[x->tch][x->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[x->tch][1][x->skin];
  }
  copy_printf("】，各项属性上升！\n");
  x->atk += 45;
  x->def = min(x->def + 1, 60);
  x->crt += 5;
  x->crt = min(x->crt, 80);
  x->critim += 0.3;
  x->critim = min(x->critim, 3.);
  did = 1;
}
func(noip0) {
  did = 0;
  if (ended) return;
  y->def = y->crt = y->out = 0;
  y->critim = 1;
  y->atk = max(y->atk - 15, 300);
  copy_printf(tg ? "敌方" : "我方");
  if (!x->skin)
    copy_printf("noip触发了技能【Ynoi");
  else {
    color(skcol[x->tch][x->skin]);
    copy_cout << sk[x->tch][x->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[x->tch][0][x->skin];
  }
  copy_printf("】，");
  copy_printf(tg ? "我方" : "敌方");
  copy_puts("各项属性下降！");
  did = 1;
}
func(noip1) {
  did = 0;
  if (ended) return;
  int cnt = rand() % 3 + 2, ret = 0;
  while (x->hp > 0 && ret <= 250) {
    int h = rand() % 10 + 40;
    x->hp -= h;
    copy_printf(tg ? "我方" : "敌方");
    if (!y->skin)
      copy_printf("noip触发了技能【毒瘤");
    else {
      color(skcol[y->tch][y->skin]);
      copy_cout << sk[y->tch][y->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[y->tch][1][y->skin];
    }
    copy_printf("】，");
    copy_printf(tg ? "敌方" : "我方");
    copy_printf("受到了%d点伤害！\n", h);
    ret += h;
    if (rand() % cnt == 0) break;
  }
  copy_printf(tg ? "我方" : "敌方");
  if (!y->skin)
    copy_printf("noip的【毒瘤");
  else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "的【";
    copy_cout << jin[y->tch][1][y->skin];
  }
  copy_printf("】共计对");
  copy_printf(tg ? "敌方" : "我方");
  copy_printf("造成了%d点伤害！\n", ret);
  if (x->hp <= 0) ended = 1;
  did = 1;
}
func(K1);
func(K0) {
  did = 0;
  if (ended) return;
  int dltdlt = x->hp * 0.2 + rand() % 51 - 25;
  if (dltdlt <= 0) return;
  copy_printf(tg ? "我方" : "敌方");
  if (!y->skin)
    copy_printf("老K触发了技能【QAQ");
  else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][0][y->skin];
  }
  copy_printf("】，伤害+%d！\n", dltdlt);
  dlt += dltdlt;
  did = 1;
}
func(lyf1) {
  did = 0;
  if (ended) return;
  copy_printf(tg ? "我方" : "敌方");
  if (!y->skin)
    copy_printf("happyabc触发了技能【灌水");
  else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][1][y->skin];
  }
  copy_cout << "】，";
  int ret = 0;
  if (rand() % 100 >= 4)
    copy_printf("%s失去了%d点血量！\n", tg ? "敌方" : "我方",
                ret = (y->hp * 0.17) + 20),
        x->hp -= ret, (x->hp <= 0) && (ended = 1);
  else
    copy_printf("%s当场崩溃！\n", tg ? "敌方" : "我方"), x->hp = -1, ended = 1,
                                                         dlt = 0;
  did = 1;
}
func(lyf0) {
  did = 0;
  if (ended) return;
  if (y->hp >= x->hp - 80 - dlt) return;
  copy_printf(tg ? "我方" : "敌方");
  if (!y->skin)
    copy_printf("happyabc触发了技能【盖楼");
  else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][0][y->skin];
  }
  copy_printf("】，将血量回复至了%d！\n", y->hp = x->hp - 80 - dlt);
  did = 1;
}
func(ljt0);
func(ljt1) {
  did = 0;
  if (ended) return;
  did = 1;
  if (y->atk >= 300 && rand() % 3 == 0) {
    int h = 65 - rand() % 11;
    y->atk -= h;
    x->atk += h;
    copy_printf(tg ? "敌方" : "我方");
    if (!x->skin)
      copy_printf("灵空触发了技能【言灵");
    else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][1][x->skin];
    }
    copy_printf("】，吸取了%s%d点攻击力！\n", tg ? "我方" : "敌方", h);
  } else if (y->def >= 10 && rand() % 3 == 0) {
    int h = 2 + (rand() & 1);
    y->def -= h;
    x->def += h;
    copy_printf(tg ? "敌方" : "我方");
    if (!x->skin)
      copy_printf("灵空触发了技能【言灵");
    else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][1][x->skin];
    }
    copy_printf("】，吸取了%s%d点防御力！\n", tg ? "我方" : "敌方", h);
  } else if (y->crt >= 10 && x->crt < 50 && rand() % 3 == 0) {
    int h = max(5 + (rand() % 3), 50 - x->crt);
    y->crt -= h;
    x->crt += h;
    copy_printf(tg ? "敌方" : "我方");
    if (!x->skin)
      copy_printf("灵空触发了技能【言灵");
    else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][1][x->skin];
    }
    copy_printf("】，吸取了%s%d点暴击率！\n", tg ? "我方" : "敌方", h);
  } else if (y->out >= 10 && x->out < 49 && rand() % 3 == 0) {
    int h = 3 + (rand() & 1);
    if (x->out == 48) h = 2;
    y->out -= h;
    x->out += h;
    copy_printf(tg ? "敌方" : "我方");
    if (!x->skin)
      copy_printf("灵空触发了技能【言灵");
    else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][1][x->skin];
    }
    copy_printf("】，吸取了%s%d点闪避率！\n", tg ? "我方" : "敌方", h);
  } else if (y->critim >= 2.0) {
    double h = max(0.5 + (rand() % 3) / 10., 3 - x->critim);
    y->critim -= h;
    x->critim += h;
    copy_printf(tg ? "敌方" : "我方");
    if (!x->skin)
      copy_printf("灵空触发了技能【言灵");
    else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][1][x->skin];
    }
    copy_printf("】，吸取了%s%.2lf点暴击效果！\n", tg ? "我方" : "敌方", h);
  } else
    did = 0;
}
func(lgu1) {
  did = 0;
  if (ended || !(tg ? lg1 : lg2)) return;
  if (y->hp > x->hp || dlt > 1000) return;
  copy_printf("%s", tg ? "我方" : "敌方");
  if (!y->skin) {
    copy_printf("洛谷触发了技能【辉煌】，伤害+%d！\n", dlt / 13);
  } else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][1][y->skin];
    copy_cout << "】，伤害+" << dlt / 15 << "！\n";
  }
  dlt += dlt / 15;
  did = 1;
}
func(ltt1) {
  did = 0;
  if (rand() % 100 >= 47 && dlt <= 1600) {
    copy_printf((!tg) ? "我方" : "敌方");
    did = 1;
    x->hp += dlt;
    if (!x->skin) {
      copy_printf("lin_toto触发了技能【改名");
    } else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][0][x->skin];
    }
    copy_cout << "】，免疫了这次伤害！" << endl;
    if (x->hp > 0) ended = 0;
    dlt = 0;
  }
}
func(ltt0) {
  did = 0;
  if (rand() & 1) {
    int h = 120 + rand() % 71;
    x->hp += h;
    if (x->hp > 0) {
      did = 1;
      copy_printf((!tg) ? "我方" : "敌方");
      if (!x->skin) {
        copy_printf("lin_toto触发了技能【文言");
      } else {
        color(skcol[x->tch][x->skin]);
        copy_cout << sk[x->tch][x->skin];
        recol;
        copy_cout << "触发了技能【";
        copy_cout << jin[x->tch][1][x->skin];
      }
      copy_cout << "】，回复了" << h << "点血量！" << endl;
      ended = 0;
    }
  }
}
func(zdj0) {
  did = 0;
  if (y->hp < x->hp || x->tch == 18) {
    int dltdlt;
    if (x->tch == 18) {
      if (y->hp * 2 > x->hp - dlt)
        dltdlt = x->hp / 2;
      else
        dltdlt = x->hp - x->hp / ((x->hp - dlt) / 2 / y->hp);
    } else if (y->hp * 2 > x->hp - dlt)
      dltdlt = x->hp / acos(-1);
    else
      dltdlt = x->hp - x->hp / ((x->hp - dlt) / 2 / y->hp);
    if (dltdlt <= 0) return;
    copy_printf(tg ? "我方" : "敌方");
    if (!y->skin)
      copy_printf("xht37触发了技能【天痕");
    else {
      color(skcol[y->tch][y->skin]);
      copy_cout << sk[y->tch][y->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[y->tch][0][y->skin];
    }
    copy_printf("】，%s额外受到了%d点伤害！\n", tg ? "敌方" : "我方", dltdlt);
    x->hp -= dltdlt;
    if (x->hp <= 0) ended = 1;
    did = 1;
  }
}
func(zdj1) {
  did = 0;
  if (ended) return;
  int dltdlt = 140 + rand() % 51;
  if (y->tch == 18) dltdlt *= 2;
  y->hp -= dltdlt;
  if (y->hp <= 0) ended = 1;
  copy_printf(tg ? "敌方" : "我方");
  if (!x->skin)
    copy_printf("xht37触发了技能【陶片");
  else {
    color(skcol[x->tch][x->skin]);
    copy_cout << sk[x->tch][x->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[x->tch][1][x->skin];
  }
  copy_printf("】，");
  copy_printf(tg ? "你受到了" : "敌方受到了");
  copy_printf("%d点伤害！\n", dltdlt);
  did = 1;
}
func(nm0) {
  did = 1;
  int dlw = (dlt / (1 - (x->def) / 100.0) + rand() % 101) - dlt;
  dlt += dlw;
  copy_printf((!tg) ? "敌方" : "我方");
  if (!y->skin)
    copy_printf("小糯米触发了技能【教主");
  else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][0][y->skin];
  }
  copy_printf("】，伤害+%d！\n", dlw);
}
func(nm1) {
  did = 0;
  if (ended) return;
  int dltdlt = dlt / 3.5 + rand() % 101 - 50;
  if (dltdlt <= 0) return;
  copy_printf(tg ? "敌方" : "我方");
  if (!x->skin) {
    copy_printf("小糯米触发了技能【女装");
  } else {
    color(skcol[x->tch][x->skin]);
    copy_cout << sk[x->tch][x->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[x->tch][1][x->skin];
  }
  copy_cout << "】，吸取了" << (tg ? "我方" : "敌方") << dltdlt << "点血量！"
            << endl;
  x->hp += dltdlt;
  y->hp -= dltdlt;
  did = 1;
}
func(uke0) {
  did = 0;
  int h = x->hp * 0.14;
  h += rand() % 51;
  x->hp += h;
  if (x->hp > 0) {
    copy_printf(tg ? "敌方" : "我方");
    if (!x->skin)
      copy_printf("Unknown_Error触发了技能【神贴");
    else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][0][x->skin];
    }
    copy_printf("】，回复了%d点血量！\n", h);
    ended = 0;
    did = 1;
  }
}
func(uke1) {
  did = 1;
  int dlw = dlt / 2;
  dlt += dlw;
  copy_printf((!tg) ? "敌方" : "我方");
  if (!y->skin)
    copy_printf("Unknown_Error触发了技能【珂学");
  else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][1][y->skin];
  }
  copy_printf("】，伤害+%d！\n", dlw);
}
func(jhe0);
func(jhe1) {
  did = 0;
  int dltdlt = (tg ? prev2 : prev1) - x->hp;
  if (dltdlt < 0) return;
  if (dltdlt <= 400) {
    copy_printf((!tg) ? "我方" : "敌方");
    did = 1;
    x->hp += dltdlt;
    if (!x->skin) {
      copy_printf("return20071007触发了技能【玄学");
    } else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][1][x->skin];
    }
    copy_cout << "】，免疫了这次伤害！" << endl;
    if (x->hp > 0) ended = 0;
    dlt = 0;
  } else if (dltdlt > 450) {
    copy_printf((!tg) ? "我方" : "敌方");
    did = 1;
    x->hp += dltdlt - 450;
    if (!x->skin) {
      copy_printf("return20071007触发了技能【玄学");
    } else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][1][x->skin];
    }
    copy_cout << "】，免疫了部分伤害！" << endl;
    if (x->hp > 0) ended = 0;
    if (dlt > 450) dlt = 450;
  }
  tg ? (prev2 = x->hp) : (prev1 = x->hp);
}
func(soha0) {
  did = 0;
  if (dlt <= 3) return;
  if (isprime(dlt)) {
    copy_printf((!tg) ? "我方" : "敌方");
    did = 1;
    x->hp += dlt;
    if (!x->skin) {
      copy_printf("soha触发了技能【队形");
    } else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][0][x->skin];
    }
    copy_cout << "】，免疫了这次伤害！" << endl;
    if (x->hp > 0) ended = 0;
    return;
  }
  for (int i = 3; i <= dlt; ++i)
    if (dlt % i == 0) {
      copy_printf((!tg) ? "我方" : "敌方");
      did = 1;
      x->hp += dlt / i;
      if (!x->skin) {
        copy_printf("soha触发了技能【队形");
      } else {
        color(skcol[x->tch][x->skin]);
        copy_cout << sk[x->tch][x->skin];
        recol;
        copy_cout << "触发了技能【";
        copy_cout << jin[x->tch][0][x->skin];
      }
      copy_cout << "】，免疫了" << dlt / i << "点伤害！" << endl;
      dlt -= dlt / i;
      if (x->hp > 0) ended = 0;
    }
}
func(soha1) {
  did = 0;
  if (dlt >= 500) return;
  did = 1;
  int dlw = 500 - dlt;
  dlt += dlw;
  copy_printf((!tg) ? "敌方" : "我方");
  if (!y->skin)
    copy_printf("soha触发了技能【空气");
  else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][1][y->skin];
  }
  copy_printf("】，伤害+%d！\n", dlw);
}
func(mst0);
func(mst1);
func(splay0);
func(splay1) {
  did = 0;
  int w = (tg ? prev1 : prev2);
  if (w >= y->hp) return;
  w = y->hp - w;
  x->hp += w;
  if (x->hp > 0) {
    ended = 0;
    copy_printf(tg ? "敌方" : "我方");
    if (!x->skin)
      copy_printf("向北方触发了技能【源泉");
    else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][1][x->skin];
    }
    copy_cout << "】，回复了" << w << "点血量！" << endl;
    did = 1;
  }
}
func(prc1) {
  did = 1;
  y->atk += rnd::randin(1, 10);
  copy_printf(tg ? "我方" : "敌方");
  if (!y->skin)
    copy_printf("语文王子触发了技能【催审");
  else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][0][y->skin];
  }
  copy_printf("】，攻击力上升！\n");
}
func(prc0) {
  did = 0;
  while (x->hp - dlt > y->hp && !(x->tch == 11 && dlt >= x->hp)) {
    dlt <<= 1, did = 1;
    copy_printf(tg ? "我方" : "敌方");
    if (!y->skin)
      copy_printf("语文王子触发了技能【不逊");
    else {
      color(skcol[y->tch][y->skin]);
      copy_cout << sk[y->tch][y->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[y->tch][1][y->skin];
    }
    copy_printf("】，伤害翻倍！\n");
    if (x->tch == 11) return;
  }
}
func(lzn0) {
  did = 0;
  if (tg ? lg1 : lg2) return;
  tg ? lg1 = 1 : lg2 = 1;
  x->hp -= dlt;
  if (x->hp <= 0) ended = 1;
  copy_printf(tg ? "你向敌方造成了" : "敌方向你造成了");
  copy_printf("%d点伤害！\n", dlt);
  dlt = 0;
  copy_printf(tg ? "我方" : "敌方");
  if (!y->skin)
    copy_printf("lzn触发了技能【建站");
  else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][0][y->skin];
  }
  copy_cout << "】，伤害+" << (int)(x->hp * 0.45) << "！\n";
  x->hp -= (int)(x->hp * 0.45);
  did = 1;
}
func(lzn1) {
  did = 0;
  if (!(tg ? lg1 : lg2)) return;
  if (tg ? zz1 : zz2) return;
  tg ? zz1 = 1 : zz2 = 1;
  x->hp -= dlt;
  if (x->hp <= 0) ended = 1;
  copy_printf(tg ? "你向敌方造成了" : "敌方向你造成了");
  copy_printf("%d点伤害！\n", dlt);
  dlt = 0;
  copy_printf(tg ? "我方" : "敌方");
  if (!y->skin)
    copy_printf("lzn触发了技能【隐退");
  else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][0][y->skin];
  }
  copy_cout << "】，回复了" << y->hp / 4 << "点血量！\n";
  y->hp += y->hp / 4;
  did = 1;
}
func(sy0) {
  did = 0;
  if (y->out > x->out && dlt <= 800 || x->tch == 7) {
    copy_printf(tg ? "我方" : "敌方");
    if (!y->skin)
      copy_printf("Siyuan触发了技能【吊打");
    else {
      color(skcol[y->tch][y->skin]);
      copy_cout << sk[y->tch][y->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[y->tch][0][y->skin];
    }
    if (x->tch != 7)
      copy_printf("】，伤害翻倍！\n"), dlt *= 2;
    else
      copy_printf("】，伤害翻三倍！\n"), dlt *= 3;
    did = 1;
  }
}
func(sy1) {
  y->atk *= 0.8, y->crt *= 0.8, y->critim *= 0.8;
  y->atk = max(y->atk, 400), y->critim = max(y->critim, 1.1),
  y->crt = max(y->crt, 1);
  x->atk *= 1.25, x->crt *= 1.25, x->critim *= 1.25;
  x->atk = min(x->atk, 600), x->crt = min(x->crt, 50),
  x->critim = min(x->critim, 3.);
  copy_printf(tg ? "敌方" : "我方");
  if (!x->skin)
    copy_printf("Siyuan触发了技能【超神");
  else {
    color(skcol[x->tch][x->skin]);
    copy_cout << sk[x->tch][x->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[x->tch][1][x->skin];
  }
  copy_printf("】，更改了双方攻击属性！\n");
  did = 1;
}
func(hap1) {
  int gal = rand() % 100;
  if (!gal) {
    copy_printf(tg ? "我方" : "敌方");
    if (!y->skin)
      copy_printf("Harry_Potter触发了技能【鼻祖");
    else {
      color(skcol[y->tch][y->skin]);
      copy_cout << sk[y->tch][y->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[y->tch][1][y->skin];
    }
    copy_printf("】，%s当场崩溃！\n", tg ? "敌方" : "我方"), x->hp = -1,
                                                             ended = 1, dlt = 0;
    did = 1;
    return;
  }
  if (gal <= 33) {
    int dlw = dlt / 2;
    dlt += dlw;
    copy_printf(tg ? "我方" : "敌方");
    if (!y->skin)
      copy_printf("Harry_Potter触发了技能【鼻祖");
    else {
      color(skcol[y->tch][y->skin]);
      copy_cout << sk[y->tch][y->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[y->tch][1][y->skin];
    }
    copy_printf("】，伤害+%d！\n", dlw);
    did = 1;
    return;
  }
  if (gal <= 66) {
    y->atk += 10;
    x->def = 0;
    did = 0;
    if (y->hp > x->atk) {
      y->hp -= x->atk;
      copy_printf(tg ? "我方" : "敌方");
      if (!y->skin)
        copy_printf("Harry_Potter触发了技能【鼻祖");
      else {
        color(skcol[y->tch][y->skin]);
        copy_cout << sk[y->tch][y->skin];
        recol;
        copy_cout << "触发了技能【";
        copy_cout << jin[y->tch][1][y->skin];
      }
      copy_printf("】，受到了%s的%d点伤害！\n", tg ? "敌方" : "我方", x->atk);
    }
    dlt <<= 1;
    did = 1;
    return;
  } else {
    did = 0;
    while (x->hp - dlt > y->hp) {
      dlt <<= 1, did = 1;
      copy_printf(tg ? "我方" : "敌方");
      if (!y->skin)
        copy_printf("Harry_Potter触发了技能【鼻祖");
      else {
        color(skcol[y->tch][y->skin]);
        copy_cout << sk[y->tch][y->skin];
        recol;
        copy_cout << "触发了技能【";
        copy_cout << jin[y->tch][1][y->skin];
      }
      copy_printf("】，伤害翻倍！\n");
    }
    return;
  }
}
func(hap0);
func(zwc1) {
  did = 0;
  if (rand() & 1 || y->atk >= 1200) return;
  did = 1;
  y->atk *= 2;
  copy_printf(tg ? "我方" : "敌方");
  if (!y->skin)
    copy_printf("zhouwc触发了技能【野心");
  else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][0][y->skin];
  }
  copy_printf("】，攻击力上升！\n");
}
func(zwc0) {
  did = 0;
  if (rand() & 1) return;
  y->atk *= 2;
  y->atk /= 3;
  copy_printf(tg ? "我方" : "敌方");
  if (!y->skin)
    copy_printf("zhouwc触发了技能【自闭");
  else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][1][y->skin];
  }
  copy_printf("】，攻击力下降！\n");
}
func(sf0) {
  if (ended) return;
  if (did) return;
  if (tg ? zy1 : zy2) return;
  if (rand() % 3) return;
  tg ? zy1 = 1 : zy2 = 1;
  copy_printf(tg ? "敌方" : "我方");
  if (!x->skin)
    copy_printf("StudyingFather触发了技能【志愿");
  else {
    color(skcol[x->tch][x->skin]);
    copy_cout << sk[x->tch][x->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[x->tch][0][x->skin];
  }
  copy_printf("】，啥用也没有......\n");
  did = 1;
}
func(sf1) {
  did = 0;
  if (!(tg ? zy1 : zy2)) return;
  if (dlt >= 1500) return;
  y->hp -= dlt;
  x->hp += dlt;
  dlt = 0;
  copy_printf(tg ? "敌方" : "我方");
  if (!x->skin)
    copy_printf("StudyingFather触发了技能【谔谔");
  else {
    color(skcol[x->tch][x->skin]);
    copy_cout << sk[x->tch][x->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[x->tch][1][x->skin];
  }
  copy_printf("】，伤害反弹！\n");
  if (rand() % 3) tg ? zy1 = 0 : zy2 = 0;
  did = 1;
}
const bool z1[] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0,
                   0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0};
const bool z0[] = {0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1,
                   1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0};
void (*zero[])() = {cz0,  rbt0,   zcy0, fish0, kkk0, noip0, K0,   lyf0,
                    ljt0, null,   ltt0, zdj0,  nm0,  uke0,  jhe0, soha0,
                    mst0, splay0, prc0, lzn0,  sy0,  hap0,  zwc0, sf0};
void (*one[])() = {cz1,  rbt1,   zcy1, fish1, kkk1, noip1, K1,   lyf1,
                   ljt1, lgu1,   ltt1, zdj1,  nm1,  uke1,  jhe1, soha1,
                   mst1, splay1, prc1, lzn1,  sy1,  hap1,  zwc1, sf1};
func(hap0) {
  did = 0;
  int gal = rand() % 100;
  if (gal < 40) {
    int h = rand() % 21 + 80;
    if (dlt) rol();
    if (dlt && !(tg ? b : a).zt1) {
      one[(tg ? b : a).tch]();
      if (did && rand() % 3 == 0 &&
          tex[(tg ? b : a).tch][1][(tg ? b : a).skin] != "")
        copy_cout << endl
                  << tex[(tg ? b : a).tch][1][(tg ? b : a).skin] << endl
                  << endl;
    }
    if (dlt && !(tg ? b : a).zt0) {
      zero[(tg ? b : a).tch]();
      if (did && rand() % 3 == 0 &&
          tex[(tg ? b : a).tch][0][(tg ? b : a).skin] != "")
        copy_cout << endl
                  << tex[(tg ? b : a).tch][0][(tg ? b : a).skin] << endl
                  << endl;
    }
    dlt = 0;
    if (ended) return;
    copy_printf(tg ? "我方" : "敌方");
    if (!y->skin)
      copy_printf("Harry_Potter触发了技能【举报");
    else {
      color(skcol[y->tch][y->skin]);
      copy_cout << sk[y->tch][y->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[y->tch][0][y->skin];
    }
    copy_cout << "】，失去了" << h << "点血量！\n";
    y->hp -= h;
    (y->hp <= 0) && (ended = 1);
    did = 1;
    return;
  }
  if (gal < 70) {
    int num = (int)x->zt0 + (int)x->zt1;
    if (!num) return;
    int timesd = num * 0.4 * dlt + rand() % 30;
    dlt += timesd;
    copy_printf(tg ? "我方" : "敌方");
    if (!y->skin)
      copy_printf("Harry_Potter触发了技能【举报");
    else {
      color(skcol[y->tch][y->skin]);
      copy_cout << sk[y->tch][y->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[y->tch][0][y->skin];
    }
    copy_printf("】，伤害+%d！\n", timesd);
    did = 1;
  } else {
    if (y->hp <= x->hp + 500 && rand() & 7) {
      x->hp -= dlt;
      copy_printf(tg ? "你向敌方造成了" : "敌方向你造成了");
      copy_printf("%d点伤害！\n", dlt);
      dlt = 0;
      copy_printf(tg ? "我方" : "敌方");
      if (!y->skin)
        copy_printf("Harry_Potter触发了技能【举报");
      else {
        color(skcol[y->tch][y->skin]);
        copy_cout << sk[y->tch][y->skin];
        recol;
        copy_cout << "触发了技能【";
        copy_cout << jin[y->tch][0][y->skin];
      }
      copy_printf("】，");
      copy_printf(tg ? "敌方" : "我方");
      copy_puts("防御技能失效！");
      if (x->hp <= 0) ended = 1;
      did = 1;
    }
  }
}
func(splay0) {
  y->atk += 10;
  x->def = 0;
  did = 0;
  if (y->hp > x->atk || x->tch == 5) {
    y->hp -= x->atk;
    if (x->tch == 5) y->hp -= x->atk / 2;
    copy_printf(tg ? "我方" : "敌方");
    if (!y->skin)
      copy_printf("向北方触发了技能【引战");
    else {
      color(skcol[y->tch][y->skin]);
      copy_cout << sk[y->tch][y->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[y->tch][0][y->skin];
    }
    copy_printf("】，受到了%s的%d点伤害！\n", tg ? "敌方" : "我方",
                x->atk + (x->atk) * (x->tch == 5) / 2);
  }
  dlt = dlt * 2;
  did = 1;
  int bld = x->hp;
  if (did && rand() % 3 == 0 &&
      tex[(tg ? a : b).tch][0][(tg ? a : b).skin] != "")
    copy_cout << endl
              << tex[(tg ? a : b).tch][0][(tg ? a : b).skin] << endl
              << endl;
  if (dlt) rol();
  if (dlt && !(tg ? b : a).zt1) {
    one[(tg ? b : a).tch]();
    if (did && rand() % 3 == 0 &&
        tex[(tg ? b : a).tch][1][(tg ? b : a).skin] != "")
      copy_cout << endl
                << tex[(tg ? b : a).tch][1][(tg ? b : a).skin] << endl
                << endl;
  }
  if (dlt && !(tg ? b : a).zt0) {
    zero[(tg ? b : a).tch]();
    if (did && rand() % 3 == 0 &&
        tex[(tg ? b : a).tch][0][(tg ? b : a).skin] != "")
      copy_cout << endl
                << tex[(tg ? b : a).tch][0][(tg ? b : a).skin] << endl
                << endl;
  }
  if (x->hp <= 0) return dlt = 0, void();
  did = 0;
  if (x->hp > bld - dlt) {
    int rev = x->hp - bld + dlt;
    y->hp += rev;
    copy_printf(tg ? "我方" : "敌方");
    if (!y->skin)
      copy_printf("向北方触发了技能【源泉");
    else {
      color(skcol[y->tch][y->skin]);
      copy_cout << sk[y->tch][y->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[y->tch][1][y->skin];
    }
    copy_printf("】，回复了%d点血量！\n", rev);
    did = 1;
    if (y->hp > 0) ended = 0;
  }
  dlt = 0;
}
func(mst0) {
  did = 0;
  int num = (int)x->zt0 + (int)x->zt1;
  if (!num) return;
  int timesd = num * 0.4 * dlt + rand() % 30;
  dlt += timesd;
  copy_printf((!tg) ? "敌方" : "我方");
  if (!y->skin)
    copy_printf("memset0触发了技能【禁言");
  else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][0][y->skin];
  }
  copy_printf("】，伤害+%d！\n", timesd);
  did = 1;
}
func(mst1) {
  did = 0;
  if (ended) return;
  int num = (int)y->zt0 + (int)y->zt1;
  num = 2 - num;
  if (!num) return;
  int timesd = num * 0.35 * dlt;
  dlt -= timesd;
  copy_printf(tg ? "敌方" : "我方");
  if (!x->skin)
    copy_printf("memset0触发了技能【orz");
  else {
    color(skcol[x->tch][x->skin]);
    copy_cout << sk[x->tch][x->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[x->tch][1][x->skin];
  }
  copy_printf("】，免疫了%d点伤害！\n", timesd);
  x->hp += timesd;
  did = 1;
}
func(K1) {
  did = 0;
  if (ended) return;
  if (!(rand() & 7)) return;
  bool flg = 0;
  if (dlt && !(y->zt1) && y->tch != 6) flg = 1;
  if (dlt && !(y->zt0)) flg = 1;
  if (!flg)
    return;
  else {
    copy_printf((!tg) ? "我方" : "敌方");
    if (!x->skin) {
      copy_printf("老K触发了技能【复读】，化身为了伪%s！\n",
                  namex[y->tch].c_str());
      if (dlt && !(y->zt1) && y->tch != 6) one[y->tch]();
      if (dlt && !(y->zt0)) zero[y->tch]();
    } else {
      color(skcol[x->tch][x->skin]);
      copy_cout << sk[x->tch][x->skin];
      recol;
      copy_cout << "触发了技能【";
      copy_cout << jin[x->tch][1][x->skin];
      copy_cout << "】，化身为了伪";
      copy_cout << namex[y->tch].c_str() << "！\n";
      int h = x->skin;
      x->skin = 0;
      if (dlt && !(y->zt1) && y->tch != 6) one[y->tch]();
      if (dlt && !(y->zt0)) zero[y->tch]();
      x->skin = h;
    }
  }
  did = 1;
}
func(ljt0) {
  did = 0;
  if (rand() % 100 >= 45) return;
  if (dlt) rol();
  if (dlt && !(tg ? b : a).zt1) {
    one[(tg ? b : a).tch]();
    if (did && rand() % 3 == 0 &&
        tex[(tg ? b : a).tch][1][(tg ? b : a).skin] != "")
      copy_cout << endl
                << tex[(tg ? b : a).tch][1][(tg ? b : a).skin] << endl
                << endl;
  }
  if (dlt && !(tg ? b : a).zt0) {
    zero[(tg ? b : a).tch]();
    if (did && rand() % 3 == 0 &&
        tex[(tg ? b : a).tch][0][(tg ? b : a).skin] != "")
      copy_cout << endl
                << tex[(tg ? b : a).tch][0][(tg ? b : a).skin] << endl
                << endl;
  }
  dlt = 0;
  if (ended) return;
  copy_printf(tg ? "我方" : "敌方");
  if (!y->skin) {
    copy_printf("灵空触发了技能【虚无");
  } else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][0][y->skin];
  }
  copy_cout << "】，下回合将再进行一次攻击！\n";
  tg ^= 1;
  did = 1;
}
func(jhe0) {
  did = 0;
  int h = rand() % 31 + 80;
  if (dlt) rol();
  if (dlt && !(tg ? b : a).zt1) {
    one[(tg ? b : a).tch]();
    if (did && rand() % 3 == 0 &&
        tex[(tg ? b : a).tch][1][(tg ? b : a).skin] != "")
      copy_cout << endl
                << tex[(tg ? b : a).tch][1][(tg ? b : a).skin] << endl
                << endl;
  }
  if (dlt && !(tg ? b : a).zt0) {
    zero[(tg ? b : a).tch]();
    if (did && rand() % 3 == 0 &&
        tex[(tg ? b : a).tch][0][(tg ? b : a).skin] != "")
      copy_cout << endl
                << tex[(tg ? b : a).tch][0][(tg ? b : a).skin] << endl
                << endl;
  }
  dlt = 0;
  if (ended) return;
  copy_printf(tg ? "我方" : "敌方");
  if (!y->skin) {
    copy_printf("return20071007触发了技能【颓废");
  } else {
    color(skcol[y->tch][y->skin]);
    copy_cout << sk[y->tch][y->skin];
    recol;
    copy_cout << "触发了技能【";
    copy_cout << jin[y->tch][0][y->skin];
  }
  copy_cout << "】，失去了" << h << "点血量！\n";
  y->hp -= h;
  (y->hp <= 0) && (ended = 1);
  did = 1;
}
inline void del(vector<string> &a, int b) { a.erase(a.begin() + b); }
inline void del(vector<int> &a, int b) { a.erase(a.begin() + b); }
inline void check(int f, int pos) {
change:
  int c = skcol[f][pos];
  puts("是这样吗：");
  cout << "名称：" << namex[f] << "->";
  color(c);
  cout << sk[f][pos];
  recol;
  cout << endl << "技能：" << zersk[f] << "->";
  color(c);
  cout << jin[f][0][pos];
  recol;
  cout << endl << "特效：" << tex[f][0][pos];
  cout << endl << "技能：" << onesk[f] << "->";
  color(c);
  cout << jin[f][1][pos];
  recol;
  cout << endl << "特效：" << tex[f][1][pos] << endl;
  cout << "如果您需要改变它，输入change;否则输入ok\n";
  if (str() != "change")
    return;
  else {
    cls;
    cout << "您需要改变它的什么呢？\n1." << sk[f][pos] << endl << "2.";
    color(c);
    cout << sk[f][pos];
    recol;
    cout << endl
         << "3." << jin[f][0][pos] << endl
         << "4." << tex[f][0][pos] << endl
         << "5." << jin[f][1][pos] << endl
         << "6." << tex[f][1][pos] << endl;
    int u = num();
    while (u <= 0 || u > 6) puts("无效选项，请重新输入！"), u = num();
    cls;
    switch (u) {
      case 1:
        cout << "请输入皮肤名（只支持本行输入哦）：";
        get;
        getline(cin, sk[f][pos]);
        cls;
        goto change;
      case 2:
        for (int i = 0; i < 256; ++i) {
          color(i);
          printf("%d.%s", i, sk[f][sk[f].size() - 1].c_str());
          recol;
          cout << endl;
        }
        cout << "请选择皮肤颜色：";
        int xx;
        cin >> xx;
        while (xx < 0 || xx >= 256)
          printf("不存在这款颜色！请重新输入："), cin >> xx;
        skcol[f][pos] = xx;
        get;
        cls;
        goto change;
      case 3:
        cout << "请输入技能名（只支持对应行输入哦）：\n技能：" << zersk[f]
             << "->";
        get;
        getline(cin, jin[f][0][pos]);
        cls;
        goto change;
      case 4:
        cout << "请输入技能特效（只支持对应行输入哦）：\n"
             << jin[f][0][pos] << "：";
        get;
        getline(cin, tex[f][0][pos]);
        cls;
        goto change;
      case 5:
        cout << "请输入技能名（只支持对应行输入哦）：\n技能：" << onesk[f]
             << "->";
        get;
        getline(cin, jin[f][1][pos]);
        cls;
        goto change;
      case 6:
        cout << "请输入技能特效（只支持对应行输入哦）：\n"
             << jin[f][1][pos] << "：";
        get;
        getline(cin, tex[f][1][pos]);
        cls;
        goto change;
    }
  }
}
func(rff) {
  jil.clear();
  pk1.clear();
  pk2.clear();
  nameof.clear();
  ifstream fin("battle.luogu");
  string h;
  string k;
  while (1) {
    if (!getline(fin, k)) break;
    getline(fin, h);
    k = k + "\n";
    int pe1, pe2;
    char nfm[1009];
    fill(nfm, nfm + 1009, '\0');
    sscanf(k.c_str(), "[\\name{%[^\n]s", nfm + 3);
    sscanf(h.c_str(), "[\\people{%d,%d}]", &pe1, &pe2);
    int wh = strlen(nfm + 3);
    nfm[wh + 2] = nfm[wh + 1] = '\0';
    pk1.push_back(pe1);
    pk2.push_back(pe2);
    nameof.push_back(string(nfm + 3));
    h.clear();
    while (getline(fin, k)) {
      if (k == "[\\end]") {
        jil.push_back(h);
        h.clear();
        break;
      }
      h = h + "\n" + k;
      k.clear();
    }
  }
  fin.close();
}
func(ffr) {
  FILE *pw = fopen("battle.luogu", "w");
  for (int i = 0; i < jil.size(); ++i)
    fprintf(pw, "[\\name{%s}]\n[\\people{%d,%d}]%s\n[\\end]\n",
            nameof[i].c_str(), pk1[i], pk2[i], jil[i].c_str());
  fclose(pw);
}
inline void show(string x) {
  for (int h = 1; h < x.size(); ++h) {
    if (x[h] != '[') {
      putchar(x[h]);
      continue;
    } else if (h + 2 >= x.size() || x[h + 1] != '\\') {
      putchar(x[h]);
      continue;
    } else {
      switch (x[h + 2]) {
        case 'g':
          cout << endl;
          get;
          cls;
          while (x[h] != ']') ++h;
          break;
        case 'c':
          int u;
          sscanf(&x[0] + h, "[\\col{%d", &u);
          color(u);
          while (x[h] != ']') ++h;
          break;
        default:
          putchar(x[h]);
          break;
      }
    }
  }
  double c1 = clock();
  get;
  double c2 = clock();
  while (c2 - c1 <= 500) _getch(), c2 = clock();
  cls;
}
func(rev) {
  int h;
  char aw[1009];
  string hk;
  FILE *pf;
car:
  puts(
      "您要做什么？\n0.退出大厅\n1.创建回放\n2.删除回放\n3.重命名回放\n4."
      "播放回放");
car2:
  cin >> h;
  switch (h) {
    case 0:
      get;
      return;
    case 1:
      if (a.tch == -1) {
        puts("还没有开始过，没有可创造的回放！");
        get;
        goto car2;
      }
      cls;
      puts("请给回放起个名字吧（只支持单行输入）：");
      get;
      getline(cin, hk);
      memset(aw, 0, sizeof(aw));
      sprintf(aw, "[\\name{%s}]\n[\\people{%d,%d}]", hk.c_str(), a.tch, b.tch);
      batxt = aw + string("\n") + batxt;
      pf = fopen("battle.luogu", "a");
      fprintf(pf, batxt.c_str());
      fclose(pf);
      puts("回放已创建！");
      get;
      cls;
      goto car;
    case 2:
      rff();
      get;
      if (!jil.size()) {
        puts("您没有可删除的回放！");
        get;
        cls;
        goto car;
      }
      cls;
      puts("您的所有回放：");
      for (int i = 0; i < jil.size(); ++i)
        cout << i + 1 << '.' << namex[pk1[i]] << '&' << namex[pk2[i]] << "【"
             << nameof[i] << "】\n";
      puts("您要删除哪段回放呢？请输入编号：");
      cin >> h;
      while (h < 0 || h > jil.size())
        puts("不存在这个回放，请重新选择："), cin >> h;
      get;
      if (!h) {
        cls;
        goto car;
      }
      del(jil, h - 1);
      del(pk1, h - 1);
      del(pk2, h - 1);
      del(nameof, h - 1);
      puts("回放已删除！");
      get;
      cls;
      ffr();
      goto car;
    case 3:
      rff();
      get;
      if (!jil.size()) {
        puts("您没有可重命名的回放！");
        get;
        cls;
        goto car;
      }
      cls;
      puts("您的所有回放：");
      for (int i = 0; i < jil.size(); ++i)
        printf("%d.%s&%s【%s】\n", i + 1, namex[pk1[i]].c_str(),
               namex[pk2[i]].c_str(), nameof[i].c_str());
      puts("您要重命名哪段回放呢？请输入编号：");
      cin >> h;
      while (h < 0 || h > jil.size())
        puts("不存在这个回放，请重新选择："), cin >> h;
      get;
      puts("请输入回放重命名后的名字：");
      getline(cin, hk);
      if (hk == "") {
        cls;
        goto car;
      }
      nameof[h - 1] = hk;
      puts("回放已重命名！");
      get;
      cls;
      ffr();
      goto car;
    case 4:
      rff();
      get;
      if (!jil.size()) {
        puts("您没有可播放的回放！");
        get;
        cls;
        goto car;
      }
      cls;
      puts("您的所有回放：");
      for (int i = 0; i < jil.size(); ++i)
        printf("%d.%s&%s【%s】\n", i + 1, namex[pk1[i]].c_str(),
               namex[pk2[i]].c_str(), nameof[i].c_str());
      puts("您要播放哪段回放呢？请输入编号：");
      cin >> h;
      while (h < 0 || h > jil.size())
        puts("不存在这个回放，请重新选择："), cin >> h;
      get;
      cls;
      if (!h) goto car;
      show(jil[h - 1]);
      ffr();
      goto car;
  }
}
func(pif) {
  cls;
  puts(
      "注：在皮肤工坊输入的一切字符串都不要有连续的[\\c或["
      "\\g部分！\n否则可能会有bug");
  get;
  cls;
  while (1) {
    puts("请选择皮肤主人：");
    puts("0.退出工坊");
    for (int i = 0; i < p; ++i) printf("%d.%s\n", i + 1, namex[i].c_str());
    int f;
    cin >> f;
    while (f < 0 || f > p + 1) puts("不存在这位神犇，请重新选择！"), cin >> f;
    if (!f) {
      leave;
      return;
    }
    --f;
    cls;
    printf("%s的所有皮肤：\n", namex[f].c_str());
    for (int i = 1; i < sk[f].size(); ++i) {
      cout << i << '.';
      color(skcol[f][i]);
      cout << sk[f][i] << endl;
      recol;
    }
    puts("\n您要做什么？\n0.增加皮肤\n1.删除皮肤\n2.更改皮肤\n3.退出工坊");
    int k;
    cin >> k;
    if (k && k - 1 && k - 2) leave;
    if (k == 1) {
      if (sk[f].size() == unable[f]) {
        puts("这位神犇没有可删除的皮肤！");
        get;
        get;
        cls;
        continue;
      }
      printf("您要删除哪款皮肤呢？请输入编号：");
      cin >> k;
      while (1) {
        while (k < 0 || k >= sk[f].size())
          printf("不存在这款皮肤，请重新选择："), cin >> k;
        while (k > 0 && k < unable[f])
          printf("不可以删除系统皮肤，请重新选择："), cin >> k;
        if (k >= 0 && k < sk[f].size()) break;
      }
      if (k == 0) {
        cls;
        leave;
        continue;
      }
      del(sk[f], k), del(skcol[f], k), del(tex[f][0], k), del(tex[f][1], k),
          del(jin[f][0], k), del(jin[f][1], k);
      puts("皮肤已删除！");
      get;
      get;
      cls;
    } else if (!k) {
      cls;
      cout << "请输入皮肤名（只支持本行输入哦）：";
      get;
      sk[f].push_back("");
      getline(cin, sk[f][sk[f].size() - 1]);
      cls;
      for (int i = 0; i < 256; ++i) {
        color(i);
        printf("%d.%s", i, sk[f][sk[f].size() - 1].c_str());
        recol;
        cout << endl;
      }
      cout << "请选择皮肤颜色：";
      int xx;
      cin >> xx;
      while (xx < 0 || xx >= 256)
        printf("不存在这款颜色！请重新输入："), cin >> xx;
      skcol[f].push_back(xx);
      get;
      cls;
      cout << "请输入技能名（只支持对应行输入哦）：\n技能：" << zersk[f]
           << "->";
      jin[f][0].push_back("");
      getline(cin, jin[f][0][jin[f][0].size() - 1]);
      cout << "技能：" << onesk[f] << "->";
      jin[f][1].push_back("");
      getline(cin, jin[f][1][jin[f][1].size() - 1]);
      cls;
      cout << "请输入技能特效（只支持对应行输入哦）：\n"
           << jin[f][0][jin[f][0].size() - 1] << "：";
      tex[f][0].push_back("");
      getline(cin, tex[f][0][tex[f][0].size() - 1]);
      cout << jin[f][1][jin[f][1].size() - 1] << "：";
      tex[f][1].push_back("");
      getline(cin, tex[f][1][tex[f][1].size() - 1]);
      cls;
      cout << "皮肤制造完成！";
      check(f, sk[f].size() - 1);
      get;
      cls;
    } else if (k == 2) {
      if (sk[f].size() == unable[f]) {
        puts("这位神犇没有可更改的皮肤！");
        get;
        get;
        cls;
        continue;
      }
      printf("您要更改哪款皮肤呢？请输入编号：");
      cin >> k;
      while (1) {
        while (k <= 0 || k >= sk[f].size())
          printf("不存在这款皮肤，请重新选择："), cin >> k;
        while (k < unable[f])
          printf("不可以更改系统皮肤，请重新选择："), cin >> k;
        if (k > 0 && k < sk[f].size()) break;
      }
      cls;
      check(f, k);
      get;
      cls;
      continue;
    } else {
      leave;
      return;
    }
    leave;
  }
}
func(xui) { system("start https://www.luogu.com.cn"); }
func(kno) {
  puts("请预言下一位天选神犇！\n0.放弃预言");
  for (int i = 0; i < p; ++i) printf("%d.%s\n", i + 1, namex[i].c_str());
  int k;
  cin >> k;
  while (k < 0 || k > p) puts("不存在这位神犇！请重新预言"), cin >> k;
  get;
  if (!k) return;
  know = k - 1;
  puts("预言完成！");
  get;
}
func(bun) {
  puts("请选择您要换得的技能：");
  for (int i = 0; i < 6; ++i)
    cout << i + 1 << '.' << namep[i] << "【加" << knd[i] << "】\n";
  int h;
  cin >> h;
  while (h <= 0 || h > 6) puts("不存在这个技能，请重新选择！"), cin >> h;
  --h;
  mjina = h;
  ofstream kp("skill.luogu");
  kp << mjina;
  kp.close();
  puts("技能更换成功！");
  get;
  get;
}
func(oth) {
st:
  puts(
      "请选择您要的功能：\n0.退出\n1.皮肤工坊\n2.回放大厅\n3."
      "背景介绍【注：联网可用】\n4.先知祭坛\n5.技能小屋");
www:
  int x;
  cin >> x;
  switch (x) {
    case 0:
      cls;
      get;
      return;
    case 1:
      cls;
      get;
      pif();
      cls;
      goto st;
    case 2:
      cls;
      get;
      rev();
      cls;
      goto st;
    case 3:
      cls;
      get;
      xui();
      cls;
      goto st;
    case 4:
      cls;
      get;
      kno();
      cls;
      goto st;
    case 5:
      cls;
      get;
      bun();
      cls;
      goto st;
    default:
      puts("不存在这个功能，请重新输入！");
      goto www;
  }
}
man randman() {
  if (know >= 0) {
    man xx = (man){rand() % 201 + 500,
                   rand() % 31,
                   rand() % 1001 + 2500,
                   know,
                   rand() % 31,
                   rand() % 31,
                   rand() % 3 + 1 + (double)rand() / 2147483647.0,
                   0,
                   0};
    xx.zt1 = z1[xx.tch];
    xx.zt0 = z0[xx.tch];
    xx.skin = rand() % sk[xx.tch].size();
    return xx;
  }
  man xx = (man){rand() % 201 + 500,
                 rand() % 31,
                 rand() % 1001 + 2500,
                 rand() % p,
                 rand() % 31,
                 rand() % 31,
                 rand() % 3 + 1 + (double)rand() / 2147483647.0,
                 0,
                 0};
  xx.zt1 = z1[xx.tch];
  xx.zt0 = z0[xx.tch];
  xx.skin = rand() % sk[xx.tch].size();
  return xx;
}
man chsdman() {
start:
  ifstream pwp("level.luogu");
  string levv;
  pwp >> levv;
  pwp.close();
  int bat = levv.size();
  int uuu = 0;
  while (bat >= 0) bat -= 16, ++uuu;
  switch (uuu) {
    case 1:
      puts("您当前的等级：灰名");
      break;
    case 2:
      printf("您当前的等级：");
      color(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
      puts("蓝名");
      break;
    case 3:
      printf("您当前的等级：");
      color(FOREGROUND_GREEN | FOREGROUND_INTENSITY);
      puts("绿名");
      break;
    case 4:
      printf("您当前的等级：");
      color(FOREGROUND_GREEN | FOREGROUND_RED);
      puts("橙名");
      break;
    case 5:
      printf("您当前的等级：");
      color(FOREGROUND_RED);
      puts("红名");
      break;
    case 6:
      printf("您当前的等级：");
      color(FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
      puts("金名");
      break;
    case 7:
      printf("您当前的等级：");
      color(FOREGROUND_RED | FOREGROUND_INTENSITY);
      puts("粉名");
      break;
    default:
      if (rand() % 1000 >= 30 || bat == 8) {
        printf("您当前的等级：");
        color(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        puts("紫名");
        break;
      } else {
        printf("您当前的等级：");
        color(FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        puts("棕名");
        fclose(fopen("level.luogu", "w"));
        break;
      }
  }
  recol;
  puts("请选择你的神犇：");
  puts("0.退出游戏");
  for (int i = 0; i < p; ++i) printf("%d.%s\n", i + 1, namex[i].c_str());
  printf("%d.听天由命\n", p + 1);
  puts("-1.更多功能");
  int f;
  cin >> f;
  while (f < -1 || f > p + 1) puts("不存在这位神犇，请重新选择！"), cin >> f;
  if (!f) exit(0);
  if (f == -1) {
    cls;
    get;
    oth();
    cls;
    goto start;
  }
  if (f == p + 1) return randman();
  --f;
  if (sk[f].size() > 1) {
    cls;
    printf("请为你的%s选择一款皮肤：\n", namex[f].c_str());
    for (int i = 0; i < sk[f].size(); ++i) {
      cout << i << '.';
      color(skcol[f][i]);
      cout << sk[f][i] << endl;
      recol;
    }
    cout << sk[f].size() << ".听天由命\n";
    int g;
    cin >> g;
    while (g < 0 || g > sk[f].size())
      puts("不存在这款皮肤，请重新选择！"), cin >> g;
    man xx = (man){rand() % 201 + 500,
                   rand() % 30,
                   rand() % 1001 + 2500,
                   f,
                   rand() % 31,
                   rand() % 31,
                   rand() % 3 + 1 + (double)rand() / 2147483647.0,
                   z1[f],
                   z0[f],
                   0};
    if (g == sk[f].size())
      xx.skin = rand() % sk[f].size();
    else
      xx.skin = g;
    return xx;
  } else
    return (man){rand() % 201 + 500,
                 rand() % 30,
                 rand() % 1001 + 2500,
                 f,
                 rand() % 31,
                 rand() % 31,
                 rand() % 3 + 1 + (double)rand() / 2147483647.0,
                 z1[f],
                 z0[f],
                 0};
}
int main() {
  fclose(fopen("battle.luogu", "a"));
  fclose(fopen("level.luogu", "a"));
  fclose(fopen("skin.luogu", "a"));
  fclose(fopen("skill.luogu", "a"));
  ifstream skilinp("skill.luogu");
  if (!(skilinp >> mjina)) mjina = 0;
  skilinp.close();
  a.tch = b.tch = -1;
  for (int i = 0; i < p; ++i)
    sk[i].push_back("经典"),
        skcol[i].push_back(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE |
                           FOREGROUND_INTENSITY),
        tex[i][0].push_back(""), tex[i][1].push_back(""),
        jin[i][0].push_back(""), jin[i][1].push_back("");
  tex[6][1][0] = "“人类的本质是______”";
  tex[13][0][0] = "“你谷将会****！”";
  tex[18][0][0] = "“但你出言不逊是！”";
  sk[0].push_back("肥绿鸟"),
      skcol[0].push_back(FOREGROUND_GREEN | FOREGROUND_INTENSITY),
      tex[0][0].push_back(""), tex[0][1].push_back(""),
      jin[0][0].push_back("暴政"), jin[0][1].push_back("宠物");
  sk[0].push_back(" Aya "),
      skcol[0].push_back(BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED |
                         FOREGROUND_GREEN | FOREGROUND_BLUE |
                         FOREGROUND_INTENSITY | BACKGROUND_INTENSITY),
      tex[0][0].push_back(""), tex[0][1].push_back(""),
      jin[0][0].push_back("冒泡"), jin[0][1].push_back("吃瓜");
  sk[4].push_back("站长"),
      skcol[4].push_back(BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED |
                         FOREGROUND_GREEN | FOREGROUND_BLUE |
                         FOREGROUND_INTENSITY | BACKGROUND_INTENSITY),
      tex[4][0].push_back(""), tex[4][1].push_back(""),
      jin[4][0].push_back("飙车"), jin[4][1].push_back("语录");
  sk[4].push_back("3k"),
      skcol[4].push_back(FOREGROUND_RED | FOREGROUND_BLUE |
                         FOREGROUND_INTENSITY),
      tex[4][0].push_back("“3k惊现，此贴终结！”"), tex[4][1].push_back(""),
      jin[4][0].push_back("终帖"), jin[4][1].push_back("运势");
  sk[7].push_back("happydef"), skcol[7].push_back(FOREGROUND_RED),
      tex[7][0].push_back(""), tex[7][1].push_back("“I AK IOI”"),
      jin[7][0].push_back("省一"), jin[7][1].push_back("机惨");
  sk[8].push_back("空与白之灵"),
      skcol[8].push_back(FOREGROUND_BLUE | FOREGROUND_INTENSITY),
      tex[8][0].push_back(""), tex[8][1].push_back(""),
      jin[8][0].push_back("哲学"), jin[8][1].push_back("AFO");
  sk[17].push_back("zmxqs"),
      skcol[17].push_back(FOREGROUND_RED | FOREGROUND_GREEN),
      tex[17][0].push_back(""), tex[17][1].push_back(""),
      jin[17][0].push_back("天骄"), jin[17][1].push_back("模范");
  sk[13].push_back("UKE"),
      skcol[13].push_back(FOREGROUND_BLUE | FOREGROUND_INTENSITY),
      tex[13][0].push_back(""), tex[13][1].push_back(""),
      jin[13][0].push_back("闲话"), jin[13][1].push_back("昭著");
  sk[20].push_back("mosiyuan"),
      skcol[20].push_back(FOREGROUND_RED | FOREGROUND_INTENSITY),
      tex[20][0].push_back(
          "“高楼变为废墟，法阵化作黄土，雕像碎成砂砾，但Siyuan并未抛弃这个文明-"
          "-因为信仰仍在。”"),
      tex[20][1].push_back("“她是如此之巨，以至于巨石都听从她的号令！”"),
      jin[20][0].push_back("信仰"), jin[20][1].push_back("巨神");
  for (int i = 0; i < p; ++i) unable[i] = sk[i].size();
  ifstream fin("skin.luogu");
  int input;
  while (fin >> input && gete(fin))
    sk[input].push_back(str(fin)), skcol[input].push_back(num(fin)),
        tex[input][0].push_back(str(fin)), tex[input][1].push_back(str(fin)),
        jin[input][0].push_back(str(fin)), jin[input][1].push_back(str(fin));
  fin.close();
  hOut = GetStdHandle(STD_OUTPUT_HANDLE);
  recol;
  puts("欢迎来到luogu大战！");
  get;
  while (1) {
    cls;
    know = -1;
    a = chsdman();
    b = randman();
    mjinb = rand() % 6;
    cls;
    batxt = "";
    copy_puts("敌方神犇已选定！\n我们开始吧！");
    get;
    get;
    tg = (rand() & 1);
    ended = 0;
    batxt = batxt + "[\\get]";
    while (1) {
      cls;
      prev1 = a.hp, prev2 = b.hp;
      copy_cout << "我方血量：" << a.hp << "\t我方神犇：" << namex[a.tch]
                << "【";
      color(skcol[a.tch][a.skin]);
      copy_cout << sk[a.tch][a.skin];
      recol;
      copy_cout << "】" << endl;
      copy_cout << "敌方血量：" << b.hp << "\t敌方神犇：" << namex[b.tch]
                << "【";
      color(skcol[b.tch][b.skin]);
      copy_cout << sk[b.tch][b.skin];
      recol;
      copy_cout << "】" << endl;
      x = &a, y = &b;
      if (tg) swap(x, y);
      if (rand() & 1) {
        copy_printf("我方");
        if (!a.skin)
          copy_cout << namex[a.tch];
        else {
          color(skcol[a.tch][a.skin]);
          copy_cout << sk[a.tch][a.skin];
          recol;
        }
        copy_cout << "触发了技能【";
        copy_cout << namep[mjina] << "】，";
        mfun[mjina](a);
        copy_cout << endl;
      }
      if (rand() & 1) {
        copy_printf("敌方");
        if (!b.skin)
          copy_cout << namex[b.tch];
        else {
          color(skcol[b.tch][b.skin]);
          copy_cout << sk[b.tch][b.skin];
          recol;
        }
        copy_cout << "触发了技能【";
        copy_cout << namep[mjinb] << "】，";
        mfun[mjinb](b);
        copy_cout << endl;
      }
      dlt = y->atk;
      copy_puts(tg ? "你发起了攻击！" : "敌方发起了攻击!");
      if (rand() % 101 < y->crt)
        dlt *= y->critim, copy_puts(tg ? "你暴击了！" : "敌方暴击了!");
      dlt = dlt * (1 - (x->def) / 100.0) + rand() % 101 - 50;
      if (rand() % 101 < x->out || dlt <= 0) {
        copy_puts((!tg) ? "你闪开了！" : "敌方闪开了!");
        tg = !tg;
        dlt = 0;
        get;
        batxt = batxt + "[\\get]";
        continue;
      }
      if (dlt && (tg ? a : b).zt1) {
        one[(tg ? a : b).tch]();
        if (did && rand() % 3 == 0 &&
            tex[(tg ? a : b).tch][1][(tg ? a : b).skin] != "")
          copy_cout << endl
                    << tex[(tg ? a : b).tch][1][(tg ? a : b).skin] << endl
                    << endl;
      }
      if (dlt && (tg ? a : b).zt0) {
        zero[(tg ? a : b).tch]();
        if (did && rand() % 3 == 0 &&
            tex[(tg ? a : b).tch][0][(tg ? a : b).skin] != "")
          copy_cout << endl
                    << tex[(tg ? a : b).tch][0][(tg ? a : b).skin] << endl
                    << endl;
      }
      if (dlt) rol();
      if (dlt && !(tg ? b : a).zt1) {
        one[(tg ? b : a).tch]();
        if (did && rand() % 3 == 0 &&
            tex[(tg ? b : a).tch][1][(tg ? b : a).skin] != "")
          copy_cout << endl
                    << tex[(tg ? b : a).tch][1][(tg ? b : a).skin] << endl
                    << endl;
      }
      if (dlt && !(tg ? b : a).zt0) {
        zero[(tg ? b : a).tch]();
        if (did && rand() % 3 == 0 &&
            tex[(tg ? b : a).tch][0][(tg ? b : a).skin] != "")
          copy_cout << endl
                    << tex[(tg ? b : a).tch][0][(tg ? b : a).skin] << endl
                    << endl;
      }
      end();
      if (ended) break;
      batxt = batxt + "[\\get]";
      tg ^= 1;
      dlt = 0;
      get;
    }
    FILE *pp = fopen("level.luogu", "a");
    fprintf(pp, "%d", rand() % 10);
    fclose(pp);
    double c1 = clock();
    get;
    double c2 = clock();
    while (c2 - c1 <= 500) _getch(), c2 = clock();
    cls;
    prev1 = prev2 = 0;
    zz1 = zz2 = 0;
    lg1 = lg2 = 0;
    zy1 = zy2 = 0;
  }
  return 0;
}
