/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/chaemon/.choosenim/toolchains/nim-0.13.0/lib -o /home/chaemon/git/library-1/nim/tree/verify/nimcache/aoj_grl_5_c_2_test.o /home/chaemon/git/library-1/nim/tree/verify/nimcache/aoj_grl_5_c_2_test.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
typedef struct Graph159415 Graph159415;
typedef struct TY159416 TY159416;
typedef struct Edge159419 Edge159419;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct Slice88082 Slice88082;
typedef struct Heavylightdecomposition159200 Heavylightdecomposition159200;
typedef struct TY159201 TY159201;
typedef struct TY160016 TY160016;
typedef struct TY160072 TY160072;
typedef struct NimStringDesc NimStringDesc;
typedef struct Basechunk29638 Basechunk29638;
typedef struct Freecell29630 Freecell29630;
struct  Edge159419  {
NI src;
NI dst;
NI weight;
NI rev;
};
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  Slice88082  {
NI a;
NI b;
};
struct  Heavylightdecomposition159200  {
TY159201* sz;
TY159201* ina;
TY159201* outa;
TY159201* head;
TY159201* rev;
TY159201* par;
};
struct  TY160016  {
NI HEX3Astate;
TY159201* par159686;
TY159201* sz159681;
Graph159415* g159654;
TY159201* ina159682;
TY159201* rev159685;
TY159201* head159684;
TY159201* outa159683;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NI idx, NI p, void* ClEnv);
void* ClEnv;
} TY159688;
typedef N_CLOSURE_PTR(void, TMP46) (NI idx, NI p);
typedef N_CLOSURE_PTR(void, TMP47) (NI idx, NI p);
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NI idx, NI par, NI* times, void* ClEnv);
void* ClEnv;
} TY159831;
typedef N_CLOSURE_PTR(void, TMP48) (NI idx, NI par, NI* times);
typedef N_CLOSURE_PTR(void, TMP49) (NI idx, NI par, NI* times);
struct TY160072 {
NI Field0;
NI Field1;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct TY159416 {
  TGenericSeq Sup;
  Edge159419 data[SEQ_DECL_SIZE];
};
struct Graph159415 {
  TGenericSeq Sup;
  TY159416* data[SEQ_DECL_SIZE];
};
struct TY159201 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, main_159404)(void);
N_NIMCALL(NI, nextint_159016)(NI base);
N_NIMCALL(Graph159415*, initgraph_159408)(NI n);
N_NIMCALL(Graph159415*, newseq_159454)(NI len);
N_NIMCALL(void, TMP36)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP37)(void* p, NI op);
N_NIMCALL(TY159416*, newseq_159436)(NI len);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_84004, TNimType* mt);
static N_INLINE(Slice88082, HEX2EHEX2E_102424)(NI a, NI b);
N_NIMCALL(void, addbiedge_159562)(Graph159415** g, NI src, NI dst, NI weight);
N_NIMCALL(Edge159419, initedge_159584)(NI src, NI dst, NI weight, NI rev);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, initheavylightdecomposition_159645)(Graph159415* g_159650, Heavylightdecomposition159200* Result);
N_NIMCALL(void, TMP44)(void* p, NI op);
N_NIMCALL(void, TMP45)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(TY159201*, newseq_159664)(NI len);
N_CLOSURE(void, dfssz_159687)(NI idx, NI p, void* ClEnv);
N_CLOSURE(void, dfshld_159830)(NI idx, NI par, NI* times, void* ClEnv);
N_NIMCALL(void, genericShallowAssign)(void* dest, void* src, TNimType* mt);
N_NIMCALL(NI, lca_160061)(Heavylightdecomposition159200* self, NI u_160068, NI v_160070);
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
NIM_EXTERNC N_NOINLINE(void, aoj_grl_5_c_2_testInit000)(void);
NIM_EXTERNC N_NOINLINE(void, aoj_grl_5_c_2_testDatInit000)(void);
TNimType NTI159419; /* Edge */
extern TNimType NTI104; /* int */
TNimType NTI159416; /* seq[Edge[system.int]] */
TNimType NTI159415; /* Graph */
extern Gcheap49818 gch_49859;
TNimType NTI160016; /* object */
TNimType NTI160018; /* range -1..0(int) */
TNimType NTI159201; /* seq[int] */
TNimType NTI160015; /* ref object */
TNimType NTI159200; /* HeavyLightDecomposition */

