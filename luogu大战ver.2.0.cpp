#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#define p 24
#define recol color(FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY)
#define cls system("cls")
#define func(x) inline void x()
inline char gete(std::ifstream&fin){
	return fin.get();
}
#define get getchar()
#define leave lev()
#define rand() (rnd::rad())
#define copy_puts(s) copy_printf("%s\n",(s))
#define endl "\n" 
using namespace std;
string batxt;
HANDLE hOut;
inline void color(int x){
	SetConsoleTextAttribute(hOut,x);
	char ss[1000];memset(ss,0,sizeof(ss));
	sprintf(ss,"[\\col{%d}]",x);
	batxt=batxt+ss;
}
struct ofs{
	ofs operator<<(const string&s){
		cout<<s;
		batxt=batxt+s;
		return *this;
	}
	ofs operator<<(const char&s){
		cout<<s;
		batxt=batxt+s;
		return *this;
	}
	ofs operator<<(const int&s){
		cout<<s;
		char ss[1000];memset(ss,0,sizeof(ss));
		sprintf(ss,"%d",s);
		batxt=batxt+ss;
		return *this;
	}
}copy_cout;
inline void copy_printf(const char*format,...){
	char s[1000];memset(s,0,sizeof(s));
	va_list ap;
    va_start(ap,format);
	vsprintf(s,format,ap); 
	printf(s);
	batxt=batxt+s;
	va_end(ap); 
} 
bool isprime(int x){
	for(int i=2;i<=sqrt(x);++i)if(x%i==0)return 0;
	return 1;
}
namespace rnd{
	bool isInit;
	const long long crsh1=2567483615LL;
	const long long crsh2=2636928640LL;
	const long long crsh3=4022730752LL;
	long long index;
	long long MT[624];
	inline void srand(long long seed){
	    index=0;
	    isInit=1;
	    MT[0]=seed;
	    for(long long i=1;i<624;++i){
	        long long t=1812433253*(MT[i-1]^(MT[i-1]>>30))+i;
	        MT[i]=t&0xffffffff;
	    }
	}
	func(generate){
	    for(long long i=0;i<624;++i){
	        long long y=(MT[i]&0x80000000)+(MT[(i+1)%624]&0x7fffffff);
	        MT[i]=MT[(i+397)%624]^(y>>1);
	        if(y&1)MT[i]^=crsh1;
	    }
	}
	int rad(){
	    if(!isInit)srand((long long)time(NULL));
	    if(!index)generate();
	    long long y=MT[index];
	    y=y^(y>>11);
	    y=y^((y<<7)&crsh2);
	    y=y^((y<<15)&crsh3);
	    y=y^(y>>18);
	    index=(index+1)%624;
	    return (int)(y&2147483647);
	}
	inline int randin(int l,int r){
		return l+rand()%(r-l+1);
	}
	inline int randof(int base,int err){
		return randin(base-err,base+err);
	}
};
string str(){
	string hhhhh;cin>>hhhhh;
	return hhhhh;
}
string str(ifstream&fin){
	string hhhhh;getline(fin,hhhhh);
	return hhhhh;
}
inline int num(){
	int hhhhh;cin>>hhhhh;
	return hhhhh;
}
int num(ifstream&fin){
	int hhhhh;fin>>hhhhh;gete(fin);
	return hhhhh;
}
struct man{
	int atk;
	int def; 
	int hp;
	int tch; 
	int crt; 
	int out;
	double critim;
	bool zt1,zt0;
	int skin; 
}a,b,*x,*y;
string namep[]={"CYaRon","fAKe","����","zyx","����","�ձ�"};
string knd[]={"������","������","Ѫ��","������","������","����Ч��"}; 
void cy(man&r){
	copy_printf("������������");
	r.atk+=20;
}
void fk(man&r){
	copy_printf("������������");
	r.def+=2;r.def=min(r.def,60);
}
void gg(man&r){
	copy_printf("Ѫ��������");
	r.hp+=150;
}
void zyx(man&r){
	copy_printf("������������");
	r.crt+=4;r.crt=min(r.crt,50);
}
void fog(man&r){
	copy_printf("������������");
	r.out+=2;r.out=min(r.out,60);
}
void crm(man&r){
	copy_printf("����Ч��������");
	r.critim+=0.35;
	r.critim=min(r.critim,3.);
} 
void(*mfun[])(man&)={cy,fk,gg,zyx,fog,crm};
int mjina,mjinb;
int dlt;
int know; 
bool ended;
bool did;
bool tg;
bool lg1,lg2;
bool zz1,zz2; 
bool zy1,zy2;
int prev1,prev2;
const string namex[]={"chen_zhe","С����","zcysky","NaCly_Fish","kkksc03","noip","��K" ,"happyabc","���"	 ,"���","lin_toto","xht37","СŴ��","Unknown_Error","��������û�","soha","memset0","�򱱷�","��������","lzn" ,"Siyuan","Harry_Potter","zhouwc","StudyingFather"};
const string zersk[]={"TOT"		,"����"	 ,"����"  ,"����"      ,"���"	 ,"Ynoi" ,"QAQ","��¥"	  ,"����"	 ,"����","����"	   ,"���"	,"����"	,"����"			,"�Ƿ�"	       ,"����","����"   ,"��ս"  ,"��ѷ"	,"��վ","����"	,"�ٱ�"		   ,"�Ա�"  ,"־Ը"};
const string onesk[]={"����"	,"Ű��"  ,"����"  ,"װ��"	   ,"����"	 ,"����","����","��ˮ"	  ,"����"	 ,"�Ի�","����"	   ,"��Ƭ"	,"Ůװ"	,"��ѧ"			,"��ѧ"		   ,"����","orz"    ,"ԴȪ"  ,"����"	,"����","����"	,"����"		   ,"Ұ��"	,"����"};
int unable[p];
bool vst[p];
vector<string>sk[p];
vector<int>skcol[p];
vector<string>tex[p][2];
vector<string>jin[p][2];
vector<string>jil;
vector<int>pk1,pk2;
vector<string>nameof;
func(lev){
	FILE *output=fopen("skin.luogu","w");
	for(int i=0;i<p;++i)for(int j=unable[i];j<sk[i].size();++j)
	fprintf(output,"%d\n%s\n%d\n%s\n%s\n%s\n%s\n",i,sk[i][j].c_str(),skcol[i][j],tex[i][0][j].c_str(),tex[i][1][j].c_str(),jin[i][0][j].c_str(),jin[i][1][j].c_str());
	fclose(output);
}
func(end){
	if(a.hp>0&&b.hp>0)return;
	if(a.hp>0){
		if(b.tch!=9||lg2)copy_puts("��AK�˵з���");
		else{
			copy_printf("�з�");
			if(!b.skin)copy_printf("��ȴ����˼��ܡ�����");
			else{
				color(skcol[b.tch][b.skin]);
				copy_cout<<sk[b.tch][b.skin];
				recol;
				copy_cout<<"�����˼��ܡ�";
				copy_cout<<jin[b.tch][1][b.skin];
			}
			copy_puts("����ԭ�ظ��");
			b.hp=a.hp-b.hp+100;
			lg2=1;
			ended=0; 
			return;
		}
	}
	else{
		if(a.tch!=9||lg1)copy_puts("�з�AK���㣡"); 
		else{
			copy_printf("�ҷ�");
			if(!a.skin)copy_printf("��ȴ����˼��ܡ�����");
			else{
				color(skcol[a.tch][a.skin]);
				copy_cout<<sk[a.tch][a.skin];
				recol;
				copy_cout<<"�����˼��ܡ�";
				copy_cout<<jin[a.tch][1][a.skin];
			}
			copy_puts("����ԭ�ظ��");
			a.hp=b.hp-a.hp+100;
			lg1=1;
			ended=0;
			return;
		}
	}
	lg1=lg2=0;
	ended=1;
	batxt=batxt+"[\\end]\n";
}
func(null){did=0;}
func(rol){
	if(ended)return; 
	x->hp-=dlt;
	copy_printf(tg?"����з������":"�з����������");
	copy_printf("%d���˺���\n",dlt);
	if(x->hp<=0)ended=1; 
}
func(cz0){
	did=0;
	if(ended)return; 
	int dtt=dlt;
	dtt*=(rand()%36+55);dtt/=100;
	dtt+=rand()%61-30;dtt=max(dtt,30);
	y->hp-=dtt;if(y->hp<=0)ended=1;
	copy_printf(tg?"�з�":"�ҷ�");
	if(!x->skin)copy_printf("chen_zhe�����˼��ܡ�TOT");
	else{
		color(skcol[x->tch][x->skin]);
		copy_cout<<sk[x->tch][x->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[x->tch][0][x->skin];
	}
	copy_printf("����");
	copy_printf(tg?"�ҷ��ܵ���":"�з��ܵ���");
	copy_printf("%d���˺���\n",dtt);
	did=1;
} 
func(cz1){
	did=0;
	if(ended)return; 
	if(x->hp<=y->hp){
		copy_printf(tg?"�з�":"�ҷ�");
		if(!x->skin)copy_printf("chen_zhe�����˼��ܡ�����");
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][1][x->skin];
		}
		copy_puts("����������������");
		x->def+=3;x->def=min(x->def,60);
		did=1;
	}
} 
func(rbt0){
	did=0;
	if(ended)return; 
	copy_printf((!tg)?"�ҷ�":"�з�");
	if(!x->skin)copy_printf("С���ô����˼��ܡ�����");
	else{
		color(skcol[x->tch][x->skin]);
		copy_cout<<sk[x->tch][x->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[x->tch][0][x->skin];
	}
	copy_puts("������������������");
	x->critim+=0.6,x->crt+=20;
	x->critim=min(x->critim,3.0);x->crt=min(x->crt,50);
	x->atk+=100;
	did=1;
}
func(rbt1){
	did=0;
	if(y->hp>x->hp){
		int h=max(round(y->hp*2/x->hp),3.); 
		int dltdlt=y->atk*h+rand()%51-25; 
		if(dltdlt<=0)return;
		copy_printf(tg?"�ҷ�":"�з�");
		if(!y->skin)
		copy_printf("С���ô����˼��ܡ�Ű��");
		else{
			color(skcol[y->tch][y->skin]);
			copy_cout<<sk[y->tch][y->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[y->tch][1][y->skin];
		}
		copy_printf("�����˺�+%d��\n",dltdlt);
		dlt+=dltdlt;
		did=1;
	}
} 
func(zcy1){
	did=0;
	if(y->hp>=x->hp+dlt&&!(rand()%5)){
		x->hp+=dlt;
		y->hp-=dlt;
		copy_printf(tg?"�з�":"�ҷ�");
		if(!x->skin)copy_printf("zcysky�����˼��ܡ�����");
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][1][x->skin];
		}
		copy_puts("�����˺�������");
		if(x->hp>0)ended=0;
		if(y->hp<=0)ended=1;
		dlt=0;
		did=1;
	}
}
func(zcy0){
	did=0;
	if(y->hp>=x->hp+dlt){
		int h=dlt*(ended?0.6:0.7);
		h=h+rand()%51-25;
		x->hp+=h;
		if(x->hp>0){
			copy_printf(tg?"�з�":"�ҷ�");
			if(!x->skin)copy_printf("zcysky�����˼��ܡ�����");
			else{
				color(skcol[x->tch][x->skin]);
				copy_cout<<sk[x->tch][x->skin];
				recol;
				copy_cout<<"�����˼��ܡ�";
				copy_cout<<jin[x->tch][0][x->skin];
			}
			copy_printf("�����ظ���%d��Ѫ����\n",h);
			ended=0;
			did=1;
		}
	}
}
func(fish0){
	did=0;
	if(ended)return; 
	if(y->hp>x->hp+dlt){
		int tmp=x->hp;
		x->hp=y->hp-(dlt/2.75),y->hp=tmp+(dlt/2.75);
		copy_printf(tg?"�з�":"�ҷ�");
		if(!x->skin)copy_printf("NaCly_Fish�����˼��ܡ�����");
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][0][x->skin];
		}
		copy_puts("����������˫��Ѫ����");
		did=1;
	}
}
func(fish1){
	did=0;
	if(ended)return; 
	if(y->hp<x->hp){
		int h=dlt>>2;
		copy_printf((!tg)?"�з�":"�ҷ�");
		if(!y->skin)
		copy_printf("NaCly_Fish�����˼��ܡ�װ��");
		else{
			color(skcol[y->tch][y->skin]);
			copy_cout<<sk[y->tch][y->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[y->tch][1][y->skin];
		}
		copy_printf("�����ظ���%d��Ѫ����\n",h);
		y->hp+=h;
		did=1;
	}
}
func(kkk0){
	did=0;
	if(y->hp<=x->hp+500&&rand()&7){
		x->hp-=dlt;
		copy_printf(tg?"����з������":"�з����������");
		copy_printf("%d���˺���\n",dlt);
		dlt=0;
		copy_printf(tg?"�ҷ�":"�з�");
		if(!y->skin)
		copy_printf("kkksc03�����˼��ܡ����");
		else{
			color(skcol[y->tch][y->skin]);
			copy_cout<<sk[y->tch][y->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[y->tch][0][y->skin];
		}
		copy_printf("����");
		copy_printf(tg?"�з�":"�ҷ�");
		copy_puts("��������ʧЧ��");
		if(x->hp<=0)ended=1;
		did=1;
	}
}
func(kkk1){
	did=0;
	if(ended)return; 
	copy_printf(tg?"�з�":"�ҷ�");
	if(!x->skin)copy_printf("kkksc03�����˼��ܡ�����");
	else{
		color(skcol[x->tch][x->skin]);
		copy_cout<<sk[x->tch][x->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[x->tch][1][x->skin];
	}
	copy_printf("������������������\n");
	x->atk+=45;x->def=min(x->def+1,60);
	x->crt+=5;x->crt=min(x->crt,80);
	x->critim+=0.3;x->critim=min(x->critim,3.);
	did=1;
} 
func(noip0){
	did=0;
	if(ended)return;
	y->def=y->crt=y->out=0;
	y->critim=1;
	y->atk=max(y->atk-15,300);
	copy_printf(tg?"�з�":"�ҷ�");
	if(!x->skin)copy_printf("noip�����˼��ܡ�Ynoi");
	else{
		color(skcol[x->tch][x->skin]);
		copy_cout<<sk[x->tch][x->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[x->tch][0][x->skin];
	}
	copy_printf("����");	
	copy_printf(tg?"�ҷ�":"�з�");
	copy_puts("���������½���"); 
	did=1;
}
func(noip1){
	did=0;
	if(ended)return;
	int cnt=rand()%3+2,ret=0;
	while(x->hp>0&&ret<=250){
		int h=rand()%10+40;
		x->hp-=h;
		copy_printf(tg?"�ҷ�":"�з�");
		if(!y->skin)
		copy_printf("noip�����˼��ܡ�����");
		else{
			color(skcol[y->tch][y->skin]);
			copy_cout<<sk[y->tch][y->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[y->tch][1][y->skin];
		}
		copy_printf("����");
		copy_printf(tg?"�з�":"�ҷ�");
		copy_printf("�ܵ���%d���˺���\n",h);
		ret+=h;
		if(rand()%cnt==0)break;
	} 
	copy_printf(tg?"�ҷ�":"�з�");
	if(!y->skin)
	copy_printf("noip�ġ�����");
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�ġ�";
		copy_cout<<jin[y->tch][1][y->skin];
	}
	copy_printf("�����ƶ�");
	copy_printf(tg?"�з�":"�ҷ�");
	copy_printf("�����%d���˺���\n",ret);
	if(x->hp<=0)ended=1;
	did=1;
} 
func(K1);
func(K0){
	did=0;
	if(ended)return; 
	int dltdlt=x->hp*0.2+rand()%51-25; 
	if(dltdlt<=0)return;
	copy_printf(tg?"�ҷ�":"�з�");
	if(!y->skin)
	copy_printf("��K�����˼��ܡ�QAQ");
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][0][y->skin];
	}
	copy_printf("�����˺�+%d��\n",dltdlt);
	dlt+=dltdlt;
	did=1;
} 
func(lyf1){
	did=0;
	if(ended)return;
	copy_printf(tg?"�ҷ�":"�з�");
	if(!y->skin)
	copy_printf("happyabc�����˼��ܡ���ˮ");
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][1][y->skin];
	}
	copy_cout<<"����";
	int ret=0; 
	if(rand()%100>=4)copy_printf("%sʧȥ��%d��Ѫ����\n",tg?"�з�":"�ҷ�",ret=(y->hp*0.17)+20),x->hp-=ret,(x->hp<=0)&&(ended=1);
	else copy_printf("%s����������\n",tg?"�з�":"�ҷ�"),x->hp=-1,ended=1,dlt=0;
	did=1;
} 
func(lyf0){
	did=0;
	if(ended)return;
	if(y->hp>=x->hp-80-dlt)return;
	copy_printf(tg?"�ҷ�":"�з�");
	if(!y->skin)
	copy_printf("happyabc�����˼��ܡ���¥");
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][0][y->skin];
	}
	copy_printf("������Ѫ���ظ�����%d��\n",y->hp=x->hp-80-dlt);
	did=1;
}
func(ljt0);
func(ljt1){
	did=0;
	if(ended)return;
	did=1;
	if(y->atk>=300&&rand()%3==0){
		int h=65-rand()%11; 
		y->atk-=h;
		x->atk+=h;
		copy_printf(tg?"�з�":"�ҷ�");
		if(!x->skin)
		copy_printf("��մ����˼��ܡ�����");
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][1][x->skin];
		}
		copy_printf("������ȡ��%s%d�㹥������\n",tg?"�ҷ�":"�з�",h);
	} 
	else if(y->def>=10&&rand()%3==0){
		int h=2+(rand()&1);
		y->def-=h;
		x->def+=h;
		copy_printf(tg?"�з�":"�ҷ�");
		if(!x->skin)
		copy_printf("��մ����˼��ܡ�����");
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][1][x->skin];
		}
		copy_printf("������ȡ��%s%d���������\n",tg?"�ҷ�":"�з�",h);
	}
	else if(y->crt>=10&&x->crt<50&&rand()%3==0){
		int h=max(5+(rand()%3),50-x->crt);
		y->crt-=h;
		x->crt+=h;
		copy_printf(tg?"�з�":"�ҷ�");
		if(!x->skin)
		copy_printf("��մ����˼��ܡ�����");
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][1][x->skin];
		}
		copy_printf("������ȡ��%s%d�㱩���ʣ�\n",tg?"�ҷ�":"�з�",h);
	}
	else if(y->out>=10&&x->out<49&&rand()%3==0){
		int h=3+(rand()&1);
		if(x->out==48)h=2;
		y->out-=h;
		x->out+=h;
		copy_printf(tg?"�з�":"�ҷ�");
		if(!x->skin)
		copy_printf("��մ����˼��ܡ�����");
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][1][x->skin];
		}
		copy_printf("������ȡ��%s%d�������ʣ�\n",tg?"�ҷ�":"�з�",h);
	}
	else if(y->critim>=2.0){
		double h=max(0.5+(rand()%3)/10.,3-x->critim);
		y->critim-=h;
		x->critim+=h;
		copy_printf(tg?"�з�":"�ҷ�");
		if(!x->skin)
		copy_printf("��մ����˼��ܡ�����");
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][1][x->skin];
		}
		copy_printf("������ȡ��%s%.2lf�㱩��Ч����\n",tg?"�ҷ�":"�з�",h);
	}
	else did=0;
} 
func(lgu1){
	did=0;
	if(ended||!(tg?lg1:lg2))return;
	if(y->hp>x->hp||dlt>1000)return;
	copy_printf("%s",tg?"�ҷ�":"�з�");
	if(!y->skin){
		copy_printf("��ȴ����˼��ܡ��Ի͡����˺�+%d��\n",dlt/13);
	}
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][1][y->skin];
		copy_cout<<"�����˺�+"<<dlt/15<<"��\n";
	}
	dlt+=dlt/15;
	did=1;
}
func(ltt1){
	did=0;
	if(rand()%100>=47&&dlt<=1600){
		copy_printf((!tg)?"�ҷ�":"�з�");
		did=1;
		x->hp+=dlt;
		if(!x->skin){
			copy_printf("lin_toto�����˼��ܡ�����");
		}
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][0][x->skin];
		}
		copy_cout<<"��������������˺���"<<endl;
		if(x->hp>0)ended=0;
		dlt=0; 
	}
} 
func(ltt0){
	did=0;
	if(rand()&1){
		int h=120+rand()%71;
		x->hp+=h;
		if(x->hp>0){
			did=1;
			copy_printf((!tg)?"�ҷ�":"�з�");
			if(!x->skin){
				copy_printf("lin_toto�����˼��ܡ�����");
			}
			else{
				color(skcol[x->tch][x->skin]);
				copy_cout<<sk[x->tch][x->skin];
				recol;
				copy_cout<<"�����˼��ܡ�";
				copy_cout<<jin[x->tch][1][x->skin];
			}
			copy_cout<<"�����ظ���"<<h<<"��Ѫ����"<<endl;
			ended=0;
		}
	}
}
func(zdj0){
	did=0;
	if(y->hp<x->hp||x->tch==18){
		int dltdlt; 
		if(x->tch==18){
			if(y->hp*2>x->hp-dlt)dltdlt=x->hp/2;
			else dltdlt=x->hp-x->hp/((x->hp-dlt)/2/y->hp);
		} 
		else if(y->hp*2>x->hp-dlt)dltdlt=x->hp/acos(-1);
		else dltdlt=x->hp-x->hp/((x->hp-dlt)/2/y->hp);
		if(dltdlt<=0)return;
		copy_printf(tg?"�ҷ�":"�з�");
		if(!y->skin)
		copy_printf("xht37�����˼��ܡ����");
		else{
			color(skcol[y->tch][y->skin]);
			copy_cout<<sk[y->tch][y->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[y->tch][0][y->skin];
		}
		copy_printf("����%s�����ܵ���%d���˺���\n",tg?"�з�":"�ҷ�",dltdlt);
		x->hp-=dltdlt;
		if(x->hp<=0)ended=1;	
		did=1;
	}
}
func(zdj1){
	did=0;
	if(ended)return; 
	int dltdlt=140+rand()%51;
	if(y->tch==18)dltdlt*=2;
	y->hp-=dltdlt;
	if(y->hp<=0)ended=1;
	copy_printf(tg?"�з�":"�ҷ�");
	if(!x->skin)copy_printf("xht37�����˼��ܡ���Ƭ");
	else{
		color(skcol[x->tch][x->skin]);
		copy_cout<<sk[x->tch][x->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[x->tch][1][x->skin];
	}
	copy_printf("����");
	copy_printf(tg?"���ܵ���":"�з��ܵ���");
	copy_printf("%d���˺���\n",dltdlt);
	did=1;
} 
func(nm0){
	did=1;
	int dlw=(dlt/(1-(x->def)/100.0)+rand()%101)-dlt;
	dlt+=dlw;
	copy_printf((!tg)?"�з�":"�ҷ�");
	if(!y->skin)
	copy_printf("СŴ�״����˼��ܡ�����");
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][0][y->skin];
	}
	copy_printf("�����˺�+%d��\n",dlw);
} 
func(nm1){
	did=0;
	if(ended)return;
	int dltdlt=dlt/3.5+rand()%101-50;
	if(dltdlt<=0)return;
	copy_printf(tg?"�з�":"�ҷ�");
	if(!x->skin){
		copy_printf("СŴ�״����˼��ܡ�Ůװ");
	}
	else{
		color(skcol[x->tch][x->skin]);
		copy_cout<<sk[x->tch][x->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[x->tch][1][x->skin];
	}
	copy_cout<<"������ȡ��"<<(tg?"�ҷ�":"�з�")<<dltdlt<<"��Ѫ����"<<endl;
	x->hp+=dltdlt;
	y->hp-=dltdlt;
	did=1;
}
func(uke0){
	did=0;
	int h=x->hp*0.14;
	h+=rand()%51;
	x->hp+=h;
	if(x->hp>0){
		copy_printf(tg?"�з�":"�ҷ�");
		if(!x->skin)copy_printf("Unknown_Error�����˼��ܡ�����");
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][0][x->skin];
			}
		copy_printf("�����ظ���%d��Ѫ����\n",h);
		ended=0;
		did=1;
	}
}
func(uke1){
	did=1;
	int dlw=dlt/2;
	dlt+=dlw;
	copy_printf((!tg)?"�з�":"�ҷ�");
	if(!y->skin)
	copy_printf("Unknown_Error�����˼��ܡ���ѧ");
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][1][y->skin];
	}
	copy_printf("�����˺�+%d��\n",dlw);
}
func(jhe0);
func(jhe1){
	did=0;
	int dltdlt=(tg?prev2:prev1)-x->hp;
	if(dltdlt<0)return;
	if(dltdlt<=400){
		copy_printf((!tg)?"�ҷ�":"�з�");
		did=1;
		x->hp+=dltdlt;
		if(!x->skin){
			copy_printf("��������û������˼��ܡ���ѧ");
		}
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][1][x->skin];
		}
		copy_cout<<"��������������˺���"<<endl;
		if(x->hp>0)ended=0;
		dlt=0;
	}
	else if(dltdlt>450){
		copy_printf((!tg)?"�ҷ�":"�з�");
		did=1;
		x->hp+=dltdlt-450;
		if(!x->skin){
			copy_printf("��������û������˼��ܡ���ѧ");
		}
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][1][x->skin];
		}
		copy_cout<<"���������˲����˺���"<<endl;
		if(x->hp>0)ended=0;
		if(dlt>450)dlt=450;
	} 
	tg?(prev2=x->hp):(prev1=x->hp);
}
func(soha0){
	did=0;
	if(dlt<=3)return;
	if(isprime(dlt)){
		copy_printf((!tg)?"�ҷ�":"�з�");
		did=1;
		x->hp+=dlt;
		if(!x->skin){
			copy_printf("soha�����˼��ܡ�����");
		}
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][0][x->skin];
		}
		copy_cout<<"��������������˺���"<<endl;
		if(x->hp>0)ended=0;return;
	}
	for(int i=3;i<=dlt;++i)if(dlt%i==0){
		copy_printf((!tg)?"�ҷ�":"�з�");
		did=1;
		x->hp+=dlt/i;
		if(!x->skin){
			copy_printf("soha�����˼��ܡ�����");
		}
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][0][x->skin];
		}
		copy_cout<<"����������"<<dlt/i<<"���˺���"<<endl;
		dlt-=dlt/i; 
		if(x->hp>0)ended=0;
	}
} 
func(soha1){
	did=0;
	if(dlt>=500)return;
	did=1;
	int dlw=500-dlt;
	dlt+=dlw;
	copy_printf((!tg)?"�з�":"�ҷ�");
	if(!y->skin)
	copy_printf("soha�����˼��ܡ�����");
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][1][y->skin];
	}
	copy_printf("�����˺�+%d��\n",dlw);
}
func(mst0);
func(mst1);
func(splay0);
func(splay1){
	did=0;
	int w=(tg?prev1:prev2);
	if(w>=y->hp)return;
	w=y->hp-w;
	x->hp+=w;
	if(x->hp>0){
		ended=0;
		copy_printf(tg?"�з�":"�ҷ�");
		if(!x->skin)copy_printf("�򱱷������˼��ܡ�ԴȪ");
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][1][x->skin];
		}
		copy_cout<<"�����ظ���"<<w<<"��Ѫ����"<<endl;
		did=1;
	}
}
func(prc1){
	did=1;
	y->atk+=rnd::randin(1,10);
	copy_printf(tg?"�ҷ�":"�з�");
	if(!y->skin)
	copy_printf("�������Ӵ����˼��ܡ�����");
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][0][y->skin];
	}
	copy_printf("����������������\n");
} 
func(prc0){
	did=0;
	while(x->hp-dlt>y->hp&&!(x->tch==11&&dlt>=x->hp)){
		dlt<<=1,did=1;
		copy_printf(tg?"�ҷ�":"�з�");
		if(!y->skin)
		copy_printf("�������Ӵ����˼��ܡ���ѷ");
		else{
			color(skcol[y->tch][y->skin]);
			copy_cout<<sk[y->tch][y->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[y->tch][1][y->skin];
		}
		copy_printf("�����˺�������\n");
		if(x->tch==11)return;
	}
} 
func(lzn0){
	did=0;
	if(tg?lg1:lg2)return;
	tg?lg1=1:lg2=1;
	x->hp-=dlt;if(x->hp<=0)ended=1;
	copy_printf(tg?"����з������":"�з����������");
	copy_printf("%d���˺���\n",dlt);
	dlt=0;
	copy_printf(tg?"�ҷ�":"�з�");
	if(!y->skin)
	copy_printf("lzn�����˼��ܡ���վ");
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][0][y->skin];
	}
	copy_cout<<"�����˺�+"<<(int)(x->hp*0.45)<<"��\n"; 
	x->hp-=(int)(x->hp*0.45); 
	did=1;
}
func(lzn1){
	did=0;
	if(!(tg?lg1:lg2))return;
	if(tg?zz1:zz2)return;
	tg?zz1=1:zz2=1;
	x->hp-=dlt;if(x->hp<=0)ended=1;
	copy_printf(tg?"����з������":"�з����������");
	copy_printf("%d���˺���\n",dlt);
	dlt=0;
	copy_printf(tg?"�ҷ�":"�з�");
	if(!y->skin)
	copy_printf("lzn�����˼��ܡ�����");
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][0][y->skin];
	}
	copy_cout<<"�����ظ���"<<y->hp/4<<"��Ѫ����\n"; 
	y->hp+=y->hp/4;
	did=1;
}
func(sy0){
	did=0; 
	if(y->out>x->out&&dlt<=800||x->tch==7){
		copy_printf(tg?"�ҷ�":"�з�");
		if(!y->skin)
		copy_printf("Siyuan�����˼��ܡ�����");
		else{
			color(skcol[y->tch][y->skin]);
			copy_cout<<sk[y->tch][y->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[y->tch][0][y->skin];
		}
		if(x->tch!=7)copy_printf("�����˺�������\n"),dlt*=2;
		else copy_printf("�����˺���������\n"),dlt*=3;
		did=1;
	}
} 
func(sy1){
	y->atk*=0.8,y->crt*=0.8,y->critim*=0.8;
	y->atk=max(y->atk,400),y->critim=max(y->critim,1.1),y->crt=max(y->crt,1);
	x->atk*=1.25,x->crt*=1.25,x->critim*=1.25;
	x->atk=min(x->atk,600),x->crt=min(x->crt,50),x->critim=min(x->critim,3.);
	copy_printf(tg?"�з�":"�ҷ�");
	if(!x->skin)copy_printf("Siyuan�����˼��ܡ�����");
	else{
		color(skcol[x->tch][x->skin]);
		copy_cout<<sk[x->tch][x->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[x->tch][1][x->skin];
	}
	copy_printf("����������˫���������ԣ�\n");
	did=1;
}
func(hap1){
	int gal=rand()%100;
	if(!gal){
		copy_printf(tg?"�ҷ�":"�з�");
		if(!y->skin)
		copy_printf("Harry_Potter�����˼��ܡ�����");
		else{
			color(skcol[y->tch][y->skin]);
			copy_cout<<sk[y->tch][y->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[y->tch][1][y->skin];
		}
		copy_printf("����%s����������\n",tg?"�з�":"�ҷ�"),x->hp=-1,ended=1,dlt=0;
		did=1;
		return; 
	}
	if(gal<=33){
		int dlw=dlt/2;
		dlt+=dlw;
		copy_printf(tg?"�ҷ�":"�з�");
		if(!y->skin)
		copy_printf("Harry_Potter�����˼��ܡ�����");
		else{
			color(skcol[y->tch][y->skin]);
			copy_cout<<sk[y->tch][y->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[y->tch][1][y->skin];
		}
		copy_printf("�����˺�+%d��\n",dlw);
		did=1;
		return;
	}
	if(gal<=66){
		y->atk+=10;
		x->def=0;
		did=0;
		if(y->hp>x->atk){
			y->hp-=x->atk;
			copy_printf(tg?"�ҷ�":"�з�");
			if(!y->skin)
			copy_printf("Harry_Potter�����˼��ܡ�����");
			else{
				color(skcol[y->tch][y->skin]);
				copy_cout<<sk[y->tch][y->skin];
				recol;
				copy_cout<<"�����˼��ܡ�";
				copy_cout<<jin[y->tch][1][y->skin];
			}
			copy_printf("�����ܵ���%s��%d���˺���\n",tg?"�з�":"�ҷ�",x->atk);
		}
		dlt<<=1;
		did=1;
		return;
	}
	else{
		did=0;
		while(x->hp-dlt>y->hp){
			dlt<<=1,did=1;
			copy_printf(tg?"�ҷ�":"�з�");
			if(!y->skin)
			copy_printf("Harry_Potter�����˼��ܡ�����");
			else{
				color(skcol[y->tch][y->skin]);
				copy_cout<<sk[y->tch][y->skin];
				recol;
				copy_cout<<"�����˼��ܡ�";
				copy_cout<<jin[y->tch][1][y->skin];
			}
			copy_printf("�����˺�������\n");
		}
		return;
	}
} 
func(hap0);
func(zwc1){
	did=0;
	if(rand()&1||y->atk>=1200)return;
	did=1;
	y->atk*=2;
	copy_printf(tg?"�ҷ�":"�з�");
	if(!y->skin)
	copy_printf("zhouwc�����˼��ܡ�Ұ��");
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][0][y->skin];
	}copy_printf("����������������\n"); 
} 
func(zwc0){
	did=0;
	if(rand()&1)return;
	y->atk*=2;y->atk/=3;
	copy_printf(tg?"�ҷ�":"�з�");
	if(!y->skin)
	copy_printf("zhouwc�����˼��ܡ��Ա�");
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][1][y->skin];
	}copy_printf("�����������½���\n"); 
}
func(sf0){
	if(ended)return;
	if(did)return;
	if(tg?zy1:zy2)return;
	if(rand()%3)return;
	tg?zy1=1:zy2=1;
	copy_printf(tg?"�з�":"�ҷ�");
	if(!x->skin)
	copy_printf("StudyingFather�����˼��ܡ�־Ը");
	else{
		color(skcol[x->tch][x->skin]);
		copy_cout<<sk[x->tch][x->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[x->tch][0][x->skin];
	}copy_printf("��������Ч������0.00000000000000000001%%!\n"); 
	did=1;
}
func(sf1){
	did=0;
	if(!(tg?zy1:zy2))return;
	if(dlt>=1500)return;
	y->hp-=dlt;
	x->hp+=dlt;
	dlt=0;
	copy_printf(tg?"�з�":"�ҷ�");
	if(!x->skin)
	copy_printf("StudyingFather�����˼��ܡ�����");
	else{
		color(skcol[x->tch][x->skin]);
		copy_cout<<sk[x->tch][x->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[x->tch][1][x->skin];
	}copy_printf("�����˺�������\n"); 	
	if(rand()%3)tg?zy1=0:zy2=0;
	did=1; 
}
const bool z1[]={0,1,0,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,1,1,0,1,1,0};
const bool z0[]={0,0,0,0,1,0,1,1,1,1,0,1,1,0,1,0,1,1,1,1,1,1,1,0};
void(*zero[])()={cz0,rbt0,zcy0,fish0,kkk0,noip0,K0,lyf0,ljt0,null,ltt0,zdj0,nm0,uke0,jhe0,soha0,mst0,splay0,prc0,lzn0,sy0,hap0,zwc0,sf0}; 
void(* one[])()={cz1,rbt1,zcy1,fish1,kkk1,noip1,K1,lyf1,ljt1,lgu1,ltt1,zdj1,nm1,uke1,jhe1,soha1,mst1,splay1,prc1,lzn1,sy1,hap1,zwc1,sf1};  
func(hap0){
	did=0;
	int gal=rand()%100;
	if(gal<40){
		int h=rand()%21+80;
		if(dlt)rol();
		if(dlt&&!(tg?b:a).zt1){
			one[(tg?b:a).tch]();
			if(did&&rand()%3==0&&tex[(tg?b:a).tch][1][(tg?b:a).skin]!="")copy_cout<<endl<<tex[(tg?b:a).tch][1][(tg?b:a).skin]<<endl<<endl;
		}
		if(dlt&&!(tg?b:a).zt0){
			zero[(tg?b:a).tch]();
			if(did&&rand()%3==0&&tex[(tg?b:a).tch][0][(tg?b:a).skin]!="")copy_cout<<endl<<tex[(tg?b:a).tch][0][(tg?b:a).skin]<<endl<<endl;
		}
		dlt=0;
		if(ended)return;
		copy_printf(tg?"�ҷ�":"�з�");
		if(!y->skin)
		copy_printf("Harry_Potter�����˼��ܡ��ٱ�");
		else{
			color(skcol[y->tch][y->skin]);
			copy_cout<<sk[y->tch][y->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[y->tch][0][y->skin]; 
		}
		copy_cout<<"����ʧȥ��"<<h<<"��Ѫ����\n";
		y->hp-=h;
		(y->hp<=0)&&(ended=1);
		did=1;
		return;
	}
	if(gal<70){
		int num=(int)x->zt0+(int)x->zt1;
		if(!num)return;
		int timesd=num*0.4*dlt+rand()%30;
		dlt+=timesd;
		copy_printf(tg?"�ҷ�":"�з�");
		if(!y->skin)
		copy_printf("Harry_Potter�����˼��ܡ��ٱ�");
		else{
			color(skcol[y->tch][y->skin]);
			copy_cout<<sk[y->tch][y->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[y->tch][0][y->skin];
		}
		copy_printf("�����˺�+%d��\n",timesd);
		did=1;
	}
	else{
		if(y->hp<=x->hp+500&&rand()&7){
			x->hp-=dlt;
			copy_printf(tg?"����з������":"�з����������");
			copy_printf("%d���˺���\n",dlt);
			dlt=0;
			copy_printf(tg?"�ҷ�":"�з�");
			if(!y->skin)
			copy_printf("Harry_Potter�����˼��ܡ��ٱ�");
			else{
				color(skcol[y->tch][y->skin]);
				copy_cout<<sk[y->tch][y->skin];
				recol;
				copy_cout<<"�����˼��ܡ�";
				copy_cout<<jin[y->tch][0][y->skin];
			}
			copy_printf("����");
			copy_printf(tg?"�з�":"�ҷ�");
			copy_puts("��������ʧЧ��");
			if(x->hp<=0)ended=1;
			did=1;
		}	
	}
}
func(splay0){
	y->atk+=10;
	x->def=0;
	did=0;
	if(y->hp>x->atk||x->tch==5){
		y->hp-=x->atk;if(x->tch==5)y->hp-=x->atk/2;
		copy_printf(tg?"�ҷ�":"�з�");
		if(!y->skin)
		copy_printf("�򱱷������˼��ܡ���ս");
		else{
			color(skcol[y->tch][y->skin]);
			copy_cout<<sk[y->tch][y->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[y->tch][0][y->skin];
		}
		copy_printf("�����ܵ���%s��%d���˺���\n",tg?"�з�":"�ҷ�",x->atk+(x->atk)*(x->tch==5)/2);
	}
	dlt=dlt*2;
	did=1;
	int bld=x->hp;
	if(did&&rand()%3==0&&tex[(tg?a:b).tch][0][(tg?a:b).skin]!="")copy_cout<<endl<<tex[(tg?a:b).tch][0][(tg?a:b).skin]<<endl<<endl;
	if(dlt)rol();
	if(dlt&&!(tg?b:a).zt1){
		one[(tg?b:a).tch]();
		if(did&&rand()%3==0&&tex[(tg?b:a).tch][1][(tg?b:a).skin]!="")copy_cout<<endl<<tex[(tg?b:a).tch][1][(tg?b:a).skin]<<endl<<endl;
	}
	if(dlt&&!(tg?b:a).zt0){
		zero[(tg?b:a).tch]();
		if(did&&rand()%3==0&&tex[(tg?b:a).tch][0][(tg?b:a).skin]!="")copy_cout<<endl<<tex[(tg?b:a).tch][0][(tg?b:a).skin]<<endl<<endl;
	}
	if(x->hp<=0)return dlt=0,void();
	did=0;
	if(x->hp>bld-dlt){
		int rev=x->hp-bld+dlt;
		y->hp+=rev; 
		copy_printf(tg?"�ҷ�":"�з�");
		if(!y->skin)copy_printf("�򱱷������˼��ܡ�ԴȪ");
		else{
			color(skcol[y->tch][y->skin]);
			copy_cout<<sk[y->tch][y->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[y->tch][1][y->skin];
		}
		copy_printf("�����ظ���%d��Ѫ����\n",rev);
		did=1; 
		if(y->hp>0)ended=0;
	}
	dlt=0;
}
func(mst0){
	did=0;
	int num=(int)x->zt0+(int)x->zt1;
	if(!num)return;
	int timesd=num*0.4*dlt+rand()%30;
	dlt+=timesd;
	copy_printf((!tg)?"�з�":"�ҷ�");
	if(!y->skin)
	copy_printf("memset0�����˼��ܡ�����");
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][0][y->skin];
	}
	copy_printf("�����˺�+%d��\n",timesd);
	did=1;
}
func(mst1){
	did=0;
	if(ended)return;
	int num=(int)y->zt0+(int)y->zt1;num=2-num;
	if(!num)return;
	int timesd=num*0.35*dlt;
	dlt-=timesd;
	copy_printf(tg?"�з�":"�ҷ�");
	if(!x->skin)
	copy_printf("memset0�����˼��ܡ�orz");
	else{
		color(skcol[x->tch][x->skin]);
		copy_cout<<sk[x->tch][x->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[x->tch][1][x->skin];
	}
	copy_printf("����������%d���˺���\n",timesd);
	x->hp+=timesd;
	did=1;
}
func(K1){
	did=0;
	if(ended)return;
	if(!(rand()&7))return;
	bool flg=0; 
	if(dlt&&!(y->zt1)&&y->tch!=6)flg=1;
	if(dlt&&!(y->zt0))flg=1;
	if(!flg)return;
	else{
		copy_printf((!tg)?"�ҷ�":"�з�");
		if(!x->skin){
			copy_printf("��K�����˼��ܡ�������������Ϊ��α%s��\n",namex[y->tch].c_str());
			if(dlt&&!(y->zt1)&&y->tch!=6)one[y->tch]();
			if(dlt&&!(y->zt0))zero[y->tch]();
		}
		else{
			color(skcol[x->tch][x->skin]);
			copy_cout<<sk[x->tch][x->skin];
			recol;
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<jin[x->tch][1][x->skin];
			copy_cout<<"��������Ϊ��α";
			copy_cout<<namex[y->tch].c_str()<<"��\n";
			int h=x->skin;x->skin=0;
			if(dlt&&!(y->zt1)&&y->tch!=6)one[y->tch]();
			if(dlt&&!(y->zt0))zero[y->tch]();
			x->skin=h;
		}	
	}
	did=1;
}	
func(ljt0){
	did=0;
	if(rand()%100>=45)return;
	if(dlt)rol();
	if(dlt&&!(tg?b:a).zt1){
		one[(tg?b:a).tch]();
		if(did&&rand()%3==0&&tex[(tg?b:a).tch][1][(tg?b:a).skin]!="")copy_cout<<endl<<tex[(tg?b:a).tch][1][(tg?b:a).skin]<<endl<<endl;
	}
	if(dlt&&!(tg?b:a).zt0){
		zero[(tg?b:a).tch]();
		if(did&&rand()%3==0&&tex[(tg?b:a).tch][0][(tg?b:a).skin]!="")copy_cout<<endl<<tex[(tg?b:a).tch][0][(tg?b:a).skin]<<endl<<endl;
	}
	dlt=0;
	if(ended)return;
	copy_printf(tg?"�ҷ�":"�з�");
	if(!y->skin){
		copy_printf("��մ����˼��ܡ�����");
	}
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][0][y->skin];
	}
	copy_cout<<"�����»غϽ��ٽ���һ�ι�����\n";
	tg^=1;
	did=1;
}
func(jhe0){
	did=0;
	int h=rand()%31+80;
	if(dlt)rol();
	if(dlt&&!(tg?b:a).zt1){
		one[(tg?b:a).tch]();
		if(did&&rand()%3==0&&tex[(tg?b:a).tch][1][(tg?b:a).skin]!="")copy_cout<<endl<<tex[(tg?b:a).tch][1][(tg?b:a).skin]<<endl<<endl;
	}
	if(dlt&&!(tg?b:a).zt0){
		zero[(tg?b:a).tch]();
		if(did&&rand()%3==0&&tex[(tg?b:a).tch][0][(tg?b:a).skin]!="")copy_cout<<endl<<tex[(tg?b:a).tch][0][(tg?b:a).skin]<<endl<<endl;
	}
	dlt=0;
	if(ended)return;
	copy_printf(tg?"�ҷ�":"�з�");
	if(!y->skin){
		copy_printf("��������û������˼��ܡ��Ƿ�");
	}
	else{
		color(skcol[y->tch][y->skin]);
		copy_cout<<sk[y->tch][y->skin];
		recol;
		copy_cout<<"�����˼��ܡ�";
		copy_cout<<jin[y->tch][0][y->skin]; 
	}
	copy_cout<<"����ʧȥ��"<<h<<"��Ѫ����\n";
	y->hp-=h;
	(y->hp<=0)&&(ended=1);
	did=1;
}
inline void del(vector<string>&a,int b){
	a.erase(a.begin()+b);
}
inline void del(vector<int>&a,int b){
	a.erase(a.begin()+b);
}
inline void check(int f,int pos){
	change:
	int c=skcol[f][pos];
	puts("��������");
	cout<<"���ƣ�"<<namex[f]<<"->";
	color(c);cout<<sk[f][pos];
	recol;cout<<endl<<"���ܣ�"<<zersk[f]<<"->";
	color(c);cout<<jin[f][0][pos];
	recol;cout<<endl<<"��Ч��"<<tex[f][0][pos];
	cout<<endl<<"���ܣ�"<<onesk[f]<<"->";
	color(c);cout<<jin[f][1][pos];
	recol;cout<<endl<<"��Ч��"<<tex[f][1][pos]<<endl;
	cout<<"�������Ҫ�ı���������change;��������ok\n"; 
	if(str()!="change")return;
	else{
		cls;
		cout<<"����Ҫ�ı�����ʲô�أ�\n1."<<sk[f][pos]<<endl<<"2.";
		color(c);cout<<sk[f][pos];recol;
		cout<<endl<<"3."<<jin[f][0][pos]<<endl<<"4."<<tex[f][0][pos]<<endl<<"5."<<jin[f][1][pos]<<endl<<"6."<<tex[f][1][pos]<<endl;
		int u=num();
		while(u<=0||u>6)puts("��Чѡ����������룡"),u=num();
		cls;
		switch(u){
			case 1:
				cout<<"������Ƥ������ֻ֧�ֱ�������Ŷ����";
				get;
				getline(cin,sk[f][pos]);
				cls;
				goto change;
			case 2: 
				for(int i=0;i<256;++i){
					color(i);
					printf("%d.%s",i,sk[f][sk[f].size()-1].c_str());
					recol;
					cout<<endl;
				} 
				cout<<"��ѡ��Ƥ����ɫ��";
				int xx;cin>>xx;
				while(xx<0||xx>=256)printf("�����������ɫ�����������룺"),cin>>xx;
				skcol[f][pos]=xx;
				get;
				cls; 
				goto change;
			case 3:
				cout<<"�����뼼������ֻ֧�ֶ�Ӧ������Ŷ����\n���ܣ�"<<zersk[f]<<"->";
				get;
				getline(cin,jin[f][0][pos]);
				cls;
				goto change;
			case 4:
				cout<<"�����뼼����Ч��ֻ֧�ֶ�Ӧ������Ŷ����\n"<<jin[f][0][pos]<<"��";
				get;
				getline(cin,tex[f][0][pos]);
				cls;
				goto change;
			case 5:
				cout<<"�����뼼������ֻ֧�ֶ�Ӧ������Ŷ����\n���ܣ�"<<onesk[f]<<"->";
				get;
				getline(cin,jin[f][1][pos]);
				cls;
				goto change;
			case 6:
				cout<<"�����뼼����Ч��ֻ֧�ֶ�Ӧ������Ŷ����\n"<<jin[f][1][pos]<<"��";
				get;
				getline(cin,tex[f][1][pos]);
				cls;
				goto change;
		} 
	} 
}
func(rff){
	jil.clear();
	pk1.clear();
	pk2.clear();
	nameof.clear();
	ifstream fin("battle.luogu");
	string h;
	string k;
	while(1){
		if(!getline(fin,k))break;
		getline(fin,h);
		k=k+"\n";
		int pe1,pe2;
		char nfm[1009];
		fill(nfm,nfm+1009,'\0');
		sscanf(k.c_str(),"[\\name{%[^\n]s",nfm+3);
		sscanf(h.c_str(),"[\\people{%d,%d}]",&pe1,&pe2);
		int wh=strlen(nfm+3);
		nfm[wh+2]=nfm[wh+1]='\0';
		pk1.push_back(pe1);
		pk2.push_back(pe2);
		nameof.push_back(string(nfm+3));
		h.clear();
		while(getline(fin,k)){
			if(k=="[\\end]"){
				jil.push_back(h);
				h.clear();
				break;
			}
			h=h+"\n"+k;
			k.clear();
		}
	}
	fin.close();
}
func(ffr){
	FILE*pw=fopen("battle.luogu","w");
	for(int i=0;i<jil.size();++i)
	fprintf(pw,"[\\name{%s}]\n[\\people{%d,%d}]%s\n[\\end]\n",nameof[i].c_str(),pk1[i],pk2[i],jil[i].c_str());
	fclose(pw);
}
inline void show(string x){
	for(int h=1;h<x.size();++h){
		if(x[h]!='['){
			putchar(x[h]);
			continue;
		} 
		else if(h+2>=x.size()||x[h+1]!='\\'){
			putchar(x[h]);
			continue;
		}
		else{
			switch(x[h+2]){
				case 'g':
					cout<<endl;
					get;cls;
					while(x[h]!=']')++h;
					break;
				case 'c':
					int u;
					sscanf(&x[0]+h,"[\\col{%d",&u);
					color(u);
					while(x[h]!=']')++h;
					break;
				default:
					putchar(x[h]);
					break;
			}
		}
	}
	double c1=clock();
	get;
	double c2=clock();
	while(c2-c1<=500)_getch(),c2=clock();
	cls;
}
func(rev){
	int h;
	char aw[1009];
	string hk;
	FILE*pf;
	car:
	puts("��Ҫ��ʲô��\n0.�˳�����\n1.�����ط�\n2.ɾ���ط�\n3.�������ط�\n4.���Żط�");
	car2:
	cin>>h;
	switch(h){
		case 0:
			get;
			return;
		case 1:
			if(a.tch==-1){
				puts("��û�п�ʼ����û�пɴ���Ļطţ�");get;goto car2; 
			}
			cls;
			puts("����ط�������ְɣ�ֻ֧�ֵ������룩��");
			get;
			getline(cin,hk);
			memset(aw,0,sizeof(aw));
			sprintf(aw,"[\\name{%s}]\n[\\people{%d,%d}]",hk.c_str(),a.tch,b.tch);
			batxt=aw+string("\n")+batxt;
			pf=fopen("battle.luogu","a");
			fprintf(pf,batxt.c_str());
			fclose(pf);
			puts("�ط��Ѵ�����");
			get;cls; 
			goto car;
		case 2:
			rff();
			get; 
			if(!jil.size()){
				puts("��û�п�ɾ���Ļطţ�");
				get;
				cls;
				goto car;
			}
			cls;
			puts("�������лطţ�");
			for(int i=0;i<jil.size();++i)cout<<i+1<<'.'<<namex[pk1[i]]<<'&'<<namex[pk2[i]]<<"��"<<nameof[i]<<"��\n";
			puts("��Ҫɾ���Ķλط��أ��������ţ�");
			cin>>h;
			while(h<0||h>jil.size())puts("����������طţ�������ѡ��"),cin>>h;
			get;
			if(!h){
				cls;
				goto car;
			}
			del(jil,h-1);
			del(pk1,h-1);
			del(pk2,h-1);
			del(nameof,h-1);
			puts("�ط���ɾ����");
			get;cls; 
			ffr();
			goto car;
		case 3:
		 	rff();
			get; 
			if(!jil.size()){
				puts("��û�п��������Ļطţ�");
				get;
				cls;
				goto car;
			}
			cls;
			puts("�������лطţ�");
			for(int i=0;i<jil.size();++i)printf("%d.%s&%s��%s��\n",i+1,namex[pk1[i]].c_str(),namex[pk2[i]].c_str(),nameof[i].c_str());
			puts("��Ҫ�������Ķλط��أ��������ţ�");
			cin>>h;
			while(h<0||h>jil.size())puts("����������طţ�������ѡ��"),cin>>h;
			get;
			puts("������ط�������������֣�");
			getline(cin,hk); 
			if(hk==""){
				cls;
				goto car;
			}
			nameof[h-1]=hk;
			puts("�ط�����������");
			get;cls; 
			ffr();
			goto car;
		case 4: 
			rff();
			get; 
			if(!jil.size()){
				puts("��û�пɲ��ŵĻطţ�");
				get;
				cls;
				goto car;
			}
			cls;
			puts("�������лطţ�");
			for(int i=0;i<jil.size();++i)printf("%d.%s&%s��%s��\n",i+1,namex[pk1[i]].c_str(),namex[pk2[i]].c_str(),nameof[i].c_str());
			puts("��Ҫ�����Ķλط��أ��������ţ�");
			cin>>h;
			while(h<0||h>jil.size())puts("����������طţ�������ѡ��"),cin>>h;
			get;cls;
			if(!h)goto car;
			show(jil[h-1]);
			ffr();
			goto car;
	} 
}
func(pif){
	cls;
	puts("ע����Ƥ�����������һ���ַ�������Ҫ��������[\\c��[\\g���֣�\n������ܻ���bug");
	get;
	cls; 
	while(1){
		puts("��ѡ��Ƥ�����ˣ�");
		puts("0.�˳�����");
		for(int i=0;i<p;++i)printf("%d.%s\n",i+1,namex[i].c_str());
		int f;cin>>f;
		while(f<0||f>p+1)puts("��������λ��ģ�������ѡ��"),cin>>f;
		if(!f){
			leave;
			return;
		} 
		--f;cls;
		printf("%s������Ƥ����\n",namex[f].c_str());
		for(int i=1;i<sk[f].size();++i){
		cout<<i<<'.';
		color(skcol[f][i]);
		cout<<sk[f][i]<<endl;
		recol;
		}
		puts("\n��Ҫ��ʲô��\n0.����Ƥ��\n1.ɾ��Ƥ��\n2.����Ƥ��\n3.�˳�����"); 
		int k;cin>>k;
		if(k&&k-1&&k-2)leave;
		if(k==1){
			if(sk[f].size()==unable[f]){
				puts("��λ���û�п�ɾ����Ƥ����");
				get;get;
				cls;
				continue; 
			}
			printf("��Ҫɾ���Ŀ�Ƥ���أ��������ţ�");
			cin>>k;
			while(1){
				while(k<0||k>=sk[f].size())printf("���������Ƥ����������ѡ��"),cin>>k; 
				while(k>0&&k<unable[f])printf("������ɾ��ϵͳƤ����������ѡ��"),cin>>k;
				if(k>=0&&k<sk[f].size())break;
			}
			if(k==0){
				cls;
				leave;
				continue;
			} 
			del(sk[f],k),del(skcol[f],k),del(tex[f][0],k),del(tex[f][1],k),del(jin[f][0],k),del(jin[f][1],k);
			puts("Ƥ����ɾ����");
			get;get;
			cls;
		} 
		else if(!k){
			cls;
			cout<<"������Ƥ������ֻ֧�ֱ�������Ŷ����";
			get;
			sk[f].push_back("");
			getline(cin,sk[f][sk[f].size()-1]);
			cls;
			for(int i=0;i<256;++i){
				color(i);
				printf("%d.%s",i,sk[f][sk[f].size()-1].c_str());
				recol;
				cout<<endl;
			} 
			cout<<"��ѡ��Ƥ����ɫ��";
			int xx;cin>>xx;
			while(xx<0||xx>=256)printf("�����������ɫ�����������룺"),cin>>xx;
			skcol[f].push_back(xx);
			get;
			cls; 
			cout<<"�����뼼������ֻ֧�ֶ�Ӧ������Ŷ����\n���ܣ�"<<zersk[f]<<"->";
			jin[f][0].push_back("");
			getline(cin,jin[f][0][jin[f][0].size()-1]);
			cout<<"���ܣ�"<<onesk[f]<<"->";
			jin[f][1].push_back("");
			getline(cin,jin[f][1][jin[f][1].size()-1]);
			cls;
			cout<<"�����뼼����Ч��ֻ֧�ֶ�Ӧ������Ŷ����\n"<<jin[f][0][jin[f][0].size()-1]<<"��";
			tex[f][0].push_back("");
			getline(cin,tex[f][0][tex[f][0].size()-1]);
			cout<<jin[f][1][jin[f][1].size()-1]<<"��";
			tex[f][1].push_back("");
			getline(cin,tex[f][1][tex[f][1].size()-1]);
			cls;
			cout<<"Ƥ��������ɣ�";
			check(f,sk[f].size()-1);
			get; 
			cls;
		}
		else if(k==2){
			if(sk[f].size()==unable[f]){
				puts("��λ���û�пɸ��ĵ�Ƥ����");
				get;get;
				cls;
				continue; 
			}
			printf("��Ҫ�����Ŀ�Ƥ���أ��������ţ�");
			cin>>k;
			while(1){
				while(k<=0||k>=sk[f].size())printf("���������Ƥ����������ѡ��"),cin>>k; 
				while(k<unable[f])printf("�����Ը���ϵͳƤ����������ѡ��"),cin>>k;
				if(k>0&&k<sk[f].size())break;
			}
			cls;
			check(f,k);
			get;
			cls;
			continue; 
		}
		else{
			leave;	
			return;
		}
		leave;
	}
}
func(xui){
	system("start https://www.luogu.com.cn"); 
}
func(kno){
	puts("��Ԥ����һλ��ѡ��ģ�\n0.����Ԥ��");
	for(int i=0;i<p;++i)printf("%d.%s\n",i+1,namex[i].c_str());
	int k;
	cin>>k;
	while(k<0||k>p)puts("��������λ��ģ�������Ԥ��"),cin>>k;
	get;
	if(!k)return;
	know=k-1;
	puts("Ԥ����ɣ�");
	get;
}
func(bun){
	puts("��ѡ����Ҫ���õļ��ܣ�");
	for(int i=0;i<6;++i)cout<<i+1<<'.'<<namep[i]<<"����"<<knd[i]<<"��\n";
	int h;
	cin>>h;
	while(h<=0||h>6)puts("������������ܣ�������ѡ��"),cin>>h;
	--h;
	mjina=h;
	ofstream kp("skill.luogu");
	kp<<mjina;
	kp.close();
	puts("���ܸ����ɹ���");
	get;get;
}
func(oth){
	st:
	puts("��ѡ����Ҫ�Ĺ��ܣ�\n0.�˳�\n1.Ƥ������\n2.�طŴ���\n3.�������ܡ�ע���������á�\n4.��֪��̳\n5.����С��");
	www:
	int x;cin>>x;
	switch(x){
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
			puts("������������ܣ����������룡"); 
			goto www;
	}
}
man randman(){
	if(know>=0){
		man xx=(man){rand()%201+500,rand()%31,rand()%1001+2500,know,rand()%31,rand()%31,rand()%3+1+(double)rand()/2147483647.0,0,0};
		xx.zt1=z1[xx.tch];
		xx.zt0=z0[xx.tch];	
		xx.skin=rand()%sk[xx.tch].size();
		return xx;	
	}
	man xx=(man){rand()%201+500,rand()%31,rand()%1001+2500,rand()%p,rand()%31,rand()%31,rand()%3+1+(double)rand()/2147483647.0,0,0};
	xx.zt1=z1[xx.tch];
	xx.zt0=z0[xx.tch];	
	xx.skin=rand()%sk[xx.tch].size();
	return xx;
}
man chsdman(){
	start:
	ifstream pwp("level.luogu");
	string levv;pwp>>levv;pwp.close();
	int bat=levv.size();
	int uuu=0;
	while(bat>=0)bat-=16,++uuu;
	switch(uuu){
		case 1:
			puts("����ǰ�ĵȼ�������");
			break;
		case 2:
			printf("����ǰ�ĵȼ���");
			color(FOREGROUND_BLUE|FOREGROUND_INTENSITY);
			puts("����"); 
			break;
		case 3:
			printf("����ǰ�ĵȼ���");
			color(FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			puts("����");
			break;
		case 4:
			printf("����ǰ�ĵȼ���");
			color(FOREGROUND_GREEN|FOREGROUND_RED);
			puts("����");
			break;
		case 5:
			printf("����ǰ�ĵȼ���");
			color(FOREGROUND_RED);
			puts("����");
			break;	
		case 6:
			printf("����ǰ�ĵȼ���");
			color(FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY);
			puts("����");
			break;
		case 7:
			printf("����ǰ�ĵȼ���");
			color(FOREGROUND_RED|FOREGROUND_INTENSITY);
			puts("����");
			break;
		default:
			if(rand()%1000>=30||bat==8){
				printf("����ǰ�ĵȼ���");
				color(FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
				puts("����");
				break;	
			} 
			else{
				printf("����ǰ�ĵȼ���");
				color(FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
				puts("����");
				fclose(fopen("level.luogu","w")); 
				break;	
			}
	}
	recol;
	puts("��ѡ�������ģ�");
	puts("0.�˳���Ϸ");
	for(int i=0;i<p;++i)printf("%d.%s\n",i+1,namex[i].c_str());
	printf("%d.��������\n",p+1);
	puts("-1.���๦��"); 
	int f;cin>>f;
	while(f<-1||f>p+1)puts("��������λ��ģ�������ѡ��"),cin>>f;
	if(!f)exit(0);
	if(f==-1){
		cls;
		get;
		oth();
		cls;
		goto start;
	}
	if(f==p+1)return randman();
	--f;
	if(sk[f].size()>1){
	cls;
	printf("��Ϊ���%sѡ��һ��Ƥ����\n",namex[f].c_str());
	for(int i=0;i<sk[f].size();++i){
		cout<<i<<'.';
		color(skcol[f][i]);
		cout<<sk[f][i]<<endl;
		recol;
	}
	cout<<sk[f].size()<<".��������\n";
	int g;cin>>g;
	while(g<0||g>sk[f].size())puts("���������Ƥ����������ѡ��"),cin>>g;
	man xx=(man){rand()%201+500,rand()%30,rand()%1001+2500,f,rand()%31,rand()%31,rand()%3+1+(double)rand()/2147483647.0,z1[f],z0[f],0};
	if(g==sk[f].size())xx.skin=rand()%sk[f].size();
	else xx.skin=g;
	return xx;	
	}
	else return (man){rand()%201+500,rand()%30,rand()%1001+2500,f,rand()%31,rand()%31,rand()%3+1+(double)rand()/2147483647.0,z1[f],z0[f],0};
}
int main(){
	fclose(fopen("battle.luogu","a"));fclose(fopen("level.luogu","a"));fclose(fopen("skin.luogu","a"));fclose(fopen("skill.luogu","a"));
	ifstream skilinp("skill.luogu");
	if(!(skilinp>>mjina))mjina=0;
	skilinp.close();
	a.tch=b.tch=-1;
	for(int i=0;i<p;++i)sk[i].push_back("����"),skcol[i].push_back(FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY),tex[i][0].push_back(""),tex[i][1].push_back(""),jin[i][0].push_back(""),jin[i][1].push_back("");
	tex[6][1][0]="������ı�����______��";
	tex[13][0][0]="����Ƚ���****����";
	tex[18][0][0]="��������Բ�ѷ�ǣ���";
	sk[0].push_back("������"),skcol[0].push_back(FOREGROUND_GREEN|FOREGROUND_INTENSITY),tex[0][0].push_back(""),tex[0][1].push_back(""),jin[0][0].push_back("����"),jin[0][1].push_back("����");
	sk[0].push_back(" Aya "),skcol[0].push_back(BACKGROUND_RED|BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY),tex[0][0].push_back(""),tex[0][1].push_back(""),jin[0][0].push_back("ð��"),jin[0][1].push_back("�Թ�");
	sk[4].push_back("վ��"),skcol[4].push_back(BACKGROUND_RED|BACKGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY),tex[4][0].push_back(""),tex[4][1].push_back(""),jin[4][0].push_back("쭳�"),jin[4][1].push_back("��¼");
	sk[4].push_back("3k"),skcol[4].push_back(FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY),tex[4][0].push_back("��3k���֣������սᣡ��"),tex[4][1].push_back(""),jin[4][0].push_back("����"),jin[4][1].push_back("����");
	sk[7].push_back("happydef"),skcol[7].push_back(FOREGROUND_RED),tex[7][0].push_back(""),tex[7][1].push_back("��I AK IOI��"),jin[7][0].push_back("ʡһ"),jin[7][1].push_back("����");
	sk[8].push_back("�����֮��"),skcol[8].push_back(FOREGROUND_BLUE|FOREGROUND_INTENSITY),tex[8][0].push_back(""),tex[8][1].push_back(""),jin[8][0].push_back("��ѧ"),jin[8][1].push_back("AFO");
	sk[17].push_back("zmxqs"),skcol[17].push_back(FOREGROUND_RED|FOREGROUND_GREEN),tex[17][0].push_back(""),tex[17][1].push_back(""),jin[17][0].push_back("�콾"),jin[17][1].push_back("ģ��");
	sk[13].push_back("UKE"),skcol[13].push_back(FOREGROUND_BLUE|FOREGROUND_INTENSITY),tex[13][0].push_back(""),tex[13][1].push_back(""),jin[13][0].push_back("�л�"),jin[13][1].push_back("����");
	sk[20].push_back("mosiyuan"),skcol[20].push_back(FOREGROUND_RED|FOREGROUND_INTENSITY),tex[20][0].push_back("����¥��Ϊ���棬�������������������ɰ������Siyuan��δ�����������--��Ϊ�������ڡ���"),tex[20][1].push_back("���������֮�ޣ������ھ�ʯ���������ĺ����"),jin[20][0].push_back("����"),jin[20][1].push_back("����");
	for(int i=0;i<p;++i)unable[i]=sk[i].size();
	ifstream fin("skin.luogu");
	int input;
	while(fin>>input&&gete(fin))
	sk[input].push_back(str(fin)),skcol[input].push_back(num(fin)),tex[input][0].push_back(str(fin)),tex[input][1].push_back(str(fin)),
	jin[input][0].push_back(str(fin)),jin[input][1].push_back(str(fin));
	fin.close();
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	recol;
	puts("��ӭ����luogu��ս��");
	get;
	while(1){
		cls;know=-1;
		a=chsdman();b=randman();
		mjinb=rand()%6; 
		cls;
		batxt="";
		copy_puts("�з������ѡ����\n���ǿ�ʼ�ɣ�");
		get;get;
		tg=(rand()&1);ended=0;
		batxt=batxt+"[\\get]";
		while(1){
			cls;
			copy_cout<<"�ҷ�Ѫ����"<<a.hp<<"\t�ҷ���ģ�"<<namex[a.tch]<<"��";
			color(skcol[a.tch][a.skin]);
			copy_cout<<sk[a.tch][a.skin];
			recol;
			copy_cout<<"��"<<endl;
			copy_cout<<"�з�Ѫ����"<<b.hp<<"\t�з���ģ�"<<namex[b.tch]<<"��";
			color(skcol[b.tch][b.skin]);
			copy_cout<<sk[b.tch][b.skin];
			recol;
			copy_cout<<"��"<<endl;
			x=&a,y=&b;
			if(tg)swap(x,y);
			if(rand()&1){
			copy_printf("�ҷ�");
			if(!a.skin)copy_cout<<namex[a.tch];
			else{
				color(skcol[a.tch][a.skin]);
				copy_cout<<sk[a.tch][a.skin];
				recol;
			}
			copy_cout<<"�����˼��ܡ�";
			copy_cout<<namep[mjina]<<"����";
			mfun[mjina](a);copy_cout<<endl;	
			}
			if(rand()&1){
				copy_printf("�з�");
				if(!b.skin)copy_cout<<namex[b.tch];
				else{
					color(skcol[b.tch][b.skin]);
					copy_cout<<sk[b.tch][b.skin];
					recol;
				}
				copy_cout<<"�����˼��ܡ�";
				copy_cout<<namep[mjinb]<<"����";
				mfun[mjinb](b);copy_cout<<endl;
			}
			dlt=y->atk;
			copy_puts(tg?"�㷢���˹�����":"�з������˹���!");
			if(rand()%101<y->crt)dlt*=y->critim,copy_puts(tg?"�㱩���ˣ�":"�з�������!");
			dlt=dlt*(1-(x->def)/100.0)+rand()%101-50;
			prev1=a.hp,prev2=b.hp;
			if(rand()%101<x->out||dlt<=0){
				copy_puts((!tg)?"�������ˣ�":"�з�������!");
				tg=!tg;
				dlt=0; 
				get; 
				batxt=batxt+"[\\get]";
				continue;
			}
			if(dlt&&(tg?a:b).zt1){
				one[(tg?a:b).tch]();
				if(did&&rand()%3==0&&tex[(tg?a:b).tch][1][(tg?a:b).skin]!="")copy_cout<<endl<<tex[(tg?a:b).tch][1][(tg?a:b).skin]<<endl<<endl;
			}
			if(dlt&&(tg?a:b).zt0){
				zero[(tg?a:b).tch]();
				if(did&&rand()%3==0&&tex[(tg?a:b).tch][0][(tg?a:b).skin]!="")copy_cout<<endl<<tex[(tg?a:b).tch][0][(tg?a:b).skin]<<endl<<endl;
			}
			if(dlt)rol();
			if(dlt&&!(tg?b:a).zt1){
				one[(tg?b:a).tch]();
				if(did&&rand()%3==0&&tex[(tg?b:a).tch][1][(tg?b:a).skin]!="")copy_cout<<endl<<tex[(tg?b:a).tch][1][(tg?b:a).skin]<<endl<<endl;
			}
			if(dlt&&!(tg?b:a).zt0){
				zero[(tg?b:a).tch]();
				if(did&&rand()%3==0&&tex[(tg?b:a).tch][0][(tg?b:a).skin]!="")copy_cout<<endl<<tex[(tg?b:a).tch][0][(tg?b:a).skin]<<endl<<endl;
			}
			end();if(ended)break;
			batxt=batxt+"[\\get]";
			tg^=1;
			dlt=0;
			get;
		}
		FILE*pp=fopen("level.luogu","a");
		fprintf(pp,"%d",rand()%10);
		fclose(pp);
		double c1=clock();
		get;
		double c2=clock();
		while(c2-c1<=500)_getch(),c2=clock();
		cls;
		prev1=prev2=0;
		zz1=zz2=0;
		lg1=lg2=0;
		zy1=zy2=0;
	} 
	return 0;
}	
