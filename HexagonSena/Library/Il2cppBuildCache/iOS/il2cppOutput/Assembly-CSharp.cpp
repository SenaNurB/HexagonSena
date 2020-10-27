#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>
struct List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<HexagonTile>>
struct List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E;
// System.Collections.Generic.List`1<HexagonTile>
struct List_1_tD82A26999FA42FE8089B437661174BDEB67C8308;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.List`1<UnityEngine.Color>[]
struct List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307;
// System.Collections.Generic.List`1<HexagonTile>[]
struct List_1U5BU5D_t73588AA24BB71C4D598E1220E5C3CD509A857320;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// HexagonTile[]
struct HexagonTileU5BU5D_tBAE8B0F0CD7EEFE381B45F034351E08CEB71BDE3;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// ConstantClass
struct ConstantClass_tF10F2CC1BD0CB405B9C8A5AEC335B562C3CAF4C5;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// GridManager
struct GridManager_t9D03B7713AD644FF31B45E7A0313130344720328;
// HexagonBombTile
struct HexagonBombTile_tF2D9DE610A87DDD8F4C8281E950C9D70CB7F3127;
// HexagonTile
struct HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuManager
struct MenuManager_tD52BB657312ED53913E423A985CACC86F900124C;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UserInputManager
struct UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// GridManager/<CreateHexagons>d__37
struct U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1;
// GridManager/<RotationCoroutine>d__47
struct U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD82A26999FA42FE8089B437661174BDEB67C8308_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3429D2074B67F2169E16F3DCB9FB77097C93FBC9;
IL2CPP_EXTERN_C String_t* _stringLiteral492705B7D68BEAACDC093CC5D940D60DAF5BA526;
IL2CPP_EXTERN_C String_t* _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m681285214837548C3BE4B841BDBB06AF8E9CDCE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_m9556678AC5A748EA40A4E8890FE0857DF39537A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCA1FE16579F7668F95ABD8701F5967BF41634A12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9265352A8F9D83E0F347691ADD9E059330948D0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m376883DE8D9B9C406BEA9E5A0DB2F132FE4B7FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m97298327F440E3FB2703B7BE9F00BCF2B261C57D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4A1FCDA3B03237E21CD4FFBAC012F4897589257F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m503A54E8C58FBCC2DE90A59E216FD14CBA7EE029_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_mE42EE4AE438138933F05703057D35A68DAC6F26D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m5C5AF5A06ED52ADC07830A61F54A3943D2A75F65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0D81CEB984AC50383713C1A0CD55F060D8FD1CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC993E22DFDCE8CB601D6144F97D02326AE4A358D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD20953BDD3354FF3907DF993EAE64D8BEFAC369D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3F5774BB3B28CA2A64FF5039E35CDCEAA8FE2DD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD396EA185003D66D9F0425A2C98D23F6A1624175_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mBE90EF210A242F94A6699001524205C89C90C05F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m07864E7345DB29582ECB31D4B6C4A9B1BD248B0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA574E9186DBB54BF8D9F093F65ADBA23AC6D0FE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m257C2BC80FEC9E5EBA84D29BE8C0BA0B87F58DA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m2F9463338469DE9149CE9103A2ED330309218743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mBD93211DA0D7B29006CFA30014093BAFEFB1BA21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateHexagonsU3Ed__37_System_Collections_IEnumerator_Reset_m08DC4BA7034E183B26B5C4F1AC59E1C451F3DFED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRotationCoroutineU3Ed__47_System_Collections_IEnumerator_Reset_m48C4CD3A113A71AB21034CE337775C4B32894E94_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>
struct  List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6, ____items_1)); }
	inline List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_tB28D84E29F89A67EBBE89AA255D69D71E5E77307* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<HexagonTile>>
struct  List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t73588AA24BB71C4D598E1220E5C3CD509A857320* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8, ____items_1)); }
	inline List_1U5BU5D_t73588AA24BB71C4D598E1220E5C3CD509A857320* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t73588AA24BB71C4D598E1220E5C3CD509A857320** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t73588AA24BB71C4D598E1220E5C3CD509A857320* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_t73588AA24BB71C4D598E1220E5C3CD509A857320* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_t73588AA24BB71C4D598E1220E5C3CD509A857320* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_t73588AA24BB71C4D598E1220E5C3CD509A857320** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_t73588AA24BB71C4D598E1220E5C3CD509A857320* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color>
struct  List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____items_1)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get__items_1() const { return ____items_1; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_StaticFields, ____emptyArray_5)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<HexagonTile>
struct  List_1_tD82A26999FA42FE8089B437661174BDEB67C8308  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HexagonTileU5BU5D_tBAE8B0F0CD7EEFE381B45F034351E08CEB71BDE3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308, ____items_1)); }
	inline HexagonTileU5BU5D_tBAE8B0F0CD7EEFE381B45F034351E08CEB71BDE3* get__items_1() const { return ____items_1; }
	inline HexagonTileU5BU5D_tBAE8B0F0CD7EEFE381B45F034351E08CEB71BDE3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HexagonTileU5BU5D_tBAE8B0F0CD7EEFE381B45F034351E08CEB71BDE3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD82A26999FA42FE8089B437661174BDEB67C8308_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	HexagonTileU5BU5D_tBAE8B0F0CD7EEFE381B45F034351E08CEB71BDE3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308_StaticFields, ____emptyArray_5)); }
	inline HexagonTileU5BU5D_tBAE8B0F0CD7EEFE381B45F034351E08CEB71BDE3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline HexagonTileU5BU5D_tBAE8B0F0CD7EEFE381B45F034351E08CEB71BDE3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(HexagonTileU5BU5D_tBAE8B0F0CD7EEFE381B45F034351E08CEB71BDE3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GridManager/<RotationCoroutine>d__47
struct  U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8  : public RuntimeObject
{
public:
	// System.Int32 GridManager/<RotationCoroutine>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GridManager/<RotationCoroutine>d__47::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GridManager GridManager/<RotationCoroutine>d__47::<>4__this
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___U3CU3E4__this_2;
	// System.Boolean GridManager/<RotationCoroutine>d__47::CW
	bool ___CW_3;
	// System.Collections.Generic.List`1<HexagonTile> GridManager/<RotationCoroutine>d__47::<scoringHexagons>5__2
	List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * ___U3CscoringHexagonsU3E5__2_4;
	// System.Boolean GridManager/<RotationCoroutine>d__47::<check>5__3
	bool ___U3CcheckU3E5__3_5;
	// System.Int32 GridManager/<RotationCoroutine>d__47::<n>5__4
	int32_t ___U3CnU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8, ___U3CU3E4__this_2)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_CW_3() { return static_cast<int32_t>(offsetof(U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8, ___CW_3)); }
	inline bool get_CW_3() const { return ___CW_3; }
	inline bool* get_address_of_CW_3() { return &___CW_3; }
	inline void set_CW_3(bool value)
	{
		___CW_3 = value;
	}

	inline static int32_t get_offset_of_U3CscoringHexagonsU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8, ___U3CscoringHexagonsU3E5__2_4)); }
	inline List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * get_U3CscoringHexagonsU3E5__2_4() const { return ___U3CscoringHexagonsU3E5__2_4; }
	inline List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 ** get_address_of_U3CscoringHexagonsU3E5__2_4() { return &___U3CscoringHexagonsU3E5__2_4; }
	inline void set_U3CscoringHexagonsU3E5__2_4(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * value)
	{
		___U3CscoringHexagonsU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CscoringHexagonsU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcheckU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8, ___U3CcheckU3E5__3_5)); }
	inline bool get_U3CcheckU3E5__3_5() const { return ___U3CcheckU3E5__3_5; }
	inline bool* get_address_of_U3CcheckU3E5__3_5() { return &___U3CcheckU3E5__3_5; }
	inline void set_U3CcheckU3E5__3_5(bool value)
	{
		___U3CcheckU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CnU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8, ___U3CnU3E5__4_6)); }
	inline int32_t get_U3CnU3E5__4_6() const { return ___U3CnU3E5__4_6; }
	inline int32_t* get_address_of_U3CnU3E5__4_6() { return &___U3CnU3E5__4_6; }
	inline void set_U3CnU3E5__4_6(int32_t value)
	{
		___U3CnU3E5__4_6 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<HexagonTile>
struct  Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D, ___list_0)); }
	inline List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * get_list_0() const { return ___list_0; }
	inline List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D, ___current_3)); }
	inline HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * get_current_3() const { return ___current_3; }
	inline HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TextAlignment
struct  TextAlignment_t23BC9C82BA84BEC0BFE7426C26FE96C7DE0EF8F4 
{
public:
	// System.Int32 UnityEngine.TextAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignment_t23BC9C82BA84BEC0BFE7426C26FE96C7DE0EF8F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct  TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GridManager/<CreateHexagons>d__37
struct  U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1  : public RuntimeObject
{
public:
	// System.Int32 GridManager/<CreateHexagons>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GridManager/<CreateHexagons>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GridManager GridManager/<CreateHexagons>d__37::<>4__this
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<System.Int32> GridManager/<CreateHexagons>d__37::columns
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___columns_3;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>> GridManager/<CreateHexagons>d__37::colourSeed
	List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * ___colourSeed_4;
	// UnityEngine.Vector3 GridManager/<CreateHexagons>d__37::<initialPosition>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CinitialPositionU3E5__2_5;
	// System.Single GridManager/<CreateHexagons>d__37::<startCoordinateX>5__3
	float ___U3CstartCoordinateXU3E5__3_6;
	// System.Collections.Generic.List`1/Enumerator<System.Int32> GridManager/<CreateHexagons>d__37::<>7__wrap3
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  ___U3CU3E7__wrap3_7;
	// System.Int32 GridManager/<CreateHexagons>d__37::<n>5__5
	int32_t ___U3CnU3E5__5_8;
	// HexagonTile GridManager/<CreateHexagons>d__37::<newHexagonTile>5__6
	HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * ___U3CnewHexagonTileU3E5__6_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1, ___U3CU3E4__this_2)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_columns_3() { return static_cast<int32_t>(offsetof(U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1, ___columns_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_columns_3() const { return ___columns_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_columns_3() { return &___columns_3; }
	inline void set_columns_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___columns_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___columns_3), (void*)value);
	}

	inline static int32_t get_offset_of_colourSeed_4() { return static_cast<int32_t>(offsetof(U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1, ___colourSeed_4)); }
	inline List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * get_colourSeed_4() const { return ___colourSeed_4; }
	inline List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 ** get_address_of_colourSeed_4() { return &___colourSeed_4; }
	inline void set_colourSeed_4(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * value)
	{
		___colourSeed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colourSeed_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinitialPositionU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1, ___U3CinitialPositionU3E5__2_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CinitialPositionU3E5__2_5() const { return ___U3CinitialPositionU3E5__2_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CinitialPositionU3E5__2_5() { return &___U3CinitialPositionU3E5__2_5; }
	inline void set_U3CinitialPositionU3E5__2_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CinitialPositionU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CstartCoordinateXU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1, ___U3CstartCoordinateXU3E5__3_6)); }
	inline float get_U3CstartCoordinateXU3E5__3_6() const { return ___U3CstartCoordinateXU3E5__3_6; }
	inline float* get_address_of_U3CstartCoordinateXU3E5__3_6() { return &___U3CstartCoordinateXU3E5__3_6; }
	inline void set_U3CstartCoordinateXU3E5__3_6(float value)
	{
		___U3CstartCoordinateXU3E5__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_7() { return static_cast<int32_t>(offsetof(U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1, ___U3CU3E7__wrap3_7)); }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  get_U3CU3E7__wrap3_7() const { return ___U3CU3E7__wrap3_7; }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * get_address_of_U3CU3E7__wrap3_7() { return &___U3CU3E7__wrap3_7; }
	inline void set_U3CU3E7__wrap3_7(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  value)
	{
		___U3CU3E7__wrap3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_7))->___list_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CnU3E5__5_8() { return static_cast<int32_t>(offsetof(U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1, ___U3CnU3E5__5_8)); }
	inline int32_t get_U3CnU3E5__5_8() const { return ___U3CnU3E5__5_8; }
	inline int32_t* get_address_of_U3CnU3E5__5_8() { return &___U3CnU3E5__5_8; }
	inline void set_U3CnU3E5__5_8(int32_t value)
	{
		___U3CnU3E5__5_8 = value;
	}

	inline static int32_t get_offset_of_U3CnewHexagonTileU3E5__6_9() { return static_cast<int32_t>(offsetof(U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1, ___U3CnewHexagonTileU3E5__6_9)); }
	inline HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * get_U3CnewHexagonTileU3E5__6_9() const { return ___U3CnewHexagonTileU3E5__6_9; }
	inline HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 ** get_address_of_U3CnewHexagonTileU3E5__6_9() { return &___U3CnewHexagonTileU3E5__6_9; }
	inline void set_U3CnewHexagonTileU3E5__6_9(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * value)
	{
		___U3CnewHexagonTileU3E5__6_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnewHexagonTileU3E5__6_9), (void*)value);
	}
};


// HexagonTile/NeighbouringHexagons
struct  NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084 
{
public:
	// UnityEngine.Vector2 HexagonTile/NeighbouringHexagons::up
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___up_0;
	// UnityEngine.Vector2 HexagonTile/NeighbouringHexagons::down
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___down_1;
	// UnityEngine.Vector2 HexagonTile/NeighbouringHexagons::upLeft
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upLeft_2;
	// UnityEngine.Vector2 HexagonTile/NeighbouringHexagons::downLeft
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downLeft_3;
	// UnityEngine.Vector2 HexagonTile/NeighbouringHexagons::upRight
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upRight_4;
	// UnityEngine.Vector2 HexagonTile/NeighbouringHexagons::downRight
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downRight_5;

public:
	inline static int32_t get_offset_of_up_0() { return static_cast<int32_t>(offsetof(NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084, ___up_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_up_0() const { return ___up_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_up_0() { return &___up_0; }
	inline void set_up_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___up_0 = value;
	}

	inline static int32_t get_offset_of_down_1() { return static_cast<int32_t>(offsetof(NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084, ___down_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_down_1() const { return ___down_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_down_1() { return &___down_1; }
	inline void set_down_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___down_1 = value;
	}

	inline static int32_t get_offset_of_upLeft_2() { return static_cast<int32_t>(offsetof(NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084, ___upLeft_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upLeft_2() const { return ___upLeft_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upLeft_2() { return &___upLeft_2; }
	inline void set_upLeft_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upLeft_2 = value;
	}

	inline static int32_t get_offset_of_downLeft_3() { return static_cast<int32_t>(offsetof(NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084, ___downLeft_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downLeft_3() const { return ___downLeft_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downLeft_3() { return &___downLeft_3; }
	inline void set_downLeft_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downLeft_3 = value;
	}

	inline static int32_t get_offset_of_upRight_4() { return static_cast<int32_t>(offsetof(NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084, ___upRight_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upRight_4() const { return ___upRight_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upRight_4() { return &___upRight_4; }
	inline void set_upRight_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upRight_4 = value;
	}

	inline static int32_t get_offset_of_downRight_5() { return static_cast<int32_t>(offsetof(NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084, ___downRight_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downRight_5() const { return ___downRight_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downRight_5() { return &___downRight_5; }
	inline void set_downRight_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downRight_5 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct  Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.TextMesh
struct  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// ConstantClass
struct  ConstantClass_tF10F2CC1BD0CB405B9C8A5AEC335B562C3CAF4C5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 ConstantClass::_hexagonOutlineDimensions
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____hexagonOutlineDimensions_24;
	// UnityEngine.Vector2 ConstantClass::_hexagonInitialPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____hexagonInitialPosition_25;

public:
	inline static int32_t get_offset_of__hexagonOutlineDimensions_24() { return static_cast<int32_t>(offsetof(ConstantClass_tF10F2CC1BD0CB405B9C8A5AEC335B562C3CAF4C5, ____hexagonOutlineDimensions_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__hexagonOutlineDimensions_24() const { return ____hexagonOutlineDimensions_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__hexagonOutlineDimensions_24() { return &____hexagonOutlineDimensions_24; }
	inline void set__hexagonOutlineDimensions_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____hexagonOutlineDimensions_24 = value;
	}

	inline static int32_t get_offset_of__hexagonInitialPosition_25() { return static_cast<int32_t>(offsetof(ConstantClass_tF10F2CC1BD0CB405B9C8A5AEC335B562C3CAF4C5, ____hexagonInitialPosition_25)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__hexagonInitialPosition_25() const { return ____hexagonInitialPosition_25; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__hexagonInitialPosition_25() { return &____hexagonInitialPosition_25; }
	inline void set__hexagonInitialPosition_25(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____hexagonInitialPosition_25 = value;
	}
};


// MenuManager
struct  MenuManager_tD52BB657312ED53913E423A985CACC86F900124C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// GridManager
struct  GridManager_t9D03B7713AD644FF31B45E7A0313130344720328  : public ConstantClass_tF10F2CC1BD0CB405B9C8A5AEC335B562C3CAF4C5
{
public:
	// UnityEngine.GameObject GridManager::hexagonPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hexagonPrefab_27;
	// UnityEngine.GameObject GridManager::hexagonParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hexagonParent_28;
	// UnityEngine.GameObject GridManager::outlineParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___outlineParent_29;
	// UnityEngine.Sprite GridManager::outlineSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___outlineSprite_30;
	// UnityEngine.Sprite GridManager::hexagonSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___hexagonSprite_31;
	// System.Int32 GridManager::gridHeight
	int32_t ___gridHeight_32;
	// System.Int32 GridManager::gridWidth
	int32_t ___gridWidth_33;
	// System.Int32 GridManager::selectionStatus
	int32_t ___selectionStatus_34;
	// System.Boolean GridManager::bombsAway
	bool ___bombsAway_35;
	// System.Boolean GridManager::gameOver
	bool ___gameOver_36;
	// UnityEngine.Vector2 GridManager::selectedCoordinates
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___selectedCoordinates_37;
	// HexagonTile GridManager::selectedHexagonTile
	HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * ___selectedHexagonTile_38;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<HexagonTile>> GridManager::gameGrid
	List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * ___gameGrid_39;
	// System.Collections.Generic.List`1<HexagonTile> GridManager::selectedTrio
	List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * ___selectedTrio_40;
	// System.Collections.Generic.List`1<HexagonTile> GridManager::bombHexagons
	List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * ___bombHexagons_41;
	// System.Collections.Generic.List`1<UnityEngine.Color> GridManager::colourList
	List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___colourList_42;
	// System.Boolean GridManager::hexagonRotateStatus
	bool ___hexagonRotateStatus_43;
	// System.Boolean GridManager::hexagonScoringStatus
	bool ___hexagonScoringStatus_44;
	// System.Boolean GridManager::hexagonCreationStatus
	bool ___hexagonCreationStatus_45;
	// System.Boolean GridManager::gameStartStatus
	bool ___gameStartStatus_46;

public:
	inline static int32_t get_offset_of_hexagonPrefab_27() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___hexagonPrefab_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hexagonPrefab_27() const { return ___hexagonPrefab_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hexagonPrefab_27() { return &___hexagonPrefab_27; }
	inline void set_hexagonPrefab_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hexagonPrefab_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagonPrefab_27), (void*)value);
	}

	inline static int32_t get_offset_of_hexagonParent_28() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___hexagonParent_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hexagonParent_28() const { return ___hexagonParent_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hexagonParent_28() { return &___hexagonParent_28; }
	inline void set_hexagonParent_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hexagonParent_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagonParent_28), (void*)value);
	}

	inline static int32_t get_offset_of_outlineParent_29() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___outlineParent_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_outlineParent_29() const { return ___outlineParent_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_outlineParent_29() { return &___outlineParent_29; }
	inline void set_outlineParent_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___outlineParent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outlineParent_29), (void*)value);
	}

	inline static int32_t get_offset_of_outlineSprite_30() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___outlineSprite_30)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_outlineSprite_30() const { return ___outlineSprite_30; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_outlineSprite_30() { return &___outlineSprite_30; }
	inline void set_outlineSprite_30(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___outlineSprite_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outlineSprite_30), (void*)value);
	}

	inline static int32_t get_offset_of_hexagonSprite_31() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___hexagonSprite_31)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_hexagonSprite_31() const { return ___hexagonSprite_31; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_hexagonSprite_31() { return &___hexagonSprite_31; }
	inline void set_hexagonSprite_31(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___hexagonSprite_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagonSprite_31), (void*)value);
	}

	inline static int32_t get_offset_of_gridHeight_32() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___gridHeight_32)); }
	inline int32_t get_gridHeight_32() const { return ___gridHeight_32; }
	inline int32_t* get_address_of_gridHeight_32() { return &___gridHeight_32; }
	inline void set_gridHeight_32(int32_t value)
	{
		___gridHeight_32 = value;
	}

	inline static int32_t get_offset_of_gridWidth_33() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___gridWidth_33)); }
	inline int32_t get_gridWidth_33() const { return ___gridWidth_33; }
	inline int32_t* get_address_of_gridWidth_33() { return &___gridWidth_33; }
	inline void set_gridWidth_33(int32_t value)
	{
		___gridWidth_33 = value;
	}

	inline static int32_t get_offset_of_selectionStatus_34() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___selectionStatus_34)); }
	inline int32_t get_selectionStatus_34() const { return ___selectionStatus_34; }
	inline int32_t* get_address_of_selectionStatus_34() { return &___selectionStatus_34; }
	inline void set_selectionStatus_34(int32_t value)
	{
		___selectionStatus_34 = value;
	}

	inline static int32_t get_offset_of_bombsAway_35() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___bombsAway_35)); }
	inline bool get_bombsAway_35() const { return ___bombsAway_35; }
	inline bool* get_address_of_bombsAway_35() { return &___bombsAway_35; }
	inline void set_bombsAway_35(bool value)
	{
		___bombsAway_35 = value;
	}

	inline static int32_t get_offset_of_gameOver_36() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___gameOver_36)); }
	inline bool get_gameOver_36() const { return ___gameOver_36; }
	inline bool* get_address_of_gameOver_36() { return &___gameOver_36; }
	inline void set_gameOver_36(bool value)
	{
		___gameOver_36 = value;
	}

	inline static int32_t get_offset_of_selectedCoordinates_37() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___selectedCoordinates_37)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_selectedCoordinates_37() const { return ___selectedCoordinates_37; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_selectedCoordinates_37() { return &___selectedCoordinates_37; }
	inline void set_selectedCoordinates_37(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___selectedCoordinates_37 = value;
	}

	inline static int32_t get_offset_of_selectedHexagonTile_38() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___selectedHexagonTile_38)); }
	inline HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * get_selectedHexagonTile_38() const { return ___selectedHexagonTile_38; }
	inline HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 ** get_address_of_selectedHexagonTile_38() { return &___selectedHexagonTile_38; }
	inline void set_selectedHexagonTile_38(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * value)
	{
		___selectedHexagonTile_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedHexagonTile_38), (void*)value);
	}

	inline static int32_t get_offset_of_gameGrid_39() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___gameGrid_39)); }
	inline List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * get_gameGrid_39() const { return ___gameGrid_39; }
	inline List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 ** get_address_of_gameGrid_39() { return &___gameGrid_39; }
	inline void set_gameGrid_39(List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * value)
	{
		___gameGrid_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameGrid_39), (void*)value);
	}

	inline static int32_t get_offset_of_selectedTrio_40() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___selectedTrio_40)); }
	inline List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * get_selectedTrio_40() const { return ___selectedTrio_40; }
	inline List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 ** get_address_of_selectedTrio_40() { return &___selectedTrio_40; }
	inline void set_selectedTrio_40(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * value)
	{
		___selectedTrio_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedTrio_40), (void*)value);
	}

	inline static int32_t get_offset_of_bombHexagons_41() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___bombHexagons_41)); }
	inline List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * get_bombHexagons_41() const { return ___bombHexagons_41; }
	inline List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 ** get_address_of_bombHexagons_41() { return &___bombHexagons_41; }
	inline void set_bombHexagons_41(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * value)
	{
		___bombHexagons_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bombHexagons_41), (void*)value);
	}

	inline static int32_t get_offset_of_colourList_42() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___colourList_42)); }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * get_colourList_42() const { return ___colourList_42; }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E ** get_address_of_colourList_42() { return &___colourList_42; }
	inline void set_colourList_42(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * value)
	{
		___colourList_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colourList_42), (void*)value);
	}

	inline static int32_t get_offset_of_hexagonRotateStatus_43() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___hexagonRotateStatus_43)); }
	inline bool get_hexagonRotateStatus_43() const { return ___hexagonRotateStatus_43; }
	inline bool* get_address_of_hexagonRotateStatus_43() { return &___hexagonRotateStatus_43; }
	inline void set_hexagonRotateStatus_43(bool value)
	{
		___hexagonRotateStatus_43 = value;
	}

	inline static int32_t get_offset_of_hexagonScoringStatus_44() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___hexagonScoringStatus_44)); }
	inline bool get_hexagonScoringStatus_44() const { return ___hexagonScoringStatus_44; }
	inline bool* get_address_of_hexagonScoringStatus_44() { return &___hexagonScoringStatus_44; }
	inline void set_hexagonScoringStatus_44(bool value)
	{
		___hexagonScoringStatus_44 = value;
	}

	inline static int32_t get_offset_of_hexagonCreationStatus_45() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___hexagonCreationStatus_45)); }
	inline bool get_hexagonCreationStatus_45() const { return ___hexagonCreationStatus_45; }
	inline bool* get_address_of_hexagonCreationStatus_45() { return &___hexagonCreationStatus_45; }
	inline void set_hexagonCreationStatus_45(bool value)
	{
		___hexagonCreationStatus_45 = value;
	}

	inline static int32_t get_offset_of_gameStartStatus_46() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328, ___gameStartStatus_46)); }
	inline bool get_gameStartStatus_46() const { return ___gameStartStatus_46; }
	inline bool* get_address_of_gameStartStatus_46() { return &___gameStartStatus_46; }
	inline void set_gameStartStatus_46(bool value)
	{
		___gameStartStatus_46 = value;
	}
};

