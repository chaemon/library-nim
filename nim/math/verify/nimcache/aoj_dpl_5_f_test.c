/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/chaemon/.choosenim/toolchains/nim-0.13.0/lib -o /home/chaemon/git/library-1/nim/math/verify/nimcache/aoj_dpl_5_f_test.o /home/chaemon/git/library-1/nim/math/verify/nimcache/aoj_dpl_5_f_test.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
typedef struct Combination159462 Combination159462;
typedef struct TY159468 TY159468;
typedef struct Mint159105 Mint159105;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
struct  Combination159462  {
NI sz;
TY159468* facta;
TY159468* rfacta;
TY159468* inva;
};
struct  Mint159105  {
NI v;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY159468 {
  TGenericSeq Sup;
  Mint159105 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, main_159450)(void);
N_NIMCALL(NI, nextint_159016)(NI base);
N_NIMCALL(void, initcombination_159455)(NI sz, Combination159462* Result);
N_NIMCALL(TY159468*, newseq_159483)(NI len);
N_NIMCALL(void, TMP35)(void* p, NI op);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_84004, TNimType* mt);
N_NIMCALL(Mint159105, init_159579)(Mint159105 self, NI a);
N_NIMCALL(Mint159105, initmint_159205)(NI a_159209);
N_NIMCALL(Mint159105, HEX2A_159623)(Mint159105 a, NI b);
N_NIMCALL(void, HEX2AHEX3D_159633)(Mint159105* a, NI b);
static N_INLINE(void, HEX2AHEX3D_159233)(NI* x, NI y);
N_NIMCALL(void, HEX2FHEX3D_159660)(Mint159105* a, Mint159105 b);
N_NIMCALL(NI, invmod_159272)(NI a, NI m);
N_NIMCALL(NI, extgcd_159254)(NI a, NI b, NI* x, NI* y);
N_NIMCALL(Mint159105, initmint_159125)(Mint159105 a);
N_NIMCALL(Mint159105, HEX2A_159710)(Mint159105 a, Mint159105 b);
N_NIMCALL(void, HEX2AHEX3D_159225)(Mint159105* a, Mint159105 b);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, HEX24_159192)(Mint159105 a);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(Mint159105, C_159785)(Combination159462* self, NI p, NI q);
N_NIMCALL(Mint159105, fact_159798)(Combination159462* self, NI k);
N_NIMCALL(Mint159105, rfact_159818)(Combination159462* self, NI k);
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
NIM_EXTERNC N_NOINLINE(void, aoj_dpl_5_f_testInit000)(void);
NIM_EXTERNC N_NOINLINE(void, aoj_dpl_5_f_testDatInit000)(void);
TNimType NTI159105; /* Mint */
extern TNimType NTI104; /* int */
TNimType NTI159468; /* seq[Mint] */

