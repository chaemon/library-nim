/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/chaemon/.choosenim/toolchains/nim-0.13.0/lib -o /home/chaemon/git/library-1/nim/math/verify/nimcache/aoj_ntl_1_b_2_test.o /home/chaemon/git/library-1/nim/math/verify/nimcache/aoj_ntl_1_b_2_test.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Mint159105 Mint159105;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY159201 TY159201;
struct  Mint159105  {
NI v;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY159201 {
Mint159105 Field0;
NI Field1;
};
N_NIMCALL(void, main_159318)(void);
N_NIMCALL(Mint159105, initmint_159205)(NI a_159209);
N_NIMCALL(NI, nextint_159016)(NI base);
N_NIMCALL(NimStringDesc*, HEX24_159192)(Mint159105 a);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(Mint159105, pow_159196)(Mint159105 x_159198, NI n_159199);
N_NIMCALL(void, HEX2AHEX3D_159225)(Mint159105* a, Mint159105 b);
static N_INLINE(void, HEX2AHEX3D_159233)(NI* x, NI y);
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
NIM_EXTERNC N_NOINLINE(void, aoj_ntl_1_b_2_testInit000)(void);
NIM_EXTERNC N_NOINLINE(void, aoj_ntl_1_b_2_testDatInit000)(void);

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

static N_INLINE(void, HEX2AHEX3D_159233)(NI* x, NI y) {
	(*x) = (NI)((*x) * y);
}

N_NIMCALL(Mint159105, initmint_159125)(Mint159105 a) {
	Mint159105 result;
{	memset((void*)(&result), 0, sizeof(result));
	result = a;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, HEX2AHEX3D_159225)(Mint159105* a, Mint159105 b) {
	Mint159105 LOC1;
	LOC1 = initmint_159125(b);
	HEX2AHEX3D_159233((&(*a).v), LOC1.v);
	(*a).v = ((NI) ((NI)((*a).v % ((NI) 1000000007))));
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

N_NIMCALL(void, main_159318)(void) {
	Mint159105 M;
	NI LOC1;
	NI N;
	Mint159105 LOC2;
	NimStringDesc* LOC3;
	LOC1 = 0;
	LOC1 = nextint_159016(((NI) 0));
	M = initmint_159205(LOC1);
	N = nextint_159016(((NI) 0));
	LOC2 = pow_159196(M, N);
	LOC3 = 0;
	LOC3 = HEX24_159192(LOC2);
	printf("%s\012", LOC3? (LOC3)->data:"nil");
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
	aoj_ntl_1_b_2_testDatInit000();
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
	aoj_ntl_1_b_2_testInit000();
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

NIM_EXTERNC N_NOINLINE(void, aoj_ntl_1_b_2_testInit000)(void) {
	main_159318();
}

NIM_EXTERNC N_NOINLINE(void, aoj_ntl_1_b_2_testDatInit000)(void) {
}
