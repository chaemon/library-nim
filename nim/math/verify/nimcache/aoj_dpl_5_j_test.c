/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/chaemon/.choosenim/toolchains/nim-0.13.0/lib -o /home/chaemon/git/library-1/nim/math/verify/nimcache/aoj_dpl_5_j_test.o /home/chaemon/git/library-1/nim/math/verify/nimcache/aoj_dpl_5_j_test.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Mint159105 Mint159105;
typedef struct TY159349 TY159349;
typedef struct TY159350 TY159350;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47505 Cell47505;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29688 Memregion29688;
typedef struct Smallchunk29640 Smallchunk29640;
typedef struct Llchunk29682 Llchunk29682;
typedef struct Bigchunk29642 Bigchunk29642;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29686 Avlnode29686;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Mint159105  {
NI v;
};
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47505  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47521  {
NI len;
NI cap;
Cell47505** d;
};
struct  Cellset47517  {
NI counter;
NI max;
Pagedesc47513* head;
Pagedesc47513** data;
};
typedef Smallchunk29640* TY29703[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29688  {
NI minlargeobj;
NI maxlargeobj;
TY29703 freesmallchunks;
Llchunk29682* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29642* freechunkslist;
Intset29614 chunkstarts;
Avlnode29686* root;
Avlnode29686* deleted;
Avlnode29686* last;
Avlnode29686* freeavlnodes;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47521 zct;
Cellseq47521 decstack;
Cellset47517 cycleroots;
Cellseq47521 tempstack;
NI recgclock;
Memregion29688 region;
Gcstat49814 stat;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29619[8];
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29619 bits;
};
struct  Basechunk29638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29640  {
  Basechunk29638 Sup;
Smallchunk29640* next;
Smallchunk29640* prev;
Freecell29630* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29682  {
NI size;
NI acc;
Llchunk29682* next;
};
struct  Bigchunk29642  {
  Basechunk29638 Sup;
Bigchunk29642* next;
Bigchunk29642* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29619 bits;
};
typedef Avlnode29686* TY29693[2];
struct  Avlnode29686  {
TY29693 link;
NI key;
NI upperbound;
NI level;
};
struct  Freecell29630  {
Freecell29630* next;
NI zerofield;
};
struct TY159350 {
  TGenericSeq Sup;
  Mint159105 data[SEQ_DECL_SIZE];
};
struct TY159349 {
  TGenericSeq Sup;
  TY159350* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, main_159337)(void);
N_NIMCALL(NI, nextint_159016)(NI base);
N_NIMCALL(NimStringDesc*, HEX24_159192)(Mint159105 a);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(TY159349*, getpartition_159342)(NI n, NI k);
N_NIMCALL(TY159349*, newseq_159375)(NI len);
N_NIMCALL(void, TMP35)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP36)(void* p, NI op);
N_NIMCALL(TY159350*, newseq_159357)(NI len);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_84004, TNimType* mt);
N_NIMCALL(Mint159105, init_159418)(Mint159105 self, NI a);
N_NIMCALL(Mint159105, initmint_159205)(NI a_159209);
N_NIMCALL(Mint159105, HEX2B_159454)(Mint159105 a, Mint159105 b);
N_NIMCALL(void, HEX2BHEX3D_159464)(Mint159105* a, Mint159105 b);
N_NIMCALL(Mint159105, initmint_159125)(Mint159105 a);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_etcprivInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_etcprivDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_setsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_futureInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_futureDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, aoj_dpl_5_j_testInit000)(void);
NIM_EXTERNC N_NOINLINE(void, aoj_dpl_5_j_testDatInit000)(void);
TNimType NTI159105; /* Mint */
extern TNimType NTI104; /* int */
TNimType NTI159350; /* seq[Mint] */
TNimType NTI159349; /* seq[seq[Mint]] */
extern Gcheap49818 gch_49859;

N_NIMCALL(NI, nextint_159016)(NI base) {
	NI result;
	result = 0;
	scanf("%lld", (&result));
	result -= base;
	return result;
}

