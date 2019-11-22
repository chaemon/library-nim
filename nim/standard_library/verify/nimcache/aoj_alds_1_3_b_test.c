/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/chaemon/.choosenim/toolchains/nim-0.13.0/lib -o /home/chaemon/git/library-1/nim/standard_library/verify/nimcache/aoj_alds_1_3_b_test.o /home/chaemon/git/library-1/nim/standard_library/verify/nimcache/aoj_alds_1_3_b_test.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Deque160298 Deque160298;
typedef struct TY160302 TY160302;
typedef struct TY160289 TY160289;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Slice88082 Slice88082;
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
struct  Deque160298  {
TY160302* data;
NI head;
NI tail;
NI count;
NI mask;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY160289 {
NimStringDesc* Field0;
NI Field1;
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
struct  Slice88082  {
NI a;
NI b;
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
struct TY160302 {
  TGenericSeq Sup;
  TY160289 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, main_160287)(void);
N_NIMCALL(void, initdeque_160291)(NI initialsize, Deque160298* Result);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP38)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, nextint_159016)(NI base);
static N_INLINE(Slice88082, HEX2EHEX2E_102424)(NI a, NI b);
N_NIMCALL(NimStringDesc*, nextstring_159034)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, addlast_160444)(Deque160298* deq, TY160289 item);
N_NIMCALL(void, expandifneeded_160454)(Deque160298* deq);
N_NIMCALL(TY160302*, newseq_160463)(NI len);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(NI, len_160572)(Deque160298* deq);
static N_INLINE(void, popfirst_160580)(Deque160298* deq, TY160289* Result);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
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
NIM_EXTERNC N_NOINLINE(void, stdlib_typetraitsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_typetraitsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, aoj_alds_1_3_b_testInit000)(void);
NIM_EXTERNC N_NOINLINE(void, aoj_alds_1_3_b_testDatInit000)(void);
STRING_LITERAL(TMP44, "", 0);
STRING_LITERAL(TMP45, " ", 1);
TNimType NTI160289; /* (string, int) */
extern TNimType NTI138; /* string */
extern TNimType NTI104; /* int */
TNimType NTI160302; /* seq[(string, int)] */
extern Gcheap49818 gch_49859;
N_NIMCALL(void, TMP38)(void* p, NI op) {
	TY160302* a;
	NI LOC1;
	a = (TY160302*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	}
}

N_NIMCALL(void, initdeque_160291)(NI initialsize, Deque160298* Result) {
	(*Result).mask = (NI)(initialsize - ((NI) 1));
	unsureAsgnRef((void**) (&(*Result).data), (TY160302*) newSeq((&NTI160302), ((NI) (initialsize))));
}

N_NIMCALL(NI, nextint_159016)(NI base) {
	NI result;
	result = 0;
	scanf("%lld", (&result));
	result -= base;
	return result;
}

static N_INLINE(Slice88082, HEX2EHEX2E_102424)(NI a, NI b) {
	Slice88082 result;
	memset((void*)(&result), 0, sizeof(result));
	result.a = a;
	result.b = b;
	return result;
}