struct GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields
{
public:
	// GridManager GridManager::instance
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___instance_26;

public:
	inline static int32_t get_offset_of_instance_26() { return static_cast<int32_t>(offsetof(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields, ___instance_26)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_instance_26() const { return ___instance_26; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_instance_26() { return &___instance_26; }
	inline void set_instance_26(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___instance_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_26), (void*)value);
	}
};


// HexagonTile
struct  HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7  : public ConstantClass_tF10F2CC1BD0CB405B9C8A5AEC335B562C3CAF4C5
{
public:
	// GridManager HexagonTile::GridManagerObject
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___GridManagerObject_26;
	// System.Int32 HexagonTile::coordinateX
	int32_t ___coordinateX_27;
	// System.Int32 HexagonTile::coordinateY
	int32_t ___coordinateY_28;
	// UnityEngine.Color HexagonTile::colour
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___colour_29;
	// UnityEngine.Vector2 HexagonTile::linearInterpolationCoordinate
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___linearInterpolationCoordinate_30;
	// System.Boolean HexagonTile::linearInterpolation
	bool ___linearInterpolation_31;
	// UnityEngine.Vector2 HexagonTile::velocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___velocity_32;
	// System.Boolean HexagonTile::bombHexagon
	bool ___bombHexagon_33;
	// System.Int32 HexagonTile::bombHexagonTimer
	int32_t ___bombHexagonTimer_34;
	// UnityEngine.TextMesh HexagonTile::text
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___text_35;

public:
	inline static int32_t get_offset_of_GridManagerObject_26() { return static_cast<int32_t>(offsetof(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7, ___GridManagerObject_26)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_GridManagerObject_26() const { return ___GridManagerObject_26; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_GridManagerObject_26() { return &___GridManagerObject_26; }
	inline void set_GridManagerObject_26(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___GridManagerObject_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GridManagerObject_26), (void*)value);
	}

	inline static int32_t get_offset_of_coordinateX_27() { return static_cast<int32_t>(offsetof(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7, ___coordinateX_27)); }
	inline int32_t get_coordinateX_27() const { return ___coordinateX_27; }
	inline int32_t* get_address_of_coordinateX_27() { return &___coordinateX_27; }
	inline void set_coordinateX_27(int32_t value)
	{
		___coordinateX_27 = value;
	}

	inline static int32_t get_offset_of_coordinateY_28() { return static_cast<int32_t>(offsetof(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7, ___coordinateY_28)); }
	inline int32_t get_coordinateY_28() const { return ___coordinateY_28; }
	inline int32_t* get_address_of_coordinateY_28() { return &___coordinateY_28; }
	inline void set_coordinateY_28(int32_t value)
	{
		___coordinateY_28 = value;
	}

	inline static int32_t get_offset_of_colour_29() { return static_cast<int32_t>(offsetof(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7, ___colour_29)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_colour_29() const { return ___colour_29; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_colour_29() { return &___colour_29; }
	inline void set_colour_29(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___colour_29 = value;
	}

	inline static int32_t get_offset_of_linearInterpolationCoordinate_30() { return static_cast<int32_t>(offsetof(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7, ___linearInterpolationCoordinate_30)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_linearInterpolationCoordinate_30() const { return ___linearInterpolationCoordinate_30; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_linearInterpolationCoordinate_30() { return &___linearInterpolationCoordinate_30; }
	inline void set_linearInterpolationCoordinate_30(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___linearInterpolationCoordinate_30 = value;
	}

	inline static int32_t get_offset_of_linearInterpolation_31() { return static_cast<int32_t>(offsetof(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7, ___linearInterpolation_31)); }
	inline bool get_linearInterpolation_31() const { return ___linearInterpolation_31; }
	inline bool* get_address_of_linearInterpolation_31() { return &___linearInterpolation_31; }
	inline void set_linearInterpolation_31(bool value)
	{
		___linearInterpolation_31 = value;
	}

	inline static int32_t get_offset_of_velocity_32() { return static_cast<int32_t>(offsetof(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7, ___velocity_32)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_velocity_32() const { return ___velocity_32; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_velocity_32() { return &___velocity_32; }
	inline void set_velocity_32(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___velocity_32 = value;
	}

	inline static int32_t get_offset_of_bombHexagon_33() { return static_cast<int32_t>(offsetof(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7, ___bombHexagon_33)); }
	inline bool get_bombHexagon_33() const { return ___bombHexagon_33; }
	inline bool* get_address_of_bombHexagon_33() { return &___bombHexagon_33; }
	inline void set_bombHexagon_33(bool value)
	{
		___bombHexagon_33 = value;
	}

	inline static int32_t get_offset_of_bombHexagonTimer_34() { return static_cast<int32_t>(offsetof(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7, ___bombHexagonTimer_34)); }
	inline int32_t get_bombHexagonTimer_34() const { return ___bombHexagonTimer_34; }
	inline int32_t* get_address_of_bombHexagonTimer_34() { return &___bombHexagonTimer_34; }
	inline void set_bombHexagonTimer_34(int32_t value)
	{
		___bombHexagonTimer_34 = value;
	}

	inline static int32_t get_offset_of_text_35() { return static_cast<int32_t>(offsetof(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7, ___text_35)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_text_35() const { return ___text_35; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_text_35() { return &___text_35; }
	inline void set_text_35(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_35), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UIManager
struct  UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858  : public ConstantClass_tF10F2CC1BD0CB405B9C8A5AEC335B562C3CAF4C5
{
public:
	// UnityEngine.UI.Text UIManager::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_26;
	// UnityEngine.UI.Text UIManager::gridWidthText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___gridWidthText_27;
	// UnityEngine.UI.Text UIManager::gridHeightext
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___gridHeightext_28;
	// UnityEngine.UI.Text UIManager::colourCountText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___colourCountText_29;
	// UnityEngine.UI.Slider UIManager::gridWidthSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___gridWidthSlider_30;
	// UnityEngine.UI.Slider UIManager::gridHeightSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___gridHeightSlider_31;
	// UnityEngine.UI.Slider UIManager::colourCountSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___colourCountSlider_32;
	// UnityEngine.GameObject UIManager::settingsScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___settingsScreen_33;
	// UnityEngine.GameObject UIManager::colourSelectionParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___colourSelectionParent_34;
	// UnityEngine.GameObject UIManager::gameOverScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverScreen_35;
	// UnityEngine.GameObject UIManager::uniqueColourScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___uniqueColourScreen_36;
	// System.Collections.Generic.List`1<UnityEngine.Color> UIManager::Colours
	List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___Colours_37;
	// System.Boolean UIManager::check
	bool ___check_38;
	// System.Boolean UIManager::areColoursUnique
	bool ___areColoursUnique_39;
	// GridManager UIManager::GridManagerObject
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___GridManagerObject_40;
	// System.Int32 UIManager::colourCount
	int32_t ___colourCount_41;
	// System.Int32 UIManager::scoredHexagons
	int32_t ___scoredHexagons_42;
	// System.Int32 UIManager::bombHexagonsCount
	int32_t ___bombHexagonsCount_43;
	// UnityEngine.GameObject UIManager::hexagon1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hexagon1_44;
	// UnityEngine.GameObject UIManager::hexagon2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hexagon2_45;
	// UnityEngine.GameObject UIManager::hexagon3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hexagon3_46;
	// UnityEngine.GameObject UIManager::hexagon4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hexagon4_47;
	// UnityEngine.GameObject UIManager::hexagon5
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hexagon5_48;
	// UnityEngine.GameObject UIManager::hexagon6
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hexagon6_49;
	// UnityEngine.GameObject UIManager::hexagon7
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hexagon7_50;
	// UnityEngine.UI.Image UIManager::img
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___img_51;
	// UnityEngine.UI.Image UIManager::img1
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___img1_52;
	// UnityEngine.UI.Image UIManager::img2
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___img2_53;
	// UnityEngine.UI.Image UIManager::img3
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___img3_54;
	// UnityEngine.UI.Image UIManager::img4
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___img4_55;
	// UnityEngine.UI.Image UIManager::img5
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___img5_56;
	// UnityEngine.UI.Image UIManager::img6
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___img6_57;
	// UnityEngine.UI.Image UIManager::img7
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___img7_58;

public:
	inline static int32_t get_offset_of_scoreText_26() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___scoreText_26)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_26() const { return ___scoreText_26; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_26() { return &___scoreText_26; }
	inline void set_scoreText_26(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_26), (void*)value);
	}

	inline static int32_t get_offset_of_gridWidthText_27() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gridWidthText_27)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_gridWidthText_27() const { return ___gridWidthText_27; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_gridWidthText_27() { return &___gridWidthText_27; }
	inline void set_gridWidthText_27(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___gridWidthText_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridWidthText_27), (void*)value);
	}

	inline static int32_t get_offset_of_gridHeightext_28() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gridHeightext_28)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_gridHeightext_28() const { return ___gridHeightext_28; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_gridHeightext_28() { return &___gridHeightext_28; }
	inline void set_gridHeightext_28(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___gridHeightext_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridHeightext_28), (void*)value);
	}

	inline static int32_t get_offset_of_colourCountText_29() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___colourCountText_29)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_colourCountText_29() const { return ___colourCountText_29; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_colourCountText_29() { return &___colourCountText_29; }
	inline void set_colourCountText_29(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___colourCountText_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colourCountText_29), (void*)value);
	}

	inline static int32_t get_offset_of_gridWidthSlider_30() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gridWidthSlider_30)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_gridWidthSlider_30() const { return ___gridWidthSlider_30; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_gridWidthSlider_30() { return &___gridWidthSlider_30; }
	inline void set_gridWidthSlider_30(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___gridWidthSlider_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridWidthSlider_30), (void*)value);
	}

	inline static int32_t get_offset_of_gridHeightSlider_31() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gridHeightSlider_31)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_gridHeightSlider_31() const { return ___gridHeightSlider_31; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_gridHeightSlider_31() { return &___gridHeightSlider_31; }
	inline void set_gridHeightSlider_31(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___gridHeightSlider_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridHeightSlider_31), (void*)value);
	}

	inline static int32_t get_offset_of_colourCountSlider_32() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___colourCountSlider_32)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_colourCountSlider_32() const { return ___colourCountSlider_32; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_colourCountSlider_32() { return &___colourCountSlider_32; }
	inline void set_colourCountSlider_32(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___colourCountSlider_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colourCountSlider_32), (void*)value);
	}

	inline static int32_t get_offset_of_settingsScreen_33() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___settingsScreen_33)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_settingsScreen_33() const { return ___settingsScreen_33; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_settingsScreen_33() { return &___settingsScreen_33; }
	inline void set_settingsScreen_33(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___settingsScreen_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingsScreen_33), (void*)value);
	}

	inline static int32_t get_offset_of_colourSelectionParent_34() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___colourSelectionParent_34)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_colourSelectionParent_34() const { return ___colourSelectionParent_34; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_colourSelectionParent_34() { return &___colourSelectionParent_34; }
	inline void set_colourSelectionParent_34(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___colourSelectionParent_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colourSelectionParent_34), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverScreen_35() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gameOverScreen_35)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverScreen_35() const { return ___gameOverScreen_35; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverScreen_35() { return &___gameOverScreen_35; }
	inline void set_gameOverScreen_35(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverScreen_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverScreen_35), (void*)value);
	}

	inline static int32_t get_offset_of_uniqueColourScreen_36() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___uniqueColourScreen_36)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_uniqueColourScreen_36() const { return ___uniqueColourScreen_36; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_uniqueColourScreen_36() { return &___uniqueColourScreen_36; }
	inline void set_uniqueColourScreen_36(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___uniqueColourScreen_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uniqueColourScreen_36), (void*)value);
	}

	inline static int32_t get_offset_of_Colours_37() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___Colours_37)); }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * get_Colours_37() const { return ___Colours_37; }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E ** get_address_of_Colours_37() { return &___Colours_37; }
	inline void set_Colours_37(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * value)
	{
		___Colours_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Colours_37), (void*)value);
	}

	inline static int32_t get_offset_of_check_38() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___check_38)); }
	inline bool get_check_38() const { return ___check_38; }
	inline bool* get_address_of_check_38() { return &___check_38; }
	inline void set_check_38(bool value)
	{
		___check_38 = value;
	}

	inline static int32_t get_offset_of_areColoursUnique_39() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___areColoursUnique_39)); }
	inline bool get_areColoursUnique_39() const { return ___areColoursUnique_39; }
	inline bool* get_address_of_areColoursUnique_39() { return &___areColoursUnique_39; }
	inline void set_areColoursUnique_39(bool value)
	{
		___areColoursUnique_39 = value;
	}

	inline static int32_t get_offset_of_GridManagerObject_40() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___GridManagerObject_40)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_GridManagerObject_40() const { return ___GridManagerObject_40; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_GridManagerObject_40() { return &___GridManagerObject_40; }
	inline void set_GridManagerObject_40(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___GridManagerObject_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GridManagerObject_40), (void*)value);
	}

	inline static int32_t get_offset_of_colourCount_41() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___colourCount_41)); }
	inline int32_t get_colourCount_41() const { return ___colourCount_41; }
	inline int32_t* get_address_of_colourCount_41() { return &___colourCount_41; }
	inline void set_colourCount_41(int32_t value)
	{
		___colourCount_41 = value;
	}

	inline static int32_t get_offset_of_scoredHexagons_42() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___scoredHexagons_42)); }
	inline int32_t get_scoredHexagons_42() const { return ___scoredHexagons_42; }
	inline int32_t* get_address_of_scoredHexagons_42() { return &___scoredHexagons_42; }
	inline void set_scoredHexagons_42(int32_t value)
	{
		___scoredHexagons_42 = value;
	}

	inline static int32_t get_offset_of_bombHexagonsCount_43() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___bombHexagonsCount_43)); }
	inline int32_t get_bombHexagonsCount_43() const { return ___bombHexagonsCount_43; }
	inline int32_t* get_address_of_bombHexagonsCount_43() { return &___bombHexagonsCount_43; }
	inline void set_bombHexagonsCount_43(int32_t value)
	{
		___bombHexagonsCount_43 = value;
	}

	inline static int32_t get_offset_of_hexagon1_44() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___hexagon1_44)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hexagon1_44() const { return ___hexagon1_44; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hexagon1_44() { return &___hexagon1_44; }
	inline void set_hexagon1_44(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hexagon1_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagon1_44), (void*)value);
	}

	inline static int32_t get_offset_of_hexagon2_45() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___hexagon2_45)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hexagon2_45() const { return ___hexagon2_45; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hexagon2_45() { return &___hexagon2_45; }
	inline void set_hexagon2_45(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hexagon2_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagon2_45), (void*)value);
	}

	inline static int32_t get_offset_of_hexagon3_46() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___hexagon3_46)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hexagon3_46() const { return ___hexagon3_46; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hexagon3_46() { return &___hexagon3_46; }
	inline void set_hexagon3_46(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hexagon3_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagon3_46), (void*)value);
	}

	inline static int32_t get_offset_of_hexagon4_47() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___hexagon4_47)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hexagon4_47() const { return ___hexagon4_47; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hexagon4_47() { return &___hexagon4_47; }
	inline void set_hexagon4_47(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hexagon4_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagon4_47), (void*)value);
	}

	inline static int32_t get_offset_of_hexagon5_48() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___hexagon5_48)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hexagon5_48() const { return ___hexagon5_48; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hexagon5_48() { return &___hexagon5_48; }
	inline void set_hexagon5_48(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hexagon5_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagon5_48), (void*)value);
	}

	inline static int32_t get_offset_of_hexagon6_49() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___hexagon6_49)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hexagon6_49() const { return ___hexagon6_49; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hexagon6_49() { return &___hexagon6_49; }
	inline void set_hexagon6_49(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hexagon6_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagon6_49), (void*)value);
	}

	inline static int32_t get_offset_of_hexagon7_50() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___hexagon7_50)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hexagon7_50() const { return ___hexagon7_50; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hexagon7_50() { return &___hexagon7_50; }
	inline void set_hexagon7_50(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hexagon7_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hexagon7_50), (void*)value);
	}

	inline static int32_t get_offset_of_img_51() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___img_51)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_img_51() const { return ___img_51; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_img_51() { return &___img_51; }
	inline void set_img_51(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___img_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img_51), (void*)value);
	}

	inline static int32_t get_offset_of_img1_52() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___img1_52)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_img1_52() const { return ___img1_52; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_img1_52() { return &___img1_52; }
	inline void set_img1_52(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___img1_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img1_52), (void*)value);
	}

	inline static int32_t get_offset_of_img2_53() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___img2_53)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_img2_53() const { return ___img2_53; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_img2_53() { return &___img2_53; }
	inline void set_img2_53(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___img2_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img2_53), (void*)value);
	}

	inline static int32_t get_offset_of_img3_54() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___img3_54)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_img3_54() const { return ___img3_54; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_img3_54() { return &___img3_54; }
	inline void set_img3_54(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___img3_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img3_54), (void*)value);
	}

	inline static int32_t get_offset_of_img4_55() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___img4_55)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_img4_55() const { return ___img4_55; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_img4_55() { return &___img4_55; }
	inline void set_img4_55(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___img4_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img4_55), (void*)value);
	}

	inline static int32_t get_offset_of_img5_56() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___img5_56)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_img5_56() const { return ___img5_56; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_img5_56() { return &___img5_56; }
	inline void set_img5_56(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___img5_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img5_56), (void*)value);
	}

	inline static int32_t get_offset_of_img6_57() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___img6_57)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_img6_57() const { return ___img6_57; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_img6_57() { return &___img6_57; }
	inline void set_img6_57(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___img6_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img6_57), (void*)value);
	}

	inline static int32_t get_offset_of_img7_58() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___img7_58)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_img7_58() const { return ___img7_58; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_img7_58() { return &___img7_58; }
	inline void set_img7_58(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___img7_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img7_58), (void*)value);
	}
};

struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_StaticFields
{
public:
	// UIManager UIManager::instance
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___instance_59;

public:
	inline static int32_t get_offset_of_instance_59() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_StaticFields, ___instance_59)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_instance_59() const { return ___instance_59; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_instance_59() { return &___instance_59; }
	inline void set_instance_59(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___instance_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_59), (void*)value);
	}
};


// UserInputManager
struct  UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F  : public ConstantClass_tF10F2CC1BD0CB405B9C8A5AEC335B562C3CAF4C5
{
public:
	// System.Boolean UserInputManager::validTouch
	bool ___validTouch_26;
	// GridManager UserInputManager::GridManagerObject
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * ___GridManagerObject_27;
	// UnityEngine.Vector2 UserInputManager::touchStartCoordinates
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___touchStartCoordinates_28;
	// HexagonTile UserInputManager::selectecHexagonTile
	HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * ___selectecHexagonTile_29;

public:
	inline static int32_t get_offset_of_validTouch_26() { return static_cast<int32_t>(offsetof(UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F, ___validTouch_26)); }
	inline bool get_validTouch_26() const { return ___validTouch_26; }
	inline bool* get_address_of_validTouch_26() { return &___validTouch_26; }
	inline void set_validTouch_26(bool value)
	{
		___validTouch_26 = value;
	}

	inline static int32_t get_offset_of_GridManagerObject_27() { return static_cast<int32_t>(offsetof(UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F, ___GridManagerObject_27)); }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * get_GridManagerObject_27() const { return ___GridManagerObject_27; }
	inline GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 ** get_address_of_GridManagerObject_27() { return &___GridManagerObject_27; }
	inline void set_GridManagerObject_27(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * value)
	{
		___GridManagerObject_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GridManagerObject_27), (void*)value);
	}

	inline static int32_t get_offset_of_touchStartCoordinates_28() { return static_cast<int32_t>(offsetof(UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F, ___touchStartCoordinates_28)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_touchStartCoordinates_28() const { return ___touchStartCoordinates_28; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_touchStartCoordinates_28() { return &___touchStartCoordinates_28; }
	inline void set_touchStartCoordinates_28(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___touchStartCoordinates_28 = value;
	}

	inline static int32_t get_offset_of_selectecHexagonTile_29() { return static_cast<int32_t>(offsetof(UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F, ___selectecHexagonTile_29)); }
	inline HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * get_selectecHexagonTile_29() const { return ___selectecHexagonTile_29; }
	inline HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 ** get_address_of_selectecHexagonTile_29() { return &___selectecHexagonTile_29; }
	inline void set_selectecHexagonTile_29(HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * value)
	{
		___selectecHexagonTile_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectecHexagonTile_29), (void*)value);
	}
};


