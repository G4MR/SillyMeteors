/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, i386, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -ID:\Nim\lib -o d:\documents\projects\nim\smport\nimcache\newfile.o d:\documents\projects\nim\smport\nimcache\newfile.c */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct emptysceneHEX3Aobjecttype90005 emptysceneHEX3Aobjecttype90005;
typedef struct myscene1HEX3Aobjecttype90025 myscene1HEX3Aobjecttype90025;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct myscene2HEX3Aobjecttype90046 myscene2HEX3Aobjecttype90046;
typedef struct TY90065 TY90065;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tcell44933 tcell44933;
typedef struct tcellseq44949 tcellseq44949;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44945 tcellset44945;
typedef struct tpagedesc44941 tpagedesc44941;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  emptysceneHEX3Aobjecttype90005  {
  TNimObject Sup;
};
struct  tcell44933  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44949  {
NI Len;
NI Cap;
tcell44933** D;
};
struct  tcellset44945  {
NI Counter;
NI Max;
tpagedesc44941* Head;
tpagedesc44941** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44949 Zct;
tcellseq44949 Decstack;
tcellset44945 Cycleroots;
tcellseq44949 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
struct  myscene1HEX3Aobjecttype90025  {
  emptysceneHEX3Aobjecttype90005 Sup;
};
struct  myscene2HEX3Aobjecttype90046  {
  emptysceneHEX3Aobjecttype90005 Sup;
};
typedef NI TY26420[16];
struct  tpagedesc44941  {
tpagedesc44941* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct TY90065 {
  TGenericSeq Sup;
  emptysceneHEX3Aobjecttype90005** data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, load_90010)(emptysceneHEX3Aobjecttype90005** self);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_18801)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, load_90030)(myscene1HEX3Aobjecttype90025** self);
N_NIMCALL(void, load_90051)(myscene2HEX3Aobjecttype90046** self);
N_NIMCALL(void, TMP132)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP133)(void* p, NI op);
N_NIMCALL(void, TMP134)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_50604)(tcell44933* c);
static N_INLINE(void, rtladdzct_50204)(tcell44933* c);
N_NOINLINE(void, addzct_48617)(tcellseq44949* s, tcell44933* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44933* c);
static N_INLINE(void, rtladdcycleroot_49429)(tcell44933* c);
N_NOINLINE(void, incl_45671)(tcellset44945* s, tcell44933* cell);
static N_INLINE(tcell44933*, usrtocell_48646)(void* usr);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(myscene1HEX3Aobjecttype90025**, new_90094)(void);
N_NIMCALL(void, TMP135)(void* p, NI op);
N_NIMCALL(void, TMP136)(void* p, NI op);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51025)(tcell44933* c);
N_NIMCALL(myscene2HEX3Aobjecttype90046**, new_90127)(void);
N_NIMCALL(void, TMP137)(void* p, NI op);
N_NIMCALL(void, TMP138)(void* p, NI op);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(NIM_BOOL, isObjWithCache)(TNimType* obj, TNimType* subclass, TNimType** cache);
N_NOINLINE(NIM_BOOL, isobjslowpath_22025)(TNimType* obj, TNimType* subclass, TNimType** cache);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* thestackbottom);
NIM_EXTERNC N_NOINLINE(void, systemInit)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit)(void);
NIM_EXTERNC N_NOINLINE(void, newfileInit)(void);
NIM_EXTERNC N_NOINLINE(void, newfileDatInit)(void);
STRING_LITERAL(TMP131, "My scene", 8);
extern TFrame* frameptr_16242;
TY90065* myscenes_90087;
extern TNimType NTI3211; /* RootObj */
TNimType NTI90005; /* EmptyScene:ObjectType */
TNimType NTI90004; /* EmptyScene */
TNimType NTI90012; /* ref EmptyScene */
TNimType NTI90065; /* seq[ref EmptyScene] */
extern tgcheap47016 gch_47044;
TNimType NTI90025; /* MyScene1:ObjectType */
TNimType NTI90024; /* MyScene1 */
TNimType NTI90032; /* ref MyScene1 */
myscene1HEX3Aobjecttype90025** scene1_90120;
TNimType NTI90046; /* MyScene2:ObjectType */
TNimType NTI90045; /* MyScene2 */
TNimType NTI90053; /* ref MyScene2 */
myscene2HEX3Aobjecttype90046** scene2_90153;
static TNimType* Nim_OfCheck_CACHE1[2];

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_16242 == NIM_NIL)) goto LA4;
		LOC1 = 0;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_16242).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_16242;
	frameptr_16242 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_18801();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_16242 = (*frameptr_16242).prev;
}

N_NIMCALL(void, load_90010)(emptysceneHEX3Aobjecttype90005** self) {
	nimfr("load", "newfile.nim")
	popFrame();
}

