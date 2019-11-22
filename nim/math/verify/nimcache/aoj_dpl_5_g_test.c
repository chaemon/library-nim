/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/chaemon/.choosenim/toolchains/nim-0.13.0/lib -o /home/chaemon/git/library-1/nim/math/verify/nimcache/aoj_dpl_5_g_test.o /home/chaemon/git/library-1/nim/math/verify/nimcache/aoj_dpl_5_g_test.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Mint159105 Mint159105;
typedef struct TY159534 TY159534;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Combination159555 Combination159555;
typedef struct TY159201 TY159201;
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
struct  Combination159555  {
NI sz;
TY159534* facta;
TY159534* rfacta;
TY159534* inva;
};
struct TY159201 {
Mint159105 Field0;
NI Field1;
};
struct TY159534 {
  TGenericSeq Sup;
  Mint159105 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, main_159493)(void);
N_NIMCALL(NI, nextint_159016)(NI base);
N_NIMCALL(NimStringDesc*, HEX24_159192)(Mint159105 a);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(Mint159105, bellnumber_159498)(NI n, NI k_159504);
N_NIMCALL(Mint159105, init_159507)(Mint159105 self, NI a);
N_NIMCALL(Mint159105, initmint_159205)(NI a_159209);
N_NIMCALL(TY159534*, newseq_159529)(NI len);
N_NIMCALL(void, initcombination_159548)(NI sz, Combination159555* Result);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_84004, TNimType* mt);
N_NIMCALL(Mint159105, HEX2A_159699)(Mint159105 a, NI b);
N_NIMCALL(void, HEX2AHEX3D_159709)(Mint159105* a, NI b);
static N_INLINE(void, HEX2AHEX3D_159233)(NI* x, NI y);
N_NIMCALL(void, HEX2FHEX3D_159736)(Mint159105* a, Mint159105 b);
N_NIMCALL(NI, invmod_159272)(NI a, NI m);
N_NIMCALL(NI, extgcd_159254)(NI a, NI b, NI* x, NI* y);
N_NIMCALL(Mint159105, initmint_159125)(Mint159105 a);
N_NIMCALL(Mint159105, HEX2A_159786)(Mint159105 a, Mint159105 b);
N_NIMCALL(void, HEX2AHEX3D_159225)(Mint159105* a, Mint159105 b);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(Mint159105, HEX2D_159902)(Mint159105 a, Mint159105 b);
N_NIMCALL(void, HEX2DHEX3D_159912)(Mint159105* a, Mint159105 b);
N_NIMCALL(Mint159105, rfact_159881)(Combination159555* self, NI k);
N_NIMCALL(Mint159105, HEX2B_159951)(Mint159105 a, Mint159105 b);
N_NIMCALL(void, HEX2BHEX3D_159961)(Mint159105* a, Mint159105 b);
N_NIMCALL(Mint159105, pow_159196)(Mint159105 x_159198, NI n_159199);
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
NIM_EXTERNC N_NOINLINE(void, aoj_dpl_5_g_testInit000)(void);
NIM_EXTERNC N_NOINLINE(void, aoj_dpl_5_g_testDatInit000)(void);
TNimType NTI159105; /* Mint */
extern TNimType NTI104; /* int */
extern TNimType NTI159534; /* seq[Mint] */

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

N_NIMCALL(Mint159105, init_159507)(Mint159105 self, NI a) {
	Mint159105 result;
	memset((void*)(&result), 0, sizeof(result));
	result = initmint_159205(a);
	return result;
}

static N_INLINE(void, HEX2AHEX3D_159233)(NI* x, NI y) {
	(*x) = (NI)((*x) * y);
}

N_NIMCALL(void, HEX2AHEX3D_159709)(Mint159105* a, NI b) {
	Mint159105 LOC1;
	LOC1 = initmint_159205(b);
	HEX2AHEX3D_159233((&(*a).v), LOC1.v);
	(*a).v = ((NI) ((NI)((*a).v % ((NI) 1000000007))));
}