// HexagonBombTile
struct  HexagonBombTile_tF2D9DE610A87DDD8F4C8281E950C9D70CB7F3127  : public HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7
{
public:
	// UnityEngine.TextMesh HexagonBombTile::output
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___output_36;
	// System.Int32 HexagonBombTile::timer
	int32_t ___timer_37;

public:
	inline static int32_t get_offset_of_output_36() { return static_cast<int32_t>(offsetof(HexagonBombTile_tF2D9DE610A87DDD8F4C8281E950C9D70CB7F3127, ___output_36)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_output_36() const { return ___output_36; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_output_36() { return &___output_36; }
	inline void set_output_36(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___output_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_36), (void*)value);
	}

	inline static int32_t get_offset_of_timer_37() { return static_cast<int32_t>(offsetof(HexagonBombTile_tF2D9DE610A87DDD8F4C8281E950C9D70CB7F3127, ___timer_37)); }
	inline int32_t get_timer_37() const { return ___timer_37; }
	inline int32_t* get_address_of_timer_37() { return &___timer_37; }
	inline void set_timer_37(int32_t value)
	{
		___timer_37 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_gshared_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_gshared_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m2F9463338469DE9149CE9103A2ED330309218743_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, int32_t ___index0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m72B622AD9BAEA821ED4FE737B1474CA1EABA4AEB_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m6E538231C9C2D6015BE7985737C9538D7FC06902_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mC8FCB6A53C017A6C13FC891B6BB1D78F9A77D5E3_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_mD396EA185003D66D9F0425A2C98D23F6A1624175_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m376883DE8D9B9C406BEA9E5A0DB2F132FE4B7FDA_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m395E8296B15F96587420FD49B2A105D109464C22_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HexagonTile>::.ctor()
inline void List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3 (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<HexagonTile>>::.ctor()
inline void List_1__ctor_m07864E7345DB29582ECB31D4B6C4A9B1BD248B0C (List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_gshared)(__this, ___item0, method);
}
// System.Int32 GridManager::GettingGridHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridManager_GettingGridHeight_mC2D7974B44D2431F019406AC9BD52356DC7B9640_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<HexagonTile>>::Add(!0)
inline void List_1_Add_m0D81CEB984AC50383713C1A0CD55F060D8FD1CA1 (List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * __this, List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 *, List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.Int32 GridManager::GettingGridWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridManager_GettingGridWidth_mFBCB3948062D10F67DD2F3364BDE00E878E8C115_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>> GridManager::CreateGridWithColour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * GridManager_CreateGridWithColour_mCEA0C26536BC9A44B11E88533E453B7FA85CED9B (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GridManager::CreateHexagons(System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GridManager_CreateHexagons_m044E084EC5E7BADD38CF095AD009AE405B1E50E9 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___columns0, List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * ___colourSeed1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m681285214837548C3BE4B841BDBB06AF8E9CDCE6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<HexagonTile>()
inline HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * GameObject_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_mE42EE4AE438138933F05703057D35A68DAC6F26D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Int32 HexagonTile::GettingHexagonX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HexagonTile_GettingHexagonX_m77AA2DAC15C6631CA3985B953CB34BCE4C4A50B5_inline (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method);
// System.Int32 HexagonTile::GettingHexagonY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HexagonTile_GettingHexagonY_mEC4FFBCD04D7A28D7D0DD20C261AAA03E1E1B5AC_inline (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method);
// System.Void GridManager::DestroyOutline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_DestroyOutline_m4B6336B1CA01C26DD10B84B4EF171AA02AA77864 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Void GridManager::CreateOutline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_CreateOutline_m93AC4491D19B26CF46D60B350E4E8227016F0338 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GridManager::RotationCoroutine(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GridManager_RotationCoroutine_m9115C8818FC352A3F3894C73854B624489749F71 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, bool ___CW0, const RuntimeMethod* method);
// System.Void GridManager/<CreateHexagons>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateHexagonsU3Ed__37__ctor_m8FA52491C4006BE8A91AF1A31AB098F273C67DCC (U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>::.ctor()
inline void List_1__ctor_mA574E9186DBB54BF8D9F093F65ADBA23AC6D0FE0 (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
inline void List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1 (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, const RuntimeMethod*))List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>::Add(!0)
inline void List_1_Add_mC993E22DFDCE8CB601D6144F97D02326AE4A358D (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * __this, List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 *, List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>::get_Item(System.Int32)
inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_inline (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * (*) (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline)(__this, ___index0, method);
}
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Count()
inline int32_t List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, const RuntimeMethod*))List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, int32_t, const RuntimeMethod*))List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0)
inline void List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673 (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m2F9463338469DE9149CE9103A2ED330309218743 (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, int32_t ___index0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, int32_t, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))List_1_set_Item_m2F9463338469DE9149CE9103A2ED330309218743_gshared)(__this, ___index0, ___value1, method);
}
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lhs0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rhs1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<HexagonTile>>::get_Item(System.Int32)
inline List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline (List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * (*) (List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<HexagonTile>::get_Item(System.Int32)
inline HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * (*) (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline)(__this, ___index0, method);
}
// System.Void GridManager::FindNeighbouringHexagonsofSelectedHexagon(UnityEngine.Vector2&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_FindNeighbouringHexagonsofSelectedHexagon_m4A7F758DFF81CC5D049C8FEB78AD939FDBF91992 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___first0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___second1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HexagonTile>::Clear()
inline void List_1_Clear_mD20953BDD3354FF3907DF993EAE64D8BEFAC369D (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<HexagonTile>::Add(!0)
inline void List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * __this, HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *, HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.Component::GetComponent<HexagonTile>()
inline HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * Component_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_m9556678AC5A748EA40A4E8890FE0857DF39537A3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// HexagonTile/NeighbouringHexagons HexagonTile::GetNeighbouringHexagons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  HexagonTile_GetNeighbouringHexagons_m96C78BA962998CF9048E4057B8D2BC4192E3346D (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void GridManager::FindHexagonTrio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_FindHexagonTrio_m3A0D7D8891C0B2D84955C11B06043CFADF0E3F77 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<HexagonTile>::GetEnumerator()
inline Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D  List_1_GetEnumerator_m3F5774BB3B28CA2A64FF5039E35CDCEAA8FE2DD3 (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D  (*) (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<HexagonTile>::get_Current()
inline HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * Enumerator_get_Current_m97298327F440E3FB2703B7BE9F00BCF2B261C57D_inline (Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D * __this, const RuntimeMethod* method)
{
	return ((  HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * (*) (Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4A1FCDA3B03237E21CD4FFBAC012F4897589257F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m5C5AF5A06ED52ADC07830A61F54A3943D2A75F65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<HexagonTile>::MoveNext()
inline bool Enumerator_MoveNext_m9265352A8F9D83E0F347691ADD9E059330948D0E (Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<HexagonTile>::Dispose()
inline void Enumerator_Dispose_mCA1FE16579F7668F95ABD8701F5967BF41634A12 (Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void HexagonTile::Rotate(System.Int32,System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_Rotate_mADF53241FA895ABA946190BB7C43EF1A5102DA65 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, int32_t ___newX0, int32_t ___newY1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newCoordinates2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<HexagonTile>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * __this, int32_t ___index0, HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *, int32_t, HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 *, const RuntimeMethod*))List_1_set_Item_m72B622AD9BAEA821ED4FE737B1474CA1EABA4AEB_gshared)(__this, ___index0, ___value1, method);
}
// UnityEngine.Color HexagonTile::GettingHexagonColour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  HexagonTile_GettingHexagonColour_mAF2A9A8C0D158C720841CB9F7E3E7AFC5FE113A6 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method);
// System.Boolean GridManager::IsPositionGameGridValid(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridManager_IsPositionGameGridValid_m324AAF4737162E55CAB85F3F10F8E2A3D395C384 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<HexagonTile>::Contains(!0)
inline bool List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * __this, HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *, HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 *, const RuntimeMethod*))List_1_Contains_m6E538231C9C2D6015BE7985737C9538D7FC06902_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<HexagonTile>::get_Count()
inline int32_t List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_inline (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<HexagonTile>>::get_Count()
inline int32_t List_1_get_Count_m257C2BC80FEC9E5EBA84D29BE8C0BA0B87F58DA9_inline (List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void HexagonTile::BombHexagonTick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_BombHexagonTick_m230664521E932297E6721E5C49219CAEC1A5DCB8 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method);
// System.Int32 HexagonTile::GettingBombhexagonTimer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HexagonTile_GettingBombhexagonTimer_mE07C1C882713FA7A3A931EBC16A27098B38DA49E_inline (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method);
// System.Void UIManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GameOver_m3CC0D19CB5B32FC18AF71A9708DB653B9E57E510 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<HexagonTile>::Remove(!0)
inline bool List_1_Remove_mBE90EF210A242F94A6699001524205C89C90C05F (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * __this, HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *, HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 *, const RuntimeMethod*))List_1_Remove_mC8FCB6A53C017A6C13FC891B6BB1D78F9A77D5E3_gshared)(__this, ___item0, method);
}
// System.Void UIManager::Score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Score_m5B123F3423305E9D697D354414B01FE570EA68FD (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, int32_t ___n0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_mD396EA185003D66D9F0425A2C98D23F6A1624175 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_GetEnumerator_mD396EA185003D66D9F0425A2C98D23F6A1624175_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m376883DE8D9B9C406BEA9E5A0DB2F132FE4B7FDA_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_get_Current_m376883DE8D9B9C406BEA9E5A0DB2F132FE4B7FDA_gshared_inline)(__this, method);
}
// System.Single GridManager::GettingGridStartCoordinateX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GridManager_GettingGridStartCoordinateX_m209EA2C055820542CA380E1EA8C17CCDA6F9C882 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Boolean GridManager::OnColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridManager_OnColumn_m9B2EA2EB87DBC2139A725B796C6825383FEF05F8 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___n0, const RuntimeMethod* method);
// System.Void HexagonTile::SettingHexagonY(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HexagonTile_SettingHexagonY_mC4CA9A9C4E5C696ACF5F4D52232F4F0105CE2F76_inline (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void HexagonTile::SettingHexagonX(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HexagonTile_SettingHexagonX_mBCE4856224034F7ADD1D57CDB47E0B6A91763D7E_inline (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void HexagonTile::AlterWorldPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_AlterWorldPosition_m3D67C6B6BFF83D6AA17A0BBAE65C58FC3259BB50 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newCoordinate0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared)(__this, method);
}
// System.Void GridManager/<RotationCoroutine>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotationCoroutineU3Ed__47__ctor_mF4D149F3D81A0C41DEC279A5AE74CC057EBA27E6 (U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void ConstantClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantClass__ctor_m31AB7516882FF38B31F5DCC7912ABCD8AF7E7942 (ConstantClass_tF10F2CC1BD0CB405B9C8A5AEC335B562C3CAF4C5 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void HexagonTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile__ctor_m75E13C07BD955E39D40EAB21FD39DE5F09004584 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Collider2D::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2D_set_isTrigger_m129C3059CC21789EFA198E153A3C82662E3BFF52 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.TextMesh>()
inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m503A54E8C58FBCC2DE90A59E216FD14CBA7EE029 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared)(__this, method);
}
// System.Void UnityEngine.TextMesh::set_alignment(UnityEngine.TextAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_alignment_m95F437AB7C56DA880A7722AFAF13845B1C6C0947 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_anchor(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_anchor_m1A9871D2FD70AE79F4FE3F3912757834392A9674 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UIManager::InitializationOfUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_InitializationOfUI_m8C37DD04A176531318B00F1486538976F35A0263 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_StartGame_m1AED54E2B1036BEE965B8A5B0F749A1A72900CAB (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_magenta_m46B928AB3005B062069E5DF9CB271E1373A29FE0 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void GridManager::SettingBombsAway()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SettingBombsAway_mF34F08AB84FF982CA76130954576EAF3D886C1B3 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void GridManager::SettingGridWidth(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridManager_SettingGridWidth_m0ACD924C53724BA0ADB9C9FDE35680E36DB1DA0A_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___width0, const RuntimeMethod* method);
// System.Void GridManager::SettingGridHeight(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridManager_SettingGridHeight_mB56A5A88383252A841FA4936C19B08F557D4C6B5_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___height0, const RuntimeMethod* method);
// System.Void GridManager::SettingColourList(System.Collections.Generic.List`1<UnityEngine.Color>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridManager_SettingColourList_m8848E7343161EFEFD52E14B02501688DC558EFBA_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___colors0, const RuntimeMethod* method);
// System.Void GridManager::InitializationOfGameGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_InitializationOfGameGrid_m3089EA99C89F5AF8AE7CC48F217B25B17260094C (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Void UIManager::Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Default_m9D9B60EDB4882DB1AC7725A49F16030DE2A9647D (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Boolean GridManager::ReadyForInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridManager_ReadyForInput_mC9CA5E5E8921B37FDA339A22C2872849B7BEA305 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapPoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapPoint_m023ABB1D290D24A6C77C5F9D7836A736F88AD345 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, const RuntimeMethod* method);
// HexagonTile GridManager::GettingSelectedHexagonTile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * GridManager_GettingSelectedHexagonTile_m42CB0FE45DB627774E01D8DD52E153D7C706788C_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// System.Void UserInputManager::DetectingTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInputManager_DetectingTouch_m37B46BE3E4F5F77EC61183B0ED8BCC3376AB7F7C (UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F * __this, const RuntimeMethod* method);
// System.Void UserInputManager::IsHexagonTrioSelected(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInputManager_IsHexagonTrioSelected_mAF3728196A7FC658CC612D51E05231CBD61D11F5 (UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collider0, const RuntimeMethod* method);
// System.Void UserInputManager::DetectingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInputManager_DetectingRotation_m974C982ECC95B987F93BA17D35267A2C940FB70F (UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F * __this, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void GridManager::SelectHexagonTrio(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SelectHexagonTrio_mA1D435952EE3A0CC8AAA0A6B8281E4C489E85171 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collider0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void GridManager::RotateSelectionOutline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_RotateSelectionOutline_mB8ED5D010AAEBB4789AFCCE735AE7C3565B04929 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, bool ___CW0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GridManager/<CreateHexagons>d__37::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateHexagonsU3Ed__37_U3CU3Em__Finally1_m6C4B1E0C63950A865ABB9E3BDDAB5FA683B47899 (U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * __this, const RuntimeMethod* method);
// System.Single GridManager::CoordinateXOfFirstColumn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GridManager_CoordinateXOfFirstColumn_m38E3B7C4095A724709F65FFFD0DB3E39852B523A (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mBD93211DA0D7B29006CFA30014093BAFEFB1BA21 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m395E8296B15F96587420FD49B2A105D109464C22_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void HexagonTile::SetBombHexagon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_SetBombHexagon_mE21635FC8DFD31D140DDE9E4DD2AD35F0544D641 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method);
// System.Void HexagonTile::SettingHexagonColour(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_SettingHexagonColour_m463AA510C5E21D23307A6E42E8BD1EF4AD227B8D (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newColour0, const RuntimeMethod* method);
// System.Void HexagonTile::AlterHexagonGridPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_AlterHexagonGridPosition_m3D0796FF2846F0B0C2CCD6570D4DA691BE5A9DBE (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newCoordinate0, const RuntimeMethod* method);
// System.Void GridManager/<CreateHexagons>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateHexagonsU3Ed__37_System_IDisposable_Dispose_mFB210D6834C85C0917B407B4A80A11F0558BDAD8 (U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void GridManager::TurnHexagons(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_TurnHexagons_mC670078C5FB17888ABDBF34C5EB941235879346F (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, bool ___CW0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<HexagonTile> GridManager::CheckScoringHexagons(System.Collections.Generic.List`1<System.Collections.Generic.List`1<HexagonTile>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * GridManager_CheckScoringHexagons_m9811F82D4E33D6672E7BB3C29DB410BFB5E57C8E (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * ___checkList0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Int32> GridManager::ScoreHexagons(System.Collections.Generic.List`1<HexagonTile>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * GridManager_ScoreHexagons_mA8188BEBF79EA4DFBEF3EB15DA51E343D17FAA19 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * ___list0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ConstantClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantClass__ctor_m31AB7516882FF38B31F5DCC7912ABCD8AF7E7942 (ConstantClass_tF10F2CC1BD0CB405B9C8A5AEC335B562C3CAF4C5 * __this, const RuntimeMethod* method)
{
	{
		// protected readonly Vector3 _hexagonOutlineDimensions = new Vector3(0.685f, 0.685f, 0.685f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.685000002f), (0.685000002f), (0.685000002f), /*hidden argument*/NULL);
		__this->set__hexagonOutlineDimensions_24(L_0);
		// protected readonly Vector2 _hexagonInitialPosition = new Vector3(0, 5.5f, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (5.5f), (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		__this->set__hexagonInitialPosition_25(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GridManager::SettingGridWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SettingGridWidth_m0ACD924C53724BA0ADB9C9FDE35680E36DB1DA0A (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___width0, const RuntimeMethod* method)
{
	{
		// gridWidth = width;
		int32_t L_0 = ___width0;
		__this->set_gridWidth_33(L_0);
		// }
		return;
	}
}
// System.Void GridManager::SettingGridHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SettingGridHeight_mB56A5A88383252A841FA4936C19B08F557D4C6B5 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___height0, const RuntimeMethod* method)
{
	{
		// gridHeight = height;
		int32_t L_0 = ___height0;
		__this->set_gridHeight_32(L_0);
		// }
		return;
	}
}
// System.Void GridManager::SettingColourList(System.Collections.Generic.List`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SettingColourList_m8848E7343161EFEFD52E14B02501688DC558EFBA (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___colors0, const RuntimeMethod* method)
{
	{
		// colourList = colors;
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_0 = ___colors0;
		__this->set_colourList_42(L_0);
		// }
		return;
	}
}
// System.Void GridManager::SettingBombsAway()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SettingBombsAway_mF34F08AB84FF982CA76130954576EAF3D886C1B3 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// bombsAway = true;
		__this->set_bombsAway_35((bool)1);
		// }
		return;
	}
}
// System.Int32 GridManager::GettingGridWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridManager_GettingGridWidth_mFBCB3948062D10F67DD2F3364BDE00E878E8C115 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// return gridWidth;
		int32_t L_0 = __this->get_gridWidth_33();
		return L_0;
	}
}
// System.Int32 GridManager::GettingGridHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridManager_GettingGridHeight_mC2D7974B44D2431F019406AC9BD52356DC7B9640 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// return gridHeight;
		int32_t L_0 = __this->get_gridHeight_32();
		return L_0;
	}
}
// HexagonTile GridManager::GettingSelectedHexagonTile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * GridManager_GettingSelectedHexagonTile_m42CB0FE45DB627774E01D8DD52E153D7C706788C (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// return selectedHexagonTile;
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_0 = __this->get_selectedHexagonTile_38();
		return L_0;
	}
}
// System.Void GridManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_Awake_m66D707CD8B7EEDA5C04ED846D28E425136A53678 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = ((GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields*)il2cpp_codegen_static_fields_for(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var))->get_instance_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		((GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields*)il2cpp_codegen_static_fields_for(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var))->set_instance_26(__this);
		// }
		return;
	}

IL_0014:
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_Start_m7186B78066068856342E44023A308EBE161C73D0 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m07864E7345DB29582ECB31D4B6C4A9B1BD248B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD82A26999FA42FE8089B437661174BDEB67C8308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameOver = false;
		__this->set_gameOver_36((bool)0);
		// bombsAway = false;
		__this->set_bombsAway_35((bool)0);
		// hexagonRotateStatus = false;
		__this->set_hexagonRotateStatus_43((bool)0);
		// hexagonCreationStatus = false;
		__this->set_hexagonCreationStatus_45((bool)0);
		// hexagonScoringStatus = false;
		__this->set_hexagonScoringStatus_44((bool)0);
		// bombHexagons = new List<HexagonTile>();
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_0 = (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *)il2cpp_codegen_object_new(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308_il2cpp_TypeInfo_var);
		List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3(L_0, /*hidden argument*/List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3_RuntimeMethod_var);
		__this->set_bombHexagons_41(L_0);
		// selectedTrio = new List<HexagonTile>();
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_1 = (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *)il2cpp_codegen_object_new(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308_il2cpp_TypeInfo_var);
		List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3(L_1, /*hidden argument*/List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3_RuntimeMethod_var);
		__this->set_selectedTrio_40(L_1);
		// gameGrid = new List<List<HexagonTile>>();
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_2 = (List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 *)il2cpp_codegen_object_new(List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8_il2cpp_TypeInfo_var);
		List_1__ctor_m07864E7345DB29582ECB31D4B6C4A9B1BD248B0C(L_2, /*hidden argument*/List_1__ctor_m07864E7345DB29582ECB31D4B6C4A9B1BD248B0C_RuntimeMethod_var);
		__this->set_gameGrid_39(L_2);
		// }
		return;
	}
}
// System.Void GridManager::InitializationOfGameGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_InitializationOfGameGrid_m3089EA99C89F5AF8AE7CC48F217B25B17260094C (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0D81CEB984AC50383713C1A0CD55F060D8FD1CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD82A26999FA42FE8089B437661174BDEB67C8308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// List<int> minusCells = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_0 = L_0;
		// for (int n = 0; n < GettingGridWidth(); n++)
		V_1 = 0;
		goto IL_0036;
	}

IL_000a:
	{
		// for (int m = 0; m < GettingGridHeight(); m++)
		V_2 = 0;
		goto IL_0019;
	}

IL_000e:
	{
		// minusCells.Add(n);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F(L_1, L_2, /*hidden argument*/List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_RuntimeMethod_var);
		// for (int m = 0; m < GettingGridHeight(); m++)
		int32_t L_3 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0019:
	{
		// for (int m = 0; m < GettingGridHeight(); m++)
		int32_t L_4 = V_2;
		int32_t L_5;
		L_5 = GridManager_GettingGridHeight_mC2D7974B44D2431F019406AC9BD52356DC7B9640_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000e;
		}
	}
	{
		// gameGrid.Add(new List<HexagonTile>());
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_6 = __this->get_gameGrid_39();
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_7 = (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *)il2cpp_codegen_object_new(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308_il2cpp_TypeInfo_var);
		List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3(L_7, /*hidden argument*/List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_Add_m0D81CEB984AC50383713C1A0CD55F060D8FD1CA1(L_6, L_7, /*hidden argument*/List_1_Add_m0D81CEB984AC50383713C1A0CD55F060D8FD1CA1_RuntimeMethod_var);
		// for (int n = 0; n < GettingGridWidth(); n++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0036:
	{
		// for (int n = 0; n < GettingGridWidth(); n++)
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = GridManager_GettingGridWidth_mFBCB3948062D10F67DD2F3364BDE00E878E8C115_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000a;
		}
	}
	{
		// StartCoroutine(CreateHexagons(minusCells, CreateGridWithColour()));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_11 = V_0;
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_12;
		L_12 = GridManager_CreateGridWithColour_mCEA0C26536BC9A44B11E88533E453B7FA85CED9B(__this, /*hidden argument*/NULL);
		RuntimeObject* L_13;
		L_13 = GridManager_CreateHexagons_m044E084EC5E7BADD38CF095AD009AE405B1E50E9(__this, L_11, L_12, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_14;
		L_14 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridManager::SelectHexagonTrio(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_SelectHexagonTrio_mA1D435952EE3A0CC8AAA0A6B8281E4C489E85171 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m681285214837548C3BE4B841BDBB06AF8E9CDCE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_mE42EE4AE438138933F05703057D35A68DAC6F26D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (selectedHexagonTile == null || !selectedHexagonTile.GetComponent<Collider2D>().Equals(collider))
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_0 = __this->get_selectedHexagonTile_38();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_2 = __this->get_selectedHexagonTile_38();
		NullCheck(L_2);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3;
		L_3 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m681285214837548C3BE4B841BDBB06AF8E9CDCE6(L_2, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m681285214837548C3BE4B841BDBB06AF8E9CDCE6_RuntimeMethod_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collider0;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		if (L_5)
		{
			goto IL_0069;
		}
	}

IL_0021:
	{
		// selectedHexagonTile = collider.gameObject.GetComponent<HexagonTile>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6 = ___collider0;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_8;
		L_8 = GameObject_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_mE42EE4AE438138933F05703057D35A68DAC6F26D(L_7, /*hidden argument*/GameObject_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_mE42EE4AE438138933F05703057D35A68DAC6F26D_RuntimeMethod_var);
		__this->set_selectedHexagonTile_38(L_8);
		// selectedCoordinates.x = selectedHexagonTile.GettingHexagonX();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_9 = __this->get_address_of_selectedCoordinates_37();
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_10 = __this->get_selectedHexagonTile_38();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = HexagonTile_GettingHexagonX_m77AA2DAC15C6631CA3985B953CB34BCE4C4A50B5_inline(L_10, /*hidden argument*/NULL);
		L_9->set_x_0(((float)((float)L_11)));
		// selectedCoordinates.y = selectedHexagonTile.GettingHexagonY();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_selectedCoordinates_37();
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_13 = __this->get_selectedHexagonTile_38();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = HexagonTile_GettingHexagonY_mEC4FFBCD04D7A28D7D0DD20C261AAA03E1E1B5AC_inline(L_13, /*hidden argument*/NULL);
		L_12->set_y_1(((float)((float)L_14)));
		// selectionStatus = 0;
		__this->set_selectionStatus_34(0);
		// }
		goto IL_0082;
	}

IL_0069:
	{
		// selectionStatus = (++selectionStatus) % _selectionStatusCount;
		int32_t L_15 = __this->get_selectionStatus_34();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = V_0;
		__this->set_selectionStatus_34(L_16);
		int32_t L_17 = V_0;
		__this->set_selectionStatus_34(((int32_t)((int32_t)L_17%(int32_t)6)));
	}

IL_0082:
	{
		// DestroyOutline();
		GridManager_DestroyOutline_m4B6336B1CA01C26DD10B84B4EF171AA02AA77864(__this, /*hidden argument*/NULL);
		// CreateOutline();
		GridManager_CreateOutline_m93AC4491D19B26CF46D60B350E4E8227016F0338(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GridManager::RotateSelectionOutline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_RotateSelectionOutline_mB8ED5D010AAEBB4789AFCCE735AE7C3565B04929 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, bool ___CW0, const RuntimeMethod* method)
{
	{
		// DestroyOutline();
		GridManager_DestroyOutline_m4B6336B1CA01C26DD10B84B4EF171AA02AA77864(__this, /*hidden argument*/NULL);
		// StartCoroutine(RotationCoroutine(CW));
		bool L_0 = ___CW0;
		RuntimeObject* L_1;
		L_1 = GridManager_RotationCoroutine_m9115C8818FC352A3F3894C73854B624489749F71(__this, L_0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean GridManager::OnColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridManager_OnColumn_m9B2EA2EB87DBC2139A725B796C6825383FEF05F8 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	{
		// int middleColumnIndex = GettingGridWidth() / _half;
		int32_t L_0;
		L_0 = GridManager_GettingGridWidth_mFBCB3948062D10F67DD2F3364BDE00E878E8C115_inline(__this, /*hidden argument*/NULL);
		// return (middleColumnIndex % 2 == n % 2);
		int32_t L_1 = ___n0;
		return (bool)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)2))%(int32_t)2))) == ((int32_t)((int32_t)((int32_t)L_1%(int32_t)2))))? 1 : 0);
	}
}
// System.Boolean GridManager::ReadyForInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridManager_ReadyForInput_mC9CA5E5E8921B37FDA339A22C2872849B7BEA305 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// return !hexagonCreationStatus && !hexagonRotateStatus && !hexagonScoringStatus && !gameOver;
		bool L_0 = __this->get_hexagonCreationStatus_45();
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = __this->get_hexagonRotateStatus_43();
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		bool L_2 = __this->get_hexagonScoringStatus_44();
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		bool L_3 = __this->get_gameOver_36();
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Single GridManager::CoordinateXOfFirstColumn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GridManager_CoordinateXOfFirstColumn_m38E3B7C4095A724709F65FFFD0DB3E39852B523A (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// return gridWidth / _half * -_horizontalHexagonDistance;
		int32_t L_0 = __this->get_gridWidth_33();
		return ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)((int32_t)L_0/(int32_t)2)))), (float)(-0.444999993f)));
	}
}
// System.Boolean GridManager::IsPositionGameGridValid(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridManager_IsPositionGameGridValid_m324AAF4737162E55CAB85F3F10F8E2A3D395C384 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method)
{
	{
		// return position.x >= _zero && position.x < GettingGridWidth() && position.y >= _zero && position.y < GettingGridHeight();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___position0;
		float L_1 = L_0.get_x_0();
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___position0;
		float L_3 = L_2.get_x_0();
		int32_t L_4;
		L_4 = GridManager_GettingGridWidth_mFBCB3948062D10F67DD2F3364BDE00E878E8C115_inline(__this, /*hidden argument*/NULL);
		if ((!(((float)L_3) < ((float)((float)((float)L_4))))))
		{
			goto IL_0039;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___position0;
		float L_6 = L_5.get_y_1();
		if ((!(((float)L_6) >= ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___position0;
		float L_8 = L_7.get_y_1();
		int32_t L_9;
		L_9 = GridManager_GettingGridHeight_mC2D7974B44D2431F019406AC9BD52356DC7B9640_inline(__this, /*hidden argument*/NULL);
		return (bool)((((float)L_8) < ((float)((float)((float)L_9))))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
// System.Collections.IEnumerator GridManager::CreateHexagons(System.Collections.Generic.List`1<System.Int32>,System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GridManager_CreateHexagons_m044E084EC5E7BADD38CF095AD009AE405B1E50E9 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___columns0, List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * ___colourSeed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * L_0 = (U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 *)il2cpp_codegen_object_new(U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1_il2cpp_TypeInfo_var);
		U3CCreateHexagonsU3Ed__37__ctor_m8FA52491C4006BE8A91AF1A31AB098F273C67DCC(L_0, 0, /*hidden argument*/NULL);
		U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * L_2 = L_1;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = ___columns0;
		NullCheck(L_2);
		L_2->set_columns_3(L_3);
		U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * L_4 = L_2;
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_5 = ___colourSeed1;
		NullCheck(L_4);
		L_4->set_colourSeed_4(L_5);
		return L_4;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Color>> GridManager::CreateGridWithColour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * GridManager_CreateGridWithColour_mCEA0C26536BC9A44B11E88533E453B7FA85CED9B (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC993E22DFDCE8CB601D6144F97D02326AE4A358D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA574E9186DBB54BF8D9F093F65ADBA23AC6D0FE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m2F9463338469DE9149CE9103A2ED330309218743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// List<List<Color>> colour = new List<List<Color>>();
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_0 = (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 *)il2cpp_codegen_object_new(List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6_il2cpp_TypeInfo_var);
		List_1__ctor_mA574E9186DBB54BF8D9F093F65ADBA23AC6D0FE0(L_0, /*hidden argument*/List_1__ctor_mA574E9186DBB54BF8D9F093F65ADBA23AC6D0FE0_RuntimeMethod_var);
		V_0 = L_0;
		// List<Color> checkColourList = new List<Color>();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_1 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)il2cpp_codegen_object_new(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1(L_1, /*hidden argument*/List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		// bool exit = true;
		V_1 = (bool)1;
		// for (int n = 0; n < GettingGridWidth(); n++)
		V_2 = 0;
		goto IL_00f6;
	}

IL_0015:
	{
		// colour.Add(new List<Color>());
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_2 = V_0;
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_3 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)il2cpp_codegen_object_new(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1(L_3, /*hidden argument*/List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_Add_mC993E22DFDCE8CB601D6144F97D02326AE4A358D(L_2, L_3, /*hidden argument*/List_1_Add_mC993E22DFDCE8CB601D6144F97D02326AE4A358D_RuntimeMethod_var);
		// for (int m = 0; m < GettingGridHeight(); m++)
		V_3 = 0;
		goto IL_00e6;
	}

IL_0027:
	{
		// colour[n].Add(colourList[(int)(Random.value * _seed) % colourList.Count]);
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_6;
		L_6 = List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_RuntimeMethod_var);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_7 = __this->get_colourList_42();
		float L_8;
		L_8 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_9 = __this->get_colourList_42();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_inline(L_9, /*hidden argument*/List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var);
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_8, (float)(75486.0f)))))%(int32_t)L_10)), /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_6, L_11, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
	}

IL_0056:
	{
		// exit = true;
		V_1 = (bool)1;
		// colour[n][m] = colourList[(int)(Random.value * _seed) % colourList.Count];
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_14;
		L_14 = List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_RuntimeMethod_var);
		int32_t L_15 = V_3;
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_16 = __this->get_colourList_42();
		float L_17;
		L_17 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_18 = __this->get_colourList_42();
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_inline(L_18, /*hidden argument*/List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var);
		NullCheck(L_16);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_16, ((int32_t)((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_17, (float)(75486.0f)))))%(int32_t)L_19)), /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_set_Item_m2F9463338469DE9149CE9103A2ED330309218743(L_14, L_15, L_20, /*hidden argument*/List_1_set_Item_m2F9463338469DE9149CE9103A2ED330309218743_RuntimeMethod_var);
		// if (n - 1 >= _zero && m - 1 >= _zero)
		int32_t L_21 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1))) < ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_22 = V_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1))) < ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		// if (colour[n][m - 1] == colour[n][m] || colour[n - 1][m] == colour[n][m])
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_25;
		L_25 = List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_RuntimeMethod_var);
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_25, ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)), /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_28 = V_0;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_30;
		L_30 = List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_inline(L_28, L_29, /*hidden argument*/List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_RuntimeMethod_var);
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		bool L_33;
		L_33 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_27, L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00da;
		}
	}
	{
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_34 = V_0;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_36;
		L_36 = List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_inline(L_34, ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1)), /*hidden argument*/List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_RuntimeMethod_var);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38;
		L_38 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_36, L_37, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_39 = V_0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_41;
		L_41 = List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_inline(L_39, L_40, /*hidden argument*/List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_RuntimeMethod_var);
		int32_t L_42 = V_3;
		NullCheck(L_41);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43;
		L_43 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_41, L_42, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		bool L_44;
		L_44 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_38, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00dc;
		}
	}