N_NIMCALL(NimStringDesc*, nextstring_159034)(void) {
	NimStringDesc* result;
	NIM_BOOL get;
	result = 0;
	get = NIM_FALSE;
	result = copyString(((NimStringDesc*) &TMP44));
	{
		while (1) {
			NIM_CHAR c;
			c = getchar();
			{
				if (!(((NI) 32) < ((NI) (((NU8)(c)))))) goto LA5;
				get = NIM_TRUE;
				result = addChar(result, c);
			}
			goto LA3;
			LA5: ;
			{
				if (!get) goto LA8;
				goto LA1;
			}
			goto LA3;
			LA8: ;
			LA3: ;
		}
	} LA1: ;
	return result;
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

N_NIMCALL(void, expandifneeded_160454)(Deque160298* deq) {
	NI cap;
	cap = (NI)((*deq).mask + ((NI) 1));
	{
		NIM_BOOL LOC3;
		TY160302* n;
		LOC3 = 0;
		LOC3 = unlikely((cap <= (*deq).count));
		if (!LOC3) goto LA4;
		n = newseq_160463(((NI) ((NI)(cap * ((NI) 2)))));
		{
			NI i_160536;
			TY160289 x_160537;
			Deque160298 HEX3Atmp_160539;
			NI i_160544;
			i_160536 = 0;
			memset((void*)(&x_160537), 0, sizeof(x_160537));
			memset((void*)(&HEX3Atmp_160539), 0, sizeof(HEX3Atmp_160539));
			memcpy((void*)(&HEX3Atmp_160539), (NIM_CONST void*)(&(*deq)), sizeof(HEX3Atmp_160539));
			i_160544 = HEX3Atmp_160539.head;
			{
				NI c_160546;
				Slice88082 HEX3Atmp_160548;
				c_160546 = 0;
				memset((void*)(&HEX3Atmp_160548), 0, sizeof(HEX3Atmp_160548));
				HEX3Atmp_160548 = HEX2EHEX2E_102424(((NI) 0), (HEX3Atmp_160539.count - 1));
				{
					NI x_160550;
					NI HEX3Atmp_160552;
					NI HEX3Atmp_160554;
					NI res_160556;
					x_160550 = 0;
					HEX3Atmp_160552 = 0;
					HEX3Atmp_160554 = 0;
					HEX3Atmp_160552 = HEX3Atmp_160548.a;
					HEX3Atmp_160554 = HEX3Atmp_160548.b;
					res_160556 = HEX3Atmp_160552;
					{
						while (1) {
							if (!(res_160556 <= HEX3Atmp_160554)) goto LA10;
							x_160550 = res_160556;
							c_160546 = x_160550;
							i_160536 = c_160546;
							x_160537.Field0 = HEX3Atmp_160539.data->data[i_160544].Field0;
							x_160537.Field1 = HEX3Atmp_160539.data->data[i_160544].Field1;
							asgnRefNoCycle((void**) (&n->data[i_160536].Field0), x_160537.Field0);
							n->data[i_160536].Field1 = x_160537.Field1;
							i_160544 = (NI)((NI)(i_160544 + ((NI) 1)) & HEX3Atmp_160539.mask);
							res_160556 += ((NI) 1);
						} LA10: ;
					}
				}
			}
		}
		unsureAsgnRef((void**) (&(*deq).data), n);
		(*deq).mask = (NI)((NI)(cap * ((NI) 2)) - ((NI) 1));
		(*deq).tail = (*deq).count;
		(*deq).head = ((NI) 0);
	}
	LA4: ;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47505* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53001(c);
	}
	LA3: ;
}

N_NIMCALL(void, addlast_160444)(Deque160298* deq, TY160289 item) {
	NimStringDesc* LOC1;
	expandifneeded_160454(deq);
	(*deq).count += ((NI) 1);
	LOC1 = 0;
	LOC1 = (*deq).data->data[(*deq).tail].Field0; (*deq).data->data[(*deq).tail].Field0 = copyStringRC1(item.Field0);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*deq).data->data[(*deq).tail].Field1 = item.Field1;
	(*deq).tail = (NI)((NI)((*deq).tail + ((NI) 1)) & (*deq).mask);
}

static N_INLINE(NI, len_160572)(Deque160298* deq) {
	NI result;
	result = 0;
	result = (*deq).count;
	return result;
}

static N_INLINE(void, popfirst_160580)(Deque160298* deq, TY160289* Result) {
	(*deq).count -= ((NI) 1);
	unsureAsgnRef((void**) (&(*Result).Field0), copyString((*deq).data->data[(*deq).head].Field0));
	(*Result).Field1 = (*deq).data->data[(*deq).head].Field1;
	genericReset((void*)(&(*deq).data->data[(*deq).head]), (&NTI160289));
	(*deq).head = (NI)((NI)((*deq).head + ((NI) 1)) & (*deq).mask);
}