N_NIMCALL(Mint159105, HEX2A_159699)(Mint159105 a, NI b) {
	Mint159105 result;
	Mint159105 c;
{	memset((void*)(&result), 0, sizeof(result));
	c = a;
	HEX2AHEX3D_159709((&c), b);
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

N_NIMCALL(void, HEX2FHEX3D_159736)(Mint159105* a, Mint159105 b) {
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

N_NIMCALL(Mint159105, HEX2A_159786)(Mint159105 a, Mint159105 b) {
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

N_NIMCALL(void, initcombination_159548)(NI sz, Combination159555* Result) {
	TY159534* facta;
	TY159534* result_159572;
	TY159534* rfacta;
	TY159534* result_159602;
	TY159534* inva;
	TY159534* result_159632;
	Mint159105 LOC13;
	Mint159105 LOC14;
	Mint159105 LOC15;
	Combination159555 LOC25;
{	result_159572 = newseq_159529(((NI) ((NI)(sz + ((NI) 1)))));
	{
		NI i_159574;
		NI HEX3Atmp_159808;
		NI res_159811;
		i_159574 = 0;
		HEX3Atmp_159808 = 0;
		HEX3Atmp_159808 = ((NI)(sz + ((NI) 1)) - 1);
		res_159811 = ((NI) 0);
		{
			while (1) {
				Mint159105 LOC4;
				if (!(res_159811 <= HEX3Atmp_159808)) goto LA3;
				i_159574 = res_159811;
				memset((void*)(&LOC4), 0, sizeof(LOC4));
				result_159572->data[i_159574] = LOC4;
				res_159811 += ((NI) 1);
			} LA3: ;
		}
	}
	genericSeqAssign((&facta), result_159572, (&NTI159534));
	result_159602 = newseq_159529(((NI) ((NI)(sz + ((NI) 1)))));
	{
		NI i_159604;
		NI HEX3Atmp_159817;
		NI res_159820;
		i_159604 = 0;
		HEX3Atmp_159817 = 0;
		HEX3Atmp_159817 = ((NI)(sz + ((NI) 1)) - 1);
		res_159820 = ((NI) 0);
		{
			while (1) {
				Mint159105 LOC8;
				if (!(res_159820 <= HEX3Atmp_159817)) goto LA7;
				i_159604 = res_159820;
				memset((void*)(&LOC8), 0, sizeof(LOC8));
				result_159602->data[i_159604] = LOC8;
				res_159820 += ((NI) 1);
			} LA7: ;
		}
	}
	genericSeqAssign((&rfacta), result_159602, (&NTI159534));
	result_159632 = newseq_159529(((NI) ((NI)(sz + ((NI) 1)))));
	{
		NI i_159634;
		NI HEX3Atmp_159826;
		NI res_159829;
		i_159634 = 0;
		HEX3Atmp_159826 = 0;
		HEX3Atmp_159826 = ((NI)(sz + ((NI) 1)) - 1);
		res_159829 = ((NI) 0);
		{
			while (1) {
				Mint159105 LOC12;
				if (!(res_159829 <= HEX3Atmp_159826)) goto LA11;
				i_159634 = res_159829;
				memset((void*)(&LOC12), 0, sizeof(LOC12));
				result_159632->data[i_159634] = LOC12;
				res_159829 += ((NI) 1);
			} LA11: ;
		}
	}
	genericSeqAssign((&inva), result_159632, (&NTI159534));
	memset((void*)(&LOC13), 0, sizeof(LOC13));
	facta->data[((NI) 0)] = init_159507(LOC13, ((NI) 1));
	memset((void*)(&LOC14), 0, sizeof(LOC14));
	rfacta->data[sz] = init_159507(LOC14, ((NI) 1));
	memset((void*)(&LOC15), 0, sizeof(LOC15));
	inva->data[((NI) 0)] = init_159507(LOC15, ((NI) 1));
	{
		NI i_159697;
		NI res_159839;
		i_159697 = 0;
		res_159839 = ((NI) 1);
		{
			while (1) {
				if (!(res_159839 <= sz)) goto LA18;
				i_159697 = res_159839;
				facta->data[i_159697] = HEX2A_159699(facta->data[(NI)(i_159697 - ((NI) 1))], i_159697);
				res_159839 += ((NI) 1);
			} LA18: ;
		}
	}
	HEX2FHEX3D_159736((&rfacta->data[sz]), facta->data[sz]);
	{
		NI i_159765;
		NI HEX3Atmp_159844;
		NI res_159847;
		i_159765 = 0;
		HEX3Atmp_159844 = 0;
		HEX3Atmp_159844 = (NI)(sz - ((NI) 1));
		res_159847 = HEX3Atmp_159844;
		{
			while (1) {
				if (!(((NI) 0) <= res_159847)) goto LA21;
				i_159765 = res_159847;
				rfacta->data[i_159765] = HEX2A_159699(rfacta->data[(NI)(i_159765 + ((NI) 1))], (NI)(i_159765 + ((NI) 1)));
				res_159847 -= ((NI) 1);
			} LA21: ;
		}
	}
	{
		NI i_159784;
		NI res_159854;
		i_159784 = 0;
		res_159854 = ((NI) 1);
		{
			while (1) {
				if (!(res_159854 <= sz)) goto LA24;
				i_159784 = res_159854;
				inva->data[i_159784] = HEX2A_159786(rfacta->data[i_159784], facta->data[(NI)(i_159784 - ((NI) 1))]);
				res_159854 += ((NI) 1);
			} LA24: ;
		}
	}
	memset((void*)(&LOC25), 0, sizeof(LOC25));
	memset((void*)(&LOC25), 0, sizeof(LOC25));
	LOC25.sz = sz;
	genericSeqAssign((&LOC25.facta), facta, (&NTI159534));
	genericSeqAssign((&LOC25.rfacta), rfacta, (&NTI159534));
	genericSeqAssign((&LOC25.inva), inva, (&NTI159534));
	(*Result).sz = LOC25.sz;
	unsureAsgnRef((void**) (&(*Result).facta), LOC25.facta);
	unsureAsgnRef((void**) (&(*Result).rfacta), LOC25.rfacta);
	unsureAsgnRef((void**) (&(*Result).inva), LOC25.inva);
	goto BeforeRet;
	}BeforeRet: ;
}

N_NIMCALL(void, HEX2DHEX3D_159912)(Mint159105* a, Mint159105 b) {
	Mint159105 LOC1;
	LOC1 = initmint_159125(b);
	(*a).v -= LOC1.v;
	{
		if (!((*a).v < ((NI) 0))) goto LA4;
		(*a).v += ((NI) 1000000007);
	}
	LA4: ;
}

N_NIMCALL(Mint159105, HEX2D_159902)(Mint159105 a, Mint159105 b) {
	Mint159105 result;
	Mint159105 c;
{	memset((void*)(&result), 0, sizeof(result));
	c = a;
	HEX2DHEX3D_159912((&c), b);
	result = c;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Mint159105, rfact_159881)(Combination159555* self, NI k) {
	Mint159105 result;
	memset((void*)(&result), 0, sizeof(result));
	{
		while (1) {
			if (!((*self).sz < k)) goto LA2;
			initcombination_159548((NI)((*self).sz * ((NI) 2)), (&(*self)));
		} LA2: ;
	}
	result = (*self).rfacta->data[k];
	return result;
}

N_NIMCALL(void, HEX2BHEX3D_159961)(Mint159105* a, Mint159105 b) {
	Mint159105 LOC1;
	LOC1 = initmint_159125(b);
	(*a).v += LOC1.v;
	{
		if (!(((NI) 1000000007) <= (*a).v)) goto LA4;
		(*a).v -= ((NI) 1000000007);
	}
	LA4: ;
}

N_NIMCALL(Mint159105, HEX2B_159951)(Mint159105 a, Mint159105 b) {
	Mint159105 result;
	Mint159105 c;
{	memset((void*)(&result), 0, sizeof(result));
	c = a;
	HEX2BHEX3D_159961((&c), b);
	result = c;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Mint159105, pow_159196)(Mint159105 x_159198, NI n_159199) {
	Mint159105 result;
	TY159201 LOC1;
	Mint159105 x;
	NI n;
	memset((void*)(&result), 0, sizeof(result));
	LOC1.Field0 = x_159198;
	LOC1.Field1 = n_159199;
	x = LOC1.Field0;
	n = LOC1.Field1;
	result = initmint_159205(((NI) 1));
	{
		while (1) {
			if (!(((NI) 0) < n)) goto LA3;
			{
				if (!(((NI) 0) < ((NI) ((NI)(n & ((NI) 1)))))) goto LA6;
				HEX2AHEX3D_159225((&result), x);
			}
			LA6: ;
			HEX2AHEX3D_159225((&x), x);
			n = (NI)((NU64)(n) >> (NU64)(((NI) 1)));
		} LA3: ;
	}
	return result;
}

N_NIMCALL(Mint159105, bellnumber_159498)(NI n, NI k_159504) {
	Mint159105 result;
	NI k;
	Mint159105 ret;
	Mint159105 LOC6;
	TY159534* pref;
	Combination159555 uku;
	Mint159105 LOC7;
{	memset((void*)(&result), 0, sizeof(result));
	{
		Mint159105 LOC5;
		if (!(n == ((NI) 0))) goto LA3;
		memset((void*)(&LOC5), 0, sizeof(LOC5));
		result = init_159507(LOC5, ((NI) 1));
		goto BeforeRet;
	}
	LA3: ;
	k = ((k_159504 <= n) ? k_159504 : n);
	memset((void*)(&LOC6), 0, sizeof(LOC6));
	ret = LOC6;
	pref = newseq_159529(((NI) ((NI)(k + ((NI) 1)))));
	memset((void*)(&uku), 0, sizeof(uku));
	memset((void*)(&uku), 0, sizeof(uku));
	initcombination_159548(k, (&uku));
	memset((void*)(&LOC7), 0, sizeof(LOC7));
	pref->data[((NI) 0)] = init_159507(LOC7, ((NI) 1));
	{
		NI i_159878;
		NI res_160051;
		i_159878 = 0;
		res_160051 = ((NI) 1);
		{
			while (1) {
				if (!(res_160051 <= k)) goto LA10;
				i_159878 = res_160051;
				{
					Mint159105 LOC15;
					if (!(((NI) 0) < ((NI) ((NI)(i_159878 & ((NI) 1)))))) goto LA13;
					LOC15 = rfact_159881((&uku), i_159878);
					pref->data[i_159878] = HEX2D_159902(pref->data[(NI)(i_159878 - ((NI) 1))], LOC15);
				}
				goto LA11;
				LA13: ;
				{
					Mint159105 LOC17;
					LOC17 = rfact_159881((&uku), i_159878);
					pref->data[i_159878] = HEX2B_159951(pref->data[(NI)(i_159878 - ((NI) 1))], LOC17);
				}
				LA11: ;
				res_160051 += ((NI) 1);
			} LA10: ;
		}
	}
	{
		NI i_159996;
		NI res_160059;
		i_159996 = 0;
		res_160059 = ((NI) 1);
		{
			while (1) {
				Mint159105 LOC21;
				Mint159105 LOC22;
				Mint159105 LOC23;
				Mint159105 LOC24;
				Mint159105 LOC25;
				Mint159105 LOC26;
				if (!(res_160059 <= k)) goto LA20;
				i_159996 = res_160059;
				memset((void*)(&LOC21), 0, sizeof(LOC21));
				LOC22 = init_159507(LOC21, i_159996);
				LOC23 = pow_159196(LOC22, n);
				LOC24 = rfact_159881((&uku), i_159996);
				LOC25 = HEX2A_159786(LOC23, LOC24);
				LOC26 = HEX2A_159786(LOC25, pref->data[(NI)(k - i_159996)]);
				HEX2BHEX3D_159961((&ret), LOC26);
				res_160059 += ((NI) 1);
			} LA20: ;
		}
	}
	result = ret;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, main_159493)(void) {
	NI N;
	NI K;
	Mint159105 LOC1;
	NimStringDesc* LOC2;
	N = nextint_159016(((NI) 0));
	K = nextint_159016(((NI) 0));
	LOC1 = bellnumber_159498(N, K);
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
	aoj_dpl_5_g_testDatInit000();
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
	aoj_dpl_5_g_testInit000();
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

NIM_EXTERNC N_NOINLINE(void, aoj_dpl_5_g_testInit000)(void) {
	main_159493();
}

NIM_EXTERNC N_NOINLINE(void, aoj_dpl_5_g_testDatInit000)(void) {
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
}