IL_00da:
	{
		// exit = false;
		V_1 = (bool)0;
	}

IL_00dc:
	{
		// } while (!exit);
		bool L_45 = V_1;
		if (!L_45)
		{
			goto IL_0056;
		}
	}
	{
		// for (int m = 0; m < GettingGridHeight(); m++)
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00e6:
	{
		// for (int m = 0; m < GettingGridHeight(); m++)
		int32_t L_47 = V_3;
		int32_t L_48;
		L_48 = GridManager_GettingGridHeight_mC2D7974B44D2431F019406AC9BD52356DC7B9640_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_0027;
		}
	}
	{
		// for (int n = 0; n < GettingGridWidth(); n++)
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00f6:
	{
		// for (int n = 0; n < GettingGridWidth(); n++)
		int32_t L_50 = V_2;
		int32_t L_51;
		L_51 = GridManager_GettingGridWidth_mFBCB3948062D10F67DD2F3364BDE00E878E8C115_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0015;
		}
	}
	{
		// return colour;
		List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_52 = V_0;
		return L_52;
	}
}
// System.Void GridManager::FindHexagonTrio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_FindHexagonTrio_m3A0D7D8891C0B2D84955C11B06043CFADF0E3F77 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_m9556678AC5A748EA40A4E8890FE0857DF39537A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD20953BDD3354FF3907DF993EAE64D8BEFAC369D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD82A26999FA42FE8089B437661174BDEB67C8308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// List<HexagonTile> value = new List<HexagonTile>();
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_0 = (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *)il2cpp_codegen_object_new(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308_il2cpp_TypeInfo_var);
		List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3(L_0, /*hidden argument*/List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3_RuntimeMethod_var);
		// selectedHexagonTile = gameGrid[(int)selectedCoordinates.x][(int)selectedCoordinates.y];
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_1 = __this->get_gameGrid_39();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = __this->get_address_of_selectedCoordinates_37();
		float L_3 = L_2->get_x_0();
		NullCheck(L_1);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_4;
		L_4 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_1, ((int32_t)((int32_t)L_3)), /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_selectedCoordinates_37();
		float L_6 = L_5->get_y_1();
		NullCheck(L_4);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_7;
		L_7 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_4, ((int32_t)((int32_t)L_6)), /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		__this->set_selectedHexagonTile_38(L_7);
		// FindNeighbouringHexagonsofSelectedHexagon(out firstPosition, out secondPosition);
		GridManager_FindNeighbouringHexagonsofSelectedHexagon_m4A7F758DFF81CC5D049C8FEB78AD939FDBF91992(__this, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		// selectedTrio.Clear();
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_8 = __this->get_selectedTrio_40();
		NullCheck(L_8);
		List_1_Clear_mD20953BDD3354FF3907DF993EAE64D8BEFAC369D(L_8, /*hidden argument*/List_1_Clear_mD20953BDD3354FF3907DF993EAE64D8BEFAC369D_RuntimeMethod_var);
		// selectedTrio.Add(selectedHexagonTile);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_9 = __this->get_selectedTrio_40();
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_10 = __this->get_selectedHexagonTile_38();
		NullCheck(L_9);
		List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_9, L_10, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
		// selectedTrio.Add(gameGrid[(int)firstPosition.x][(int)firstPosition.y].GetComponent<HexagonTile>());
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_11 = __this->get_selectedTrio_40();
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_12 = __this->get_gameGrid_39();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_0;
		float L_14 = L_13.get_x_0();
		NullCheck(L_12);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_15;
		L_15 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_12, ((int32_t)((int32_t)L_14)), /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = V_0;
		float L_17 = L_16.get_y_1();
		NullCheck(L_15);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_18;
		L_18 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_15, ((int32_t)((int32_t)L_17)), /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		NullCheck(L_18);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_19;
		L_19 = Component_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_m9556678AC5A748EA40A4E8890FE0857DF39537A3(L_18, /*hidden argument*/Component_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_m9556678AC5A748EA40A4E8890FE0857DF39537A3_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_11, L_19, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
		// selectedTrio.Add(gameGrid[(int)secondPosition.x][(int)secondPosition.y].GetComponent<HexagonTile>());
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_20 = __this->get_selectedTrio_40();
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_21 = __this->get_gameGrid_39();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = V_1;
		float L_23 = L_22.get_x_0();
		NullCheck(L_21);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_24;
		L_24 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_21, ((int32_t)((int32_t)L_23)), /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25 = V_1;
		float L_26 = L_25.get_y_1();
		NullCheck(L_24);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_27;
		L_27 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_24, ((int32_t)((int32_t)L_26)), /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		NullCheck(L_27);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_28;
		L_28 = Component_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_m9556678AC5A748EA40A4E8890FE0857DF39537A3(L_27, /*hidden argument*/Component_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_m9556678AC5A748EA40A4E8890FE0857DF39537A3_RuntimeMethod_var);
		NullCheck(L_20);
		List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_20, L_28, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GridManager::FindNeighbouringHexagonsofSelectedHexagon(UnityEngine.Vector2&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_FindNeighbouringHexagonsofSelectedHexagon_m4A7F758DFF81CC5D049C8FEB78AD939FDBF91992 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___first0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___second1, const RuntimeMethod* method)
{
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// HexagonTile.NeighbouringHexagons neighbours = selectedHexagonTile.GetNeighbouringHexagons();
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_0 = __this->get_selectedHexagonTile_38();
		NullCheck(L_0);
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_1;
		L_1 = HexagonTile_GetNeighbouringHexagons_m96C78BA962998CF9048E4057B8D2BC4192E3346D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// bool breakTheLoop = false;
		V_1 = (bool)0;
	}

IL_000e:
	{
		// switch (selectionStatus)
		int32_t L_2 = __this->get_selectionStatus_34();
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0089;
			}
			case 4:
			{
				goto IL_00a3;
			}
			case 5:
			{
				goto IL_00bd;
			}
		}
	}
	{
		goto IL_00d7;
	}

IL_0038:
	{
		// case 0: first = neighbours.up; second = neighbours.upRight; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = ___first0;
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_5 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = L_5.get_up_0();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_4 = L_6;
		// case 0: first = neighbours.up; second = neighbours.upRight; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = ___second1;
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_8 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = L_8.get_upRight_4();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_7 = L_9;
		// case 0: first = neighbours.up; second = neighbours.upRight; break;
		goto IL_00ed;
	}

IL_0055:
	{
		// case 1: first = neighbours.upRight; second = neighbours.downRight; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = ___first0;
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_11 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = L_11.get_upRight_4();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_10 = L_12;
		// case 1: first = neighbours.upRight; second = neighbours.downRight; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_13 = ___second1;
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_14 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = L_14.get_downRight_5();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_13 = L_15;
		// case 1: first = neighbours.upRight; second = neighbours.downRight; break;
		goto IL_00ed;
	}

IL_006f:
	{
		// case 2: first = neighbours.downRight; second = neighbours.down; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = ___first0;
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_17 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = L_17.get_downRight_5();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_16 = L_18;
		// case 2: first = neighbours.downRight; second = neighbours.down; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_19 = ___second1;
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_20 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = L_20.get_down_1();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_19 = L_21;
		// case 2: first = neighbours.downRight; second = neighbours.down; break;
		goto IL_00ed;
	}

IL_0089:
	{
		// case 3: first = neighbours.down; second = neighbours.downLeft; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = ___first0;
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_23 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = L_23.get_down_1();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_22 = L_24;
		// case 3: first = neighbours.down; second = neighbours.downLeft; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_25 = ___second1;
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_26 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = L_26.get_downLeft_3();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_25 = L_27;
		// case 3: first = neighbours.down; second = neighbours.downLeft; break;
		goto IL_00ed;
	}

IL_00a3:
	{
		// case 4: first = neighbours.downLeft; second = neighbours.upLeft; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_28 = ___first0;
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_29 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = L_29.get_downLeft_3();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_28 = L_30;
		// case 4: first = neighbours.downLeft; second = neighbours.upLeft; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_31 = ___second1;
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_32 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = L_32.get_upLeft_2();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_31 = L_33;
		// case 4: first = neighbours.downLeft; second = neighbours.upLeft; break;
		goto IL_00ed;
	}

IL_00bd:
	{
		// case 5: first = neighbours.upLeft; second = neighbours.up; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_34 = ___first0;
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_35 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = L_35.get_upLeft_2();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_34 = L_36;
		// case 5: first = neighbours.upLeft; second = neighbours.up; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_37 = ___second1;
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_38 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39 = L_38.get_up_0();
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_37 = L_39;
		// case 5: first = neighbours.upLeft; second = neighbours.up; break;
		goto IL_00ed;
	}

IL_00d7:
	{
		// default: first = Vector2.zero; second = Vector2.zero; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_40 = ___first0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
		L_41 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_40 = L_41;
		// default: first = Vector2.zero; second = Vector2.zero; break;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_42 = ___second1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		L_43 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_42 = L_43;
	}

IL_00ed:
	{
		// if (first.x < _zero || first.x >= gridWidth || first.y < _zero || first.y >= gridHeight || second.x < _zero || second.x >= gridWidth || second.y < _zero || second.y >= gridHeight)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_44 = ___first0;
		float L_45 = L_44->get_x_0();
		if ((((float)L_45) < ((float)(0.0f))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_46 = ___first0;
		float L_47 = L_46->get_x_0();
		int32_t L_48 = __this->get_gridWidth_33();
		if ((((float)L_47) >= ((float)((float)((float)L_48)))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_49 = ___first0;
		float L_50 = L_49->get_y_1();
		if ((((float)L_50) < ((float)(0.0f))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_51 = ___first0;
		float L_52 = L_51->get_y_1();
		int32_t L_53 = __this->get_gridHeight_32();
		if ((((float)L_52) >= ((float)((float)((float)L_53)))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_54 = ___second1;
		float L_55 = L_54->get_x_0();
		if ((((float)L_55) < ((float)(0.0f))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_56 = ___second1;
		float L_57 = L_56->get_x_0();
		int32_t L_58 = __this->get_gridWidth_33();
		if ((((float)L_57) >= ((float)((float)((float)L_58)))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_59 = ___second1;
		float L_60 = L_59->get_y_1();
		if ((((float)L_60) < ((float)(0.0f))))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_61 = ___second1;
		float L_62 = L_61->get_y_1();
		int32_t L_63 = __this->get_gridHeight_32();
		if ((!(((float)L_62) >= ((float)((float)((float)L_63))))))
		{
			goto IL_0178;
		}
	}

IL_015d:
	{
		// selectionStatus = (++selectionStatus) % _selectionStatusCount;
		int32_t L_64 = __this->get_selectionStatus_34();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		int32_t L_65 = V_2;
		__this->set_selectionStatus_34(L_65);
		int32_t L_66 = V_2;
		__this->set_selectionStatus_34(((int32_t)((int32_t)L_66%(int32_t)6)));
		// }
		goto IL_017a;
	}

IL_0178:
	{
		// breakTheLoop = true;
		V_1 = (bool)1;
	}

IL_017a:
	{
		// } while (!breakTheLoop);
		bool L_67 = V_1;
		if (!L_67)
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GridManager::DestroyOutline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_DestroyOutline_m4B6336B1CA01C26DD10B84B4EF171AA02AA77864 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (outlineParent.transform.childCount > _zero)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_outlineParent_29();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// foreach (Transform child in outlineParent.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_outlineParent_29();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0026:
		{
			// foreach (Transform child in outlineParent.transform)
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			RuntimeObject * L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			// Destroy(child.gameObject);
			NullCheck(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_7, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
			L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_7, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
		}

IL_003b:
		{
			// foreach (Transform child in outlineParent.transform)
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			bool L_10;
			L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0026;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_1;
			if (!L_12)
			{
				goto IL_0055;
			}
		}

IL_004f:
		{
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
		}

IL_0055:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void GridManager::CreateOutline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_CreateOutline_m93AC4491D19B26CF46D60B350E4E8227016F0338 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCA1FE16579F7668F95ABD8701F5967BF41634A12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9265352A8F9D83E0F347691ADD9E059330948D0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m97298327F440E3FB2703B7BE9F00BCF2B261C57D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4A1FCDA3B03237E21CD4FFBAC012F4897589257F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m5C5AF5A06ED52ADC07830A61F54A3943D2A75F65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3F5774BB3B28CA2A64FF5039E35CDCEAA8FE2DD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3429D2074B67F2169E16F3DCB9FB77097C93FBC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// FindHexagonTrio();
		GridManager_FindHexagonTrio_m3A0D7D8891C0B2D84955C11B06043CFADF0E3F77(__this, /*hidden argument*/NULL);
		// foreach (HexagonTile outlinedHexagon in selectedTrio)
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_0 = __this->get_selectedTrio_40();
		NullCheck(L_0);
		Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D  L_1;
		L_1 = List_1_GetEnumerator_m3F5774BB3B28CA2A64FF5039E35CDCEAA8FE2DD3(L_0, /*hidden argument*/List_1_GetEnumerator_m3F5774BB3B28CA2A64FF5039E35CDCEAA8FE2DD3_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0146;
		}

IL_0017:
		{
			// foreach (HexagonTile outlinedHexagon in selectedTrio)
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_2;
			L_2 = Enumerator_get_Current_m97298327F440E3FB2703B7BE9F00BCF2B261C57D_inline((Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D *)(&V_0), /*hidden argument*/Enumerator_get_Current_m97298327F440E3FB2703B7BE9F00BCF2B261C57D_RuntimeMethod_var);
			// GameObject obj = outlinedHexagon.gameObject;
			NullCheck(L_2);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
			L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			// GameObject outline = new GameObject("Outline");
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
			GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_4, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, /*hidden argument*/NULL);
			V_2 = L_4;
			// GameObject innerOutline = new GameObject("Inner Object");
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
			GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_5, _stringLiteral3429D2074B67F2169E16F3DCB9FB77097C93FBC9, /*hidden argument*/NULL);
			// outline.transform.parent = outlineParent.transform;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_2;
			NullCheck(L_6);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
			L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_outlineParent_29();
			NullCheck(L_8);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
			L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_7, L_9, /*hidden argument*/NULL);
			// outline.AddComponent<SpriteRenderer>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_2;
			NullCheck(L_10);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_11;
			L_11 = GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4A1FCDA3B03237E21CD4FFBAC012F4897589257F(L_10, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4A1FCDA3B03237E21CD4FFBAC012F4897589257F_RuntimeMethod_var);
			// outline.GetComponent<SpriteRenderer>().sprite = outlineSprite;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_2;
			NullCheck(L_12);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_13;
			L_13 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m5C5AF5A06ED52ADC07830A61F54A3943D2A75F65(L_12, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m5C5AF5A06ED52ADC07830A61F54A3943D2A75F65_RuntimeMethod_var);
			Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_14 = __this->get_outlineSprite_30();
			NullCheck(L_13);
			SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_13, L_14, /*hidden argument*/NULL);
			// outline.GetComponent<SpriteRenderer>().color = Color.white;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_2;
			NullCheck(L_15);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_16;
			L_16 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m5C5AF5A06ED52ADC07830A61F54A3943D2A75F65(L_15, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m5C5AF5A06ED52ADC07830A61F54A3943D2A75F65_RuntimeMethod_var);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
			L_17 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
			NullCheck(L_16);
			SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_16, L_17, /*hidden argument*/NULL);
			// outline.transform.position = new Vector3(obj.transform.position.x, obj.transform.position.y, -1);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_2;
			NullCheck(L_18);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
			L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_1;
			NullCheck(L_20);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
			L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
			L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
			float L_23 = L_22.get_x_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_1;
			NullCheck(L_24);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
			L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
			NullCheck(L_25);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
			L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
			float L_27 = L_26.get_y_3();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
			memset((&L_28), 0, sizeof(L_28));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), L_23, L_27, (-1.0f), /*hidden argument*/NULL);
			NullCheck(L_19);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_19, L_28, /*hidden argument*/NULL);
			// outline.transform.localScale = _hexagonOutlineDimensions;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = V_2;
			NullCheck(L_29);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
			L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = ((ConstantClass_tF10F2CC1BD0CB405B9C8A5AEC335B562C3CAF4C5 *)__this)->get__hexagonOutlineDimensions_24();
			NullCheck(L_30);
			Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_30, L_31, /*hidden argument*/NULL);
			// innerOutline.AddComponent<SpriteRenderer>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = L_5;
			NullCheck(L_32);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_33;
			L_33 = GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4A1FCDA3B03237E21CD4FFBAC012F4897589257F(L_32, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m4A1FCDA3B03237E21CD4FFBAC012F4897589257F_RuntimeMethod_var);
			// innerOutline.GetComponent<SpriteRenderer>().sprite = hexagonSprite;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = L_32;
			NullCheck(L_34);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_35;
			L_35 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m5C5AF5A06ED52ADC07830A61F54A3943D2A75F65(L_34, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m5C5AF5A06ED52ADC07830A61F54A3943D2A75F65_RuntimeMethod_var);
			Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_36 = __this->get_hexagonSprite_31();
			NullCheck(L_35);
			SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_35, L_36, /*hidden argument*/NULL);
			// innerOutline.GetComponent<SpriteRenderer>().color = obj.GetComponent<SpriteRenderer>().color;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = L_34;
			NullCheck(L_37);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
			L_38 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m5C5AF5A06ED52ADC07830A61F54A3943D2A75F65(L_37, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m5C5AF5A06ED52ADC07830A61F54A3943D2A75F65_RuntimeMethod_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = V_1;
			NullCheck(L_39);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_40;
			L_40 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m5C5AF5A06ED52ADC07830A61F54A3943D2A75F65(L_39, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m5C5AF5A06ED52ADC07830A61F54A3943D2A75F65_RuntimeMethod_var);
			NullCheck(L_40);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41;
			L_41 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_40, /*hidden argument*/NULL);
			NullCheck(L_38);
			SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_38, L_41, /*hidden argument*/NULL);
			// innerOutline.transform.position = new Vector3(obj.transform.position.x, obj.transform.position.y, -2);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = L_37;
			NullCheck(L_42);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
			L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = V_1;
			NullCheck(L_44);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
			L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
			NullCheck(L_45);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
			L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
			float L_47 = L_46.get_x_2();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = V_1;
			NullCheck(L_48);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
			L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
			L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
			float L_51 = L_50.get_y_3();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
			memset((&L_52), 0, sizeof(L_52));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_52), L_47, L_51, (-2.0f), /*hidden argument*/NULL);
			NullCheck(L_43);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_43, L_52, /*hidden argument*/NULL);
			// innerOutline.transform.localScale = obj.transform.localScale;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = L_42;
			NullCheck(L_53);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
			L_54 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_53, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = V_1;
			NullCheck(L_55);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
			L_56 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_55, /*hidden argument*/NULL);
			NullCheck(L_56);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
			L_57 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_56, /*hidden argument*/NULL);
			NullCheck(L_54);
			Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_54, L_57, /*hidden argument*/NULL);
			// innerOutline.transform.parent = outline.transform;
			NullCheck(L_53);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
			L_58 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_53, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = V_2;
			NullCheck(L_59);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
			L_60 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_59, /*hidden argument*/NULL);
			NullCheck(L_58);
			Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_58, L_60, /*hidden argument*/NULL);
		}

IL_0146:
		{
			// foreach (HexagonTile outlinedHexagon in selectedTrio)
			bool L_61;
			L_61 = Enumerator_MoveNext_m9265352A8F9D83E0F347691ADD9E059330948D0E((Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m9265352A8F9D83E0F347691ADD9E059330948D0E_RuntimeMethod_var);
			if (L_61)
			{
				goto IL_0017;
			}
		}

IL_0152:
		{
			IL2CPP_LEAVE(0x162, FINALLY_0154);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0154;
	}

FINALLY_0154:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCA1FE16579F7668F95ABD8701F5967BF41634A12((Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D *)(&V_0), /*hidden argument*/Enumerator_Dispose_mCA1FE16579F7668F95ABD8701F5967BF41634A12_RuntimeMethod_var);
		IL2CPP_END_FINALLY(340)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(340)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x162, IL_0162)
	}