N_NIMCALL(NimStringDesc*, HEX24_159192)(Mint159105 a) {
	NimStringDesc* result;
{	result = 0;
	result = nimIntToStr(a.v);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}
N_NIMCALL(void, TMP35)(void* p, NI op) {
	TY159350* a;
	NI LOC1;
	a = (TY159350*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP36)(void* p, NI op) {
	TY159349* a;
	NI LOC1;
	a = (TY159349*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47505* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47505* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Mint159105, initmint_159205)(NI a_159209) {
	Mint159105 result;
	NI a;
	Mint159105 LOC5;
{	memset((void*)(&result), 0, sizeof(result));
	a = a_159209;
	a = ((NI) ((NI)(a % ((NI) 1000000007))));
	{
		if (!(a < ((NI) 0))) goto LA3;
		a += ((NI) 1000000007);
	}
	LA3: ;
	memset((void*)(&LOC5), 0, sizeof(LOC5));
	LOC5.v = a;
	result = LOC5;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Mint159105, init_159418)(Mint159105 self, NI a) {
	Mint159105 result;
	memset((void*)(&result), 0, sizeof(result));
	result = initmint_159205(a);
	return result;
}

N_NIMCALL(Mint159105, initmint_159125)(Mint159105 a) {
	Mint159105 result;
{	memset((void*)(&result), 0, sizeof(result));
	result = a;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, HEX2BHEX3D_159464)(Mint159105* a, Mint159105 b) {
	Mint159105 LOC1;
	LOC1 = initmint_159125(b);
	(*a).v += LOC1.v;
	{
		if (!(((NI) 1000000007) <= (*a).v)) goto LA4;
		(*a).v -= ((NI) 1000000007);
	}
	LA4: ;
}

N_NIMCALL(Mint159105, HEX2B_159454)(Mint159105 a, Mint159105 b) {
	Mint159105 result;
	Mint159105 c;
{	memset((void*)(&result), 0, sizeof(result));
	c = a;
	HEX2BHEX3D_159464((&c), b);
	result = c;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(TY159349*, getpartition_159342)(NI n, NI k) {
	TY159349* result_159351;
	TY159349* result_159353;
	Mint159105 LOC4;
	result_159351 = 0;
	result_159353 = newseq_159375(((NI) ((NI)(n + ((NI) 1)))));
	{
		NI i_159355;
		NI HEX3Atmp_159491;
		NI res_159494;
		i_159355 = 0;
		HEX3Atmp_159491 = 0;
		HEX3Atmp_159491 = ((NI)(n + ((NI) 1)) - 1);
		res_159494 = ((NI) 0);
		{
			while (1) {
				if (!(res_159494 <= HEX3Atmp_159491)) goto LA3;
				i_159355 = res_159494;
				asgnRefNoCycle((void**) (&result_159353->data[i_159355]), newseq_159357(((NI) ((NI)(k + ((NI) 1))))));
				res_159494 += ((NI) 1);
			} LA3: ;
		}
	}
	genericSeqAssign((&result_159351), result_159353, (&NTI159349));
	memset((void*)(&LOC4), 0, sizeof(LOC4));
	result_159351->data[((NI) 0)]->data[((NI) 0)] = init_159418(LOC4, ((NI) 1));
	{
		NI i_159442;
		NI res_159509;
		i_159442 = 0;
		res_159509 = ((NI) 0);
		{
			while (1) {
				if (!(res_159509 <= n)) goto LA7;
				i_159442 = res_159509;
				{
					NI j_159452;
					NI res_159503;
					j_159452 = 0;
					res_159503 = ((NI) 1);
					{
						while (1) {
							if (!(res_159503 <= k)) goto LA10;
							j_159452 = res_159503;
							{
								if (!(((NI) 0) <= (NI)(i_159442 - j_159452))) goto LA13;
								result_159351->data[i_159442]->data[j_159452] = HEX2B_159454(result_159351->data[i_159442]->data[(NI)(j_159452 - ((NI) 1))], result_159351->data[(NI)(i_159442 - j_159452)]->data[j_159452]);
							}
							goto LA11;
							LA13: ;
							{
								result_159351->data[i_159442]->data[j_159452] = result_159351->data[i_159442]->data[(NI)(j_159452 - ((NI) 1))];
							}
							LA11: ;
							res_159503 += ((NI) 1);
						} LA10: ;
					}
				}
				res_159509 += ((NI) 1);
			} LA7: ;
		}
	}
	return result_159351;
}

N_NIMCALL(void, main_159337)(void) {
	NI N;
	NI K;
	TY159349* LOC1;
	NimStringDesc* LOC2;
	N = nextint_159016(((NI) 0));
	K = nextint_159016(((NI) 0));
	LOC1 = 0;
	LOC1 = getpartition_159342(N, K);
	LOC2 = 0;
	LOC2 = HEX24_159192(LOC1->data[N]->data[K]);
	printf("%s\012", LOC2? (LOC2)->data:"nil");
	fflush(stdout);
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner() {
	systemInit000();
	stdlib_algorithmDatInit000();
	stdlib_sequtilsDatInit000();
	stdlib_parseutilsDatInit000();
	stdlib_strutilsDatInit000();
	stdlib_etcprivDatInit000();
	stdlib_hashesDatInit000();
	stdlib_timesDatInit000();
	stdlib_mathDatInit000();
	stdlib_tablesDatInit000();
	stdlib_macrosDatInit000();
	stdlib_posixDatInit000();
	stdlib_osDatInit000();
	stdlib_setsDatInit000();
	stdlib_streamsDatInit000();
	stdlib_futureDatInit000();
	aoj_dpl_5_j_testDatInit000();
	stdlib_algorithmInit000();
	stdlib_sequtilsInit000();
	stdlib_parseutilsInit000();
	stdlib_strutilsInit000();
	stdlib_etcprivInit000();
	stdlib_hashesInit000();
	stdlib_timesInit000();
	stdlib_mathInit000();
	stdlib_tablesInit000();
	stdlib_macrosInit000();
	stdlib_posixInit000();
	stdlib_osInit000();
	stdlib_setsInit000();
	stdlib_streamsInit000();
	stdlib_futureInit000();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	aoj_dpl_5_j_testInit000();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, aoj_dpl_5_j_testInit000)(void) {
	main_159337();
}

NIM_EXTERNC N_NOINLINE(void, aoj_dpl_5_j_testDatInit000)(void) {
static TNimNode TMP3[1];
NTI159105.size = sizeof(Mint159105);
NTI159105.kind = 18;
NTI159105.base = 0;
NTI159105.flags = 3;
TMP3[0].kind = 1;
TMP3[0].offset = offsetof(Mint159105, v);
TMP3[0].typ = (&NTI104);
TMP3[0].name = "v";
NTI159105.node = &TMP3[0];
NTI159350.size = sizeof(TY159350*);
NTI159350.kind = 24;
NTI159350.base = (&NTI159105);
NTI159350.flags = 2;
NTI159350.marker = TMP35;
NTI159349.size = sizeof(TY159349*);
NTI159349.kind = 24;
NTI159349.base = (&NTI159350);
NTI159349.flags = 2;
NTI159349.marker = TMP36;
}
