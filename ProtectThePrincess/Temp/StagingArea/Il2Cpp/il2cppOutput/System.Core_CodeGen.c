#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000007 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000013 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000014 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000015 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000016 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000017 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000018 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001A System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000001F System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000020 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000023 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000024 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000027 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000002A System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000002B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000002C System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000002D System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000002E System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000030 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000031 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000032 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000033 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000034 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000035 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000036 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000037 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000038 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000039 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000003A System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000003B System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000003C System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000003D System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000003E System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000003F System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000040 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000041 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000042 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000043 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000044 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000004A System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000004B System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000004C System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004D System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004E System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004F System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000050 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000051 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000052 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000054 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000055 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000058 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000059 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x0000005A System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x0000005B System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000005C System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000005D System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000005E System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000005F System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x00000060 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x00000061 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000062 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000063 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000064 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000065 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000066 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000067 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[103] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[103] = 
{
	2392,
	2480,
	2480,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[28] = 
{
	{ 0x02000004, { 47, 4 } },
	{ 0x02000005, { 51, 9 } },
	{ 0x02000006, { 60, 7 } },
	{ 0x02000007, { 67, 10 } },
	{ 0x02000008, { 77, 1 } },
	{ 0x0200000A, { 78, 3 } },
	{ 0x0200000B, { 83, 5 } },
	{ 0x0200000C, { 88, 7 } },
	{ 0x0200000D, { 95, 3 } },
	{ 0x0200000E, { 98, 7 } },
	{ 0x0200000F, { 105, 4 } },
	{ 0x02000010, { 109, 34 } },
	{ 0x02000012, { 143, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 5 } },
	{ 0x06000006, { 15, 2 } },
	{ 0x06000007, { 17, 1 } },
	{ 0x06000008, { 18, 3 } },
	{ 0x06000009, { 21, 2 } },
	{ 0x0600000A, { 23, 4 } },
	{ 0x0600000B, { 27, 4 } },
	{ 0x0600000C, { 31, 3 } },
	{ 0x0600000D, { 34, 1 } },
	{ 0x0600000E, { 35, 3 } },
	{ 0x0600000F, { 38, 2 } },
	{ 0x06000010, { 40, 2 } },
	{ 0x06000011, { 42, 5 } },
	{ 0x0600002F, { 81, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[145] = 
{
	{ (Il2CppRGCTXDataType)2, 1175 },
	{ (Il2CppRGCTXDataType)3, 4214 },
	{ (Il2CppRGCTXDataType)2, 1994 },
	{ (Il2CppRGCTXDataType)2, 1686 },
	{ (Il2CppRGCTXDataType)3, 7199 },
	{ (Il2CppRGCTXDataType)2, 1249 },
	{ (Il2CppRGCTXDataType)2, 1690 },
	{ (Il2CppRGCTXDataType)3, 7212 },
	{ (Il2CppRGCTXDataType)2, 1688 },
	{ (Il2CppRGCTXDataType)3, 7205 },
	{ (Il2CppRGCTXDataType)2, 432 },
	{ (Il2CppRGCTXDataType)3, 19 },
	{ (Il2CppRGCTXDataType)3, 20 },
	{ (Il2CppRGCTXDataType)2, 791 },
	{ (Il2CppRGCTXDataType)3, 3046 },
	{ (Il2CppRGCTXDataType)2, 1496 },
	{ (Il2CppRGCTXDataType)3, 6234 },
	{ (Il2CppRGCTXDataType)3, 3398 },
	{ (Il2CppRGCTXDataType)2, 488 },
	{ (Il2CppRGCTXDataType)3, 451 },
	{ (Il2CppRGCTXDataType)3, 452 },
	{ (Il2CppRGCTXDataType)2, 1250 },
	{ (Il2CppRGCTXDataType)3, 4494 },
	{ (Il2CppRGCTXDataType)2, 1119 },
	{ (Il2CppRGCTXDataType)2, 866 },
	{ (Il2CppRGCTXDataType)2, 946 },
	{ (Il2CppRGCTXDataType)2, 992 },
	{ (Il2CppRGCTXDataType)2, 1120 },
	{ (Il2CppRGCTXDataType)2, 867 },
	{ (Il2CppRGCTXDataType)2, 947 },
	{ (Il2CppRGCTXDataType)2, 993 },
	{ (Il2CppRGCTXDataType)2, 948 },
	{ (Il2CppRGCTXDataType)2, 994 },
	{ (Il2CppRGCTXDataType)3, 3047 },
	{ (Il2CppRGCTXDataType)2, 939 },
	{ (Il2CppRGCTXDataType)2, 940 },
	{ (Il2CppRGCTXDataType)2, 990 },
	{ (Il2CppRGCTXDataType)3, 3045 },
	{ (Il2CppRGCTXDataType)2, 865 },
	{ (Il2CppRGCTXDataType)2, 945 },
	{ (Il2CppRGCTXDataType)2, 864 },
	{ (Il2CppRGCTXDataType)3, 8759 },
	{ (Il2CppRGCTXDataType)3, 2688 },
	{ (Il2CppRGCTXDataType)2, 693 },
	{ (Il2CppRGCTXDataType)2, 942 },
	{ (Il2CppRGCTXDataType)2, 991 },
	{ (Il2CppRGCTXDataType)2, 1034 },
	{ (Il2CppRGCTXDataType)3, 4215 },
	{ (Il2CppRGCTXDataType)3, 4217 },
	{ (Il2CppRGCTXDataType)2, 315 },
	{ (Il2CppRGCTXDataType)3, 4216 },
	{ (Il2CppRGCTXDataType)3, 4225 },
	{ (Il2CppRGCTXDataType)2, 1178 },
	{ (Il2CppRGCTXDataType)2, 1689 },
	{ (Il2CppRGCTXDataType)3, 7206 },
	{ (Il2CppRGCTXDataType)3, 4226 },
	{ (Il2CppRGCTXDataType)2, 971 },
	{ (Il2CppRGCTXDataType)2, 1011 },
	{ (Il2CppRGCTXDataType)3, 3052 },
	{ (Il2CppRGCTXDataType)3, 8754 },
	{ (Il2CppRGCTXDataType)3, 4218 },
	{ (Il2CppRGCTXDataType)2, 1177 },
	{ (Il2CppRGCTXDataType)2, 1687 },
	{ (Il2CppRGCTXDataType)3, 7200 },
	{ (Il2CppRGCTXDataType)3, 3051 },
	{ (Il2CppRGCTXDataType)3, 4219 },
	{ (Il2CppRGCTXDataType)3, 8753 },
	{ (Il2CppRGCTXDataType)3, 4232 },
	{ (Il2CppRGCTXDataType)2, 1179 },
	{ (Il2CppRGCTXDataType)2, 1691 },
	{ (Il2CppRGCTXDataType)3, 7213 },
	{ (Il2CppRGCTXDataType)3, 4535 },
	{ (Il2CppRGCTXDataType)3, 2243 },
	{ (Il2CppRGCTXDataType)3, 3053 },
	{ (Il2CppRGCTXDataType)3, 2242 },
	{ (Il2CppRGCTXDataType)3, 4233 },
	{ (Il2CppRGCTXDataType)3, 8755 },
	{ (Il2CppRGCTXDataType)3, 3050 },
	{ (Il2CppRGCTXDataType)2, 433 },
	{ (Il2CppRGCTXDataType)3, 23 },
	{ (Il2CppRGCTXDataType)3, 6221 },
	{ (Il2CppRGCTXDataType)2, 1497 },
	{ (Il2CppRGCTXDataType)3, 6235 },
	{ (Il2CppRGCTXDataType)2, 489 },
	{ (Il2CppRGCTXDataType)3, 453 },
	{ (Il2CppRGCTXDataType)3, 6227 },
	{ (Il2CppRGCTXDataType)3, 2224 },
	{ (Il2CppRGCTXDataType)2, 331 },
	{ (Il2CppRGCTXDataType)3, 6222 },
	{ (Il2CppRGCTXDataType)2, 1493 },
	{ (Il2CppRGCTXDataType)3, 479 },
	{ (Il2CppRGCTXDataType)2, 501 },
	{ (Il2CppRGCTXDataType)2, 681 },
	{ (Il2CppRGCTXDataType)3, 2230 },
	{ (Il2CppRGCTXDataType)3, 6223 },
	{ (Il2CppRGCTXDataType)3, 2219 },
	{ (Il2CppRGCTXDataType)3, 2220 },
	{ (Il2CppRGCTXDataType)3, 2218 },
	{ (Il2CppRGCTXDataType)3, 2221 },
	{ (Il2CppRGCTXDataType)2, 677 },
	{ (Il2CppRGCTXDataType)2, 2053 },
	{ (Il2CppRGCTXDataType)3, 3049 },
	{ (Il2CppRGCTXDataType)3, 2223 },
	{ (Il2CppRGCTXDataType)2, 927 },
	{ (Il2CppRGCTXDataType)3, 2222 },
	{ (Il2CppRGCTXDataType)2, 868 },
	{ (Il2CppRGCTXDataType)2, 2017 },
	{ (Il2CppRGCTXDataType)2, 951 },
	{ (Il2CppRGCTXDataType)2, 995 },
	{ (Il2CppRGCTXDataType)3, 2704 },
	{ (Il2CppRGCTXDataType)2, 701 },
	{ (Il2CppRGCTXDataType)3, 3246 },
	{ (Il2CppRGCTXDataType)3, 3247 },
	{ (Il2CppRGCTXDataType)2, 847 },
	{ (Il2CppRGCTXDataType)3, 3250 },
	{ (Il2CppRGCTXDataType)2, 847 },
	{ (Il2CppRGCTXDataType)3, 3251 },
	{ (Il2CppRGCTXDataType)2, 869 },
	{ (Il2CppRGCTXDataType)3, 3255 },
	{ (Il2CppRGCTXDataType)3, 3259 },
	{ (Il2CppRGCTXDataType)3, 3258 },
	{ (Il2CppRGCTXDataType)2, 2067 },
	{ (Il2CppRGCTXDataType)3, 3249 },
	{ (Il2CppRGCTXDataType)3, 3248 },
	{ (Il2CppRGCTXDataType)3, 3256 },
	{ (Il2CppRGCTXDataType)2, 1042 },
	{ (Il2CppRGCTXDataType)3, 3253 },
	{ (Il2CppRGCTXDataType)3, 9037 },
	{ (Il2CppRGCTXDataType)2, 682 },
	{ (Il2CppRGCTXDataType)3, 2237 },
	{ (Il2CppRGCTXDataType)1, 924 },
	{ (Il2CppRGCTXDataType)2, 2025 },
	{ (Il2CppRGCTXDataType)3, 3252 },
	{ (Il2CppRGCTXDataType)1, 2025 },
	{ (Il2CppRGCTXDataType)1, 1042 },
	{ (Il2CppRGCTXDataType)2, 2067 },
	{ (Il2CppRGCTXDataType)2, 2025 },
	{ (Il2CppRGCTXDataType)2, 953 },
	{ (Il2CppRGCTXDataType)2, 997 },
	{ (Il2CppRGCTXDataType)3, 3257 },
	{ (Il2CppRGCTXDataType)3, 3254 },
	{ (Il2CppRGCTXDataType)3, 3260 },
	{ (Il2CppRGCTXDataType)2, 227 },
	{ (Il2CppRGCTXDataType)3, 2244 },
	{ (Il2CppRGCTXDataType)2, 321 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	103,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	28,
	s_rgctxIndices,
	145,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