IL_0162:
	{
		// }
		return;
	}
}
// System.Void GridManager::TurnHexagons(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_TurnHexagons_mC670078C5FB17888ABDBF34C5EB941235879346F (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, bool ___CW0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_8;
	memset((&V_8), 0, sizeof(V_8));
	HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * V_9 = NULL;
	HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * V_10 = NULL;
	HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * V_11 = NULL;
	{
		// first = selectedTrio[0];
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_0 = __this->get_selectedTrio_40();
		NullCheck(L_0);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_1;
		L_1 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		V_9 = L_1;
		// second = selectedTrio[1];
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_2 = __this->get_selectedTrio_40();
		NullCheck(L_2);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_3;
		L_3 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_2, 1, /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		V_10 = L_3;
		// third = selectedTrio[2];
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_4 = __this->get_selectedTrio_40();
		NullCheck(L_4);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_5;
		L_5 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_4, 2, /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		V_11 = L_5;
		// x1 = first.GettingHexagonX();
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_6 = V_9;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = HexagonTile_GettingHexagonX_m77AA2DAC15C6631CA3985B953CB34BCE4C4A50B5_inline(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// x2 = second.GettingHexagonX();
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_8 = V_10;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HexagonTile_GettingHexagonX_m77AA2DAC15C6631CA3985B953CB34BCE4C4A50B5_inline(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// x3 = third.GettingHexagonX();
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_10 = V_11;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = HexagonTile_GettingHexagonX_m77AA2DAC15C6631CA3985B953CB34BCE4C4A50B5_inline(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// y1 = first.GettingHexagonY();
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_12 = V_9;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HexagonTile_GettingHexagonY_mEC4FFBCD04D7A28D7D0DD20C261AAA03E1E1B5AC_inline(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// y2 = second.GettingHexagonY();
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_14 = V_10;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = HexagonTile_GettingHexagonY_mEC4FFBCD04D7A28D7D0DD20C261AAA03E1E1B5AC_inline(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		// y3 = third.GettingHexagonY();
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_16 = V_11;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = HexagonTile_GettingHexagonY_mEC4FFBCD04D7A28D7D0DD20C261AAA03E1E1B5AC_inline(L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// position1 = first.transform.position;
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_18 = V_9;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_20, /*hidden argument*/NULL);
		V_6 = L_21;
		// position2 = second.transform.position;
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_22 = V_10;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		// position3 = third.transform.position;
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_26 = V_11;
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_28, /*hidden argument*/NULL);
		V_8 = L_29;
		// if (CW)
		bool L_30 = ___CW0;
		if (!L_30)
		{
			goto IL_00fa;
		}
	}
	{
		// first.Rotate(x2, y2, position2);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_31 = V_9;
		int32_t L_32 = V_2;
		int32_t L_33 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = V_7;
		NullCheck(L_31);
		HexagonTile_Rotate_mADF53241FA895ABA946190BB7C43EF1A5102DA65(L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		// gameGrid[x2][y2] = first;
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_35 = __this->get_gameGrid_39();
		int32_t L_36 = V_2;
		NullCheck(L_35);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_37;
		L_37 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_35, L_36, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		int32_t L_38 = V_3;
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_39 = V_9;
		NullCheck(L_37);
		List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C(L_37, L_38, L_39, /*hidden argument*/List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C_RuntimeMethod_var);
		// second.Rotate(x3, y3, position3);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_40 = V_10;
		int32_t L_41 = V_4;
		int32_t L_42 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43 = V_8;
		NullCheck(L_40);
		HexagonTile_Rotate_mADF53241FA895ABA946190BB7C43EF1A5102DA65(L_40, L_41, L_42, L_43, /*hidden argument*/NULL);
		// gameGrid[x3][y3] = second;
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_44 = __this->get_gameGrid_39();
		int32_t L_45 = V_4;
		NullCheck(L_44);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_46;
		L_46 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_44, L_45, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		int32_t L_47 = V_5;
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_48 = V_10;
		NullCheck(L_46);
		List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C(L_46, L_47, L_48, /*hidden argument*/List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C_RuntimeMethod_var);
		// third.Rotate(x1, y1, position1);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_49 = V_11;
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52 = V_6;
		NullCheck(L_49);
		HexagonTile_Rotate_mADF53241FA895ABA946190BB7C43EF1A5102DA65(L_49, L_50, L_51, L_52, /*hidden argument*/NULL);
		// gameGrid[x1][y1] = third;
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_53 = __this->get_gameGrid_39();
		int32_t L_54 = V_0;
		NullCheck(L_53);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_55;
		L_55 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_53, L_54, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		int32_t L_56 = V_1;
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_57 = V_11;
		NullCheck(L_55);
		List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C(L_55, L_56, L_57, /*hidden argument*/List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C_RuntimeMethod_var);
		// }
		return;
	}

IL_00fa:
	{
		// first.Rotate(x3, y3, position3);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_58 = V_9;
		int32_t L_59 = V_4;
		int32_t L_60 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61 = V_8;
		NullCheck(L_58);
		HexagonTile_Rotate_mADF53241FA895ABA946190BB7C43EF1A5102DA65(L_58, L_59, L_60, L_61, /*hidden argument*/NULL);
		// gameGrid[x3][y3] = first;
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_62 = __this->get_gameGrid_39();
		int32_t L_63 = V_4;
		NullCheck(L_62);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_64;
		L_64 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_62, L_63, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		int32_t L_65 = V_5;
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_66 = V_9;
		NullCheck(L_64);
		List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C(L_64, L_65, L_66, /*hidden argument*/List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C_RuntimeMethod_var);
		// second.Rotate(x1, y1, position1);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_67 = V_10;
		int32_t L_68 = V_0;
		int32_t L_69 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_70 = V_6;
		NullCheck(L_67);
		HexagonTile_Rotate_mADF53241FA895ABA946190BB7C43EF1A5102DA65(L_67, L_68, L_69, L_70, /*hidden argument*/NULL);
		// gameGrid[x1][y1] = second;
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_71 = __this->get_gameGrid_39();
		int32_t L_72 = V_0;
		NullCheck(L_71);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_73;
		L_73 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_71, L_72, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		int32_t L_74 = V_1;
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_75 = V_10;
		NullCheck(L_73);
		List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C(L_73, L_74, L_75, /*hidden argument*/List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C_RuntimeMethod_var);
		// third.Rotate(x2, y2, position2);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_76 = V_11;
		int32_t L_77 = V_2;
		int32_t L_78 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_79 = V_7;
		NullCheck(L_76);
		HexagonTile_Rotate_mADF53241FA895ABA946190BB7C43EF1A5102DA65(L_76, L_77, L_78, L_79, /*hidden argument*/NULL);
		// gameGrid[x2][y2] = third;
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_80 = __this->get_gameGrid_39();
		int32_t L_81 = V_2;
		NullCheck(L_80);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_82;
		L_82 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_80, L_81, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		int32_t L_83 = V_3;
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_84 = V_11;
		NullCheck(L_82);
		List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C(L_82, L_83, L_84, /*hidden argument*/List_1_set_Item_mE16F2DA806FD869547D31328FAAEE09B8C38003C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<HexagonTile> GridManager::CheckScoringHexagons(System.Collections.Generic.List`1<System.Collections.Generic.List`1<HexagonTile>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * GridManager_CheckScoringHexagons_m9811F82D4E33D6672E7BB3C29DB410BFB5E57C8E (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * ___checkList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD20953BDD3354FF3907DF993EAE64D8BEFAC369D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m257C2BC80FEC9E5EBA84D29BE8C0BA0B87F58DA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD82A26999FA42FE8089B437661174BDEB67C8308_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * V_0 = NULL;
	List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * V_1 = NULL;
	HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * V_2 = NULL;
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// List<HexagonTile> neighbouringHexagonsList = new List<HexagonTile>();
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_0 = (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *)il2cpp_codegen_object_new(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308_il2cpp_TypeInfo_var);
		List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3(L_0, /*hidden argument*/List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3_RuntimeMethod_var);
		V_0 = L_0;
		// List<HexagonTile> scoringHexagonsList = new List<HexagonTile>();
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_1 = (List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *)il2cpp_codegen_object_new(List_1_tD82A26999FA42FE8089B437661174BDEB67C8308_il2cpp_TypeInfo_var);
		List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3(L_1, /*hidden argument*/List_1__ctor_m8559205BD74A3574109918A37DA621294CE71BF3_RuntimeMethod_var);
		V_1 = L_1;
		// for (int n = 0; n < checkList.Count; n++)
		V_5 = 0;
		goto IL_01f0;
	}

IL_0014:
	{
		// for (int m = 0; m < checkList[n].Count; m++)
		V_6 = 0;
		goto IL_01d6;
	}

IL_001c:
	{
		// currentHexagon = checkList[n][m];
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_2 = ___checkList0;
		int32_t L_3 = V_5;
		NullCheck(L_2);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_4;
		L_4 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		int32_t L_5 = V_6;
		NullCheck(L_4);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_6;
		L_6 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		V_2 = L_6;
		// currentColour = currentHexagon.GettingHexagonColour();
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_7 = V_2;
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = HexagonTile_GettingHexagonColour_mAF2A9A8C0D158C720841CB9F7E3E7AFC5FE113A6(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		// currentNeighbouringHexagons = currentHexagon.GetNeighbouringHexagons();
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_9 = V_2;
		NullCheck(L_9);
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_10;
		L_10 = HexagonTile_GetNeighbouringHexagons_m96C78BA962998CF9048E4057B8D2BC4192E3346D(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// if (IsPositionGameGridValid(currentNeighbouringHexagons.up)) 
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_11 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = L_11.get_up_0();
		bool L_13;
		L_13 = GridManager_IsPositionGameGridValid_m324AAF4737162E55CAB85F3F10F8E2A3D395C384(__this, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		// neighbouringHexagonsList.Add(gameGrid[(int)currentNeighbouringHexagons.up.x][(int)currentNeighbouringHexagons.up.y]);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_14 = V_0;
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_15 = __this->get_gameGrid_39();
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_16 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = L_16.get_up_0();
		float L_18 = L_17.get_x_0();
		NullCheck(L_15);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_19;
		L_19 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_15, ((int32_t)((int32_t)L_18)), /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_20 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = L_20.get_up_0();
		float L_22 = L_21.get_y_1();
		NullCheck(L_19);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_23;
		L_23 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_19, ((int32_t)((int32_t)L_22)), /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_14, L_23, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
		// }
		goto IL_0080;
	}

IL_0079:
	{
		// neighbouringHexagonsList.Add(null);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_24 = V_0;
		NullCheck(L_24);
		List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_24, (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 *)NULL, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
	}

IL_0080:
	{
		// if (IsPositionGameGridValid(currentNeighbouringHexagons.upRight))
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_25 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = L_25.get_upRight_4();
		bool L_27;
		L_27 = GridManager_IsPositionGameGridValid_m324AAF4737162E55CAB85F3F10F8E2A3D395C384(__this, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00be;
		}
	}
	{
		// neighbouringHexagonsList.Add(gameGrid[(int)currentNeighbouringHexagons.upRight.x][(int)currentNeighbouringHexagons.upRight.y]);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_28 = V_0;
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_29 = __this->get_gameGrid_39();
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_30 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = L_30.get_upRight_4();
		float L_32 = L_31.get_x_0();
		NullCheck(L_29);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_33;
		L_33 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_29, ((int32_t)((int32_t)L_32)), /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_34 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = L_34.get_upRight_4();
		float L_36 = L_35.get_y_1();
		NullCheck(L_33);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_37;
		L_37 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_33, ((int32_t)((int32_t)L_36)), /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		NullCheck(L_28);
		List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_28, L_37, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
		// }
		goto IL_00c5;
	}

IL_00be:
	{
		// neighbouringHexagonsList.Add(null);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_38 = V_0;
		NullCheck(L_38);
		List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_38, (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 *)NULL, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
	}

IL_00c5:
	{
		// if (IsPositionGameGridValid(currentNeighbouringHexagons.downRight))
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_39 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40 = L_39.get_downRight_5();
		bool L_41;
		L_41 = GridManager_IsPositionGameGridValid_m324AAF4737162E55CAB85F3F10F8E2A3D395C384(__this, L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0103;
		}
	}
	{
		// neighbouringHexagonsList.Add(gameGrid[(int)currentNeighbouringHexagons.downRight.x][(int)currentNeighbouringHexagons.downRight.y]);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_42 = V_0;
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_43 = __this->get_gameGrid_39();
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_44 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45 = L_44.get_downRight_5();
		float L_46 = L_45.get_x_0();
		NullCheck(L_43);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_47;
		L_47 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_43, ((int32_t)((int32_t)L_46)), /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_48 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49 = L_48.get_downRight_5();
		float L_50 = L_49.get_y_1();
		NullCheck(L_47);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_51;
		L_51 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_47, ((int32_t)((int32_t)L_50)), /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		NullCheck(L_42);
		List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_42, L_51, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
		// }
		goto IL_010a;
	}

IL_0103:
	{
		// neighbouringHexagonsList.Add(null);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_52 = V_0;
		NullCheck(L_52);
		List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_52, (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 *)NULL, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
	}

IL_010a:
	{
		// for (int l = 0; l < neighbouringHexagonsList.Count - 1; l++)
		V_7 = 0;
		goto IL_01bb;
	}

IL_0112:
	{
		// if (neighbouringHexagonsList[l] != null && neighbouringHexagonsList[l + 1] != null)
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_53 = V_0;
		int32_t L_54 = V_7;
		NullCheck(L_53);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_55;
		L_55 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_53, L_54, /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_55, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_01b5;
		}
	}
	{
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_57 = V_0;
		int32_t L_58 = V_7;
		NullCheck(L_57);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_59;
		L_59 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_57, ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1)), /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_59, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_01b5;
		}
	}
	{
		// if (neighbouringHexagonsList[l].GettingHexagonColour() == currentColour && neighbouringHexagonsList[l + 1].GettingHexagonColour() == currentColour)
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_61 = V_0;
		int32_t L_62 = V_7;
		NullCheck(L_61);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_63;
		L_63 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_61, L_62, /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		NullCheck(L_63);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_64;
		L_64 = HexagonTile_GettingHexagonColour_mAF2A9A8C0D158C720841CB9F7E3E7AFC5FE113A6(L_63, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_65 = V_4;
		bool L_66;
		L_66 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_64, L_65, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_01b5;
		}
	}
	{
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_67 = V_0;
		int32_t L_68 = V_7;
		NullCheck(L_67);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_69;
		L_69 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_67, ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1)), /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		NullCheck(L_69);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_70;
		L_70 = HexagonTile_GettingHexagonColour_mAF2A9A8C0D158C720841CB9F7E3E7AFC5FE113A6(L_69, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_71 = V_4;
		bool L_72;
		L_72 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_70, L_71, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_01b5;
		}
	}
	{
		// if (!scoringHexagonsList.Contains(neighbouringHexagonsList[l]))
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_73 = V_1;
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_74 = V_0;
		int32_t L_75 = V_7;
		NullCheck(L_74);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_76;
		L_76 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_74, L_75, /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		NullCheck(L_73);
		bool L_77;
		L_77 = List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D(L_73, L_76, /*hidden argument*/List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D_RuntimeMethod_var);
		if (L_77)
		{
			goto IL_0183;
		}
	}
	{
		// scoringHexagonsList.Add(neighbouringHexagonsList[l]);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_78 = V_1;
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_79 = V_0;
		int32_t L_80 = V_7;
		NullCheck(L_79);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_81;
		L_81 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_79, L_80, /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		NullCheck(L_78);
		List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_78, L_81, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
	}

IL_0183:
	{
		// if (!scoringHexagonsList.Contains(neighbouringHexagonsList[l + 1]))
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_82 = V_1;
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_83 = V_0;
		int32_t L_84 = V_7;
		NullCheck(L_83);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_85;
		L_85 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_83, ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1)), /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		NullCheck(L_82);
		bool L_86;
		L_86 = List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D(L_82, L_85, /*hidden argument*/List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D_RuntimeMethod_var);
		if (L_86)
		{
			goto IL_01a5;
		}
	}
	{
		// scoringHexagonsList.Add(neighbouringHexagonsList[l + 1]);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_87 = V_1;
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_88 = V_0;
		int32_t L_89 = V_7;
		NullCheck(L_88);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_90;
		L_90 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_88, ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1)), /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		NullCheck(L_87);
		List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_87, L_90, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
	}

IL_01a5:
	{
		// if (!scoringHexagonsList.Contains(currentHexagon))
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_91 = V_1;
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_92 = V_2;
		NullCheck(L_91);
		bool L_93;
		L_93 = List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D(L_91, L_92, /*hidden argument*/List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D_RuntimeMethod_var);
		if (L_93)
		{
			goto IL_01b5;
		}
	}
	{
		// scoringHexagonsList.Add(currentHexagon);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_94 = V_1;
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_95 = V_2;
		NullCheck(L_94);
		List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_94, L_95, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
	}

IL_01b5:
	{
		// for (int l = 0; l < neighbouringHexagonsList.Count - 1; l++)
		int32_t L_96 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
	}

IL_01bb:
	{
		// for (int l = 0; l < neighbouringHexagonsList.Count - 1; l++)
		int32_t L_97 = V_7;
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_98 = V_0;
		NullCheck(L_98);
		int32_t L_99;
		L_99 = List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_inline(L_98, /*hidden argument*/List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var);
		if ((((int32_t)L_97) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_99, (int32_t)1)))))
		{
			goto IL_0112;
		}
	}
	{
		// neighbouringHexagonsList.Clear();
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_100 = V_0;
		NullCheck(L_100);
		List_1_Clear_mD20953BDD3354FF3907DF993EAE64D8BEFAC369D(L_100, /*hidden argument*/List_1_Clear_mD20953BDD3354FF3907DF993EAE64D8BEFAC369D_RuntimeMethod_var);
		// for (int m = 0; m < checkList[n].Count; m++)
		int32_t L_101 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
	}

IL_01d6:
	{
		// for (int m = 0; m < checkList[n].Count; m++)
		int32_t L_102 = V_6;
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_103 = ___checkList0;
		int32_t L_104 = V_5;
		NullCheck(L_103);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_105;
		L_105 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_103, L_104, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		NullCheck(L_105);
		int32_t L_106;
		L_106 = List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_inline(L_105, /*hidden argument*/List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var);
		if ((((int32_t)L_102) < ((int32_t)L_106)))
		{
			goto IL_001c;
		}
	}
	{
		// for (int n = 0; n < checkList.Count; n++)
		int32_t L_107 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
	}

IL_01f0:
	{
		// for (int n = 0; n < checkList.Count; n++)
		int32_t L_108 = V_5;
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_109 = ___checkList0;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = List_1_get_Count_m257C2BC80FEC9E5EBA84D29BE8C0BA0B87F58DA9_inline(L_109, /*hidden argument*/List_1_get_Count_m257C2BC80FEC9E5EBA84D29BE8C0BA0B87F58DA9_RuntimeMethod_var);
		if ((((int32_t)L_108) < ((int32_t)L_110)))
		{
			goto IL_0014;
		}
	}
	{
		// return scoringHexagonsList;
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_111 = V_1;
		return L_111;
	}
}
// System.Collections.Generic.List`1<System.Int32> GridManager::ScoreHexagons(System.Collections.Generic.List`1<HexagonTile>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * GridManager_ScoreHexagons_mA8188BEBF79EA4DFBEF3EB15DA51E343D17FAA19 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCA1FE16579F7668F95ABD8701F5967BF41634A12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9265352A8F9D83E0F347691ADD9E059330948D0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m376883DE8D9B9C406BEA9E5A0DB2F132FE4B7FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m97298327F440E3FB2703B7BE9F00BCF2B261C57D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3F5774BB3B28CA2A64FF5039E35CDCEAA8FE2DD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD396EA185003D66D9F0425A2C98D23F6A1624175_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mBE90EF210A242F94A6699001524205C89C90C05F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * V_4 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_5 = NULL;
	HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * V_6 = NULL;
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	float G_B21_0 = 0.0f;
	float G_B20_0 = 0.0f;
	float G_B22_0 = 0.0f;
	float G_B22_1 = 0.0f;
	{
		// List<int> minusColumns = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (HexagonTile bombHexagon in bombHexagons)
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_1 = __this->get_bombHexagons_41();
		NullCheck(L_1);
		Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D  L_2;
		L_2 = List_1_GetEnumerator_m3F5774BB3B28CA2A64FF5039E35CDCEAA8FE2DD3(L_1, /*hidden argument*/List_1_GetEnumerator_m3F5774BB3B28CA2A64FF5039E35CDCEAA8FE2DD3_RuntimeMethod_var);
		V_3 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0056;
		}

IL_0014:
		{
			// foreach (HexagonTile bombHexagon in bombHexagons)
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_3;
			L_3 = Enumerator_get_Current_m97298327F440E3FB2703B7BE9F00BCF2B261C57D_inline((Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D *)(&V_3), /*hidden argument*/Enumerator_get_Current_m97298327F440E3FB2703B7BE9F00BCF2B261C57D_RuntimeMethod_var);
			V_4 = L_3;
			// if (!list.Contains(bombHexagon))
			List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_4 = ___list0;
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_5 = V_4;
			NullCheck(L_4);
			bool L_6;
			L_6 = List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D(L_4, L_5, /*hidden argument*/List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0056;
			}
		}

IL_0027:
		{
			// bombHexagon.BombHexagonTick(); 
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_7 = V_4;
			NullCheck(L_7);
			HexagonTile_BombHexagonTick_m230664521E932297E6721E5C49219CAEC1A5DCB8(L_7, /*hidden argument*/NULL);
			// if (bombHexagon.GettingBombhexagonTimer() == _zero)
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_8 = V_4;
			NullCheck(L_8);
			int32_t L_9;
			L_9 = HexagonTile_GettingBombhexagonTimer_mE07C1C882713FA7A3A931EBC16A27098B38DA49E_inline(L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0056;
			}
		}

IL_0037:
		{
			// gameOver = true;
			__this->set_gameOver_36((bool)1);
			// UIManager.instance.GameOver();
			UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_10 = ((UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_il2cpp_TypeInfo_var))->get_instance_59();
			NullCheck(L_10);
			UIManager_GameOver_m3CC0D19CB5B32FC18AF71A9708DB653B9E57E510(L_10, /*hidden argument*/NULL);
			// StopAllCoroutines();
			MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
			// return minusColumns;
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_11 = V_0;
			V_5 = L_11;
			IL2CPP_LEAVE(0x1F5, FINALLY_0061);
		}

IL_0056:
		{
			// foreach (HexagonTile bombHexagon in bombHexagons)
			bool L_12;
			L_12 = Enumerator_MoveNext_m9265352A8F9D83E0F347691ADD9E059330948D0E((Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m9265352A8F9D83E0F347691ADD9E059330948D0E_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0014;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCA1FE16579F7668F95ABD8701F5967BF41634A12((Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D *)(&V_3), /*hidden argument*/Enumerator_Dispose_mCA1FE16579F7668F95ABD8701F5967BF41634A12_RuntimeMethod_var);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F5, IL_01f5)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
	}

IL_006f:
	{
		// foreach (HexagonTile hexagon in list)
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_13 = ___list0;
		NullCheck(L_13);
		Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D  L_14;
		L_14 = List_1_GetEnumerator_m3F5774BB3B28CA2A64FF5039E35CDCEAA8FE2DD3(L_13, /*hidden argument*/List_1_GetEnumerator_m3F5774BB3B28CA2A64FF5039E35CDCEAA8FE2DD3_RuntimeMethod_var);
		V_3 = L_14;
	}

IL_0076:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00dc;
		}

IL_0078:
		{
			// foreach (HexagonTile hexagon in list)
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_15;
			L_15 = Enumerator_get_Current_m97298327F440E3FB2703B7BE9F00BCF2B261C57D_inline((Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D *)(&V_3), /*hidden argument*/Enumerator_get_Current_m97298327F440E3FB2703B7BE9F00BCF2B261C57D_RuntimeMethod_var);
			V_6 = L_15;
			// if (bombHexagons.Contains(hexagon))
			List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_16 = __this->get_bombHexagons_41();
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_17 = V_6;
			NullCheck(L_16);
			bool L_18;
			L_18 = List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D(L_16, L_17, /*hidden argument*/List_1_Contains_mE7F6583052F11026D4D42D5A141EA3074A3DA51D_RuntimeMethod_var);
			if (!L_18)
			{
				goto IL_009e;
			}
		}

IL_0090:
		{
			// bombHexagons.Remove(hexagon);
			List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_19 = __this->get_bombHexagons_41();
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_20 = V_6;
			NullCheck(L_19);
			bool L_21;
			L_21 = List_1_Remove_mBE90EF210A242F94A6699001524205C89C90C05F(L_19, L_20, /*hidden argument*/List_1_Remove_mBE90EF210A242F94A6699001524205C89C90C05F_RuntimeMethod_var);
		}

IL_009e:
		{
			// UIManager.instance.Score(1);
			UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_22 = ((UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_il2cpp_TypeInfo_var))->get_instance_59();
			NullCheck(L_22);
			UIManager_Score_m5B123F3423305E9D697D354414B01FE570EA68FD(L_22, 1, /*hidden argument*/NULL);
			// gameGrid[hexagon.GettingHexagonX()].Remove(hexagon);
			List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_23 = __this->get_gameGrid_39();
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_24 = V_6;
			NullCheck(L_24);
			int32_t L_25;
			L_25 = HexagonTile_GettingHexagonX_m77AA2DAC15C6631CA3985B953CB34BCE4C4A50B5_inline(L_24, /*hidden argument*/NULL);
			NullCheck(L_23);
			List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_26;
			L_26 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_23, L_25, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_27 = V_6;
			NullCheck(L_26);
			bool L_28;
			L_28 = List_1_Remove_mBE90EF210A242F94A6699001524205C89C90C05F(L_26, L_27, /*hidden argument*/List_1_Remove_mBE90EF210A242F94A6699001524205C89C90C05F_RuntimeMethod_var);
			// minusColumns.Add(hexagon.GettingHexagonX());
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_29 = V_0;
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_30 = V_6;
			NullCheck(L_30);
			int32_t L_31;
			L_31 = HexagonTile_GettingHexagonX_m77AA2DAC15C6631CA3985B953CB34BCE4C4A50B5_inline(L_30, /*hidden argument*/NULL);
			NullCheck(L_29);
			List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F(L_29, L_31, /*hidden argument*/List_1_Add_m415CDDDC44D8102E7E71D9EA0A853D7BBE6F469F_RuntimeMethod_var);
			// Destroy(hexagon.gameObject);
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_32 = V_6;
			NullCheck(L_32);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
			L_33 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_32, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_33, /*hidden argument*/NULL);
		}

IL_00dc:
		{
			// foreach (HexagonTile hexagon in list)
			bool L_34;
			L_34 = Enumerator_MoveNext_m9265352A8F9D83E0F347691ADD9E059330948D0E((Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m9265352A8F9D83E0F347691ADD9E059330948D0E_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_0078;
			}
		}

IL_00e5:
		{
			IL2CPP_LEAVE(0xF5, FINALLY_00e7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e7;
	}

FINALLY_00e7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCA1FE16579F7668F95ABD8701F5967BF41634A12((Enumerator_t767DACA1BEB95B69B746E6D0589827CA0AF84C6D *)(&V_3), /*hidden argument*/Enumerator_Dispose_mCA1FE16579F7668F95ABD8701F5967BF41634A12_RuntimeMethod_var);
		IL2CPP_END_FINALLY(231)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(231)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF5, IL_00f5)
	}

IL_00f5:
	{
		// foreach (int n in minusColumns)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_35 = V_0;
		NullCheck(L_35);
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_36;
		L_36 = List_1_GetEnumerator_mD396EA185003D66D9F0425A2C98D23F6A1624175(L_35, /*hidden argument*/List_1_GetEnumerator_mD396EA185003D66D9F0425A2C98D23F6A1624175_RuntimeMethod_var);
		V_7 = L_36;
	}

IL_00fd:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01d0;
		}

IL_0102:
		{
			// foreach (int n in minusColumns)
			int32_t L_37;
			L_37 = Enumerator_get_Current_m376883DE8D9B9C406BEA9E5A0DB2F132FE4B7FDA_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_7), /*hidden argument*/Enumerator_get_Current_m376883DE8D9B9C406BEA9E5A0DB2F132FE4B7FDA_RuntimeMethod_var);
			V_8 = L_37;
			// for (int m = 0; m < gameGrid[n].Count; m++)
			V_9 = 0;
			goto IL_01b7;
		}

IL_0113:
		{
			// coordinateX = GettingGridStartCoordinateX() + (_horizontalHexagonDistance * n);
			float L_38;
			L_38 = GridManager_GettingGridStartCoordinateX_m209EA2C055820542CA380E1EA8C17CCDA6F9C882(__this, /*hidden argument*/NULL);
			int32_t L_39 = V_8;
			V_1 = ((float)il2cpp_codegen_add((float)L_38, (float)((float)il2cpp_codegen_multiply((float)(0.444999993f), (float)((float)((float)L_39))))));
			// coordinateY = (_verticalHexagonDistance * m * _double) + _verticalGridOffset + (OnColumn(n) ? _verticalHexagonDistance : _zero);
			int32_t L_40 = V_9;
			int32_t L_41 = V_8;
			bool L_42;
			L_42 = GridManager_OnColumn_m9B2EA2EB87DBC2139A725B796C6825383FEF05F8(__this, L_41, /*hidden argument*/NULL);
			G_B20_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.230000004f), (float)((float)((float)L_40)))), (float)(2.0f))), (float)(-3.0f)));
			if (L_42)
			{
				G_B21_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.230000004f), (float)((float)((float)L_40)))), (float)(2.0f))), (float)(-3.0f)));
				goto IL_014a;
			}
		}

IL_0143:
		{
			G_B22_0 = (0.0f);
			G_B22_1 = G_B20_0;
			goto IL_014f;
		}

IL_014a:
		{
			G_B22_0 = (0.230000004f);
			G_B22_1 = G_B21_0;
		}

