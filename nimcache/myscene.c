/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, i386, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -ID:\Nim\lib -o d:\documents\projects\nim\smport\nimcache\myscene.o d:\documents\projects\nim\smport\nimcache\myscene.c */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct mysceneHEX3Aobjecttype121011 mysceneHEX3Aobjecttype121011;
typedef struct sceneHEX3Aobjecttype120016 sceneHEX3Aobjecttype120016;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct rendererptrHEX3Aobjecttype106582 rendererptrHEX3Aobjecttype106582;
typedef struct tcell45146 tcell45146;
typedef struct tcellseq45162 tcellseq45162;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset45158 tcellset45158;
typedef struct tpagedesc45154 tpagedesc45154;
typedef struct tmemregion27410 tmemregion27410;
typedef struct tsmallchunk26640 tsmallchunk26640;
typedef struct tllchunk27404 tllchunk27404;
typedef struct tbigchunk26642 tbigchunk26642;
typedef struct tintset26617 tintset26617;
typedef struct ttrunk26613 ttrunk26613;
typedef struct tavlnode27408 tavlnode27408;
typedef struct tgcstat47014 tgcstat47014;
typedef struct event106171 event106171;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  sceneHEX3Aobjecttype120016  {
  TNimObject Sup;
};
struct  mysceneHEX3Aobjecttype121011  {
  sceneHEX3Aobjecttype120016 Sup;
NimStringDesc* Customvar;
};
struct  tcell45146  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45162  {
NI Len;
NI Cap;
tcell45146** D;
};
struct  tcellset45158  {
NI Counter;
NI Max;
tpagedesc45154* Head;
tpagedesc45154** Data;
};
typedef tsmallchunk26640* TY27422[512];
typedef ttrunk26613* ttrunkbuckets26615[256];
struct  tintset26617  {
ttrunkbuckets26615 Data;
};
struct  tmemregion27410  {
NI Minlargeobj;
NI Maxlargeobj;
TY27422 Freesmallchunks;
tllchunk27404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26642* Freechunkslist;
tintset26617 Chunkstarts;
tavlnode27408* Root;
tavlnode27408* Deleted;
tavlnode27408* Last;
tavlnode27408* Freeavlnodes;
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
tcellseq45162 Zct;
tcellseq45162 Decstack;
tcellset45158 Cycleroots;
tcellseq45162 Tempstack;
NI Recgclock;
tmemregion27410 Region;
tgcstat47014 Stat;
};
typedef NU8 TY106356[52];
struct  event106171  {
NI32 Kind;
TY106356 Padding;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  rendererptrHEX3Aobjecttype106582  {
char dummy;
};
typedef NI TY26620[16];
struct  tpagedesc45154  {
tpagedesc45154* Next;
NI Key;
TY26620 Bits;
};
struct  tbasechunk26638  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26640  {
  tbasechunk26638 Sup;
tsmallchunk26640* Next;
tsmallchunk26640* Prev;
tfreecell26630* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27404  {
NI Size;
NI Acc;
tllchunk27404* Next;
};
struct  tbigchunk26642  {
  tbasechunk26638 Sup;
tbigchunk26642* Next;
tbigchunk26642* Prev;
NI Align;
NF Data;
};
struct  ttrunk26613  {
ttrunk26613* Next;
NI Key;
TY26620 Bits;
};
typedef tavlnode27408* TY27414[2];
struct  tavlnode27408  {
TY27414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26630  {
tfreecell26630* Next;
NI Zerofield;
};
N_NIMCALL(NimStringDesc*, cust_121017)(mysceneHEX3Aobjecttype121011* self);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_19001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, load_121032)(mysceneHEX3Aobjecttype121011* self, rendererptrHEX3Aobjecttype106582* render);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45146*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell45146* c);
N_NOINLINE(void, addzct_48617)(tcellseq45162* s, tcell45146* c);
N_NIMCALL(NimStringDesc*, cust_121025)(mysceneHEX3Aobjecttype121011* self);
N_NIMCALL(void, events_121046)(mysceneHEX3Aobjecttype121011* self, event106171* e);
N_NIMCALL(void, update_121056)(mysceneHEX3Aobjecttype121011* self, NF dt);
N_NIMCALL(void, draw_121066)(mysceneHEX3Aobjecttype121011* self, rendererptrHEX3Aobjecttype106582* render);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP169)(void* p, NI op);
STRING_LITERAL(TMP151, "testing my custom var", 21);
extern TFrame* frameptr_16242;
extern tgcheap47016 gch_47044;
extern TNimType NTI120016; /* Scene:ObjectType */
TNimType NTI121011; /* MyScene:ObjectType */
extern TNimType NTI149; /* string */
TNimType NTI121010; /* MyScene */

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
		stackoverflow_19001();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_16242 = (*frameptr_16242).prev;
}

