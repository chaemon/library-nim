/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   g++ -c  -w -w -fpermissive -O3 -fno-strict-aliasing  -I/home/chaemon/.choosenim/toolchains/nim-0.13.0/lib -o /home/chaemon/git/library-1/nim/math/verify/nimcache/aoj_alds_1_1_c_2_test.o /home/chaemon/git/library-1/nim/math/verify/nimcache/aoj_alds_1_1_c_2_test.cpp */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
struct Primedivisors159103;
struct TY159104;
struct TGenericSeq;
struct TNimType;
struct TNimNode;
struct Slice87882;
struct NimStringDesc;
struct  Primedivisors159103  {
TY159104* pdiv;
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
struct  Slice87882  {
NI a;
NI b;
};
struct  NimStringDesc  : public TGenericSeq {
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY159104 : TGenericSeq {
  NI data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, main_159209)(void);
N_NIMCALL(void, eratosthenes_159106)(NI n, Primedivisors159103* Result);
N_NIMCALL(TY159104*, newseq_159113)(NI len);
N_NIMCALL(void, TMP35)(void* p, NI op);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_83804, TNimType* mt);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, nextint_159016)(NI base);
static N_INLINE(Slice87882, HEX2EHEX2E_102424)(NI a, NI b);
N_NIMCALL(NIM_BOOL, isprime_159204)(Primedivisors159103 self, NI n);
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
NIM_EXTERNC N_NOINLINE(void, aoj_alds_1_1_c_2_testInit000)(void);
NIM_EXTERNC N_NOINLINE(void, aoj_alds_1_1_c_2_testDatInit000)(void);
extern TNimType NTI104; /* int */
TNimType NTI159104; /* seq[int] */
N_NIMCALL(void, TMP35)(void* p, NI op) {
	TY159104* a;
	NI LOC1;
	a = (TY159104*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->len; LOC1++) {
	}
}

N_NIMCALL(void, eratosthenes_159106)(NI n, Primedivisors159103* Result) {
	TY159104* pdiv;
	Primedivisors159103 LOC18;
{	pdiv = newseq_159113(((NI) ((NI)(n + ((NI) 1)))));
	{
		NI i_159158;
		i_159158 = 0;
		NI res_159184 = ((NI) 2);
		{
			while (1) {
				if (!(res_159184 <= n)) goto LA3;
				i_159158 = res_159184;
				pdiv->data[i_159158] = i_159158;
				res_159184 += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NI i_159168;
		i_159168 = 0;
		NI res_159199 = ((NI) 2);
		{
			while (1) {
				if (!(res_159199 <= n)) goto LA6;
				i_159168 = res_159199;
				{
					if (!(n < (NI)(i_159168 * i_159168))) goto LA9;
{					goto LA4;
}				}
				LA9: ;
				{
					if (!(pdiv->data[i_159168] == i_159168)) goto LA13;
{					{
						NI j_159180;
						NI HEX3Atmp_159190;
						j_159180 = 0;
						HEX3Atmp_159190 = 0;
						HEX3Atmp_159190 = (NI)(i_159168 * i_159168);
						NI res_159193 = HEX3Atmp_159190;
						{
							while (1) {
								if (!(res_159193 <= n)) goto LA17;
								j_159180 = res_159193;
								pdiv->data[j_159180] = i_159168;
								res_159193 += i_159168;
							} LA17: ;
						}
					}
}				}
				LA13: ;
				res_159199 += ((NI) 1);
			} LA6: ;
		}
	} LA4: ;
	memset((void*)(&LOC18), 0, sizeof(LOC18));
	memset((void*)(&LOC18), 0, sizeof(LOC18));
	genericSeqAssign((&LOC18.pdiv), pdiv, (&NTI159104));
	unsureAsgnRef((void**) (&(*Result).pdiv), LOC18.pdiv);
	goto BeforeRet;
	}BeforeRet: ;
}

N_NIMCALL(NI, nextint_159016)(NI base) {
	NI result;
	result = 0;
	scanf("%lld", (&result));
	result -= base;
	return result;
}

static N_INLINE(Slice87882, HEX2EHEX2E_102424)(NI a, NI b) {
	Slice87882 result;
	memset((void*)(&result), 0, sizeof(result));
	result.a = a;
	result.b = b;
	return result;
}

N_NIMCALL(NIM_BOOL, isprime_159204)(Primedivisors159103 self, NI n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = !((n == ((NI) 1)));
	if (!(LOC1)) goto LA2;
	LOC1 = (self.pdiv->data[n] == n);
	LA2: ;
	result = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, main_159209)(void) {
	Primedivisors159103 p;
	NimStringDesc* LOC9;
	memset((void*)(&p), 0, sizeof(p));
	memset((void*)(&p), 0, sizeof(p));
	eratosthenes_159106(((NI) 100000000), (&p));
	NI N = nextint_159016(((NI) 0));
	NI ret = ((NI) 0);
	{
		NI i_159240;
		Slice87882 HEX3Atmp_159254;
		i_159240 = 0;
		memset((void*)(&HEX3Atmp_159254), 0, sizeof(HEX3Atmp_159254));
		HEX3Atmp_159254 = HEX2EHEX2E_102424(((NI) 0), (N - 1));
		{
			NI x_159258;
			NI HEX3Atmp_159260;
			NI HEX3Atmp_159262;
			x_159258 = 0;
			HEX3Atmp_159260 = 0;
			HEX3Atmp_159262 = 0;
			HEX3Atmp_159260 = HEX3Atmp_159254.a;
			HEX3Atmp_159262 = HEX3Atmp_159254.b;
			NI res_159264 = HEX3Atmp_159260;
			{
				while (1) {
					if (!(res_159264 <= HEX3Atmp_159262)) goto LA4;
					x_159258 = res_159264;
					i_159240 = x_159258;
					NI x = nextint_159016(((NI) 0));
					{
						if (!isprime_159204(p, x)) goto LA7;
{						ret += ((NI) 1);
}					}
					LA7: ;
					res_159264 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	LOC9 = 0;
	LOC9 = nimIntToStr(ret);
	printf("%s\012", LOC9? (LOC9)->data:"nil");
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
	aoj_alds_1_1_c_2_testDatInit000();
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
	aoj_alds_1_1_c_2_testInit000();
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

NIM_EXTERNC N_NOINLINE(void, aoj_alds_1_1_c_2_testInit000)(void) {
	main_159209();
}

NIM_EXTERNC N_NOINLINE(void, aoj_alds_1_1_c_2_testDatInit000)(void) {
NTI159104.size = sizeof(TY159104*);
NTI159104.kind = 24;
NTI159104.base = (&NTI104);
NTI159104.flags = 2;
NTI159104.marker = TMP35;
}

