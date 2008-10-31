/* generated by Id 1.1 at ,$ */
/* with the command: -I../stage1/ -I../st80 -c CompilerOptions.st -o ../stage2/CompilerOptions.o.c */

#include <id/id.h>

static struct __libid *_libid= 0;

#ifdef ID_DEBUG
# define _enter(info) void *__id_debug= _libid->enter(info)
# define _line(lno)			_libid->line(lno)
# define _leave()			_libid->leave(__id_debug)
# define _backtrace()			_libid->backtrace()
#else
# define _enter(info)			(void)info
# define _line(lno)
# define _leave()
# define _backtrace()			"(no debugging information)\n"
#endif
#define _return			_leave(); return

#define _sendv(MSG, N, RCV, ARG...) ({					\
  struct __send _s= { (MSG), (N), (RCV) };				\
  ((_imp_t)(_libid->bindv(&_s)))(&_s, _s.receiver, _s.receiver, ##ARG);	\
})

#define _superv(TYP, MSG, N, RCV, ARG...) ({	\
  struct __send _s= { (MSG), (N), (TYP) };	\
  _imp_t _imp= _libid->bindv(&_s);		\
  _s.receiver= (RCV);				\
  _imp(&_s, _s.receiver, _s.receiver, ##ARG);	\
})