IL_014f:
		{
			V_2 = ((float)il2cpp_codegen_add((float)G_B22_1, (float)G_B22_0));
			// gameGrid[n][m].SettingHexagonY(m);
			List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_43 = __this->get_gameGrid_39();
			int32_t L_44 = V_8;
			NullCheck(L_43);
			List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_45;
			L_45 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_43, L_44, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
			int32_t L_46 = V_9;
			NullCheck(L_45);
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_47;
			L_47 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_45, L_46, /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
			int32_t L_48 = V_9;
			NullCheck(L_47);
			HexagonTile_SettingHexagonY_mC4CA9A9C4E5C696ACF5F4D52232F4F0105CE2F76_inline(L_47, L_48, /*hidden argument*/NULL);
			// gameGrid[n][m].SettingHexagonX(n);
			List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_49 = __this->get_gameGrid_39();
			int32_t L_50 = V_8;
			NullCheck(L_49);
			List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_51;
			L_51 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_49, L_50, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
			int32_t L_52 = V_9;
			NullCheck(L_51);
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_53;
			L_53 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_51, L_52, /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
			int32_t L_54 = V_8;
			NullCheck(L_53);
			HexagonTile_SettingHexagonX_mBCE4856224034F7ADD1D57CDB47E0B6A91763D7E_inline(L_53, L_54, /*hidden argument*/NULL);
			// gameGrid[n][m].AlterWorldPosition(new Vector3(coordinateX, coordinateY, _zero));
			List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_55 = __this->get_gameGrid_39();
			int32_t L_56 = V_8;
			NullCheck(L_55);
			List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_57;
			L_57 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_55, L_56, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
			int32_t L_58 = V_9;
			NullCheck(L_57);
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_59;
			L_59 = List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_inline(L_57, L_58, /*hidden argument*/List_1_get_Item_m195EF35718CFDE7BA2C04F622AD53AD543C9331A_RuntimeMethod_var);
			float L_60 = V_1;
			float L_61 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
			memset((&L_62), 0, sizeof(L_62));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_62), L_60, L_61, (0.0f), /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_63;
			L_63 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_62, /*hidden argument*/NULL);
			NullCheck(L_59);
			HexagonTile_AlterWorldPosition_m3D67C6B6BFF83D6AA17A0BBAE65C58FC3259BB50(L_59, L_63, /*hidden argument*/NULL);
			// for (int m = 0; m < gameGrid[n].Count; m++)
			int32_t L_64 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		}

IL_01b7:
		{
			// for (int m = 0; m < gameGrid[n].Count; m++)
			int32_t L_65 = V_9;
			List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_66 = __this->get_gameGrid_39();
			int32_t L_67 = V_8;
			NullCheck(L_66);
			List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_68;
			L_68 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_66, L_67, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
			NullCheck(L_68);
			int32_t L_69;
			L_69 = List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_inline(L_68, /*hidden argument*/List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var);
			if ((((int32_t)L_65) < ((int32_t)L_69)))
			{
				goto IL_0113;
			}
		}

IL_01d0:
		{
			// foreach (int n in minusColumns)
			bool L_70;
			L_70 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_7), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
			if (L_70)
			{
				goto IL_0102;
			}
		}

IL_01dc:
		{
			IL2CPP_LEAVE(0x1EC, FINALLY_01de);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01de;
	}

FINALLY_01de:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_7), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		IL2CPP_END_FINALLY(478)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(478)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1EC, IL_01ec)
	}

IL_01ec:
	{
		// hexagonScoringStatus = false;
		__this->set_hexagonScoringStatus_44((bool)0);
		// return minusColumns;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_71 = V_0;
		return L_71;
	}

IL_01f5:
	{
		// }
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_72 = V_5;
		return L_72;
	}
}
// System.Single GridManager::GettingGridStartCoordinateX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GridManager_GettingGridStartCoordinateX_m209EA2C055820542CA380E1EA8C17CCDA6F9C882 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// return gridWidth / _half * -_horizontalHexagonDistance;
		int32_t L_0 = __this->get_gridWidth_33();
		return ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)((int32_t)L_0/(int32_t)2)))), (float)(-0.444999993f)));
	}
}
// System.Collections.IEnumerator GridManager::RotationCoroutine(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GridManager_RotationCoroutine_m9115C8818FC352A3F3894C73854B624489749F71 (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, bool ___CW0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8 * L_0 = (U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8 *)il2cpp_codegen_object_new(U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8_il2cpp_TypeInfo_var);
		U3CRotationCoroutineU3Ed__47__ctor_mF4D149F3D81A0C41DEC279A5AE74CC057EBA27E6(L_0, 0, /*hidden argument*/NULL);
		U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8 * L_2 = L_1;
		bool L_3 = ___CW0;
		NullCheck(L_2);
		L_2->set_CW_3(L_3);
		return L_2;
	}
}
// System.Void GridManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager__ctor_mA0C5D0BA6335DF2309495BC6F90061C3D82365FD (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		ConstantClass__ctor_m31AB7516882FF38B31F5DCC7912ABCD8AF7E7942(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GridManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager__cctor_m1A0D4102C9134F068238AC0B464C98F00EBC2707 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HexagonBombTile::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonBombTile_Tick_m63D51E622E71F7F6822C7900FF5DEF64347342A7 (HexagonBombTile_tF2D9DE610A87DDD8F4C8281E950C9D70CB7F3127 * __this, const RuntimeMethod* method)
{
	{
		// --timer;
		int32_t L_0 = __this->get_timer_37();
		__this->set_timer_37(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// output.text = timer.ToString();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_1 = __this->get_output_36();
		int32_t* L_2 = __this->get_address_of_timer_37();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HexagonBombTile::SetTimer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonBombTile_SetTimer_m87FD6C2588C9E404D306F4B34EBFC8724E4B51BB (HexagonBombTile_tF2D9DE610A87DDD8F4C8281E950C9D70CB7F3127 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// timer = value;
		int32_t L_0 = ___value0;
		__this->set_timer_37(L_0);
		// output.text = timer.ToString();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_1 = __this->get_output_36();
		int32_t* L_2 = __this->get_address_of_timer_37();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 HexagonBombTile::GettingTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HexagonBombTile_GettingTimer_mA2C11D2C9E095BF6E0DB649701D6FC6E41C71A1E (HexagonBombTile_tF2D9DE610A87DDD8F4C8281E950C9D70CB7F3127 * __this, const RuntimeMethod* method)
{
	{
		// return timer;
		int32_t L_0 = __this->get_timer_37();
		return L_0;
	}
}
// System.Void HexagonBombTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonBombTile__ctor_m1971EB50B01AF71F59BEC20041ADC012C605CC93 (HexagonBombTile_tF2D9DE610A87DDD8F4C8281E950C9D70CB7F3127 * __this, const RuntimeMethod* method)
{
	{
		HexagonTile__ctor_m75E13C07BD955E39D40EAB21FD39DE5F09004584(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HexagonTile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_Start_m63F33E35BDC4937489DD85E77B41DEB91C81747C (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GridManagerObject = GridManager.instance;
		IL2CPP_RUNTIME_CLASS_INIT(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = ((GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields*)il2cpp_codegen_static_fields_for(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var))->get_instance_26();
		__this->set_GridManagerObject_26(L_0);
		// linearInterpolation = false;
		__this->set_linearInterpolation_31((bool)0);
		// }
		return;
	}
}
// System.Void HexagonTile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_Update_m0CF2228E9F684D64EBCB72EB50C08BD57C36C668 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (linearInterpolation)
		bool L_0 = __this->get_linearInterpolation_31();
		if (!L_0)
		{
			goto IL_00b9;
		}
	}
	{
		// float newX = Mathf.Lerp(transform.position.x, linearInterpolationCoordinate.x, Time.deltaTime * _constantHexagonRotate);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of_linearInterpolationCoordinate_30();
		float L_5 = L_4->get_x_0();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_7;
		L_7 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_3, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)(9.0f))), /*hidden argument*/NULL);
		V_0 = L_7;
		// float newY = Mathf.Lerp(transform.position.y, linearInterpolationCoordinate.y, Time.deltaTime * _constantHexagonRotate);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_11 = __this->get_address_of_linearInterpolationCoordinate_30();
		float L_12 = L_11->get_y_1();
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_14;
		L_14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_10, L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)(9.0f))), /*hidden argument*/NULL);
		V_1 = L_14;
		// transform.position = new Vector2(newX, newY);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_16 = V_0;
		float L_17 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), L_16, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_19, /*hidden argument*/NULL);
		// if (Vector3.Distance(transform.position, linearInterpolationCoordinate) < _hexagonRotationLimit)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = __this->get_linearInterpolationCoordinate_30();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_22, /*hidden argument*/NULL);
		float L_24;
		L_24 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_21, L_23, /*hidden argument*/NULL);
		if ((!(((float)L_24) < ((float)(0.0500000007f)))))
		{
			goto IL_00b9;
		}
	}
	{
		// transform.position = linearInterpolationCoordinate;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = __this->get_linearInterpolationCoordinate_30();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_27, /*hidden argument*/NULL);
		// linearInterpolation = false;
		__this->set_linearInterpolation_31((bool)0);
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Void HexagonTile::SettingHexagonX(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_SettingHexagonX_mBCE4856224034F7ADD1D57CDB47E0B6A91763D7E (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// coordinateX = value;
		int32_t L_0 = ___value0;
		__this->set_coordinateX_27(L_0);
		// }
		return;
	}
}
// System.Void HexagonTile::SettingHexagonY(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_SettingHexagonY_mC4CA9A9C4E5C696ACF5F4D52232F4F0105CE2F76 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// coordinateY = value;
		int32_t L_0 = ___value0;
		__this->set_coordinateY_28(L_0);
		// }
		return;
	}
}
// System.Void HexagonTile::SettingHexagonColour(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_SettingHexagonColour_m463AA510C5E21D23307A6E42E8BD1EF4AD227B8D (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___newColour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<SpriteRenderer>().color = newColour;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___newColour0;
		NullCheck(L_0);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_0, L_1, /*hidden argument*/NULL);
		// colour = newColour;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___newColour0;
		__this->set_colour_29(L_2);
		// }
		return;
	}
}
// System.Void HexagonTile::BombHexagonTick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_BombHexagonTick_m230664521E932297E6721E5C49219CAEC1A5DCB8 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	{
		// --bombHexagonTimer;
		int32_t L_0 = __this->get_bombHexagonTimer_34();
		__this->set_bombHexagonTimer_34(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// text.text = bombHexagonTimer.ToString();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_1 = __this->get_text_35();
		int32_t* L_2 = __this->get_address_of_bombHexagonTimer_34();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 HexagonTile::GettingHexagonX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HexagonTile_GettingHexagonX_m77AA2DAC15C6631CA3985B953CB34BCE4C4A50B5 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	{
		// return coordinateX;
		int32_t L_0 = __this->get_coordinateX_27();
		return L_0;
	}
}
// System.Int32 HexagonTile::GettingHexagonY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HexagonTile_GettingHexagonY_mEC4FFBCD04D7A28D7D0DD20C261AAA03E1E1B5AC (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	{
		// return coordinateY;
		int32_t L_0 = __this->get_coordinateY_28();
		return L_0;
	}
}
// System.Int32 HexagonTile::GettingBombhexagonTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HexagonTile_GettingBombhexagonTimer_mE07C1C882713FA7A3A931EBC16A27098B38DA49E (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	{
		// return bombHexagonTimer;
		int32_t L_0 = __this->get_bombHexagonTimer_34();
		return L_0;
	}
}
// UnityEngine.Color HexagonTile::GettingHexagonColour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  HexagonTile_GettingHexagonColour_mAF2A9A8C0D158C720841CB9F7E3E7AFC5FE113A6 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetComponent<SpriteRenderer>().color;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void HexagonTile::Rotate(System.Int32,System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_Rotate_mADF53241FA895ABA946190BB7C43EF1A5102DA65 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, int32_t ___newX0, int32_t ___newY1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newCoordinates2, const RuntimeMethod* method)
{
	{
		// linearInterpolationCoordinate = newCoordinates;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___newCoordinates2;
		__this->set_linearInterpolationCoordinate_30(L_0);
		// SettingHexagonX(newX);
		int32_t L_1 = ___newX0;
		HexagonTile_SettingHexagonX_mBCE4856224034F7ADD1D57CDB47E0B6A91763D7E_inline(__this, L_1, /*hidden argument*/NULL);
		// SettingHexagonY(newY);
		int32_t L_2 = ___newY1;
		HexagonTile_SettingHexagonY_mC4CA9A9C4E5C696ACF5F4D52232F4F0105CE2F76_inline(__this, L_2, /*hidden argument*/NULL);
		// linearInterpolation = true;
		__this->set_linearInterpolation_31((bool)1);
		// }
		return;
	}
}
// System.Boolean HexagonTile::IsHexagonRotating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexagonTile_IsHexagonRotating_m5B1C047F636DE809E116EC853313F89F4F65E786 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	{
		// return linearInterpolation;
		bool L_0 = __this->get_linearInterpolation_31();
		return L_0;
	}
}
// System.Boolean HexagonTile::IsHexagonMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexagonTile_IsHexagonMoving_m5E0F28A3519B6B8C2D0EC312552D7B9729CB1FA9 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !(GetComponent<Rigidbody2D>().velocity == Vector2.zero);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		bool L_3;
		L_3 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_1, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void HexagonTile::IsBombHexagonScored()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_IsBombHexagonScored_m5CDACCA3D3F59EB2A71A28C2314EACF52C7DFF58 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m681285214837548C3BE4B841BDBB06AF8E9CDCE6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Collider2D>().isTrigger = true;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0;
		L_0 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m681285214837548C3BE4B841BDBB06AF8E9CDCE6(__this, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m681285214837548C3BE4B841BDBB06AF8E9CDCE6_RuntimeMethod_var);
		NullCheck(L_0);
		Collider2D_set_isTrigger_m129C3059CC21789EFA198E153A3C82662E3BFF52(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// HexagonTile/NeighbouringHexagons HexagonTile::GetNeighbouringHexagons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  HexagonTile_GetNeighbouringHexagons_m96C78BA962998CF9048E4057B8D2BC4192E3346D (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float G_B2_0 = 0.0f;
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084 * G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084 * G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	float G_B3_1 = 0.0f;
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084 * G_B3_2 = NULL;
	float G_B5_0 = 0.0f;
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084 * G_B5_1 = NULL;
	float G_B4_0 = 0.0f;
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084 * G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	float G_B6_1 = 0.0f;
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084 * G_B6_2 = NULL;
	float G_B8_0 = 0.0f;
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084 * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084 * G_B7_1 = NULL;
	int32_t G_B9_0 = 0;
	float G_B9_1 = 0.0f;
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084 * G_B9_2 = NULL;
	float G_B11_0 = 0.0f;
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084 * G_B11_1 = NULL;
	float G_B10_0 = 0.0f;
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084 * G_B10_1 = NULL;
	int32_t G_B12_0 = 0;
	float G_B12_1 = 0.0f;
	NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084 * G_B12_2 = NULL;
	{
		// bool onColumn = GridManagerObject.OnColumn(GettingHexagonX());
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = __this->get_GridManagerObject_26();
		int32_t L_1;
		L_1 = HexagonTile_GettingHexagonX_m77AA2DAC15C6631CA3985B953CB34BCE4C4A50B5_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = GridManager_OnColumn_m9B2EA2EB87DBC2139A725B796C6825383FEF05F8(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// neighbouringHexagons.up = new Vector2(coordinateX, coordinateY + 1);
		int32_t L_3 = __this->get_coordinateX_27();
		int32_t L_4 = __this->get_coordinateY_28();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), ((float)((float)L_3)), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)))), /*hidden argument*/NULL);
		(&V_0)->set_up_0(L_5);
		// neighbouringHexagons.down = new Vector2(coordinateX, coordinateY - 1);
		int32_t L_6 = __this->get_coordinateX_27();
		int32_t L_7 = __this->get_coordinateY_28();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)((float)L_6)), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))), /*hidden argument*/NULL);
		(&V_0)->set_down_1(L_8);
		// neighbouringHexagons.upLeft = new Vector2(coordinateX - 1, onColumn ? coordinateY + 1 : coordinateY);
		int32_t L_9 = __this->get_coordinateX_27();
		bool L_10 = V_1;
		G_B1_0 = ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1))));
		G_B1_1 = (&V_0);
		if (L_10)
		{
			G_B2_0 = ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1))));
			G_B2_1 = (&V_0);
			goto IL_0060;
		}
	}
	{
		int32_t L_11 = __this->get_coordinateY_28();
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0068;
	}

IL_0060:
	{
		int32_t L_12 = __this->get_coordinateY_28();
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0068:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), G_B3_1, ((float)((float)G_B3_0)), /*hidden argument*/NULL);
		G_B3_2->set_upLeft_2(L_13);
		// neighbouringHexagons.upRight = new Vector2(coordinateX + 1, onColumn ? coordinateY + 1 : coordinateY);
		int32_t L_14 = __this->get_coordinateX_27();
		bool L_15 = V_1;
		G_B4_0 = ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1))));
		G_B4_1 = (&V_0);
		if (L_15)
		{
			G_B5_0 = ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1))));
			G_B5_1 = (&V_0);
			goto IL_0089;
		}
	}
	{
		int32_t L_16 = __this->get_coordinateY_28();
		G_B6_0 = L_16;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0091;
	}

IL_0089:
	{
		int32_t L_17 = __this->get_coordinateY_28();
		G_B6_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0091:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), G_B6_1, ((float)((float)G_B6_0)), /*hidden argument*/NULL);
		G_B6_2->set_upRight_4(L_18);
		// neighbouringHexagons.downLeft = new Vector2(coordinateX - 1, onColumn ? coordinateY : coordinateY - 1);
		int32_t L_19 = __this->get_coordinateX_27();
		bool L_20 = V_1;
		G_B7_0 = ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1))));
		G_B7_1 = (&V_0);
		if (L_20)
		{
			G_B8_0 = ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1))));
			G_B8_1 = (&V_0);
			goto IL_00b4;
		}
	}
	{
		int32_t L_21 = __this->get_coordinateY_28();
		G_B9_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00ba;
	}

IL_00b4:
	{
		int32_t L_22 = __this->get_coordinateY_28();
		G_B9_0 = L_22;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00ba:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_23), G_B9_1, ((float)((float)G_B9_0)), /*hidden argument*/NULL);
		G_B9_2->set_downLeft_3(L_23);
		// neighbouringHexagons.downRight = new Vector2(coordinateX + 1, onColumn ? coordinateY : coordinateY - 1);
		int32_t L_24 = __this->get_coordinateX_27();
		bool L_25 = V_1;
		G_B10_0 = ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1))));
		G_B10_1 = (&V_0);
		if (L_25)
		{
			G_B11_0 = ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1))));
			G_B11_1 = (&V_0);
			goto IL_00dd;
		}
	}
	{
		int32_t L_26 = __this->get_coordinateY_28();
		G_B12_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1));
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_00e3;
	}

IL_00dd:
	{
		int32_t L_27 = __this->get_coordinateY_28();
		G_B12_0 = L_27;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_00e3:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_28), G_B12_1, ((float)((float)G_B12_0)), /*hidden argument*/NULL);
		G_B12_2->set_downRight_5(L_28);
		// return neighbouringHexagons;
		NeighbouringHexagons_t4C49F52052C170633AF3D3C661D387C6CC2C3084  L_29 = V_0;
		return L_29;
	}
}
// System.Void HexagonTile::AlterWorldPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_AlterWorldPosition_m3D67C6B6BFF83D6AA17A0BBAE65C58FC3259BB50 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newCoordinate0, const RuntimeMethod* method)
{
	{
		// linearInterpolationCoordinate = newCoordinate;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___newCoordinate0;
		__this->set_linearInterpolationCoordinate_30(L_0);
		// linearInterpolation = true;
		__this->set_linearInterpolation_31((bool)1);
		// }
		return;
	}
}
// System.Void HexagonTile::AlterHexagonGridPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_AlterHexagonGridPosition_m3D0796FF2846F0B0C2CCD6570D4DA691BE5A9DBE (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___newCoordinate0, const RuntimeMethod* method)
{
	{
		// coordinateX = (int)newCoordinate.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___newCoordinate0;
		float L_1 = L_0.get_x_0();
		__this->set_coordinateX_27(((int32_t)((int32_t)L_1)));
		// coordinateY = (int)newCoordinate.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___newCoordinate0;
		float L_3 = L_2.get_y_1();
		__this->set_coordinateY_28(((int32_t)((int32_t)L_3)));
		// }
		return;
	}
}
// System.Void HexagonTile::SetBombHexagon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile_SetBombHexagon_mE21635FC8DFD31D140DDE9E4DD2AD35F0544D641 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m503A54E8C58FBCC2DE90A59E216FD14CBA7EE029_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = new GameObject().AddComponent<TextMesh>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_1;
		L_1 = GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m503A54E8C58FBCC2DE90A59E216FD14CBA7EE029(L_0, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m503A54E8C58FBCC2DE90A59E216FD14CBA7EE029_RuntimeMethod_var);
		__this->set_text_35(L_1);
		// text.alignment = TextAlignment.Center;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_2 = __this->get_text_35();
		NullCheck(L_2);
		TextMesh_set_alignment_m95F437AB7C56DA880A7722AFAF13845B1C6C0947(L_2, 1, /*hidden argument*/NULL);
		// text.anchor = TextAnchor.MiddleCenter;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_3 = __this->get_text_35();
		NullCheck(L_3);
		TextMesh_set_anchor_m1A9871D2FD70AE79F4FE3F3912757834392A9674(L_3, 4, /*hidden argument*/NULL);
		// text.transform.position = new Vector3(transform.position.x, transform.position.y, -4);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_4 = __this->get_text_35();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_8, L_11, (-4.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_12, /*hidden argument*/NULL);
		// text.transform.localScale = transform.localScale;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_13 = __this->get_text_35();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_14, L_16, /*hidden argument*/NULL);
		// text.color = Color.black;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_17 = __this->get_text_35();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		NullCheck(L_17);
		TextMesh_set_color_m276CE9AB9F88B34C0A9C6DD5300FC1123102D3DE(L_17, L_18, /*hidden argument*/NULL);
		// text.transform.parent = transform;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_19 = __this->get_text_35();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_20, L_21, /*hidden argument*/NULL);
		// bombHexagonTimer = _constantBombTimer;
		__this->set_bombHexagonTimer_34(6);
		// text.text = bombHexagonTimer.ToString();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_22 = __this->get_text_35();
		int32_t* L_23 = __this->get_address_of_bombHexagonTimer_34();
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_22, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HexagonTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexagonTile__ctor_m75E13C07BD955E39D40EAB21FD39DE5F09004584 (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	{
		ConstantClass__ctor_m31AB7516882FF38B31F5DCC7912ABCD8AF7E7942(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Start_m4E4A5EF33C27448D7F34FD29B93589635F1B2EE2 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MenuManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Update_m732CF78C4240CF880048E66B580BE32A72FB8779 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MenuManager::ChangeScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ChangeScene_mF668E21AB8BFE61ED29354FCD8C005A32C77EC06 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, String_t* ___sceneTitle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneTitle);
		String_t* L_0 = ___sceneTitle0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Exit_m887F4BD568143EEC8DC063E886541CF86C2C9AC6 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m8F61CC885B72291B54C1C6EC368AE303EA856529 (MenuManager_tD52BB657312ED53913E423A985CACC86F900124C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Awake_mCED93604270B1E209B4E0D32F6A26DDC5AB06E30 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_0 = ((UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_il2cpp_TypeInfo_var))->get_instance_59();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_il2cpp_TypeInfo_var))->set_instance_59(__this);
		// }
		return;
	}

IL_0014:
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_mAA4B371DC406146E84A9D8803B9C861939B2E04E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bombHexagonsCount = _zero;
		__this->set_bombHexagonsCount_43(0);
		// GridManagerObject = GridManager.instance;
		IL2CPP_RUNTIME_CLASS_INIT(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = ((GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields*)il2cpp_codegen_static_fields_for(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var))->get_instance_26();
		__this->set_GridManagerObject_40(L_0);
		// scoredHexagons = _zero;
		__this->set_scoredHexagons_42(0);
		// colourCount = 7;
		__this->set_colourCount_41(7);
		// InitializationOfUI();
		UIManager_InitializationOfUI_m8C37DD04A176531318B00F1486538976F35A0263(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_m8A7C5DF1B797CFD6937FD6961AB9CC7B1A90D385 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// if (check)
		bool L_0 = __this->get_check_38();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// StartGame();
		UIManager_StartGame_m1AED54E2B1036BEE965B8A5B0F749A1A72900CAB(__this, /*hidden argument*/NULL);
		// check = false;
		__this->set_check_38((bool)0);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UIManager::ChangeHexagonTileColour(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ChangeHexagonTileColour_m7E27FE85536C34E3EF7FBC8B3EF6F1E912878889 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * V_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// List<Color> colours = new List<Color>();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_0 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)il2cpp_codegen_object_new(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1(L_0, /*hidden argument*/List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		V_0 = L_0;
		// Color orange = new Color(1, 0.419516f, 0);
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_1), (1.0f), (0.419515997f), (0.0f), /*hidden argument*/NULL);
		// colours.Add(Color.yellow);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_1 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_1, L_2, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// colours.Add(Color.red);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_3 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_3, L_4, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// colours.Add(Color.blue);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_5 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_5, L_6, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// colours.Add(Color.cyan);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_7 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		NullCheck(L_7);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_7, L_8, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// colours.Add(Color.green);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_9 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_9, L_10, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// colours.Add(Color.magenta);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_11 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_magenta_m46B928AB3005B062069E5DF9CB271E1373A29FE0(/*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_11, L_12, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// colours.Add(orange);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_13 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_13, L_14, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// img = gameObject.GetComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = ___gameObject0;
		NullCheck(L_15);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16;
		L_16 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D(L_15, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D_RuntimeMethod_var);
		__this->set_img_51(L_16);
		// if (img.color == colours[0])
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17 = __this->get_img_51();
		NullCheck(L_17);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_17);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_19 = V_0;
		NullCheck(L_19);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_19, 0, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		bool L_21;
		L_21 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_18, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_009d;
		}
	}
	{
		// img.color = colours[1];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_22 = __this->get_img_51();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_23 = V_0;
		NullCheck(L_23);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_23, 1, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		NullCheck(L_22);
		VirtualActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_24);
		// }
		return;
	}

IL_009d:
	{
		// else if (img.color == colours[1])
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25 = __this->get_img_51();
		NullCheck(L_25);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26;
		L_26 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_25);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_27 = V_0;
		NullCheck(L_27);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		L_28 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_27, 1, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		bool L_29;
		L_29 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_26, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00c9;
		}
	}
	{
		// img.color = colours[2];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_30 = __this->get_img_51();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_31 = V_0;
		NullCheck(L_31);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_31, 2, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		NullCheck(L_30);
		VirtualActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_30, L_32);
		// }
		return;
	}

IL_00c9:
	{
		// else if (img.color == colours[2])
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_img_51();
		NullCheck(L_33);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34;
		L_34 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_33);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_35 = V_0;
		NullCheck(L_35);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36;
		L_36 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_35, 2, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		bool L_37;
		L_37 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_34, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00f5;
		}
	}
	{
		// img.color = colours[3];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_38 = __this->get_img_51();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_39 = V_0;
		NullCheck(L_39);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_40;
		L_40 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_39, 3, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		NullCheck(L_38);
		VirtualActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_38, L_40);
		// }
		return;
	}