N_NIMCALL(void, main_160287)(void) {
	Deque160298 que;
	NI n;
	NI q;
	NI t;
	memset((void*)(&que), 0, sizeof(que));
	memset((void*)(&que), 0, sizeof(que));
	initdeque_160291(((NI) 4), (&que));
	n = nextint_159016(((NI) 0));
	q = nextint_159016(((NI) 0));
	{
		NI i_160439;
		Slice88082 HEX3Atmp_160663;
		i_160439 = 0;
		memset((void*)(&HEX3Atmp_160663), 0, sizeof(HEX3Atmp_160663));
		HEX3Atmp_160663 = HEX2EHEX2E_102424(((NI) 0), (n - 1));
		{
			NI x_160667;
			NI HEX3Atmp_160669;
			NI HEX3Atmp_160671;
			NI res_160673;
			x_160667 = 0;
			HEX3Atmp_160669 = 0;
			HEX3Atmp_160671 = 0;
			HEX3Atmp_160669 = HEX3Atmp_160663.a;
			HEX3Atmp_160671 = HEX3Atmp_160663.b;
			res_160673 = HEX3Atmp_160669;
			{
				while (1) {
					NimStringDesc* name;
					NI time;
					TY160289 LOC5;
					if (!(res_160673 <= HEX3Atmp_160671)) goto LA4;
					x_160667 = res_160673;
					i_160439 = x_160667;
					name = nextstring_159034();
					time = nextint_159016(((NI) 0));
					memset((void*)(&LOC5), 0, sizeof(LOC5));
					LOC5.Field0 = copyString(name);
					LOC5.Field1 = time;
					addlast_160444((&que), LOC5);
					res_160673 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	t = ((NI) 0);
	{
		while (1) {
			NI LOC8;
			TY160289 LOC9;
			NimStringDesc* name;
			NI time;
			LOC8 = 0;
			LOC8 = len_160572((&que));
			if (!(((NI) 0) < LOC8)) goto LA7;
			memset((void*)(&LOC9), 0, sizeof(LOC9));
			popfirst_160580((&que), (&LOC9));
			name = 0;
			name = copyString(LOC9.Field0);
			time = 0;
			time = LOC9.Field1;
			{
				NimStringDesc* LOC14;
				if (!(time <= q)) goto LA12;
				t += time;
				LOC14 = 0;
				LOC14 = nimIntToStr(t);
				printf("%s%s%s\012", name? (name)->data:"nil", ((NimStringDesc*) &TMP45)? (((NimStringDesc*) &TMP45))->data:"nil", LOC14? (LOC14)->data:"nil");
				fflush(stdout);
			}
			goto LA10;
			LA12: ;
			{
				TY160289 LOC16;
				t += q;
				time -= q;
				memset((void*)(&LOC16), 0, sizeof(LOC16));
				LOC16.Field0 = copyString(name);
				LOC16.Field1 = time;
				addlast_160444((&que), LOC16);
			}
			LA10: ;
		} LA7: ;
	}
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
	stdlib_typetraitsDatInit000();
	aoj_alds_1_3_b_testDatInit000();
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
	stdlib_typetraitsInit000();
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
	aoj_alds_1_3_b_testInit000();
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

NIM_EXTERNC N_NOINLINE(void, aoj_alds_1_3_b_testInit000)(void) {
	main_160287();
}

NIM_EXTERNC N_NOINLINE(void, aoj_alds_1_3_b_testDatInit000)(void) {
static TNimNode* TMP37[2];
static TNimNode TMP3[3];
NTI160289.size = sizeof(TY160289);
NTI160289.kind = 18;
NTI160289.base = 0;
NTI160289.flags = 2;
TMP37[0] = &TMP3[1];
TMP3[1].kind = 1;
TMP3[1].offset = offsetof(TY160289, Field0);
TMP3[1].typ = (&NTI138);
TMP3[1].name = "Field0";
TMP37[1] = &TMP3[2];
TMP3[2].kind = 1;
TMP3[2].offset = offsetof(TY160289, Field1);
TMP3[2].typ = (&NTI104);
TMP3[2].name = "Field1";
TMP3[0].len = 2; TMP3[0].kind = 2; TMP3[0].sons = &TMP37[0];
NTI160289.node = &TMP3[0];
NTI160302.size = sizeof(TY160302*);
NTI160302.kind = 24;
NTI160302.base = (&NTI160289);
NTI160302.flags = 2;
NTI160302.marker = TMP38;
}