static oop s_value_5f_= 0;
static oop s__5fimport_= 0;
static oop s_initialize= 0;
static oop s_macroFlag= 0;
static oop s__5fslots= 0;
static oop s_ifTrue_= 0;
static oop s__2c= 0;
static oop s_debugging= 0;
static oop s_macroFlag_= 0;
static oop s_taggedFlag= 0;
static oop s__3d= 0;
static oop s_outputType= 0;
static oop s_size_5f_value_5f_= 0;
static oop s__5fdebugName= 0;
static oop s_searchPaths= 0;
static oop s_new= 0;
static oop s_cacheLevel_= 0;
static oop s_outputType_= 0;
static oop s_specialFlag_= 0;
static oop s_specialFlag= 0;
static oop s_taggedFlag_= 0;
static oop s_verboseFlag_= 0;
static oop s_verboseFlag= 0;
static oop s_executionModel_= 0;
static oop s_executionModel= 0;
static oop s_debugging_= 0;
static oop s_error_= 0;
static oop s__5fsizeof= 0;
static oop s_cacheLevel= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "value_:", &s_value_5f_ },
  { "_import:", &s__5fimport_ },
  { "initialize", &s_initialize },
  { "macroFlag", &s_macroFlag },
  { "_slots", &s__5fslots },
  { "ifTrue:", &s_ifTrue_ },
  { ",", &s__2c },
  { "debugging", &s_debugging },
  { "macroFlag:", &s_macroFlag_ },
  { "taggedFlag", &s_taggedFlag },
  { "=", &s__3d },
  { "outputType", &s_outputType },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "_debugName", &s__5fdebugName },
  { "searchPaths", &s_searchPaths },
  { "new", &s_new },
  { "cacheLevel:", &s_cacheLevel_ },
  { "outputType:", &s_outputType_ },
  { "specialFlag:", &s_specialFlag_ },
  { "specialFlag", &s_specialFlag },
  { "taggedFlag:", &s_taggedFlag_ },
  { "verboseFlag:", &s_verboseFlag_ },
  { "verboseFlag", &s_verboseFlag },
  { "executionModel:", &s_executionModel_ },
  { "executionModel", &s_executionModel },
  { "debugging:", &s_debugging_ },
  { "error:", &s_error_ },
  { "_sizeof", &s__5fsizeof },
  { "cacheLevel", &s_cacheLevel },
  { 0, 0 }
};
struct t__object {
  struct _vtable *_vtable[0];
};
struct t__selector {
  struct _vtable *_vtable[0];
  oop v__size;
  oop v__elements;
};
struct t__assoc {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t__closure {
  struct _vtable *_vtable[0];
  oop v__method;
  oop v_data;
};
struct t__vector {
  struct _vtable *_vtable[0];
  oop v__size;
};
struct t__vtable {
  struct _vtable *_vtable[0];
  oop v__tally;
  oop v_bindings;
  oop v_delegate;
};
struct t_Object {
  struct _vtable *_vtable[0];
};
struct t_UndefinedObject {
  struct _vtable *_vtable[0];
};
struct t_StaticBlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
};
struct t_BlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
  oop v_outer;
  oop v_state;
  oop v__nlr;
};
struct t_Magnitude {
  struct _vtable *_vtable[0];
};
struct t_Character {
  struct _vtable *_vtable[0];
  oop v_value;
};
struct t_Number {
  struct _vtable *_vtable[0];
};
struct t_Fraction {
  struct _vtable *_vtable[0];
  oop v_numerator;
  oop v_denominator;
};
struct t_Float {
  struct _vtable *_vtable[0];
};
struct t_Integer {
  struct _vtable *_vtable[0];
};
struct t_SmallInteger {
  struct _vtable *_vtable[0];
};
struct t_LargePositiveInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_LargeNegativeInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_Collection {
  struct _vtable *_vtable[0];
};
struct t_SequenceableCollection {
  struct _vtable *_vtable[0];
};
struct t_ArrayedCollection {
  struct _vtable *_vtable[0];
  oop v_size;
};
struct t_Array {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_ImmutableArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_WordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ImmutableWordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_String {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableString {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_Symbol {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_nil {
  struct _vtable *_vtable[0];
};
struct t_true {
  struct _vtable *_vtable[0];
};
struct t_false {
  struct _vtable *_vtable[0];
};
struct t_CharacterTable {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_Set {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_LookupKey {
  struct _vtable *_vtable[0];
  oop v_key;
};
struct t_Association {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t_OrderedCollection {
  struct _vtable *_vtable[0];
  oop v_array;
  oop v_firstIndex;
  oop v_lastIndex;
};
struct t_Dictionary {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_SymbolTable {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_CompilerOptions {
  struct _vtable *_vtable[0];
  oop v_searchPaths;
  oop v_outputType;
  oop v_debugging;
  oop v_verboseFlag;
  oop v_macroFlag;
  oop v_specialFlag;
  oop v_taggedFlag;
  oop v_cacheLevel;
  oop v_executionModel;
};
static oop l_2= 0;
static oop l_3= 0;
static oop l_4= 0;
static oop l_7= 0;
static oop l_8= 0;
static oop l_9= 0;
static oop l_10= 0;
static oop l_11= 0;
static oop l_26= 0;
static oop l_27= 0;
static oop l_28= 0;
static oop l_29= 0;
static oop l_30= 0;
static oop v__object= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_SmallInteger= 0;
static oop v_LargePositiveInteger= 0;
static oop v_Collection= 0;
static oop v_SequenceableCollection= 0;
static oop v_ArrayedCollection= 0;
static oop v_Array= 0;
static oop v_WordArray= 0;
static oop v_ByteArray= 0;
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_Symbol= 0;
static oop v_true= 0;
static oop v_false= 0;
static oop v_Set= 0;
static oop v_LookupKey= 0;
static oop v_OrderedCollection= 0;
static oop v_Dictionary= 0;
static oop v_CompilerOptions= 0;
static size_t CompilerOptions___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_CompilerOptions); }
static char *CompilerOptions___5fdebugName(oop _closure, oop v_self) { return "CompilerOptions"; }
static struct __slotinfo *CompilerOptions___5fslots(oop _closure, oop v_self) { static struct __slotinfo info[]= { { "searchPaths", 0, 4 }, { "outputType", 4, 4 }, { "debugging", 8, 4 }, { "verboseFlag", 12, 4 }, { "macroFlag", 16, 4 }, { "specialFlag", 20, 4 }, { "taggedFlag", 24, 4 }, { "cacheLevel", 28, 4 }, { "executionModel", 32, 4 }, { 0, 0, 0 } };  return &info[0]; }
static struct __methodinfo __info1= { "initialize", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 38, 54, 0 };
static oop CompilerOptions__initialize(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(38);
  _1= v_OrderedCollection;
  _line(40);
  _1=_sendv(s_new, 1, _1);
  ((struct t_CompilerOptions *)v_stateful_self)->v_searchPaths= _1;
  _1= l_2;
  ((struct t_CompilerOptions *)v_stateful_self)->v_outputType= _1;
  _1= v_false;
  ((struct t_CompilerOptions *)v_stateful_self)->v_debugging= _1;
  _1= v_false;
  ((struct t_CompilerOptions *)v_stateful_self)->v_verboseFlag= _1;
  _1= v_true;
  ((struct t_CompilerOptions *)v_stateful_self)->v_macroFlag= _1;
  _1= v_true;
  ((struct t_CompilerOptions *)v_stateful_self)->v_specialFlag= _1;
  _1= v_true;
  ((struct t_CompilerOptions *)v_stateful_self)->v_taggedFlag= _1;
  _1= l_3;
  ((struct t_CompilerOptions *)v_stateful_self)->v_cacheLevel= _1;
  _1= l_4;
  ((struct t_CompilerOptions *)v_stateful_self)->v_executionModel= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "searchPaths", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 54, 56, &__info1 };
static oop CompilerOptions__searchPaths(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info5);
  oop _1= 0;
  _line(54);
  _1= ((struct t_CompilerOptions *)v_stateful_self)->v_searchPaths;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "cacheLevel:", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 56, 63, &__info5 };
static oop CompilerOptions__cacheLevel_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aString)
 {
  _enter(&__info6);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(56);
  /* ifTrue: */
  _1= 0;
  _2= v_aString;
  _3= l_7;
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 == (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3d, 2, _2, _3);
  if (!_2) goto _l1;
 {
  _1= l_8;
  ((struct t_CompilerOptions *)v_stateful_self)->v_cacheLevel= _1;
  _leave();
  return _1;
 }
 _l1:;
  /* ifTrue: */
  _1= 0;
  _2= v_aString;
  _3= l_9;
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 == (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3d, 2, _2, _3);
  if (!_2) goto _l2;
 {
  _1= l_10;
  ((struct t_CompilerOptions *)v_stateful_self)->v_cacheLevel= _1;
  _leave();
  return _1;
 }
 _l2:;
  _1= v_self;
  _2= l_11;
  _3= v_aString;
  _line(60);
  _2=_sendv(s__2c, 2, _2, _3);
  _line(60);
  _1=_sendv(s_error_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info12= { "cacheLevel", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 63, 65, &__info6 };
static oop CompilerOptions__cacheLevel(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info12);
  oop _1= 0;
  _line(63);
  _1= ((struct t_CompilerOptions *)v_stateful_self)->v_cacheLevel;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info13= { "macroFlag:", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 65, 66, &__info12 };
static oop CompilerOptions__macroFlag_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aBoolean)
 {
  _enter(&__info13);
  oop _1= 0;
  _line(65);
  _1= v_aBoolean;
  ((struct t_CompilerOptions *)v_stateful_self)->v_macroFlag= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info14= { "macroFlag", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 66, 68, &__info13 };
static oop CompilerOptions__macroFlag(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info14);
  oop _1= 0;
  _line(66);
  _1= ((struct t_CompilerOptions *)v_stateful_self)->v_macroFlag;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info15= { "outputType:", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 68, 69, &__info14 };
static oop CompilerOptions__outputType_(oop v__closure, oop v_stateful_self, oop v_self, oop v_typeSymbol)
 {
  _enter(&__info15);
  oop _1= 0;
  _line(68);
  _1= v_typeSymbol;
  ((struct t_CompilerOptions *)v_stateful_self)->v_outputType= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info16= { "outputType", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 69, 71, &__info15 };
static oop CompilerOptions__outputType(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info16);
  oop _1= 0;
  _line(69);
  _1= ((struct t_CompilerOptions *)v_stateful_self)->v_outputType;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info17= { "debugging:", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 71, 72, &__info16 };
static oop CompilerOptions__debugging_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aBoolean)
 {
  _enter(&__info17);
  oop _1= 0;
  _line(71);
  _1= v_aBoolean;
  ((struct t_CompilerOptions *)v_stateful_self)->v_debugging= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info18= { "debugging", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 72, 74, &__info17 };
static oop CompilerOptions__debugging(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info18);
  oop _1= 0;
  _line(72);
  _1= ((struct t_CompilerOptions *)v_stateful_self)->v_debugging;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info19= { "specialFlag:", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 74, 75, &__info18 };
static oop CompilerOptions__specialFlag_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aBoolean)
 {
  _enter(&__info19);
  oop _1= 0;
  _line(74);
  _1= v_aBoolean;
  ((struct t_CompilerOptions *)v_stateful_self)->v_specialFlag= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info20= { "specialFlag", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 75, 77, &__info19 };
static oop CompilerOptions__specialFlag(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info20);
  oop _1= 0;
  _line(75);
  _1= ((struct t_CompilerOptions *)v_stateful_self)->v_specialFlag;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info21= { "taggedFlag:", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 77, 78, &__info20 };
static oop CompilerOptions__taggedFlag_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aBoolean)
 {
  _enter(&__info21);
  oop _1= 0;
  _line(77);
  _1= v_aBoolean;
  ((struct t_CompilerOptions *)v_stateful_self)->v_taggedFlag= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info22= { "taggedFlag", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 78, 80, &__info21 };
static oop CompilerOptions__taggedFlag(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info22);
  oop _1= 0;
  _line(78);
  _1= ((struct t_CompilerOptions *)v_stateful_self)->v_taggedFlag;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info23= { "verboseFlag:", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 80, 81, &__info22 };
static oop CompilerOptions__verboseFlag_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aBoolean)
 {
  _enter(&__info23);
  oop _1= 0;
  _line(80);
  _1= v_aBoolean;
  ((struct t_CompilerOptions *)v_stateful_self)->v_verboseFlag= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info24= { "verboseFlag", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 81, 83, &__info23 };
static oop CompilerOptions__verboseFlag(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info24);
  oop _1= 0;
  _line(81);
  _1= ((struct t_CompilerOptions *)v_stateful_self)->v_verboseFlag;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info25= { "executionModel:", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 83, 90, &__info24 };
static oop CompilerOptions__executionModel_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aString)
 {
  _enter(&__info25);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(83);
  /* ifTrue: */
  _1= 0;
  _2= v_aString;
  _3= l_26;
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 == (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3d, 2, _2, _3);
  if (!_2) goto _l3;
 {
  _1= l_27;
  ((struct t_CompilerOptions *)v_stateful_self)->v_executionModel= _1;
  _leave();
  return _1;
 }
 _l3:;
  /* ifTrue: */
  _1= 0;
  _2= v_aString;
  _3= l_28;
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 == (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3d, 2, _2, _3);
  if (!_2) goto _l4;
 {
  _1= l_29;
  ((struct t_CompilerOptions *)v_stateful_self)->v_executionModel= _1;
  _leave();
  return _1;
 }
 _l4:;
  _1= v_self;
  _2= l_30;
  _3= v_aString;
  _line(87);
  _2=_sendv(s__2c, 2, _2, _3);
  _line(87);
  _1=_sendv(s_error_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info31= { "executionModel", "CompilerOptions", "/Users/piumarta/src/idst/object/idc/CompilerOptions.st", 0, 90, 91, &__info25 };
static oop CompilerOptions__executionModel(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info31);
  oop _1= 0;
  _line(90);
  _1= ((struct t_CompilerOptions *)v_stateful_self)->v_executionModel;
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "CompilerOptions.st", 0, 0, 0, &__info31 };
void __id__init__CompilerOptions(struct __libid *__libid)
{
  if (_libid) return;
  if (!(_libid= __libid)) { fprintf(stderr, "init _libid %p\n", __libid);  abort(); }
# define GC_add_roots _libid->gc_addRoots
  GC_INIT();
  {
    struct _Selector *s= 0;
    for (s= _Selectors;  s->name;  ++s)
      *s->addr= _libid->intern(s->name);
  }
  _enter(&__info);
  _libid->infos(&__info, &__info1);

  _sendv(s__5fimport_, 3, _libid->_object, "Object", "__id__init__Object");
  v__object= _libid->import("_object");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
  v_Magnitude= _libid->import("Magnitude");
  v_Number= _libid->import("Number");
  v_Integer= _libid->import("Integer");
  v_SmallInteger= _libid->import("SmallInteger");
  v_LargePositiveInteger= _libid->import("LargePositiveInteger");
  v_Collection= _libid->import("Collection");
  v_SequenceableCollection= _libid->import("SequenceableCollection");
  v_ArrayedCollection= _libid->import("ArrayedCollection");
  v_Array= _libid->import("Array");
  v_WordArray= _libid->import("WordArray");
  v_ByteArray= _libid->import("ByteArray");
  v_String= _libid->import("String");
  v_ImmutableString= _libid->import("ImmutableString");
  v_Symbol= _libid->import("Symbol");
  v_true= _libid->import("true");
  v_false= _libid->import("false");
  _sendv(s__5fimport_, 3, _libid->_object, "Symbol", "__id__init__Symbol");
  v_Set= _libid->import("Set");
  v_LookupKey= _libid->import("LookupKey");
  v_OrderedCollection= _libid->import("OrderedCollection");
  v_Dictionary= _libid->import("Dictionary");
  v_CompilerOptions= _libid->proto2(v_Object, CompilerOptions___5fsizeof(0, 0));
  _libid->method(v_CompilerOptions, s__5fsizeof, (_imp_t)CompilerOptions___5fsizeof);
  _libid->method(v_CompilerOptions, s__5fdebugName, (_imp_t)CompilerOptions___5fdebugName);
  _libid->method(v_CompilerOptions, s__5fslots, (_imp_t)CompilerOptions___5fslots);
  _libid->export("CompilerOptions", v_CompilerOptions);
  l_2= _sendv(s_size_5f_value_5f_, 3, v_Symbol, 6, "shared");
  l_3= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  l_4= _sendv(s_size_5f_value_5f_, 3, v_Symbol, 6, "native");
  _libid->method(v_CompilerOptions, s_initialize, (_imp_t)CompilerOptions__initialize);
  _libid->method(v_CompilerOptions, s_searchPaths, (_imp_t)CompilerOptions__searchPaths);
  l_7= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 1, "0");
  l_8= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  l_9= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 1, "1");
  l_10= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  l_11= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 21, "illegal cache level: ");
  _libid->method(v_CompilerOptions, s_cacheLevel_, (_imp_t)CompilerOptions__cacheLevel_);
  _libid->method(v_CompilerOptions, s_cacheLevel, (_imp_t)CompilerOptions__cacheLevel);
  _libid->method(v_CompilerOptions, s_macroFlag_, (_imp_t)CompilerOptions__macroFlag_);
  _libid->method(v_CompilerOptions, s_macroFlag, (_imp_t)CompilerOptions__macroFlag);
  _libid->method(v_CompilerOptions, s_outputType_, (_imp_t)CompilerOptions__outputType_);
  _libid->method(v_CompilerOptions, s_outputType, (_imp_t)CompilerOptions__outputType);
  _libid->method(v_CompilerOptions, s_debugging_, (_imp_t)CompilerOptions__debugging_);
  _libid->method(v_CompilerOptions, s_debugging, (_imp_t)CompilerOptions__debugging);
  _libid->method(v_CompilerOptions, s_specialFlag_, (_imp_t)CompilerOptions__specialFlag_);
  _libid->method(v_CompilerOptions, s_specialFlag, (_imp_t)CompilerOptions__specialFlag);
  _libid->method(v_CompilerOptions, s_taggedFlag_, (_imp_t)CompilerOptions__taggedFlag_);
  _libid->method(v_CompilerOptions, s_taggedFlag, (_imp_t)CompilerOptions__taggedFlag);
  _libid->method(v_CompilerOptions, s_verboseFlag_, (_imp_t)CompilerOptions__verboseFlag_);
  _libid->method(v_CompilerOptions, s_verboseFlag, (_imp_t)CompilerOptions__verboseFlag);
  l_26= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 6, "native");
  l_27= _sendv(s_size_5f_value_5f_, 3, v_Symbol, 6, "native");
  l_28= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 7, "managed");
  l_29= _sendv(s_size_5f_value_5f_, 3, v_Symbol, 7, "managed");
  l_30= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 25, "illegal execution model: ");
  _libid->method(v_CompilerOptions, s_executionModel_, (_imp_t)CompilerOptions__executionModel_);
  _libid->method(v_CompilerOptions, s_executionModel, (_imp_t)CompilerOptions__executionModel);
  _leave();
}