N_NIMCALL(void, load_90030)(myscene1HEX3Aobjecttype90025** self) {
	nimfr("load", "newfile.nim")
	nimln(9, "newfile.nim");
	nimln(9, "newfile.nim");
	printf("%s\015\012", (((NimStringDesc*) &TMP131))->data);
	popFrame();
}

N_NIMCALL(void, load_90051)(myscene2HEX3Aobjecttype90046** self) {
	nimfr("load", "newfile.nim")
	nimln(14, "newfile.nim");
	nimln(14, "newfile.nim");
	printf("%s\015\012", (((NimStringDesc*) &TMP131))->data);
	popFrame();
}
N_NIMCALL(void, TMP132)(void* p, NI op) {
	emptysceneHEX3Aobjecttype90005* a;
	a = (emptysceneHEX3Aobjecttype90005*)p;
}
N_NIMCALL(void, TMP133)(void* p, NI op) {
	emptysceneHEX3Aobjecttype90005** a;
	a = (emptysceneHEX3Aobjecttype90005**)p;
	nimGCvisit((void*)(*a), op);
}
N_NIMCALL(void, TMP134)(void* p, NI op) {
	TY90065* a;
	NI LOC1;
	a = (TY90065*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(void, rtladdzct_50204)(tcell44933* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_48617((&gch_47044.Zct), c);
	popFrame();
}

static N_INLINE(NIM_BOOL, canbecycleroot_48667)(tcell44933* c) {
	NIM_BOOL result;
	nimfr("canbeCycleRoot", "gc.nim")
	result = 0;
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	nimln(121, "gc.nim");
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_49429)(tcell44933* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(189, "gc.nim");
	{
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		nimln(189, "gc.nim");
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		nimln(139, "gc.nim");
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		nimln(191, "gc.nim");
		incl_45671((&gch_47044.Cycleroots), c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, decref_50604)(tcell44933* c) {
	nimfr("decRef", "gc.nim")
	nimln(206, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(207, "gc.nim");
		rtladdzct_50204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(208, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_48667(c);
		if (!LOC6) goto LA7;
		nimln(211, "gc.nim");
		rtladdcycleroot_49429(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(tcell44933*, usrtocell_48646)(void* usr) {
	tcell44933* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell44933*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44933))))));
	popFrame();
	return result;
}

static N_INLINE(void, nimGCunref)(void* p) {
	tcell44933* LOC1;
	nimfr("nimGCunref", "gc.nim")
	nimln(223, "gc.nim");
	nimln(223, "gc.nim");
	LOC1 = 0;
	LOC1 = usrtocell_48646(p);
	decref_50604(LOC1);
	popFrame();
}
N_NIMCALL(void, TMP135)(void* p, NI op) {
	myscene1HEX3Aobjecttype90025* a;
	a = (myscene1HEX3Aobjecttype90025*)p;
}
N_NIMCALL(void, TMP136)(void* p, NI op) {
	myscene1HEX3Aobjecttype90025** a;
	a = (myscene1HEX3Aobjecttype90025**)p;
	nimGCvisit((void*)(*a), op);
}

static N_INLINE(void, incref_51025)(tcell44933* c) {
	nimfr("incRef", "gc.nim")
	nimln(216, "gc.nim");
	nimln(216, "gc.nim");
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	nimln(219, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(219, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_48667(c);
		if (!LOC3) goto LA4;
		nimln(220, "gc.nim");
		rtladdcycleroot_49429(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(244, "gc.nim");
	{
		tcell44933* LOC5;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(244, "gc.nim");
		nimln(244, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_48646(src);
		incref_51025(LOC5);
	}
	LA3: ;
	nimln(245, "gc.nim");
	{
		tcell44933* LOC10;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(245, "gc.nim");
		nimln(245, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_48646((*dest));
		decref_50604(LOC10);
	}
	LA8: ;
	nimln(246, "gc.nim");
	(*dest) = src;
	popFrame();
}
N_NIMCALL(void, TMP137)(void* p, NI op) {
	myscene2HEX3Aobjecttype90046* a;
	a = (myscene2HEX3Aobjecttype90046*)p;
}
N_NIMCALL(void, TMP138)(void* p, NI op) {
	myscene2HEX3Aobjecttype90046** a;
	a = (myscene2HEX3Aobjecttype90046**)p;
	nimGCvisit((void*)(*a), op);
}

static N_INLINE(NIM_BOOL, isObjWithCache)(TNimType* obj, TNimType* subclass, TNimType** cache) {
	NIM_BOOL result;
	result = 0;
	{
		if (!(obj == subclass)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!((*obj).base == subclass)) goto LA7;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA7: ;
	{
		if (!(cache[(0)- 0] == obj)) goto LA11;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA11: ;
	{
		if (!(cache[(1)- 0] == obj)) goto LA15;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA15: ;
	result = isobjslowpath_22025(obj, subclass, cache);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, load_90018)(emptysceneHEX3Aobjecttype90005** self) {
	nimfr("load", "newfile.nim")
	nimln(3, "newfile.nim");
	{
		nimln(3, "newfile.nim");
		if (!(((*self)) && ((*(*self)).Sup.m_type == (&NTI90046)))) goto LA3;
		nimln(3, "newfile.nim");
		if ((*self)) chckObj((*(*self)).Sup.m_type, (&NTI90046));
		load_90051(((myscene2HEX3Aobjecttype90046**) (self)));
	}
	goto LA1;
	LA3: ;
	{
		nimln(3, "newfile.nim");
		if (!(((*self)) && ((*(*self)).Sup.m_type == (&NTI90025)))) goto LA6;
		nimln(3, "newfile.nim");
		if ((*self)) chckObj((*(*self)).Sup.m_type, (&NTI90025));
		load_90030(((myscene1HEX3Aobjecttype90025**) (self)));
	}
	goto LA1;
	LA6: ;
	{
		nimln(3, "newfile.nim");
		if (!(((*self)) && (isObjWithCache((*(*self)).Sup.m_type, (&NTI90005), Nim_OfCheck_CACHE1)))) goto LA9;
		nimln(3, "newfile.nim");
		load_90010(self);
	}
	goto LA1;
	LA9: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner() {
	systemInit();
	newfileDatInit();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	newfileInit();
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

NIM_EXTERNC N_NOINLINE(void, newfileInit)(void) {
	emptysceneHEX3Aobjecttype90005** LOC1;
	emptysceneHEX3Aobjecttype90005** LOC2;
	nimfr("newfile", "newfile.nim")
	nimln(16, "newfile.nim");
	if (myscenes_90087) nimGCunref(myscenes_90087);
	myscenes_90087 = (TY90065*) newSeqRC1((&NTI90065), 0);
	nimln(18, "newfile.nim");
	asgnRef((void**) (&scene1_90120), new_90094());
	nimln(19, "newfile.nim");
	asgnRef((void**) (&scene2_90153), new_90127());
	nimln(21, "newfile.nim");
	LOC1 = 0;
	LOC1 = &scene1_90120->Sup;
	myscenes_90087 = (TY90065*) incrSeq(&(myscenes_90087)->Sup, sizeof(emptysceneHEX3Aobjecttype90005**));
	asgnRef((void**) (&myscenes_90087->data[myscenes_90087->Sup.len-1]), LOC1);
	nimln(22, "newfile.nim");
	LOC2 = 0;
	LOC2 = &scene2_90153->Sup;
	myscenes_90087 = (TY90065*) incrSeq(&(myscenes_90087)->Sup, sizeof(emptysceneHEX3Aobjecttype90005**));
	asgnRef((void**) (&myscenes_90087->data[myscenes_90087->Sup.len-1]), LOC2);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, newfileDatInit)(void) {
static TNimNode TMP129[3];
NTI90005.size = sizeof(emptysceneHEX3Aobjecttype90005);
NTI90005.kind = 17;
NTI90005.base = (&NTI3211);
NTI90005.flags = 1;
TMP129[0].len = 0; TMP129[0].kind = 2;
NTI90005.node = &TMP129[0];
NTI90004.size = sizeof(emptysceneHEX3Aobjecttype90005*);
NTI90004.kind = 22;
NTI90004.base = (&NTI90005);
NTI90004.marker = TMP132;
NTI90012.size = sizeof(emptysceneHEX3Aobjecttype90005**);
NTI90012.kind = 22;
NTI90012.base = (&NTI90004);
NTI90012.marker = TMP133;
NTI90065.size = sizeof(TY90065*);
NTI90065.kind = 24;
NTI90065.base = (&NTI90012);
NTI90065.marker = TMP134;
NTI90025.size = sizeof(myscene1HEX3Aobjecttype90025);
NTI90025.kind = 17;
NTI90025.base = (&NTI90005);
NTI90025.flags = 1;
TMP129[1].len = 0; TMP129[1].kind = 2;
NTI90025.node = &TMP129[1];
NTI90024.size = sizeof(myscene1HEX3Aobjecttype90025*);
NTI90024.kind = 22;
NTI90024.base = (&NTI90025);
NTI90024.marker = TMP135;
NTI90032.size = sizeof(myscene1HEX3Aobjecttype90025**);
NTI90032.kind = 22;
NTI90032.base = (&NTI90024);
NTI90032.marker = TMP136;
NTI90046.size = sizeof(myscene2HEX3Aobjecttype90046);
NTI90046.kind = 17;
NTI90046.base = (&NTI90005);
NTI90046.flags = 1;
TMP129[2].len = 0; TMP129[2].kind = 2;
NTI90046.node = &TMP129[2];
NTI90045.size = sizeof(myscene2HEX3Aobjecttype90046*);
NTI90045.kind = 22;
NTI90045.base = (&NTI90046);
NTI90045.marker = TMP137;
NTI90053.size = sizeof(myscene2HEX3Aobjecttype90046**);
NTI90053.kind = 22;
NTI90053.base = (&NTI90045);
NTI90053.marker = TMP138;
}