N_NIMCALL(NI, nextint_159016)(NI base) {
	NI result;
	result = 0;
	scanf("%lld", (&result));
	result -= base;
	return result;
}
N_NIMCALL(void, TMP35)(void* p, NI op) {
	TY159468* a;
	NI LOC1;
	a = (TY159468*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
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

N_NIMCALL(Mint159105, init_159579)(Mint159105 self, NI a) {
	Mint159105 result;
	memset((void*)(&result), 0, sizeof(result));
	result = initmint_159205(a);
	return result;
}

static N_INLINE(void, HEX2AHEX3D_159233)(NI* x, NI y) {
	(*x) = (NI)((*x) * y);
}

N_NIMCALL(void, HEX2AHEX3D_159633)(Mint159105* a, NI b) {
	Mint159105 LOC1;
	LOC1 = initmint_159205(b);
	HEX2AHEX3D_159233((&(*a).v), LOC1.v);
	(*a).v = ((NI) ((NI)((*a).v % ((NI) 1000000007))));
}

N_NIMCALL(Mint159105, HEX2A_159623)(Mint159105 a, NI b) {
	Mint159105 result;
	Mint159105 c;
{	memset((void*)(&result), 0, sizeof(result));
	c = a;
	HEX2AHEX3D_159633((&c), b);
	result = c;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, extgcd_159254)(NI a, NI b, NI* x, NI* y) {
	NI result;
	NI g;
{	result = 0;
	g = a;
	(*x) = ((NI) 1);
	(*y) = ((NI) 0);
	{
		if (!!((b == ((NI) 0)))) goto LA3;
		g = extgcd_159254(b, (NI)(a % b), y, x);
		(*y) -= (NI)((NI)(a / b) * (*x));
	}
	LA3: ;
	result = g;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, invmod_159272)(NI a, NI m) {
	NI result;
	NI x;
	NI y;
{	result = 0;
	x = 0;
	y = 0;
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = extgcd_159254(a, m, (&x), (&y));
		if (!(LOC3 == ((NI) 1))) goto LA4;
		result = (NI)((NI)(x + m) % m);
		goto BeforeRet;
	}
	goto LA1;
	LA4: ;
	{
		result = ((NI) 0);
		goto BeforeRet;
	}
	LA1: ;
	}BeforeRet: ;
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

N_NIMCALL(void, HEX2FHEX3D_159660)(Mint159105* a, Mint159105 b) {
	Mint159105 LOC1;
	NI LOC2;
	LOC1 = initmint_159125(b);
	LOC2 = 0;
	LOC2 = invmod_159272(LOC1.v, ((NI) 1000000007));
	HEX2AHEX3D_159233((&(*a).v), LOC2);
	(*a).v = ((NI) ((NI)((*a).v % ((NI) 1000000007))));
}

N_NIMCALL(void, HEX2AHEX3D_159225)(Mint159105* a, Mint159105 b) {
	Mint159105 LOC1;
	LOC1 = initmint_159125(b);
	HEX2AHEX3D_159233((&(*a).v), LOC1.v);
	(*a).v = ((NI) ((NI)((*a).v % ((NI) 1000000007))));
}

N_NIMCALL(Mint159105, HEX2A_159710)(Mint159105 a, Mint159105 b) {
	Mint159105 result;
	Mint159105 c;
{	memset((void*)(&result), 0, sizeof(result));
	c = a;
	HEX2AHEX3D_159225((&c), b);
	result = c;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, initcombination_159455)(NI sz, Combination159462* Result) {
	TY159468* facta;
	TY159468* result_159479;
	TY159468* rfacta;
	TY159468* result_159519;
	TY159468* inva;
	TY159468* result_159549;
	Mint159105 LOC13;
	Mint159105 LOC14;
	Mint159105 LOC15;
	Combination159462 LOC25;
{	result_159479 = newseq_159483(((NI) ((NI)(sz + ((NI) 1)))));
	{
		NI i_159481;
		NI HEX3Atmp_159732;
		NI res_159735;
		i_159481 = 0;
		HEX3Atmp_159732 = 0;
		HEX3Atmp_159732 = ((NI)(sz + ((NI) 1)) - 1);
		res_159735 = ((NI) 0);
		{
			while (1) {
				Mint159105 LOC4;
				if (!(res_159735 <= HEX3Atmp_159732)) goto LA3;
				i_159481 = res_159735;
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				result_159479->data[i_159481] = LOC4;
				res_159735 += ((NI) 1);
			} LA3: ;
		}
	}
	genericSeqAssign((&facta), result_159479, (&NTI159468));
	result_159519 = newseq_159483(((NI) ((NI)(sz + ((NI) 1)))));
	{
		NI i_159521;
		NI HEX3Atmp_159741;
		NI res_159744;
		i_159521 = 0;
		HEX3Atmp_159741 = 0;
		HEX3Atmp_159741 = ((NI)(sz + ((NI) 1)) - 1);
		res_159744 = ((NI) 0);
		{
			while (1) {
				Mint159105 LOC8;
				if (!(res_159744 <= HEX3Atmp_159741)) goto LA7;
				i_159521 = res_159744;
				memset((void*)(&LOC8), 0, sizeof(LOC8));
				result_159519->data[i_159521] = LOC8;
				res_159744 += ((NI) 1);
			} LA7: ;
		}
	}
	genericSeqAssign((&rfacta), result_159519, (&NTI159468));
	result_159549 = newseq_159483(((NI) ((NI)(sz + ((NI) 1)))));
	{
		NI i_159551;
		NI HEX3Atmp_159750;
		NI res_159753;
		i_159551 = 0;
		HEX3Atmp_159750 = 0;
		HEX3Atmp_159750 = ((NI)(sz + ((NI) 1)) - 1);
		res_159753 = ((NI) 0);
		{
			while (1) {
				Mint159105 LOC12;
				if (!(res_159753 <= HEX3Atmp_159750)) goto LA11;
				i_159551 = res_159753;
				memset((void*)(&LOC12), 0, sizeof(LOC12));
				result_159549->data[i_159551] = LOC12;
				res_159753 += ((NI) 1);
			} LA11: ;
		}
	}
	genericSeqAssign((&inva), result_159549, (&NTI159468));
	memset((void*)(&LOC13), 0, sizeof(LOC13));
	facta->data[((NI) 0)] = init_159579(LOC13, ((NI) 1));
	memset((void*)(&LOC14), 0, sizeof(LOC14));
	rfacta->data[sz] = init_159579(LOC14, ((NI) 1));
	memset((void*)(&LOC15), 0, sizeof(LOC15));
	inva->data[((NI) 0)] = init_159579(LOC15, ((NI) 1));
	{
		NI i_159621;
		NI res_159763;
		i_159621 = 0;
		res_159763 = ((NI) 1);
		{
			while (1) {
				if (!(res_159763 <= sz)) goto LA18;
				i_159621 = res_159763;
				facta->data[i_159621] = HEX2A_159623(facta->data[(NI)(i_159621 - ((NI) 1))], i_159621);
				res_159763 += ((NI) 1);
			} LA18: ;
		}
	}
	HEX2FHEX3D_159660((&rfacta->data[sz]), facta->data[sz]);
	{
		NI i_159689;
		NI HEX3Atmp_159768;
		NI res_159771;
		i_159689 = 0;
		HEX3Atmp_159768 = 0;
		HEX3Atmp_159768 = (NI)(sz - ((NI) 1));
		res_159771 = HEX3Atmp_159768;
		{
			while (1) {
				if (!(((NI) 0) <= res_159771)) goto LA21;
				i_159689 = res_159771;
				rfacta->data[i_159689] = HEX2A_159623(rfacta->data[(NI)(i_159689 + ((NI) 1))], (NI)(i_159689 + ((NI) 1)));
				res_159771 -= ((NI) 1);
			} LA21: ;
		}
	}
	{
		NI i_159708;
		NI res_159778;
		i_159708 = 0;
		res_159778 = ((NI) 1);
		{
			while (1) {
				if (!(res_159778 <= sz)) goto LA24;
				i_159708 = res_159778;
				inva->data[i_159708] = HEX2A_159710(rfacta->data[i_159708], facta->data[(NI)(i_159708 - ((NI) 1))]);
				res_159778 += ((NI) 1);
			} LA24: ;
		}
	}
	memset((void*)(&LOC25), 0, sizeof(LOC25));
	memset((void*)(&LOC25), 0, sizeof(LOC25));
	LOC25.sz = sz;
	genericSeqAssign((&LOC25.facta), facta, (&NTI159468));
	genericSeqAssign((&LOC25.rfacta), rfacta, (&NTI159468));
	genericSeqAssign((&LOC25.inva), inva, (&NTI159468));
	(*Result).sz = LOC25.sz;
	unsureAsgnRef((void**) (&(*Result).facta), LOC25.facta);
	unsureAsgnRef((void**) (&(*Result).rfacta), LOC25.rfacta);
	unsureAsgnRef((void**) (&(*Result).inva), LOC25.inva);
	goto BeforeRet;
	}BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, HEX24_159192)(Mint159105 a) {
	NimStringDesc* result;
{	result = 0;
	result = nimIntToStr(a.v);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Mint159105, fact_159798)(Combination159462* self, NI k) {
	Mint159105 result;
{	memset((void*)(&result), 0, sizeof(result));
	{
		while (1) {
			if (!((*self).sz < k)) goto LA2;
			initcombination_159455((NI)((*self).sz * ((NI) 2)), (&(*self)));
		} LA2: ;
	}
	result = (*self).facta->data[k];
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Mint159105, rfact_159818)(Combination159462* self, NI k) {
	Mint159105 result;
	memset((void*)(&result), 0, sizeof(result));
	{
		while (1) {
			if (!((*self).sz < k)) goto LA2;
			initcombination_159455((NI)((*self).sz * ((NI) 2)), (&(*self)));
		} LA2: ;
	}
	result = (*self).rfacta->data[k];
	return result;
}

N_NIMCALL(Mint159105, C_159785)(Combination159462* self, NI p, NI q) {
	Mint159105 result;
	Mint159105 LOC8;
	Mint159105 LOC9;
	Mint159105 LOC10;
	Mint159105 LOC11;
{	memset((void*)(&result), 0, sizeof(result));
	{
		NIM_BOOL LOC3;
		Mint159105 LOC7;
		LOC3 = 0;
		LOC3 = (q < ((NI) 0));
		if (LOC3) goto LA4;
		LOC3 = (p < q);
		LA4: ;
		if (!LOC3) goto LA5;
		memset((void*)(&LOC7), 0, sizeof(LOC7));
		result = LOC7;
		goto BeforeRet;
	}
	LA5: ;
	LOC8 = fact_159798(self, p);
	LOC9 = rfact_159818(self, q);
	LOC10 = HEX2A_159710(LOC8, LOC9);
	LOC11 = rfact_159818(self, (NI)(p - q));
	result = HEX2A_159710(LOC10, LOC11);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, main_159450)(void) {
	NI n;
	NI k;
	Combination159462 T;
	Mint159105 LOC1;
	NimStringDesc* LOC2;
	n = nextint_159016(((NI) 0));
	k = nextint_159016(((NI) 0));
	memset((void*)(&T), 0, sizeof(T));
	memset((void*)(&T), 0, sizeof(T));
	initcombination_159455(((NI) 1), (&T));
	LOC1 = C_159785((&T), (NI)(n - ((NI) 1)), (NI)(k - ((NI) 1)));
	LOC2 = 0;
	LOC2 = HEX24_159192(LOC1);
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
	aoj_dpl_5_f_testDatInit000();
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
	aoj_dpl_5_f_testInit000();
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

NIM_EXTERNC N_NOINLINE(void, aoj_dpl_5_f_testInit000)(void) {
	main_159450();
}

NIM_EXTERNC N_NOINLINE(void, aoj_dpl_5_f_testDatInit000)(void) {
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
NTI159468.size = sizeof(TY159468*);
NTI159468.kind = 24;
NTI159468.base = (&NTI159105);
NTI159468.flags = 2;
NTI159468.marker = TMP35;
}