IL_00f5:
	{
		// else if (img.color == colours[3])
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_41 = __this->get_img_51();
		NullCheck(L_41);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42;
		L_42 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_41);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_43 = V_0;
		NullCheck(L_43);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44;
		L_44 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_43, 3, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		bool L_45;
		L_45 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_42, L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0121;
		}
	}
	{
		// img.color = colours[4];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_46 = __this->get_img_51();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_47 = V_0;
		NullCheck(L_47);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48;
		L_48 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_47, 4, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		NullCheck(L_46);
		VirtualActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_46, L_48);
		// }
		return;
	}

IL_0121:
	{
		// else if (img.color == colours[4])
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_49 = __this->get_img_51();
		NullCheck(L_49);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_50;
		L_50 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_49);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_51 = V_0;
		NullCheck(L_51);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52;
		L_52 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_51, 4, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		bool L_53;
		L_53 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_50, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_014d;
		}
	}
	{
		// img.color = colours[5];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_54 = __this->get_img_51();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_55 = V_0;
		NullCheck(L_55);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_56;
		L_56 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_55, 5, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		NullCheck(L_54);
		VirtualActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_54, L_56);
		// }
		return;
	}

IL_014d:
	{
		// else if (img.color == colours[5])
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_57 = __this->get_img_51();
		NullCheck(L_57);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_58;
		L_58 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_57);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_59 = V_0;
		NullCheck(L_59);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_60;
		L_60 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_59, 5, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		bool L_61;
		L_61 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_58, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_0179;
		}
	}
	{
		// img.color = colours[6];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_62 = __this->get_img_51();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_63 = V_0;
		NullCheck(L_63);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_64;
		L_64 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_63, 6, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		NullCheck(L_62);
		VirtualActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_62, L_64);
		// }
		return;
	}

IL_0179:
	{
		// else if (img.color == colours[6])
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_65 = __this->get_img_51();
		NullCheck(L_65);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_66;
		L_66 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_65);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_67 = V_0;
		NullCheck(L_67);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_68;
		L_68 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_67, 6, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		bool L_69;
		L_69 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_66, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_01a4;
		}
	}
	{
		// img.color = colours[0];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_70 = __this->get_img_51();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_71 = V_0;
		NullCheck(L_71);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_72;
		L_72 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_71, 0, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		NullCheck(L_70);
		VirtualActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_70, L_72);
	}

IL_01a4:
	{
		// }
		return;
	}
}
// System.Void UIManager::Score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Score_m5B123F3423305E9D697D354414B01FE570EA68FD (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// scoredHexagons += n;
		int32_t L_0 = __this->get_scoredHexagons_42();
		int32_t L_1 = ___n0;
		__this->set_scoredHexagons_42(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// scoreText.text = (_constantScore * scoredHexagons).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_scoreText_26();
		int32_t L_3 = __this->get_scoredHexagons_42();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)5, (int32_t)L_3));
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// if (Int32.Parse(scoreText.text) >= _bombScoreLimit * bombHexagonsCount + _bombScoreLimit)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_scoreText_26();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		int32_t L_7;
		L_7 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_bombHexagonsCount_43();
		if ((((int32_t)L_7) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)1000), (int32_t)L_8)), (int32_t)((int32_t)1000))))))
		{
			goto IL_0066;
		}
	}
	{
		// ++bombHexagonsCount;
		int32_t L_9 = __this->get_bombHexagonsCount_43();
		__this->set_bombHexagonsCount_43(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		// GridManagerObject.SettingBombsAway(); 
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_10 = __this->get_GridManagerObject_40();
		NullCheck(L_10);
		GridManager_SettingBombsAway_mF34F08AB84FF982CA76130954576EAF3D886C1B3(L_10, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void UIManager::Retry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Retry_mA39AFE177CF2C9227ACE32C5E1624EE1216CB559 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameOverScreen.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameOverScreen_35();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// settingsScreen.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_settingsScreen_33();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName);
		String_t* L_2 = ___sceneName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GameOver_m3CC0D19CB5B32FC18AF71A9708DB653B9E57E510 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// gameOverScreen.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameOverScreen_35();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::ReturnButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ReturnButton_mC3E7490BBBE7490483E12FE3ACB8601CCCD4804A (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___sceneName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::GridWidthSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GridWidthSlider_m340C67BDB324740742D5A29B34A99EE53CBB6A14 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// gridWidthText.text = ((gridWidthSlider.value - _minGridWidth) * _double + _minGridWidth).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_gridWidthText_27();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_gridWidthSlider_30();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_2, (float)(5.0f))), (float)(2.0f))), (float)(5.0f)));
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void UIManager::GridHeightSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GridHeightSlider_m359B44856AFB4929A3A3C6C07770A2AC325FCEF9 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// gridHeightext.text = gridHeightSlider.value.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_gridHeightext_28();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_gridHeightSlider_31();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void UIManager::ColourCountSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ColourCountSlider_m484B6BFB6779335C3507817F052ACD8FE69EBFFC (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int childrenCount = colourSelectionParent.transform.childCount;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_colourSelectionParent_34();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// int newChildrenCount = (int)colourCountSlider.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_3 = __this->get_colourCountSlider_32();
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		V_1 = ((int32_t)((int32_t)L_4));
		// colourCountText.text = newChildrenCount.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_colourCountText_29();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// if (newChildrenCount > colourCount)
		int32_t L_7 = V_1;
		int32_t L_8 = __this->get_colourCount_41();
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0085;
		}
	}
	{
		// for (int n = 0; n < childrenCount; n++)
		V_2 = 0;
		goto IL_007f;
	}

IL_003d:
	{
		// if (!colourSelectionParent.transform.GetChild(n).gameObject.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_colourSelectionParent_34();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14;
		L_14 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_007b;
		}
	}
	{
		// colourSelectionParent.transform.GetChild(n).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_colourSelectionParent_34();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)1, /*hidden argument*/NULL);
		// break;
		goto IL_00fb;
	}

IL_007b:
	{
		// for (int n = 0; n < childrenCount; n++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_007f:
	{
		// for (int n = 0; n < childrenCount; n++)
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003d;
		}
	}
	{
		// }
		goto IL_00fb;
	}

IL_0085:
	{
		// else if (newChildrenCount < colourCount)
		int32_t L_23 = V_1;
		int32_t L_24 = __this->get_colourCount_41();
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_00fb;
		}
	}
	{
		// for (int n = 0; n < childrenCount; n++)
		V_3 = 0;
		goto IL_00f7;
	}

IL_0092:
	{
		// if (n+1 >= childrenCount)
		int32_t L_25 = V_3;
		int32_t L_26 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1))) < ((int32_t)L_26)))
		{
			goto IL_00b6;
		}
	}
	{
		// colourSelectionParent.transform.GetChild(n).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_colourSelectionParent_34();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_3;
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_31, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_00fb;
	}

IL_00b6:
	{
		// else if (!colourSelectionParent.transform.GetChild(n+1).gameObject.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_colourSelectionParent_34();
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		int32_t L_34 = V_3;
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_35);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		bool L_37;
		L_37 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_00f3;
		}
	}
	{
		// colourSelectionParent.transform.GetChild(n).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_colourSelectionParent_34();
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_38, /*hidden argument*/NULL);
		int32_t L_40 = V_3;
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_39, L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_42, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_00fb;
	}

IL_00f3:
	{
		// for (int n = 0; n < childrenCount; n++)
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00f7:
	{
		// for (int n = 0; n < childrenCount; n++)
		int32_t L_44 = V_3;
		int32_t L_45 = V_0;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0092;
		}
	}

IL_00fb:
	{
		// colourCount = newChildrenCount;
		int32_t L_46 = V_1;
		__this->set_colourCount_41(L_46);
		// }
		return;
	}
}
// System.Void UIManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_StartGame_m1AED54E2B1036BEE965B8A5B0F749A1A72900CAB (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * V_0 = NULL;
	List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// areColoursUnique = true;
		__this->set_areColoursUnique_39((bool)1);
		// settingsScreen.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_settingsScreen_33();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// GridManagerObject.SettingGridWidth((int)(gridWidthSlider.value-_minGridWidth)*_double + _minGridWidth);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_1 = __this->get_GridManagerObject_40();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_gridWidthSlider_30();
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		NullCheck(L_1);
		GridManager_SettingGridWidth_m0ACD924C53724BA0ADB9C9FDE35680E36DB1DA0A_inline(L_1, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)L_3, (float)(5.0f))))), (int32_t)2)), (int32_t)5)), /*hidden argument*/NULL);
		// GridManagerObject.SettingGridHeight((int)gridHeightSlider.value);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_4 = __this->get_GridManagerObject_40();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_5 = __this->get_gridHeightSlider_31();
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		NullCheck(L_4);
		GridManager_SettingGridHeight_mB56A5A88383252A841FA4936C19B08F557D4C6B5_inline(L_4, ((int32_t)((int32_t)L_6)), /*hidden argument*/NULL);
		// img1 = hexagon1.GetComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_hexagon1_44();
		NullCheck(L_7);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D_RuntimeMethod_var);
		__this->set_img1_52(L_8);
		// img2 = hexagon2.GetComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_hexagon2_45();
		NullCheck(L_9);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10;
		L_10 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D(L_9, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D_RuntimeMethod_var);
		__this->set_img2_53(L_10);
		// img3 = hexagon3.GetComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_hexagon3_46();
		NullCheck(L_11);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12;
		L_12 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D(L_11, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D_RuntimeMethod_var);
		__this->set_img3_54(L_12);
		// img4 = hexagon4.GetComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_hexagon4_47();
		NullCheck(L_13);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14;
		L_14 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D(L_13, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D_RuntimeMethod_var);
		__this->set_img4_55(L_14);
		// img5 = hexagon5.GetComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_hexagon5_48();
		NullCheck(L_15);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16;
		L_16 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D(L_15, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D_RuntimeMethod_var);
		__this->set_img5_56(L_16);
		// img6 = hexagon6.GetComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_hexagon6_49();
		NullCheck(L_17);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_18;
		L_18 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D(L_17, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D_RuntimeMethod_var);
		__this->set_img6_57(L_18);
		// img7 = hexagon7.GetComponent<Image>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_hexagon7_50();
		NullCheck(L_19);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_20;
		L_20 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D(L_19, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m08E9D50CF81C1176D98860FE7038B9544046EB7D_RuntimeMethod_var);
		__this->set_img7_58(L_20);
		// List<Color> colours = new List<Color>();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_21 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)il2cpp_codegen_object_new(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1(L_21, /*hidden argument*/List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		V_0 = L_21;
		// colours.Add(img1.color);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_22 = V_0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23 = __this->get_img1_52();
		NullCheck(L_23);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_23);
		NullCheck(L_22);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_22, L_24, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// colours.Add(img2.color);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_25 = V_0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_img2_53();
		NullCheck(L_26);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_26);
		NullCheck(L_25);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_25, L_27, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// colours.Add(img3.color);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_28 = V_0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_29 = __this->get_img3_54();
		NullCheck(L_29);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_29);
		NullCheck(L_28);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_28, L_30, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// colours.Add(img4.color);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_31 = V_0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_32 = __this->get_img4_55();
		NullCheck(L_32);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
		L_33 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_32);
		NullCheck(L_31);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_31, L_33, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// colours.Add(img5.color);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_34 = V_0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_img5_56();
		NullCheck(L_35);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36;
		L_36 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_35);
		NullCheck(L_34);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_34, L_36, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// colours.Add(img6.color);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_37 = V_0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_38 = __this->get_img6_57();
		NullCheck(L_38);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39;
		L_39 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_38);
		NullCheck(L_37);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_37, L_39, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// colours.Add(img7.color);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_40 = V_0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_41 = __this->get_img7_58();
		NullCheck(L_41);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42;
		L_42 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_41);
		NullCheck(L_40);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_40, L_42, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// for (int m = 0; m < colourCountSlider.value; m++)
		V_2 = 0;
		goto IL_017e;
	}

IL_0143:
	{
		// for (int l = 0; l < colourCountSlider.value; l++)
		V_3 = 0;
		goto IL_016b;
	}

IL_0147:
	{
		// if (colours[m] == colours[l] && m != l)
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_43 = V_0;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_45;
		L_45 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_43, L_44, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_46 = V_0;
		int32_t L_47 = V_3;
		NullCheck(L_46);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48;
		L_48 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_46, L_47, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		bool L_49;
		L_49 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_45, L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0167;
		}
	}
	{
		int32_t L_50 = V_2;
		int32_t L_51 = V_3;
		if ((((int32_t)L_50) == ((int32_t)L_51)))
		{
			goto IL_0167;
		}
	}
	{
		// areColoursUnique = false;
		__this->set_areColoursUnique_39((bool)0);
	}

IL_0167:
	{
		// for (int l = 0; l < colourCountSlider.value; l++)
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_016b:
	{
		// for (int l = 0; l < colourCountSlider.value; l++)
		int32_t L_53 = V_3;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_54 = __this->get_colourCountSlider_32();
		NullCheck(L_54);
		float L_55;
		L_55 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_54);
		if ((((float)((float)((float)L_53))) < ((float)L_55)))
		{
			goto IL_0147;
		}
	}
	{
		// for (int m = 0; m < colourCountSlider.value; m++)
		int32_t L_56 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_017e:
	{
		// for (int m = 0; m < colourCountSlider.value; m++)
		int32_t L_57 = V_2;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_58 = __this->get_colourCountSlider_32();
		NullCheck(L_58);
		float L_59;
		L_59 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_58);
		if ((((float)((float)((float)L_57))) < ((float)L_59)))
		{
			goto IL_0143;
		}
	}
	{
		// List<Color> coloursToAdd = new List<Color>();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_60 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)il2cpp_codegen_object_new(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1(L_60, /*hidden argument*/List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		V_1 = L_60;
		// if (areColoursUnique)
		bool L_61 = __this->get_areColoursUnique_39();
		if (!L_61)
		{
			goto IL_01dc;
		}
	}
	{
		// for (int n = 0; n < colourCountSlider.value; n++)
		V_4 = 0;
		goto IL_01b4;
	}

IL_01a0:
	{
		// coloursToAdd.Add(colours[n]);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_62 = V_1;
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_63 = V_0;
		int32_t L_64 = V_4;
		NullCheck(L_63);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_65;
		L_65 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_63, L_64, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		NullCheck(L_62);
		List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673(L_62, L_65, /*hidden argument*/List_1_Add_m56050934552C26AFABB1D2B0821499B7B67B1673_RuntimeMethod_var);
		// for (int n = 0; n < colourCountSlider.value; n++)
		int32_t L_66 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_01b4:
	{
		// for (int n = 0; n < colourCountSlider.value; n++)
		int32_t L_67 = V_4;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_68 = __this->get_colourCountSlider_32();
		NullCheck(L_68);
		float L_69;
		L_69 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_68);
		if ((((float)((float)((float)L_67))) < ((float)L_69)))
		{
			goto IL_01a0;
		}
	}
	{
		// GridManagerObject.SettingColourList(coloursToAdd);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_70 = __this->get_GridManagerObject_40();
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_71 = V_1;
		NullCheck(L_70);
		GridManager_SettingColourList_m8848E7343161EFEFD52E14B02501688DC558EFBA_inline(L_70, L_71, /*hidden argument*/NULL);
		// GridManagerObject.InitializationOfGameGrid();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_72 = __this->get_GridManagerObject_40();
		NullCheck(L_72);
		GridManager_InitializationOfGameGrid_m3089EA99C89F5AF8AE7CC48F217B25B17260094C(L_72, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01dc:
	{
		// uniqueColourScreen.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = __this->get_uniqueColourScreen_36();
		NullCheck(L_73);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_73, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::UniqueColourScreenOK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UniqueColourScreenOK_mC3E86A8E3ED4EA9A3C0BA3E539D55234AE976BE3 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// uniqueColourScreen.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_uniqueColourScreen_36();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// settingsScreen.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_settingsScreen_33();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::InitializationOfUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_InitializationOfUI_m8C37DD04A176531318B00F1486538976F35A0263 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// Default();
		UIManager_Default_m9D9B60EDB4882DB1AC7725A49F16030DE2A9647D(__this, /*hidden argument*/NULL);
		// for (int n = 0; n < colourSelectionParent.transform.childCount - colourCount; n++)
		V_0 = 0;
		goto IL_003d;
	}

IL_000a:
	{
		// colourSelectionParent.transform.GetChild(colourSelectionParent.transform.childCount - n - 1).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_colourSelectionParent_34();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_colourSelectionParent_34();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)), (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// for (int n = 0; n < colourSelectionParent.transform.childCount - colourCount; n++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003d:
	{
		// for (int n = 0; n < colourSelectionParent.transform.childCount - colourCount; n++)
		int32_t L_9 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_colourSelectionParent_34();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_11, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_colourCount_41();
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UIManager::Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Default_m9D9B60EDB4882DB1AC7725A49F16030DE2A9647D (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// gridHeightSlider.value = _factoryGridHeight;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_gridHeightSlider_31();
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, (8.0f));
		// gridWidthSlider.value = _factoryGridWidth;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_gridWidthSlider_30();
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, (7.0f));
		// colourCountSlider.value = _factoryColourCount;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_colourCountSlider_32();
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, (5.0f));
		// colourCount = _factoryColourCount;
		__this->set_colourCount_41(5);
		// gridWidthText.text = ((gridWidthSlider.value - _minGridWidth) * _double + _minGridWidth).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_gridWidthText_27();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_gridWidthSlider_30();
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)(5.0f))), (float)(2.0f))), (float)(5.0f)));
		String_t* L_6;
		L_6 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// gridHeightext.text = gridHeightSlider.value.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_gridHeightext_28();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_8 = __this->get_gridHeightSlider_31();
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
		// scoreText.text = scoredHexagons.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_scoreText_26();
		int32_t* L_12 = __this->get_address_of_scoredHexagons_42();
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		ConstantClass__ctor_m31AB7516882FF38B31F5DCC7912ABCD8AF7E7942(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UserInputManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInputManager_Start_mC77F17E50DB87D65C2DD18E52322BD86204625CF (UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GridManagerObject = GridManager.instance;
		IL2CPP_RUNTIME_CLASS_INIT(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = ((GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_StaticFields*)il2cpp_codegen_static_fields_for(GridManager_t9D03B7713AD644FF31B45E7A0313130344720328_il2cpp_TypeInfo_var))->get_instance_26();
		__this->set_GridManagerObject_27(L_0);
		// }
		return;
	}
}
// System.Void UserInputManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInputManager_Update_mEE0B27A27F30B0789F101226E94988CB4B25B49B (UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * V_1 = NULL;
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (GridManagerObject.ReadyForInput() && Input.touchCount > _zero)
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_0 = __this->get_GridManagerObject_27();
		NullCheck(L_0);
		bool L_1;
		L_1 = GridManager_ReadyForInput_mC9CA5E5E8921B37FDA339A22C2872849B7BEA305(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_2;
		L_2 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		// Vector3 worldPositionOfTouch = Camera.main.ScreenToWorldPoint(Input.GetTouch(_zero).position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_4;
		L_4 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_2), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Vector2 touchPosition = new Vector2(worldPositionOfTouch.x, worldPositionOfTouch.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_12), L_9, L_11, /*hidden argument*/NULL);
		// Collider2D collider = Physics2D.OverlapPoint(touchPosition);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13;
		L_13 = Physics2D_OverlapPoint_m023ABB1D290D24A6C77C5F9D7836A736F88AD345(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// selectecHexagonTile = GridManagerObject.GettingSelectedHexagonTile();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_14 = __this->get_GridManagerObject_27();
		NullCheck(L_14);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_15;
		L_15 = GridManager_GettingSelectedHexagonTile_m42CB0FE45DB627774E01D8DD52E153D7C706788C_inline(L_14, /*hidden argument*/NULL);
		__this->set_selectecHexagonTile_29(L_15);
		// DetectingTouch();
		UserInputManager_DetectingTouch_m37B46BE3E4F5F77EC61183B0ED8BCC3376AB7F7C(__this, /*hidden argument*/NULL);
		// IsHexagonTrioSelected(collider);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = V_1;
		UserInputManager_IsHexagonTrioSelected_mAF3728196A7FC658CC612D51E05231CBD61D11F5(__this, L_16, /*hidden argument*/NULL);
		// DetectingRotation();
		UserInputManager_DetectingRotation_m974C982ECC95B987F93BA17D35267A2C940FB70F(__this, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void UserInputManager::DetectingTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInputManager_DetectingTouch_m37B46BE3E4F5F77EC61183B0ED8BCC3376AB7F7C (UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F * __this, const RuntimeMethod* method)
{
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetTouch(_zero).phase == TouchPhase.Began)
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_0;
		L_0 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// validTouch = true;
		__this->set_validTouch_26((bool)1);
		// touchStartCoordinates = Input.GetTouch(_zero).position;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_2;
		L_2 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		__this->set_touchStartCoordinates_28(L_3);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void UserInputManager::IsHexagonTrioSelected(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInputManager_IsHexagonTrioSelected_mAF3728196A7FC658CC612D51E05231CBD61D11F5 (UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral492705B7D68BEAACDC093CC5D940D60DAF5BA526);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (collider != null && collider.transform.tag == _hexagon)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collider0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_2 = ___collider0;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral492705B7D68BEAACDC093CC5D940D60DAF5BA526, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// if (Input.GetTouch(_zero).phase == TouchPhase.Ended && validTouch)
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_6;
		L_6 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_004c;
		}
	}
	{
		bool L_8 = __this->get_validTouch_26();
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// validTouch = false;
		__this->set_validTouch_26((bool)0);
		// GridManagerObject.SelectHexagonTrio(collider);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_9 = __this->get_GridManagerObject_27();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_10 = ___collider0;
		NullCheck(L_9);
		GridManager_SelectHexagonTrio_mA1D435952EE3A0CC8AAA0A6B8281E4C489E85171(L_9, L_10, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void UserInputManager::DetectingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInputManager_DetectingRotation_m974C982ECC95B987F93BA17D35267A2C940FB70F (UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B14_0 = 0;
	{
		// if (Input.GetTouch(_zero).phase == TouchPhase.Moved && validTouch)
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_0;
		L_0 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0111;
		}
	}
	{
		bool L_2 = __this->get_validTouch_26();
		if (!L_2)
		{
			goto IL_0111;
		}
	}
	{
		// Vector2 afterTouchCoordinates = Input.GetTouch(_zero).position;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_3;
		L_3 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		// float distX = afterTouchCoordinates.x - touchStartCoordinates.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_1;
		float L_6 = L_5.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = __this->get_address_of_touchStartCoordinates_28();
		float L_8 = L_7->get_x_0();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_6, (float)L_8));
		// float distY = afterTouchCoordinates.y - touchStartCoordinates.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_1;
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_11 = __this->get_address_of_touchStartCoordinates_28();
		float L_12 = L_11->get_y_1();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_10, (float)L_12));
		// if ((Mathf.Abs(distX) > _hexagonRotateSlideDistance || Mathf.Abs(distY) > _hexagonRotateSlideDistance) && selectecHexagonTile != null)
		float L_13 = V_2;
		float L_14;
		L_14 = fabsf(L_13);
		if ((((float)L_14) > ((float)(5.0f))))
		{
			goto IL_0071;
		}
	}
	{
		float L_15 = V_3;
		float L_16;
		L_16 = fabsf(L_15);
		if ((!(((float)L_16) > ((float)(5.0f)))))
		{
			goto IL_0111;
		}
	}