N_NIMCALL(NimStringDesc*, cust_121017)(mysceneHEX3Aobjecttype121011* self) {
	NimStringDesc* result;
	nimfr("cust", "myscene.nim")
	result = 0;
	nimln(7, "myscene.nim");
	result = copyString((*self).Customvar);
	popFrame();
	return result;
}

static N_INLINE(tcell45146*, usrtocell_48646)(void* usr) {
	tcell45146* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell45146*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45146))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell45146* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_48617((&gch_47044.Zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45146* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(233, "gc.nim");
	c = usrtocell_48646(p);
	nimln(235, "gc.nim");
	{
		nimln(167, "gc.nim");
		(*c).Refcount -= 8;
		nimln(168, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(236, "gc.nim");
		rtladdzct_50204(c);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(void, load_121032)(mysceneHEX3Aobjecttype121011* self, rendererptrHEX3Aobjecttype106582* render) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	nimfr("load", "myscene.nim")
	nimln(11, "myscene.nim");
	LOC1 = 0;
	LOC1 = (*self).Customvar; (*self).Customvar = copyStringRC1(((NimStringDesc*) &TMP151));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(12, "myscene.nim");
	nimln(12, "myscene.nim");
	nimln(12, "myscene.nim");
	LOC2 = 0;
	LOC2 = cust_121025(self);
	printf("%s\015\012", LOC2? (LOC2)->data:"nil");
	popFrame();
}

N_NIMCALL(void, events_121046)(mysceneHEX3Aobjecttype121011* self, event106171* e) {
	nimfr("events", "myscene.nim")
	popFrame();
}

N_NIMCALL(void, update_121056)(mysceneHEX3Aobjecttype121011* self, NF dt) {
	nimfr("update", "myscene.nim")
	popFrame();
}

N_NIMCALL(void, draw_121066)(mysceneHEX3Aobjecttype121011* self, rendererptrHEX3Aobjecttype106582* render) {
	nimfr("draw", "myscene.nim")
	popFrame();
}
N_NIMCALL(void, TMP169)(void* p, NI op) {
	mysceneHEX3Aobjecttype121011* a;
	a = (mysceneHEX3Aobjecttype121011*)p;
	nimGCvisit((void*)(*a).Customvar, op);
}
NIM_EXTERNC N_NOINLINE(void, HEX00_mysceneInit)(void) {
	nimfr("myscene", "myscene.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_mysceneDatInit)(void) {
static TNimNode TMP149[1];
NTI121011.size = sizeof(mysceneHEX3Aobjecttype121011);
NTI121011.kind = 17;
NTI121011.base = (&NTI120016);
TMP149[0].kind = 1;
TMP149[0].offset = offsetof(mysceneHEX3Aobjecttype121011, Customvar);
TMP149[0].typ = (&NTI149);
TMP149[0].name = "customvar";
NTI121011.node = &TMP149[0];
NTI121010.size = sizeof(mysceneHEX3Aobjecttype121011*);
NTI121010.kind = 22;
NTI121010.base = (&NTI121011);
NTI121010.marker = TMP169;
}

