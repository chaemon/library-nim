/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/chaemon/.choosenim/toolchains/nim-0.13.0/lib -o /home/chaemon/git/library-1/nim/math/verify/nimcache/aoj_ntl_1_b_test.o /home/chaemon/git/library-1/nim/math/verify/nimcache/aoj_ntl_1_b_test.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
typedef struct TY159134 TY159134;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TY159134 {
NI Field0;
NI Field1;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, main_159118)(void);
N_NIMCALL(NI, nextint_159016)(NI base);
N_NIMCALL(NI, modpow_159124)(NI x_159128, NI n_159130, NI p);
static N_INLINE(void, HEX2AHEX3D_159139)(NI* x, NI y);
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
NIM_EXTERNC N_NOINLINE(void, aoj_ntl_1_b_testInit000)(void);
NIM_EXTERNC N_NOINLINE(void, aoj_ntl_1_b_testDatInit000)(void);

N_NIMCALL(NI, nextint_159016)(NI base) {
	NI result;
	result = 0;
	scanf("%lld", (&result));
	result -= base;
	return result;
}

static N_INLINE(void, HEX2AHEX3D_159139)(NI* x, NI y) {
	(*x) = (NI)((*x) * y);
}

N_NIMCALL(NI, modpow_159124)(NI x_159128, NI n_159130, NI p) {
	NI result;
	TY159134 LOC1;
	NI x;
	NI n;
	result = 0;
	LOC1.Field0 = x_159128;
	LOC1.Field1 = n_159130;
	x = LOC1.Field0;
	n = LOC1.Field1;
	result = ((NI) 1);
	{
		while (1) {
			if (!(((NI) 0) < n)) goto LA3;
			{
				if (!(((NI) 0) < ((NI) ((NI)(n & ((NI) 1)))))) goto LA6;
				HEX2AHEX3D_159139((&result), x);
				result = (NI)(result % p);
			}
			LA6: ;
			HEX2AHEX3D_159139((&x), x);
			x = (NI)(x % p);
			n = (NI)((NU64)(n) >> (NU64)(((NI) 1)));
		} LA3: ;
	}
	return result;
}

N_NIMCALL(void, main_159118)(void) {
	NI M;
	NI N;
	NI LOC1;
	NimStringDesc* LOC2;
	M = nextint_159016(((NI) 0));
	N = nextint_159016(((NI) 0));
	LOC1 = 0;
	LOC1 = modpow_159124(M, N, ((NI) 1000000007));
	LOC2 = 0;
	LOC2 = nimIntToStr(LOC1);
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
	aoj_ntl_1_b_testDatInit000();
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
	aoj_ntl_1_b_testInit000();
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

NIM_EXTERNC N_NOINLINE(void, aoj_ntl_1_b_testInit000)(void) {
	main_159118();
}

NIM_EXTERNC N_NOINLINE(void, aoj_ntl_1_b_testDatInit000)(void) {
}