IL_0071:
	{
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_17 = __this->get_selectecHexagonTile_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0111;
		}
	}
	{
		// Vector3 screenPosition = Camera.main.WorldToScreenPoint(selectecHexagonTile.transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19;
		L_19 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_20 = __this->get_selectecHexagonTile_29();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_19, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		// bool horizontalSwipe = Mathf.Abs(distX) > Mathf.Abs(distY);
		float L_24 = V_2;
		float L_25;
		L_25 = fabsf(L_24);
		float L_26 = V_3;
		float L_27;
		L_27 = fabsf(L_26);
		// bool swipeDirection = horizontalSwipe ? distX > _zero : distY > _zero;
		int32_t L_28 = ((((float)L_25) > ((float)L_27))? 1 : 0);
		G_B6_0 = L_28;
		if (L_28)
		{
			G_B7_0 = L_28;
			goto IL_00b9;
		}
	}
	{
		float L_29 = V_3;
		G_B8_0 = ((((float)L_29) > ((float)(0.0f)))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_00c1;
	}

IL_00b9:
	{
		float L_30 = V_2;
		G_B8_0 = ((((float)L_30) > ((float)(0.0f)))? 1 : 0);
		G_B8_1 = G_B7_0;
	}

IL_00c1:
	{
		V_5 = (bool)G_B8_0;
		// bool touchCoordinatesVsHexagonCoordinates = horizontalSwipe ? afterTouchCoordinates.y > screenPosition.y : afterTouchCoordinates.x > screenPosition.x;
		int32_t L_31 = G_B8_1;
		G_B9_0 = L_31;
		if (L_31)
		{
			G_B10_0 = L_31;
			goto IL_00d7;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_1;
		float L_33 = L_32.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_4;
		float L_35 = L_34.get_x_2();
		G_B11_0 = ((((float)L_33) > ((float)L_35))? 1 : 0);
		G_B11_1 = G_B9_0;
		goto IL_00e6;
	}

IL_00d7:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = V_1;
		float L_37 = L_36.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_4;
		float L_39 = L_38.get_y_3();
		G_B11_0 = ((((float)L_37) > ((float)L_39))? 1 : 0);
		G_B11_1 = G_B10_0;
	}

IL_00e6:
	{
		V_6 = (bool)G_B11_0;
		// bool rotateHexagonTrioClockwise = horizontalSwipe ? swipeDirection == touchCoordinatesVsHexagonCoordinates : swipeDirection != touchCoordinatesVsHexagonCoordinates;
		if (G_B11_1)
		{
			goto IL_00f5;
		}
	}
	{
		bool L_40 = V_5;
		bool L_41 = V_6;
		G_B14_0 = ((((int32_t)((((int32_t)L_40) == ((int32_t)L_41))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00fb;
	}

IL_00f5:
	{
		bool L_42 = V_5;
		bool L_43 = V_6;
		G_B14_0 = ((((int32_t)L_42) == ((int32_t)L_43))? 1 : 0);
	}

IL_00fb:
	{
		V_7 = (bool)G_B14_0;
		// validTouch = false;
		__this->set_validTouch_26((bool)0);
		// GridManagerObject.RotateSelectionOutline(rotateHexagonTrioClockwise);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_44 = __this->get_GridManagerObject_27();
		bool L_45 = V_7;
		NullCheck(L_44);
		GridManager_RotateSelectionOutline_mB8ED5D010AAEBB4789AFCCE735AE7C3565B04929(L_44, L_45, /*hidden argument*/NULL);
	}

IL_0111:
	{
		// }
		return;
	}
}
// System.Void UserInputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInputManager__ctor_m61191A7D2C01E92553DB810A8D027D34C31C618D (UserInputManager_t733A6AF706B9516F96AC84B1244957D87CC9FC5F * __this, const RuntimeMethod* method)
{
	{
		ConstantClass__ctor_m31AB7516882FF38B31F5DCC7912ABCD8AF7E7942(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GridManager/<CreateHexagons>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateHexagonsU3Ed__37__ctor_m8FA52491C4006BE8A91AF1A31AB098F273C67DCC (U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GridManager/<CreateHexagons>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateHexagonsU3Ed__37_System_IDisposable_Dispose_mFB210D6834C85C0917B407B4A80A11F0558BDAD8 (U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CCreateHexagonsU3Ed__37_U3CU3Em__Finally1_m6C4B1E0C63950A865ABB9E3BDDAB5FA683B47899(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean GridManager/<CreateHexagons>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCreateHexagonsU3Ed__37_MoveNext_m35D48AEC3E78DE9FFCA83F6EC6A9F8E7A5A56B5E (U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m376883DE8D9B9C406BEA9E5A0DB2F132FE4B7FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_mE42EE4AE438138933F05703057D35A68DAC6F26D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD396EA185003D66D9F0425A2C98D23F6A1624175_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mBD93211DA0D7B29006CFA30014093BAFEFB1BA21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	float G_B6_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_012d;
			}
		}

IL_0018:
		{
			V_0 = (bool)0;
			goto IL_026a;
		}

IL_001f:
		{
			__this->set_U3CU3E1__state_0((-1));
			// float startCoordinateX = CoordinateXOfFirstColumn();
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_4 = V_2;
			NullCheck(L_4);
			float L_5;
			L_5 = GridManager_CoordinateXOfFirstColumn_m38E3B7C4095A724709F65FFFD0DB3E39852B523A(L_4, /*hidden argument*/NULL);
			__this->set_U3CstartCoordinateXU3E5__3_6(L_5);
			// hexagonCreationStatus = true;
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_6 = V_2;
			NullCheck(L_6);
			L_6->set_hexagonCreationStatus_45((bool)1);
			// foreach (int n in columns)
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7 = __this->get_columns_3();
			NullCheck(L_7);
			Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_8;
			L_8 = List_1_GetEnumerator_mD396EA185003D66D9F0425A2C98D23F6A1624175(L_7, /*hidden argument*/List_1_GetEnumerator_mD396EA185003D66D9F0425A2C98D23F6A1624175_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap3_7(L_8);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0236;
		}

IL_0057:
		{
			// foreach (int n in columns)
			Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_9 = __this->get_address_of_U3CU3E7__wrap3_7();
			int32_t L_10;
			L_10 = Enumerator_get_Current_m376883DE8D9B9C406BEA9E5A0DB2F132FE4B7FDA_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_9, /*hidden argument*/Enumerator_get_Current_m376883DE8D9B9C406BEA9E5A0DB2F132FE4B7FDA_RuntimeMethod_var);
			__this->set_U3CnU3E5__5_8(L_10);
			// columnStatus = OnColumn(n);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_11 = V_2;
			int32_t L_12 = __this->get_U3CnU3E5__5_8();
			NullCheck(L_11);
			bool L_13;
			L_13 = GridManager_OnColumn_m9B2EA2EB87DBC2139A725B796C6825383FEF05F8(L_11, L_12, /*hidden argument*/NULL);
			V_5 = L_13;
			// coordinateX = startCoordinateX + (_horizontalHexagonDistance * n);
			float L_14 = __this->get_U3CstartCoordinateXU3E5__3_6();
			int32_t L_15 = __this->get_U3CnU3E5__5_8();
			V_3 = ((float)il2cpp_codegen_add((float)L_14, (float)((float)il2cpp_codegen_multiply((float)(0.444999993f), (float)((float)((float)L_15))))));
			// coordinateY = (_verticalHexagonDistance * gameGrid[n].Count * _double) + _verticalGridOffset + (columnStatus ? _verticalHexagonDistance : _zero);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_16 = V_2;
			NullCheck(L_16);
			List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_17 = L_16->get_gameGrid_39();
			int32_t L_18 = __this->get_U3CnU3E5__5_8();
			NullCheck(L_17);
			List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_19;
			L_19 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
			NullCheck(L_19);
			int32_t L_20;
			L_20 = List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_inline(L_19, /*hidden argument*/List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var);
			bool L_21 = V_5;
			G_B5_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.230000004f), (float)((float)((float)L_20)))), (float)(2.0f))), (float)(-3.0f)));
			if (L_21)
			{
				G_B6_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.230000004f), (float)((float)((float)L_20)))), (float)(2.0f))), (float)(-3.0f)));
				goto IL_00bf;
			}
		}

IL_00b8:
		{
			G_B7_0 = (0.0f);
			G_B7_1 = G_B5_0;
			goto IL_00c4;
		}

IL_00bf:
		{
			G_B7_0 = (0.230000004f);
			G_B7_1 = G_B6_0;
		}

IL_00c4:
		{
			V_4 = ((float)il2cpp_codegen_add((float)G_B7_1, (float)G_B7_0));
			// initialPosition = new Vector3(coordinateX, coordinateY, _zero);
			float L_22 = V_3;
			float L_23 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			memset((&L_24), 0, sizeof(L_24));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), L_22, L_23, (0.0f), /*hidden argument*/NULL);
			__this->set_U3CinitialPositionU3E5__2_5(L_24);
			// GameObject newGameObject = Instantiate(hexagonPrefab, _hexagonInitialPosition, Quaternion.identity, hexagonParent.transform);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_25 = V_2;
			NullCheck(L_25);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = L_25->get_hexagonPrefab_27();
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_27 = V_2;
			NullCheck(L_27);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = ((ConstantClass_tF10F2CC1BD0CB405B9C8A5AEC335B562C3CAF4C5 *)L_27)->get__hexagonInitialPosition_25();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
			L_29 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_28, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
			L_30 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_31 = V_2;
			NullCheck(L_31);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = L_31->get_hexagonParent_28();
			NullCheck(L_32);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
			L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
			L_34 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mBD93211DA0D7B29006CFA30014093BAFEFB1BA21(L_26, L_29, L_30, L_33, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mBD93211DA0D7B29006CFA30014093BAFEFB1BA21_RuntimeMethod_var);
			V_6 = L_34;
			// HexagonTile newHexagonTile = newGameObject.GetComponent<HexagonTile>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_6;
			NullCheck(L_35);
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_36;
			L_36 = GameObject_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_mE42EE4AE438138933F05703057D35A68DAC6F26D(L_35, /*hidden argument*/GameObject_GetComponent_TisHexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7_mE42EE4AE438138933F05703057D35A68DAC6F26D_RuntimeMethod_var);
			__this->set_U3CnewHexagonTileU3E5__6_9(L_36);
			// yield return new WaitForSeconds(_hexagonSendDelay);
			WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_37 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_37, (0.0250000004f), /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_37);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_026a;
		}

IL_012d:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if (bombsAway)
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_38 = V_2;
			NullCheck(L_38);
			bool L_39 = L_38->get_bombsAway_35();
			if (!L_39)
			{
				goto IL_0160;
			}
		}

IL_013d:
		{
			// newHexagonTile.SetBombHexagon();
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_40 = __this->get_U3CnewHexagonTileU3E5__6_9();
			NullCheck(L_40);
			HexagonTile_SetBombHexagon_mE21635FC8DFD31D140DDE9E4DD2AD35F0544D641(L_40, /*hidden argument*/NULL);
			// bombHexagons.Add(newHexagonTile);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_41 = V_2;
			NullCheck(L_41);
			List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_42 = L_41->get_bombHexagons_41();
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_43 = __this->get_U3CnewHexagonTileU3E5__6_9();
			NullCheck(L_42);
			List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_42, L_43, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
			// bombsAway = false;
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_44 = V_2;
			NullCheck(L_44);
			L_44->set_bombsAway_35((bool)0);
		}

IL_0160:
		{
			// if (colourSeed == null)
			List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_45 = __this->get_colourSeed_4();
			if (L_45)
			{
				goto IL_0198;
			}
		}

IL_0168:
		{
			// newHexagonTile.SettingHexagonColour(colourList[(int)(Random.value * _seed) % colourList.Count]);
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_46 = __this->get_U3CnewHexagonTileU3E5__6_9();
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_47 = V_2;
			NullCheck(L_47);
			List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_48 = L_47->get_colourList_42();
			float L_49;
			L_49 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_50 = V_2;
			NullCheck(L_50);
			List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_51 = L_50->get_colourList_42();
			NullCheck(L_51);
			int32_t L_52;
			L_52 = List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_inline(L_51, /*hidden argument*/List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_RuntimeMethod_var);
			NullCheck(L_48);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_53;
			L_53 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_48, ((int32_t)((int32_t)((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_49, (float)(75486.0f)))))%(int32_t)L_52)), /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
			NullCheck(L_46);
			HexagonTile_SettingHexagonColour_m463AA510C5E21D23307A6E42E8BD1EF4AD227B8D(L_46, L_53, /*hidden argument*/NULL);
			// }
			goto IL_01cf;
		}

IL_0198:
		{
			// newHexagonTile.SettingHexagonColour(colourSeed[n][gameGrid[n].Count]);
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_54 = __this->get_U3CnewHexagonTileU3E5__6_9();
			List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 * L_55 = __this->get_colourSeed_4();
			int32_t L_56 = __this->get_U3CnU3E5__5_8();
			NullCheck(L_55);
			List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_57;
			L_57 = List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_inline(L_55, L_56, /*hidden argument*/List_1_get_Item_m0600F1214C62A186F908A3BD2F92411F10B74DB6_RuntimeMethod_var);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_58 = V_2;
			NullCheck(L_58);
			List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_59 = L_58->get_gameGrid_39();
			int32_t L_60 = __this->get_U3CnU3E5__5_8();
			NullCheck(L_59);
			List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_61;
			L_61 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_59, L_60, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
			NullCheck(L_61);
			int32_t L_62;
			L_62 = List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_inline(L_61, /*hidden argument*/List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var);
			NullCheck(L_57);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_63;
			L_63 = List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_inline(L_57, L_62, /*hidden argument*/List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_RuntimeMethod_var);
			NullCheck(L_54);
			HexagonTile_SettingHexagonColour_m463AA510C5E21D23307A6E42E8BD1EF4AD227B8D(L_54, L_63, /*hidden argument*/NULL);
		}

IL_01cf:
		{
			// newHexagonTile.AlterHexagonGridPosition(new Vector2(n, gameGrid[n].Count));
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_64 = __this->get_U3CnewHexagonTileU3E5__6_9();
			int32_t L_65 = __this->get_U3CnU3E5__5_8();
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_66 = V_2;
			NullCheck(L_66);
			List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_67 = L_66->get_gameGrid_39();
			int32_t L_68 = __this->get_U3CnU3E5__5_8();
			NullCheck(L_67);
			List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_69;
			L_69 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_67, L_68, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
			NullCheck(L_69);
			int32_t L_70;
			L_70 = List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_inline(L_69, /*hidden argument*/List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71;
			memset((&L_71), 0, sizeof(L_71));
			Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_71), ((float)((float)L_65)), ((float)((float)L_70)), /*hidden argument*/NULL);
			NullCheck(L_64);
			HexagonTile_AlterHexagonGridPosition_m3D0796FF2846F0B0C2CCD6570D4DA691BE5A9DBE(L_64, L_71, /*hidden argument*/NULL);
			// newHexagonTile.AlterWorldPosition(initialPosition);
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_72 = __this->get_U3CnewHexagonTileU3E5__6_9();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73 = __this->get_U3CinitialPositionU3E5__2_5();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_74;
			L_74 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_73, /*hidden argument*/NULL);
			NullCheck(L_72);
			HexagonTile_AlterWorldPosition_m3D67C6B6BFF83D6AA17A0BBAE65C58FC3259BB50(L_72, L_74, /*hidden argument*/NULL);
			// gameGrid[n].Add(newHexagonTile);
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_75 = V_2;
			NullCheck(L_75);
			List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_76 = L_75->get_gameGrid_39();
			int32_t L_77 = __this->get_U3CnU3E5__5_8();
			NullCheck(L_76);
			List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_78;
			L_78 = List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_inline(L_76, L_77, /*hidden argument*/List_1_get_Item_m59AAA731F4BFFC39701FFDA3E1722F6E9537A1AC_RuntimeMethod_var);
			HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_79 = __this->get_U3CnewHexagonTileU3E5__6_9();
			NullCheck(L_78);
			List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C(L_78, L_79, /*hidden argument*/List_1_Add_mAAC53DC381248E3F66BFA6710C4DB96871EED87C_RuntimeMethod_var);
			// }
			__this->set_U3CnewHexagonTileU3E5__6_9((HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 *)NULL);
		}

IL_0236:
		{
			// foreach (int n in columns)
			Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_80 = __this->get_address_of_U3CU3E7__wrap3_7();
			bool L_81;
			L_81 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_80, /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
			if (L_81)
			{
				goto IL_0057;
			}
		}

IL_0246:
		{
			U3CCreateHexagonsU3Ed__37_U3CU3Em__Finally1_m6C4B1E0C63950A865ABB9E3BDDAB5FA683B47899(__this, /*hidden argument*/NULL);
			Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_82 = __this->get_address_of_U3CU3E7__wrap3_7();
			il2cpp_codegen_initobj(L_82, sizeof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C ));
			// hexagonCreationStatus = false;
			GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_83 = V_2;
			NullCheck(L_83);
			L_83->set_hexagonCreationStatus_45((bool)0);
			// }
			V_0 = (bool)0;
			goto IL_026a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0263;
	}

FAULT_0263:
	{ // begin fault (depth: 1)
		U3CCreateHexagonsU3Ed__37_System_IDisposable_Dispose_mFB210D6834C85C0917B407B4A80A11F0558BDAD8(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(611)
	} // end fault
	IL2CPP_CLEANUP(611)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_026a:
	{
		bool L_84 = V_0;
		return L_84;
	}
}
// System.Void GridManager/<CreateHexagons>d__37::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateHexagonsU3Ed__37_U3CU3Em__Finally1_m6C4B1E0C63950A865ABB9E3BDDAB5FA683B47899 (U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_0 = __this->get_address_of_U3CU3E7__wrap3_7();
		Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_0, /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		return;
	}
}
// System.Object GridManager/<CreateHexagons>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateHexagonsU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9CDDB048359E1548254E10CEE460A2700C2D89F8 (U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GridManager/<CreateHexagons>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateHexagonsU3Ed__37_System_Collections_IEnumerator_Reset_m08DC4BA7034E183B26B5C4F1AC59E1C451F3DFED (U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateHexagonsU3Ed__37_System_Collections_IEnumerator_Reset_m08DC4BA7034E183B26B5C4F1AC59E1C451F3DFED_RuntimeMethod_var)));
	}
}
// System.Object GridManager/<CreateHexagons>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateHexagonsU3Ed__37_System_Collections_IEnumerator_get_Current_m05E67596913E93C947F7DA83FCCE14EC75BBE476 (U3CCreateHexagonsU3Ed__37_t3FC7E8C01C4C7934E6D63BDB5DCFF97AEFF915E1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GridManager/<RotationCoroutine>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotationCoroutineU3Ed__47__ctor_mF4D149F3D81A0C41DEC279A5AE74CC057EBA27E6 (U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GridManager/<RotationCoroutine>d__47::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotationCoroutineU3Ed__47_System_IDisposable_Dispose_m44EB8759561FA70FE240A157847C71AF3E62A9EA (U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GridManager/<RotationCoroutine>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRotationCoroutineU3Ed__47_MoveNext_m9C8215D2F8474AF2D0A5FE95C4B06AAA99BBE8B9 (U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0132;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// List<HexagonTile> scoringHexagons = null;
		__this->set_U3CscoringHexagonsU3E5__2_4((List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 *)NULL);
		// bool check = true;
		__this->set_U3CcheckU3E5__3_5((bool)1);
		// hexagonRotateStatus = true;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_hexagonRotateStatus_43((bool)1);
		// for (int n = 0; n < selectedTrio.Count; n++)
		__this->set_U3CnU3E5__4_6(0);
		goto IL_00a3;
	}

IL_0047:
	{
		// TurnHexagons(CW);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_4 = V_1;
		bool L_5 = __this->get_CW_3();
		NullCheck(L_4);
		GridManager_TurnHexagons_mC670078C5FB17888ABDBF34C5EB941235879346F(L_4, L_5, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (0.300000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_006c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// scoringHexagons = CheckScoringHexagons(gameGrid);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_7 = V_1;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_8 = V_1;
		NullCheck(L_8);
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_9 = L_8->get_gameGrid_39();
		NullCheck(L_7);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_10;
		L_10 = GridManager_CheckScoringHexagons_m9811F82D4E33D6672E7BB3C29DB410BFB5E57C8E(L_7, L_9, /*hidden argument*/NULL);
		__this->set_U3CscoringHexagonsU3E5__2_4(L_10);
		// if (scoringHexagons.Count > _zero)
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_11 = __this->get_U3CscoringHexagonsU3E5__2_4();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_inline(L_11, /*hidden argument*/List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var);
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		// for (int n = 0; n < selectedTrio.Count; n++)
		int32_t L_13 = __this->get_U3CnU3E5__4_6();
		V_2 = L_13;
		int32_t L_14 = V_2;
		__this->set_U3CnU3E5__4_6(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
	}

IL_00a3:
	{
		// for (int n = 0; n < selectedTrio.Count; n++)
		int32_t L_15 = __this->get_U3CnU3E5__4_6();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_16 = V_1;
		NullCheck(L_16);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_17 = L_16->get_selectedTrio_40();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_inline(L_17, /*hidden argument*/List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_18)))
		{
			goto IL_0047;
		}
	}

IL_00b6:
	{
		// hexagonScoringStatus = true;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_19 = V_1;
		NullCheck(L_19);
		L_19->set_hexagonScoringStatus_44((bool)1);
		// hexagonRotateStatus = false;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_20 = V_1;
		NullCheck(L_20);
		L_20->set_hexagonRotateStatus_43((bool)0);
		goto IL_0139;
	}

IL_00c6:
	{
		// if (check)
		bool L_21 = __this->get_U3CcheckU3E5__3_5();
		if (!L_21)
		{
			goto IL_00f8;
		}
	}
	{
		// hexagonCreationStatus = true;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_22 = V_1;
		NullCheck(L_22);
		L_22->set_hexagonCreationStatus_45((bool)1);
		// StartCoroutine(CreateHexagons(ScoreHexagons(scoringHexagons)));
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_23 = V_1;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_24 = V_1;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_25 = V_1;
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_26 = __this->get_U3CscoringHexagonsU3E5__2_4();
		NullCheck(L_25);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_27;
		L_27 = GridManager_ScoreHexagons_mA8188BEBF79EA4DFBEF3EB15DA51E343D17FAA19(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		RuntimeObject* L_28;
		L_28 = GridManager_CreateHexagons_m044E084EC5E7BADD38CF095AD009AE405B1E50E9(L_24, L_27, (List_1_t99323D42CD77A24DA7652786722BFDB1A90DDDA6 *)NULL, /*hidden argument*/NULL);
		NullCheck(L_23);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_29;
		L_29 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_23, L_28, /*hidden argument*/NULL);
		// check = false;
		__this->set_U3CcheckU3E5__3_5((bool)0);
		// }
		goto IL_0119;
	}

IL_00f8:
	{
		// else if (!hexagonCreationStatus)
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_30 = V_1;
		NullCheck(L_30);
		bool L_31 = L_30->get_hexagonCreationStatus_45();
		if (L_31)
		{
			goto IL_0119;
		}
	}
	{
		// scoringHexagons = CheckScoringHexagons(gameGrid);
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_32 = V_1;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_33 = V_1;
		NullCheck(L_33);
		List_1_tC532CABF1A989E2BD98B5DD314C9A55E1C531CB8 * L_34 = L_33->get_gameGrid_39();
		NullCheck(L_32);
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_35;
		L_35 = GridManager_CheckScoringHexagons_m9811F82D4E33D6672E7BB3C29DB410BFB5E57C8E(L_32, L_34, /*hidden argument*/NULL);
		__this->set_U3CscoringHexagonsU3E5__2_4(L_35);
		// check = true;
		__this->set_U3CcheckU3E5__3_5((bool)1);
	}

IL_0119:
	{
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_36 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_36, (0.300000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_36);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0132:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0139:
	{
		// while (scoringHexagons.Count > _zero)
		List_1_tD82A26999FA42FE8089B437661174BDEB67C8308 * L_37 = __this->get_U3CscoringHexagonsU3E5__2_4();
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_inline(L_37, /*hidden argument*/List_1_get_Count_m6ABB7EF1EDF44EA9E9C31E84FBD8C2F6A4BA170D_RuntimeMethod_var);
		if ((((int32_t)L_38) > ((int32_t)0)))
		{
			goto IL_00c6;
		}
	}
	{
		// hexagonScoringStatus = false;
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_39 = V_1;
		NullCheck(L_39);
		L_39->set_hexagonScoringStatus_44((bool)0);
		// FindHexagonTrio();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_40 = V_1;
		NullCheck(L_40);
		GridManager_FindHexagonTrio_m3A0D7D8891C0B2D84955C11B06043CFADF0E3F77(L_40, /*hidden argument*/NULL);
		// CreateOutline();
		GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * L_41 = V_1;
		NullCheck(L_41);
		GridManager_CreateOutline_m93AC4491D19B26CF46D60B350E4E8227016F0338(L_41, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GridManager/<RotationCoroutine>d__47::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRotationCoroutineU3Ed__47_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m055E9AB37935E7FFB79FD14C926FFD2FBCBB5CB8 (U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GridManager/<RotationCoroutine>d__47::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotationCoroutineU3Ed__47_System_Collections_IEnumerator_Reset_m48C4CD3A113A71AB21034CE337775C4B32894E94 (U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRotationCoroutineU3Ed__47_System_Collections_IEnumerator_Reset_m48C4CD3A113A71AB21034CE337775C4B32894E94_RuntimeMethod_var)));
	}
}
// System.Object GridManager/<RotationCoroutine>d__47::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRotationCoroutineU3Ed__47_System_Collections_IEnumerator_get_Current_mBDBE8BD95231E541778EE3E4CBD86A1DA35A2FE2 (U3CRotationCoroutineU3Ed__47_t7F348569825F3FEDE3C92CDBEA948F0C001041A8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridManager_GettingGridHeight_mC2D7974B44D2431F019406AC9BD52356DC7B9640_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// return gridHeight;
		int32_t L_0 = __this->get_gridHeight_32();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridManager_GettingGridWidth_mFBCB3948062D10F67DD2F3364BDE00E878E8C115_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// return gridWidth;
		int32_t L_0 = __this->get_gridWidth_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HexagonTile_GettingHexagonX_m77AA2DAC15C6631CA3985B953CB34BCE4C4A50B5_inline (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	{
		// return coordinateX;
		int32_t L_0 = __this->get_coordinateX_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HexagonTile_GettingHexagonY_mEC4FFBCD04D7A28D7D0DD20C261AAA03E1E1B5AC_inline (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	{
		// return coordinateY;
		int32_t L_0 = __this->get_coordinateY_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HexagonTile_GettingBombhexagonTimer_mE07C1C882713FA7A3A931EBC16A27098B38DA49E_inline (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, const RuntimeMethod* method)
{
	{
		// return bombHexagonTimer;
		int32_t L_0 = __this->get_bombHexagonTimer_34();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HexagonTile_SettingHexagonY_mC4CA9A9C4E5C696ACF5F4D52232F4F0105CE2F76_inline (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// coordinateY = value;
		int32_t L_0 = ___value0;
		__this->set_coordinateY_28(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HexagonTile_SettingHexagonX_mBCE4856224034F7ADD1D57CDB47E0B6A91763D7E_inline (HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// coordinateX = value;
		int32_t L_0 = ___value0;
		__this->set_coordinateX_27(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridManager_SettingGridWidth_m0ACD924C53724BA0ADB9C9FDE35680E36DB1DA0A_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___width0, const RuntimeMethod* method)
{
	{
		// gridWidth = width;
		int32_t L_0 = ___width0;
		__this->set_gridWidth_33(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridManager_SettingGridHeight_mB56A5A88383252A841FA4936C19B08F557D4C6B5_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, int32_t ___height0, const RuntimeMethod* method)
{
	{
		// gridHeight = height;
		int32_t L_0 = ___height0;
		__this->set_gridHeight_32(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridManager_SettingColourList_m8848E7343161EFEFD52E14B02501688DC558EFBA_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___colors0, const RuntimeMethod* method)
{
	{
		// colourList = colors;
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_0 = ___colors0;
		__this->set_colourList_42(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * GridManager_GettingSelectedHexagonTile_m42CB0FE45DB627774E01D8DD52E153D7C706788C_inline (GridManager_t9D03B7713AD644FF31B45E7A0313130344720328 * __this, const RuntimeMethod* method)
{
	{
		// return selectedHexagonTile;
		HexagonTile_t9EDBFB2CB840EB166E3AC4CBDA32D9D5CF9B7DE7 * L_0 = __this->get_selectedHexagonTile_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC6E1AE47FECBE86E02F2BC2F32B2C70C518E8A79_gshared_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  List_1_get_Item_mD8795BEA6AB2951A78ABBE2837D7B4EE2A196BFE_gshared_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)L_2, (int32_t)L_3);
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m376883DE8D9B9C406BEA9E5A0DB2F132FE4B7FDA_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