N_NIMCALL(NI, nextint_159016)(NI base) {
	NI result;
	result = 0;
	scanf("%lld", (&result));
	result -= base;
	return result;
}
N_NIMCALL(void, TMP36)(void* p, NI op) {
	TY159416* a;
	NI LOC1;
	a = (TY159416*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP37)(void* p, NI op) {
	Graph159415* a;
	NI LOC1;
	a = (Graph159415*)p;
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

N_NIMCALL(Graph159415*, initgraph_159408)(NI n) {
	Graph159415* result_159428;
	Graph159415* result_159430;
{	result_159428 = 0;
	result_159430 = newseq_159454(((NI) (n)));
	{
		NI i_159432;
		NI HEX3Atmp_159499;
		NI res_159502;
		i_159432 = 0;
		HEX3Atmp_159499 = 0;
		HEX3Atmp_159499 = (n - 1);
		res_159502 = ((NI) 0);
		{
			while (1) {
				if (!(res_159502 <= HEX3Atmp_159499)) goto LA3;
				i_159432 = res_159502;
				asgnRefNoCycle((void**) (&result_159430->data[i_159432]), newseq_159436(((NI) 0)));
				res_159502 += ((NI) 1);
			} LA3: ;
		}
	}
	genericSeqAssign((&result_159428), result_159430, (&NTI159415));
	goto BeforeRet;
	}BeforeRet: ;
	return result_159428;
}

static N_INLINE(Slice88082, HEX2EHEX2E_102424)(NI a, NI b) {
	Slice88082 result;
	memset((void*)(&result), 0, sizeof(result));
	result.a = a;
	result.b = b;
	return result;
}

N_NIMCALL(Edge159419, initedge_159584)(NI src, NI dst, NI weight, NI rev) {
	Edge159419 result;
	Edge159419 e;
{	memset((void*)(&result), 0, sizeof(result));
	memset((void*)(&e), 0, sizeof(e));
	e.src = src;
	e.dst = dst;
	e.weight = weight;
	e.rev = rev;
	result = e;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, addbiedge_159562)(Graph159415** g, NI src, NI dst, NI weight) {
	Edge159419 LOC1;
	Edge159419 LOC2;
	LOC1 = initedge_159584(src, dst, weight, ((*g)->data[dst] ? (*g)->data[dst]->Sup.len : 0));
	(*g)->data[src] = (TY159416*) incrSeqV2(&((*g)->data[src])->Sup, sizeof(Edge159419));
	(*g)->data[src]->data[(*g)->data[src]->Sup.len] = LOC1;
	++(*g)->data[src]->Sup.len;
	LOC2 = initedge_159584(dst, src, weight, (NI)(((*g)->data[src] ? (*g)->data[src]->Sup.len : 0) - ((NI) 1)));
	(*g)->data[dst] = (TY159416*) incrSeqV2(&((*g)->data[dst])->Sup, sizeof(Edge159419));
	(*g)->data[dst]->data[(*g)->data[dst]->Sup.len] = LOC2;
	++(*g)->data[dst]->Sup.len;
}
N_NIMCALL(void, TMP44)(void* p, NI op) {
	TY159201* a;
	NI LOC1;
	a = (TY159201*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NIMCALL(void, TMP45)(void* p, NI op) {
	TY160016* a;
	a = (TY160016*)p;
	nimGCvisit((void*)(*a).par159686, op);
	nimGCvisit((void*)(*a).sz159681, op);
	nimGCvisit((void*)(*a).g159654, op);
	nimGCvisit((void*)(*a).ina159682, op);
	nimGCvisit((void*)(*a).rev159685, op);
	nimGCvisit((void*)(*a).head159684, op);
	nimGCvisit((void*)(*a).outa159683, op);
}

N_CLOSURE(void, dfssz_159687)(NI idx, NI p, void* ClEnv) {
	TY160016* HEX3Aenvp_160019;
	HEX3Aenvp_160019 = (TY160016*) ClEnv;
	(*HEX3Aenvp_160019).par159686->data[idx] = p;
	(*HEX3Aenvp_160019).sz159681->data[idx] = ((NI) 1);
	{
		NIM_BOOL LOC3;
		NI LOC7;
		LOC3 = 0;
		LOC3 = (((NI) 0) < ((*HEX3Aenvp_160019).g159654->data[idx] ? (*HEX3Aenvp_160019).g159654->data[idx]->Sup.len : 0));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*HEX3Aenvp_160019).g159654->data[idx]->data[((NI) 0)].dst == p);
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = 0;
		LOC7 = (*HEX3Aenvp_160019).g159654->data[idx]->data[((NI) 0)].dst;
		(*HEX3Aenvp_160019).g159654->data[idx]->data[((NI) 0)].dst = (*HEX3Aenvp_160019).g159654->data[idx]->data[(NI)(((*HEX3Aenvp_160019).g159654->data[idx] ? (*HEX3Aenvp_160019).g159654->data[idx]->Sup.len : 0) - ((NI) 1))].dst;
		(*HEX3Aenvp_160019).g159654->data[idx]->data[(NI)(((*HEX3Aenvp_160019).g159654->data[idx] ? (*HEX3Aenvp_160019).g159654->data[idx]->Sup.len : 0) - ((NI) 1))].dst = LOC7;
	}
	LA5: ;
	{
		Edge159419* e_159803;
		NI i_159827;
		NI L_159829;
		e_159803 = 0;
		i_159827 = ((NI) 0);
		L_159829 = ((*HEX3Aenvp_160019).g159654->data[idx] ? (*HEX3Aenvp_160019).g159654->data[idx]->Sup.len : 0);
		{
			while (1) {
				if (!(i_159827 < L_159829)) goto LA10;
				e_159803 = (&(*HEX3Aenvp_160019).g159654->data[idx]->data[i_159827]);
				{
					TY159688 LOC16;
					{
						if (!((*e_159803).dst == p)) goto LA14;
						goto LA11;
					}
					LA14: ;
					memset((void*)(&LOC16), 0, sizeof(LOC16));
					LOC16.ClPrc = dfssz_159687; LOC16.ClEnv = HEX3Aenvp_160019;
					LOC16.ClEnv? LOC16.ClPrc((*e_159803).dst, idx, LOC16.ClEnv):((TMP46)(LOC16.ClPrc))((*e_159803).dst, idx);
					(*HEX3Aenvp_160019).sz159681->data[idx] += (*HEX3Aenvp_160019).sz159681->data[(*e_159803).dst];
					{
						NI LOC21;
						if (!((*HEX3Aenvp_160019).sz159681->data[(*HEX3Aenvp_160019).g159654->data[idx]->data[((NI) 0)].dst] < (*HEX3Aenvp_160019).sz159681->data[(*e_159803).dst])) goto LA19;
						LOC21 = 0;
						LOC21 = (*HEX3Aenvp_160019).g159654->data[idx]->data[((NI) 0)].dst;
						(*HEX3Aenvp_160019).g159654->data[idx]->data[((NI) 0)].dst = (*e_159803).dst;
						(*e_159803).dst = LOC21;
					}
					LA19: ;
				} LA11: ;
				i_159827 += ((NI) 1);
			} LA10: ;
		}
	}
}

N_CLOSURE(void, dfshld_159830)(NI idx, NI par, NI* times, void* ClEnv) {
	TY160016* HEX3Aenvp_160023;
	HEX3Aenvp_160023 = (TY160016*) ClEnv;
	(*HEX3Aenvp_160023).ina159682->data[idx] = (*times);
	(*times) += ((NI) 1);
	(*HEX3Aenvp_160023).rev159685->data[(*HEX3Aenvp_160023).ina159682->data[idx]] = idx;
	{
		Edge159419 e_160002;
		TY159416* HEX3Atmp_160005;
		NI i_160008;
		NI L_160010;
		memset((void*)(&e_160002), 0, sizeof(e_160002));
		HEX3Atmp_160005 = 0;
		HEX3Atmp_160005 = (*HEX3Aenvp_160023).g159654->data[idx];
		i_160008 = ((NI) 0);
		L_160010 = (HEX3Atmp_160005 ? HEX3Atmp_160005->Sup.len : 0);
		{
			while (1) {
				if (!(i_160008 < L_160010)) goto LA3;
				e_160002 = HEX3Atmp_160005->data[i_160008];
				{
					TY159831 LOC14;
					{
						if (!(e_160002.dst == par)) goto LA7;
						goto LA4;
					}
					LA7: ;
					{
						if (!((*HEX3Aenvp_160023).g159654->data[idx]->data[((NI) 0)].dst == e_160002.dst)) goto LA11;
						(*HEX3Aenvp_160023).head159684->data[e_160002.dst] = (*HEX3Aenvp_160023).head159684->data[idx];
					}
					goto LA9;
					LA11: ;
					{
						(*HEX3Aenvp_160023).head159684->data[e_160002.dst] = e_160002.dst;
					}
					LA9: ;
					memset((void*)(&LOC14), 0, sizeof(LOC14));
					LOC14.ClPrc = dfshld_159830; LOC14.ClEnv = HEX3Aenvp_160023;
					LOC14.ClEnv? LOC14.ClPrc(e_160002.dst, idx, times, LOC14.ClEnv):((TMP48)(LOC14.ClPrc))(e_160002.dst, idx, times);
				} LA4: ;
				i_160008 += ((NI) 1);
			} LA3: ;
		}
	}
	(*HEX3Aenvp_160023).outa159683->data[idx] = (*times);
}

N_NIMCALL(void, initheavylightdecomposition_159645)(Graph159415* g_159650, Heavylightdecomposition159200* Result) {
	TY160016* HEX3Aenv_160028;
	TY159688 LOC1;
	NI t;
	TY159831 LOC2;
	Heavylightdecomposition159200 LOC3;
{	HEX3Aenv_160028 = 0;
	HEX3Aenv_160028 = (TY160016*) newObj((&NTI160015), sizeof(TY160016));
	genericSeqAssign((&(*HEX3Aenv_160028).g159654), g_159650, (&NTI159415));
	asgnRefNoCycle((void**) (&(*HEX3Aenv_160028).sz159681), newseq_159664(((NI) (((*HEX3Aenv_160028).g159654 ? (*HEX3Aenv_160028).g159654->Sup.len : 0)))));
	asgnRefNoCycle((void**) (&(*HEX3Aenv_160028).ina159682), newseq_159664(((NI) (((*HEX3Aenv_160028).g159654 ? (*HEX3Aenv_160028).g159654->Sup.len : 0)))));
	asgnRefNoCycle((void**) (&(*HEX3Aenv_160028).outa159683), newseq_159664(((NI) (((*HEX3Aenv_160028).g159654 ? (*HEX3Aenv_160028).g159654->Sup.len : 0)))));
	asgnRefNoCycle((void**) (&(*HEX3Aenv_160028).head159684), newseq_159664(((NI) (((*HEX3Aenv_160028).g159654 ? (*HEX3Aenv_160028).g159654->Sup.len : 0)))));
	asgnRefNoCycle((void**) (&(*HEX3Aenv_160028).rev159685), newseq_159664(((NI) (((*HEX3Aenv_160028).g159654 ? (*HEX3Aenv_160028).g159654->Sup.len : 0)))));
	asgnRefNoCycle((void**) (&(*HEX3Aenv_160028).par159686), newseq_159664(((NI) (((*HEX3Aenv_160028).g159654 ? (*HEX3Aenv_160028).g159654->Sup.len : 0)))));
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.ClPrc = dfssz_159687; LOC1.ClEnv = HEX3Aenv_160028;
	LOC1.ClEnv? LOC1.ClPrc(((NI) 0), ((NI) -1), LOC1.ClEnv):((TMP47)(LOC1.ClPrc))(((NI) 0), ((NI) -1));
	t = ((NI) 0);
	memset((void*)(&LOC2), 0, sizeof(LOC2));
	LOC2.ClPrc = dfshld_159830; LOC2.ClEnv = HEX3Aenv_160028;
	LOC2.ClEnv? LOC2.ClPrc(((NI) 0), ((NI) -1), (&t), LOC2.ClEnv):((TMP49)(LOC2.ClPrc))(((NI) 0), ((NI) -1), (&t));
	memset((void*)(&LOC3), 0, sizeof(LOC3));
	memset((void*)(&LOC3), 0, sizeof(LOC3));
	genericSeqAssign((&LOC3.sz), (*HEX3Aenv_160028).sz159681, (&NTI159201));
	genericSeqAssign((&LOC3.ina), (*HEX3Aenv_160028).ina159682, (&NTI159201));
	genericSeqAssign((&LOC3.outa), (*HEX3Aenv_160028).outa159683, (&NTI159201));
	genericSeqAssign((&LOC3.head), (*HEX3Aenv_160028).head159684, (&NTI159201));
	genericSeqAssign((&LOC3.rev), (*HEX3Aenv_160028).rev159685, (&NTI159201));
	genericSeqAssign((&LOC3.par), (*HEX3Aenv_160028).par159686, (&NTI159201));
	genericShallowAssign((void*)Result, (void*)(&LOC3), (&NTI159200));
	goto BeforeRet;
	}BeforeRet: ;
}

N_NIMCALL(NI, lca_160061)(Heavylightdecomposition159200* self, NI u_160068, NI v_160070) {
	NI result;
	TY160072 LOC1;
	NI u;
	NI v;
{	result = 0;
	LOC1.Field0 = u_160068;
	LOC1.Field1 = v_160070;
	u = LOC1.Field0;
	v = LOC1.Field1;
	{
		while (1) {
			{
				NI LOC8;
				if (!((*self).ina->data[v] < (*self).ina->data[u])) goto LA6;
				LOC8 = 0;
				LOC8 = u;
				u = v;
				v = LOC8;
			}
			LA6: ;
			{
				if (!((*self).head->data[u] == (*self).head->data[v])) goto LA11;
				result = u;
				goto BeforeRet;
			}
			LA11: ;
			v = (*self).par->data[(*self).head->data[v]];
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, main_159404)(void) {
	NI N;
	Graph159415* g;
	Heavylightdecomposition159200 tree;
	NI Q;
	N = nextint_159016(((NI) 0));
	g = initgraph_159408(N);
	{
		NI i_159532;
		Slice88082 HEX3Atmp_160104;
		i_159532 = 0;
		memset((void*)(&HEX3Atmp_160104), 0, sizeof(HEX3Atmp_160104));
		HEX3Atmp_160104 = HEX2EHEX2E_102424(((NI) 0), (N - 1));
		{
			NI x_160108;
			NI HEX3Atmp_160110;
			NI HEX3Atmp_160112;
			NI res_160114;
			x_160108 = 0;
			HEX3Atmp_160110 = 0;
			HEX3Atmp_160112 = 0;
			HEX3Atmp_160110 = HEX3Atmp_160104.a;
			HEX3Atmp_160112 = HEX3Atmp_160104.b;
			res_160114 = HEX3Atmp_160110;
			{
				while (1) {
					NI k;
					if (!(res_160114 <= HEX3Atmp_160112)) goto LA4;
					x_160108 = res_160114;
					i_159532 = x_160108;
					k = nextint_159016(((NI) 0));
					{
						NI j_159559;
						Slice88082 HEX3Atmp_160090;
						j_159559 = 0;
						memset((void*)(&HEX3Atmp_160090), 0, sizeof(HEX3Atmp_160090));
						HEX3Atmp_160090 = HEX2EHEX2E_102424(((NI) 0), (k - 1));
						{
							NI x_160094;
							NI HEX3Atmp_160096;
							NI HEX3Atmp_160098;
							NI res_160100;
							x_160094 = 0;
							HEX3Atmp_160096 = 0;
							HEX3Atmp_160098 = 0;
							HEX3Atmp_160096 = HEX3Atmp_160090.a;
							HEX3Atmp_160098 = HEX3Atmp_160090.b;
							res_160100 = HEX3Atmp_160096;
							{
								while (1) {
									NI c;
									if (!(res_160100 <= HEX3Atmp_160098)) goto LA8;
									x_160094 = res_160100;
									j_159559 = x_160094;
									c = nextint_159016(((NI) 0));
									addbiedge_159562((&g), i_159532, c, ((NI) 1));
									res_160100 += ((NI) 1);
								} LA8: ;
							}
						}
					}
					res_160114 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	memset((void*)(&tree), 0, sizeof(tree));
	memset((void*)(&tree), 0, sizeof(tree));
	initheavylightdecomposition_159645(g, (&tree));
	Q = nextint_159016(((NI) 0));
	{
		NI i_160057;
		Slice88082 HEX3Atmp_160119;
		i_160057 = 0;
		memset((void*)(&HEX3Atmp_160119), 0, sizeof(HEX3Atmp_160119));
		HEX3Atmp_160119 = HEX2EHEX2E_102424(((NI) 0), (Q - 1));
		{
			NI x_160123;
			NI HEX3Atmp_160125;
			NI HEX3Atmp_160127;
			NI res_160129;
			x_160123 = 0;
			HEX3Atmp_160125 = 0;
			HEX3Atmp_160127 = 0;
			HEX3Atmp_160125 = HEX3Atmp_160119.a;
			HEX3Atmp_160127 = HEX3Atmp_160119.b;
			res_160129 = HEX3Atmp_160125;
			{
				while (1) {
					NI u;
					NI v;
					NI LOC13;
					NimStringDesc* LOC14;
					if (!(res_160129 <= HEX3Atmp_160127)) goto LA12;
					x_160123 = res_160129;
					i_160057 = x_160123;
					u = nextint_159016(((NI) 0));
					v = nextint_159016(((NI) 0));
					LOC13 = 0;
					LOC13 = lca_160061((&tree), u, v);
					LOC14 = 0;
					LOC14 = nimIntToStr(LOC13);
					printf("%s\012", LOC14? (LOC14)->data:"nil");
					fflush(stdout);
					res_160129 += ((NI) 1);
				} LA12: ;
			}
		}
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
	aoj_grl_5_c_2_testDatInit000();
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
	aoj_grl_5_c_2_testInit000();
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

NIM_EXTERNC N_NOINLINE(void, aoj_grl_5_c_2_testInit000)(void) {
	main_159404();
}

NIM_EXTERNC N_NOINLINE(void, aoj_grl_5_c_2_testDatInit000)(void) {
static TNimNode* TMP35[4];
static TNimNode* TMP43[8];
static TNimNode* TMP50[6];
static TNimNode TMP3[21];
NTI159419.size = sizeof(Edge159419);
NTI159419.kind = 18;
NTI159419.base = 0;
NTI159419.flags = 3;
TMP35[0] = &TMP3[1];
TMP3[1].kind = 1;
TMP3[1].offset = offsetof(Edge159419, src);
TMP3[1].typ = (&NTI104);
TMP3[1].name = "src";
TMP35[1] = &TMP3[2];
TMP3[2].kind = 1;
TMP3[2].offset = offsetof(Edge159419, dst);
TMP3[2].typ = (&NTI104);
TMP3[2].name = "dst";
TMP35[2] = &TMP3[3];
TMP3[3].kind = 1;
TMP3[3].offset = offsetof(Edge159419, weight);
TMP3[3].typ = (&NTI104);
TMP3[3].name = "weight";
TMP35[3] = &TMP3[4];
TMP3[4].kind = 1;
TMP3[4].offset = offsetof(Edge159419, rev);
TMP3[4].typ = (&NTI104);
TMP3[4].name = "rev";
TMP3[0].len = 4; TMP3[0].kind = 2; TMP3[0].sons = &TMP35[0];
NTI159419.node = &TMP3[0];
NTI159416.size = sizeof(TY159416*);
NTI159416.kind = 24;
NTI159416.base = (&NTI159419);
NTI159416.flags = 2;
NTI159416.marker = TMP36;
NTI159415.size = sizeof(Graph159415*);
NTI159415.kind = 24;
NTI159415.base = (&NTI159416);
NTI159415.flags = 2;
NTI159415.marker = TMP37;
NTI160016.size = sizeof(TY160016);
NTI160016.kind = 18;
NTI160016.base = 0;
NTI160016.flags = 2;
TMP43[0] = &TMP3[6];
NTI160018.size = sizeof(NI);
NTI160018.kind = 20;
NTI160018.base = (&NTI104);
NTI160018.flags = 3;
TMP3[6].kind = 1;
TMP3[6].offset = offsetof(TY160016, HEX3Astate);
TMP3[6].typ = (&NTI160018);
TMP3[6].name = ":state";
TMP43[1] = &TMP3[7];
NTI159201.size = sizeof(TY159201*);
NTI159201.kind = 24;
NTI159201.base = (&NTI104);
NTI159201.flags = 2;
NTI159201.marker = TMP44;
TMP3[7].kind = 1;
TMP3[7].offset = offsetof(TY160016, par159686);
TMP3[7].typ = (&NTI159201);
TMP3[7].name = "par159686";
TMP43[2] = &TMP3[8];
TMP3[8].kind = 1;
TMP3[8].offset = offsetof(TY160016, sz159681);
TMP3[8].typ = (&NTI159201);
TMP3[8].name = "sz159681";
TMP43[3] = &TMP3[9];
TMP3[9].kind = 1;
TMP3[9].offset = offsetof(TY160016, g159654);
TMP3[9].typ = (&NTI159415);
TMP3[9].name = "g159654";
TMP43[4] = &TMP3[10];
TMP3[10].kind = 1;
TMP3[10].offset = offsetof(TY160016, ina159682);
TMP3[10].typ = (&NTI159201);
TMP3[10].name = "in_a159682";
TMP43[5] = &TMP3[11];
TMP3[11].kind = 1;
TMP3[11].offset = offsetof(TY160016, rev159685);
TMP3[11].typ = (&NTI159201);
TMP3[11].name = "rev159685";
TMP43[6] = &TMP3[12];
TMP3[12].kind = 1;
TMP3[12].offset = offsetof(TY160016, head159684);
TMP3[12].typ = (&NTI159201);
TMP3[12].name = "head159684";
TMP43[7] = &TMP3[13];
TMP3[13].kind = 1;
TMP3[13].offset = offsetof(TY160016, outa159683);
TMP3[13].typ = (&NTI159201);
TMP3[13].name = "out_a159683";
TMP3[5].len = 8; TMP3[5].kind = 2; TMP3[5].sons = &TMP43[0];
NTI160016.node = &TMP3[5];
NTI160015.size = sizeof(TY160016*);
NTI160015.kind = 22;
NTI160015.base = (&NTI160016);
NTI160015.flags = 2;
NTI160015.marker = TMP45;
NTI159200.size = sizeof(Heavylightdecomposition159200);
NTI159200.kind = 18;
NTI159200.base = 0;
NTI159200.flags = 2;
TMP50[0] = &TMP3[15];
TMP3[15].kind = 1;
TMP3[15].offset = offsetof(Heavylightdecomposition159200, sz);
TMP3[15].typ = (&NTI159201);
TMP3[15].name = "sz";
TMP50[1] = &TMP3[16];
TMP3[16].kind = 1;
TMP3[16].offset = offsetof(Heavylightdecomposition159200, ina);
TMP3[16].typ = (&NTI159201);
TMP3[16].name = "in_a";
TMP50[2] = &TMP3[17];
TMP3[17].kind = 1;
TMP3[17].offset = offsetof(Heavylightdecomposition159200, outa);
TMP3[17].typ = (&NTI159201);
TMP3[17].name = "out_a";
TMP50[3] = &TMP3[18];
TMP3[18].kind = 1;
TMP3[18].offset = offsetof(Heavylightdecomposition159200, head);
TMP3[18].typ = (&NTI159201);
TMP3[18].name = "head";
TMP50[4] = &TMP3[19];
TMP3[19].kind = 1;
TMP3[19].offset = offsetof(Heavylightdecomposition159200, rev);
TMP3[19].typ = (&NTI159201);
TMP3[19].name = "rev";
TMP50[5] = &TMP3[20];
TMP3[20].kind = 1;
TMP3[20].offset = offsetof(Heavylightdecomposition159200, par);
TMP3[20].typ = (&NTI159201);
TMP3[20].name = "par";
TMP3[14].len = 6; TMP3[14].kind = 2; TMP3[14].sons = &TMP50[0];
NTI159200.node = &TMP3[14];
}
