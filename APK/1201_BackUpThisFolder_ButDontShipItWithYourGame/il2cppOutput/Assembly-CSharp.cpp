﻿#include "pch-cpp.hpp"

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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Character[]
struct CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// Creature[]
struct CreatureU5BU5D_t8363BB91AE7E8E2E8F2FF3A0411601B42D55F3DA;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// Planet[]
struct PlanetU5BU5D_tF53108873B1593DB581657406C9E3A4D583B92A9;
// Player[]
struct PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraFollow
struct CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// Character
struct Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61;
// CharacterDataBaseSO
struct CharacterDataBaseSO_t4503AE865B4B17C7C15E0DBDA16FB3B7209EF128;
// CharacterSwipe
struct CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41;
// CharacterUIManager
struct CharacterUIManager_t5FE02860D0EFE9069A97B7CF3FCED8F592C2692B;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CowAttackState
struct CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801;
// CowBaseState
struct CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762;
// CowHurtState
struct CowHurtState_t4B0274636C9155C740C6FEC0DB03492AF34E9C98;
// CowIdleState
struct CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B;
// CowMoveState
struct CowMoveState_t2EBC12856C2B207ED73084D011174D04E3B5039A;
// CowStateManager
struct CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF;
// Creature
struct Creature_t42147A47AEE71D058B155255EE888E7882D89BE2;
// CreatureAttackState
struct CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54;
// CreatureBase
struct CreatureBase_t0C22685B313DE7B87E042BD5C7C552C6038756F4;
// CreatureBaseState
struct CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695;
// CreatureDataBaseSO
struct CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09;
// CreatureDestroyState
struct CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7;
// CreatureHurtState
struct CreatureHurtState_t172F3610E3FE16BC817C34B6FBC77AA4616A2E70;
// CreatureIdleState
struct CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619;
// CreatureMoveState
struct CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713;
// CreatureStateManager
struct CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// EnemyDrop
struct EnemyDrop_tD042650E8C3C608F95DC2B6F999167D165A87B3C;
// EnemySpawn
struct EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FixedJoystick
struct FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// InfinitePlane
struct InfinitePlane_t1F42D7E4C50033E02922998DDEB2C339B75AAD4F;
// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95;
// Joystick
struct Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// MChickenBaseState
struct MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F;
// MChickenHurtState
struct MChickenHurtState_t8BF3A697D1395C8FB11AC5F1CD4547AB36CD3E34;
// MChickenMoveState
struct MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57;
// MChickenStateManager
struct MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OctopusAttack
struct OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325;
// OctopusAttackState
struct OctopusAttackState_t42A02556AA17600444DB5F51A0B07559B302BEC4;
// OctopusBaseState
struct OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728;
// OctopusDestroyState
struct OctopusDestroyState_t2568441834679165291F7B188D4D53DB02426296;
// OctopusHurtState
struct OctopusHurtState_t6BEDF7BE26F49C6C0B9F250BB98A00EB781BA25D;
// OctopusIdleState
struct OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD;
// OctopusMoveState
struct OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581;
// OctopusStateManager
struct OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF;
// PCowAttackState
struct PCowAttackState_t56278DBE0D3BCE86671A1AB671FCC7282D325FB3;
// PCowBaseState
struct PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01;
// PCowChargeState
struct PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550;
// PCowMoveState
struct PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324;
// PCowStateManager
struct PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A;
// PanelSwipe
struct PanelSwipe_tBAB802D2617DFE9966CE2DBDC20EE78E667F92DF;
// Planet
struct Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2;
// PlanetDataBaseSO
struct PlanetDataBaseSO_t917FF6B5CD1F2497D9BA3952206394B1D6A608B7;
// PlanetSwipe
struct PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB;
// PlanetUIManager
struct PlanetUIManager_tE920FB80804965CE123D996D70D0B59ED566E9DA;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// PlayerBaseState
struct PlayerBaseState_t65506B4765A28FA6FB2D59DB238C361559A179EB;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A;
// PlayerDataBaseSO
struct PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD;
// PlayerSpawn
struct PlayerSpawn_t1C3802744B7EEF8E68DB64B20695ACD6D2E49D2D;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// RatAttackState
struct RatAttackState_t8701EF29E555B51D87B09D45754B8FF7605D8BCA;
// RatBaseState
struct RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3;
// RatHurtState
struct RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9;
// RatIdleState
struct RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811;
// RatMoveState
struct RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10;
// RatStateManager
struct RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SaveData
struct SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29;
// SceneControl
struct SceneControl_tB5F69E118FF00E7DD7FA6A3BBDD662CF9640F039;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// SlimeBaseState
struct SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A;
// SlimeHurtState
struct SlimeHurtState_t3048EC999D84DFBB159DBA214C1B2A0B65B24DFF;
// SlimeMoveState
struct SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1;
// SlimeStateManager
struct SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// UIPointer
struct UIPointer_t071139942DEFBA4BFE3B3522499F198AC04ED51E;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// CowAttackState/<TimeToIdle>d__2
struct U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9;
// EnemySpawn/<Spawn>d__9
struct U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// OctopusAttack/<Enabled>d__2
struct U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97;
// PanelSwipe/<SmoothMove>d__9
struct U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0;
// PlayerController/<countTime>d__14
struct U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8;
// PlayerController/playerDelegate
struct playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6;

IL2CPP_EXTERN_C RuntimeClass* CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CowHurtState_t4B0274636C9155C740C6FEC0DB03492AF34E9C98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CowMoveState_t2EBC12856C2B207ED73084D011174D04E3B5039A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreatureHurtState_t172F3610E3FE16BC817C34B6FBC77AA4616A2E70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyDrop_tD042650E8C3C608F95DC2B6F999167D165A87B3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MChickenHurtState_t8BF3A697D1395C8FB11AC5F1CD4547AB36CD3E34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OctopusAttackState_t42A02556AA17600444DB5F51A0B07559B302BEC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OctopusDestroyState_t2568441834679165291F7B188D4D53DB02426296_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OctopusHurtState_t6BEDF7BE26F49C6C0B9F250BB98A00EB781BA25D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCowAttackState_t56278DBE0D3BCE86671A1AB671FCC7282D325FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerSpawn_t1C3802744B7EEF8E68DB64B20695ACD6D2E49D2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RatAttackState_t8701EF29E555B51D87B09D45754B8FF7605D8BCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SlimeHurtState_t3048EC999D84DFBB159DBA214C1B2A0B65B24DFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0EDE210EB1CF878D6A0D8DA1893565FA8FE5D1A4;
IL2CPP_EXTERN_C String_t* _stringLiteral11125E7BF7759B441922E38429970CDF802FFB84;
IL2CPP_EXTERN_C String_t* _stringLiteral149384106D626B9D6C795802B8A2503035F3A086;
IL2CPP_EXTERN_C String_t* _stringLiteral15D0E8857464F65E61AE3EFCDFD6D22E63EC0B91;
IL2CPP_EXTERN_C String_t* _stringLiteral23AE89803DFC0F9BE0030BB1A3578070B6BF437D;
IL2CPP_EXTERN_C String_t* _stringLiteral3707F913551A8841BBAA20ABA0BEBEB064B2FE1C;
IL2CPP_EXTERN_C String_t* _stringLiteral3CB260CA88D0E5787069D0700B9BC473FD680DFC;
IL2CPP_EXTERN_C String_t* _stringLiteral3E538D25AD88E153C305B95581F14918239F2431;
IL2CPP_EXTERN_C String_t* _stringLiteral40682890B660810D40D0C469ADF290F82DF673D8;
IL2CPP_EXTERN_C String_t* _stringLiteral4603791C9DB4AF84133FC838B3DD57A3D1178642;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBE2C5EB759A7647A5789816D98142D57FB5BCC;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral6469030139425A33424D68BE2D4A5D5EF2D5A793;
IL2CPP_EXTERN_C String_t* _stringLiteral6F42835D67B0B8C91CBC6508BF885DD3ACAFFAD0;
IL2CPP_EXTERN_C String_t* _stringLiteral7A8EDB9A16BFA121CB236EF065327A1AC2313086;
IL2CPP_EXTERN_C String_t* _stringLiteral95DAF4E6A98F3195567255E34A6CD817EA8ADA3A;
IL2CPP_EXTERN_C String_t* _stringLiteral9C85A85AFC399D037D0D5761734BFE94E1D69856;
IL2CPP_EXTERN_C String_t* _stringLiteralB07D3449BB2C3E5DEA192A50648AD901D78FC600;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCF3EC95BE19EE4CDACEB4F46CB80718584718A8D;
IL2CPP_EXTERN_C String_t* _stringLiteralD372C4CD9067BEFD3E25668F77C0D05F136C8A08;
IL2CPP_EXTERN_C String_t* _stringLiteralD51D3EF50BF94EB49C1E584FD95D81E2198257E2;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F363EEBD5A6D166EADD7821ADD9B8A2C0F5EBA;
IL2CPP_EXTERN_C String_t* _stringLiteralE796D8428A31C89F4F32CCE284FFAFEF0A50CAED;
IL2CPP_EXTERN_C String_t* _stringLiteralF0A5CE818AD8FCA268DB009E6FDE5DAD56E43734;
IL2CPP_EXTERN_C String_t* _stringLiteralF4B01CF7C0D2AF8B2E57344DF849CB5C7A5F2C60;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_m1F49B810F7EC19B5C5C43E5FB0F71F215EED386F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325_m981C90A985E96BCDF4C6F764B47BBE0F4B33EB39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mB26F8DBF011ECCDA105AA4C551AB7F52F9C47805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OctopusDestroyState_UpdateState_m9B419262082ECBB8B620653CCACE4A74C78B1CC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerController_Pattern_Move_m92A49DF0FAB0E0EDC43B6FAE13FA89F58ABF0B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RatAttackState_UpdateState_mA4049C5692ED3B1A28CFB62909E0A3512DCD1B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SaveSystem_LoadFormJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mE93FA98EFA2B609743C6381B46E87EEFD3DCED0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnabledU3Ed__2_System_Collections_IEnumerator_Reset_mFDF8855E79075E9DE6B8C52FC35CA2BA491576DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSmoothMoveU3Ed__9_System_Collections_IEnumerator_Reset_mC6980D784EC8ECA1E2D2325EEE5CD2D2E5C8B1DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnU3Ed__9_System_Collections_IEnumerator_Reset_m343F9B0ABA480ED2FF103280DB85A1091BBCB339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimeToIdleU3Ed__2_System_Collections_IEnumerator_Reset_mE9ED1686DC33E9259F6B993627727BCF95293B65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcountTimeU3Ed__14_System_Collections_IEnumerator_Reset_m9910CA9DDAA2E3B122573280B9FB1104BA42790F_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7;
struct CreatureU5BU5D_t8363BB91AE7E8E2E8F2FF3A0411601B42D55F3DA;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct PlanetU5BU5D_tF53108873B1593DB581657406C9E3A4D583B92A9;
struct PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// Character
struct Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61  : public RuntimeObject
{
	// System.String Character::characterTitle
	String_t* ___characterTitle_0;
	// System.String Character::characterIntroduce
	String_t* ___characterIntroduce_1;
};

// CowBaseState
struct CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762  : public RuntimeObject
{
	// UnityEngine.Rigidbody CowBaseState::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_0;
};

// Creature
struct Creature_t42147A47AEE71D058B155255EE888E7882D89BE2  : public RuntimeObject
{
	// System.String Creature::creatureName
	String_t* ___creatureName_0;
	// System.Single Creature::moveSpeed
	float ___moveSpeed_1;
	// System.Single Creature::attackPower
	float ___attackPower_2;
	// System.Single Creature::attackCD
	float ___attackCD_3;
	// System.Single Creature::currentAttackCD
	float ___currentAttackCD_4;
	// System.Single Creature::hurtCD
	float ___hurtCD_5;
	// System.Single Creature::currentHurtCD
	float ___currentHurtCD_6;
	// System.Single Creature::maxHP
	float ___maxHP_7;
	// System.Single Creature::currentHP
	float ___currentHP_8;
	// UnityEngine.GameObject[] Creature::items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___items_9;
	// System.Int32[] Creature::probability
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___probability_10;
};

// CreatureBaseState
struct CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695  : public RuntimeObject
{
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// MChickenBaseState
struct MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F  : public RuntimeObject
{
};

// OctopusBaseState
struct OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728  : public RuntimeObject
{
	// UnityEngine.Rigidbody OctopusBaseState::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_0;
};

// PCowBaseState
struct PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01  : public RuntimeObject
{
	// UnityEngine.Transform PCowBaseState::playerTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerTrans_0;
	// UnityEngine.Rigidbody PCowBaseState::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_1;
};

// Planet
struct Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2  : public RuntimeObject
{
	// System.String Planet::planetTitle
	String_t* ___planetTitle_0;
	// System.String Planet::planetIntroduce
	String_t* ___planetIntroduce_1;
	// UnityEngine.GameObject Planet::planetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planetObject_2;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public RuntimeObject
{
	// System.String Player::name
	String_t* ___name_0;
	// UnityEngine.GameObject Player::playerObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerObject_1;
	// System.Single Player::moveSpeed
	float ___moveSpeed_2;
	// System.Single Player::attackPower
	float ___attackPower_3;
	// System.Single Player::attackCD
	float ___attackCD_4;
	// System.Single Player::currentAttackCD
	float ___currentAttackCD_5;
	// System.Single Player::hurtCD
	float ___hurtCD_6;
	// System.Single Player::currentHurtCD
	float ___currentHurtCD_7;
	// System.Single Player::maxHP
	float ___maxHP_8;
	// System.Single Player::currentHP
	float ___currentHP_9;
	// UnityEngine.GameObject[] Player::items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___items_10;
};

// PlayerBaseState
struct PlayerBaseState_t65506B4765A28FA6FB2D59DB238C361559A179EB  : public RuntimeObject
{
};

// RatBaseState
struct RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3  : public RuntimeObject
{
	// UnityEngine.Transform RatBaseState::playerTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerTrans_0;
	// UnityEngine.Rigidbody RatBaseState::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_1;
};

// SaveSystem
struct SaveSystem_t2AD9136E299BBC331486FD5824074967CC1FBDC7  : public RuntimeObject
{
};

// SlimeBaseState
struct SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64  : public RuntimeObject
{
	// UnityEngine.GameObject Tile::theTile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___theTile_0;
	// System.Single Tile::creationTime
	float ___creationTime_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CowAttackState/<TimeToIdle>d__2
struct U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9  : public RuntimeObject
{
	// System.Int32 CowAttackState/<TimeToIdle>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CowAttackState/<TimeToIdle>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CowStateManager CowAttackState/<TimeToIdle>d__2::creature
	CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature_2;
};

// EnemySpawn/<Spawn>d__9
struct U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559  : public RuntimeObject
{
	// System.Int32 EnemySpawn/<Spawn>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemySpawn/<Spawn>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EnemySpawn EnemySpawn/<Spawn>d__9::<>4__this
	EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* ___U3CU3E4__this_2;
};

// OctopusAttack/<Enabled>d__2
struct U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97  : public RuntimeObject
{
	// System.Int32 OctopusAttack/<Enabled>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OctopusAttack/<Enabled>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// OctopusAttack OctopusAttack/<Enabled>d__2::<>4__this
	OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325* ___U3CU3E4__this_2;
};

// PlayerController/<countTime>d__14
struct U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8  : public RuntimeObject
{
	// System.Int32 PlayerController/<countTime>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<countTime>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single PlayerController/<countTime>d__14::setTime
	float ___setTime_2;
	// PlayerController PlayerController/<countTime>d__14::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_3;
	// PlayerController/playerDelegate PlayerController/<countTime>d__14::playerDelegate
	playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* ___playerDelegate_4;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// CowAttackState
struct CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801  : public CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762
{
};

// CowHurtState
struct CowHurtState_t4B0274636C9155C740C6FEC0DB03492AF34E9C98  : public CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762
{
};

// CowIdleState
struct CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B  : public CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762
{
};

// CowMoveState
struct CowMoveState_t2EBC12856C2B207ED73084D011174D04E3B5039A  : public CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762
{
	// FixedJoystick CowMoveState::_joystick
	FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* ____joystick_1;
};

// CreatureAttackState
struct CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54  : public CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695
{
};

// CreatureDestroyState
struct CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7  : public CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695
{
};

// CreatureHurtState
struct CreatureHurtState_t172F3610E3FE16BC817C34B6FBC77AA4616A2E70  : public CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695
{
};

// CreatureIdleState
struct CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619  : public CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695
{
	// System.Single CreatureIdleState::RandomTime
	float ___RandomTime_0;
};

// CreatureMoveState
struct CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713  : public CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695
{
	// UnityEngine.Transform CreatureMoveState::playerTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerTrans_0;
	// UnityEngine.Rigidbody CreatureMoveState::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// MChickenHurtState
struct MChickenHurtState_t8BF3A697D1395C8FB11AC5F1CD4547AB36CD3E34  : public MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F
{
};

// MChickenMoveState
struct MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57  : public MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F
{
	// UnityEngine.Transform MChickenMoveState::playerTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerTrans_0;
	// UnityEngine.Rigidbody MChickenMoveState::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// OctopusAttackState
struct OctopusAttackState_t42A02556AA17600444DB5F51A0B07559B302BEC4  : public OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728
{
};

// OctopusDestroyState
struct OctopusDestroyState_t2568441834679165291F7B188D4D53DB02426296  : public OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728
{
};

// OctopusHurtState
struct OctopusHurtState_t6BEDF7BE26F49C6C0B9F250BB98A00EB781BA25D  : public OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728
{
};

// OctopusIdleState
struct OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD  : public OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728
{
};

// OctopusMoveState
struct OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581  : public OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728
{
	// FixedJoystick OctopusMoveState::_joystick
	FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* ____joystick_1;
};

// PCowChargeState
struct PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550  : public PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01
{
	// System.Single PCowChargeState::charge
	float ___charge_2;
};

// PCowMoveState
struct PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324  : public PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// RatAttackState
struct RatAttackState_t8701EF29E555B51D87B09D45754B8FF7605D8BCA  : public RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3
{
};

// RatHurtState
struct RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9  : public RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3
{
	// System.Single RatHurtState::hurtCD
	float ___hurtCD_2;
};

// RatIdleState
struct RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811  : public RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3
{
};

// RatMoveState
struct RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10  : public RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3
{
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// SlimeHurtState
struct SlimeHurtState_t3048EC999D84DFBB159DBA214C1B2A0B65B24DFF  : public SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A
{
};

// SlimeMoveState
struct SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1  : public SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A
{
	// UnityEngine.Transform SlimeMoveState::playerTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerTrans_0;
	// UnityEngine.Rigidbody SlimeMoveState::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_1;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// PCowAttackState
struct PCowAttackState_t56278DBE0D3BCE86671A1AB671FCC7282D325FB3  : public PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01
{
	// UnityEngine.Vector3 PCowAttackState::target
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target_2;
	// System.Single PCowAttackState::wait
	float ___wait_3;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// SaveData
struct SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29  : public RuntimeObject
{
	// System.String SaveData::playerName
	String_t* ___playerName_0;
	// System.Int32 SaveData::playerLevel
	int32_t ___playerLevel_1;
	// System.Int32 SaveData::playerCoin
	int32_t ___playerCoin_2;
	// System.Int32 SaveData::playerRuby
	int32_t ___playerRuby_3;
	// System.Int32 SaveData::selectPlanet
	int32_t ___selectPlanet_4;
	// System.Int32 SaveData::selectCharacter
	int32_t ___selectCharacter_5;
	// UnityEngine.Vector3 SaveData::playerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___playerPosition_6;
	// System.Single SaveData::planetBarValue
	float ___planetBarValue_7;
	// System.Single SaveData::characterBarValue
	float ___characterBarValue_8;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// PanelSwipe/<SmoothMove>d__9
struct U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0  : public RuntimeObject
{
	// System.Int32 PanelSwipe/<SmoothMove>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PanelSwipe/<SmoothMove>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single PanelSwipe/<SmoothMove>d__9::seconds
	float ___seconds_2;
	// PanelSwipe PanelSwipe/<SmoothMove>d__9::<>4__this
	PanelSwipe_tBAB802D2617DFE9966CE2DBDC20EE78E667F92DF* ___U3CU3E4__this_3;
	// UnityEngine.Vector3 PanelSwipe/<SmoothMove>d__9::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_4;
	// UnityEngine.Vector3 PanelSwipe/<SmoothMove>d__9::endPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPos_5;
	// System.Single PanelSwipe/<SmoothMove>d__9::<t>5__2
	float ___U3CtU3E5__2_6;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// CharacterDataBaseSO
struct CharacterDataBaseSO_t4503AE865B4B17C7C15E0DBDA16FB3B7209EF128  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Character[] CharacterDataBaseSO::_character
	CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7* ____character_4;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// CreatureDataBaseSO
struct CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Creature[] CreatureDataBaseSO::_creature
	CreatureU5BU5D_t8363BB91AE7E8E2E8F2FF3A0411601B42D55F3DA* ____creature_4;
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// PlanetDataBaseSO
struct PlanetDataBaseSO_t917FF6B5CD1F2497D9BA3952206394B1D6A608B7  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Planet[] PlanetDataBaseSO::_planet
	PlanetU5BU5D_tF53108873B1593DB581657406C9E3A4D583B92A9* ____planet_4;
};

// PlayerDataBaseSO
struct PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Player[] PlayerDataBaseSO::_player
	PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* ____player_4;
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// PlayerController/playerDelegate
struct playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// CameraFollow
struct CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraFollow::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
	// UnityEngine.Vector3 CameraFollow::offSet
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offSet_5;
};

// CharacterSwipe
struct CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CharacterSwipe::scrollBar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scrollBar_4;
	// System.Single CharacterSwipe::scrollPos
	float ___scrollPos_5;
	// System.Single[] CharacterSwipe::pos
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pos_6;
	// CharacterDataBaseSO CharacterSwipe::_characterDataBase
	CharacterDataBaseSO_t4503AE865B4B17C7C15E0DBDA16FB3B7209EF128* ____characterDataBase_7;
	// TMPro.TextMeshProUGUI CharacterSwipe::_characterTitle
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____characterTitle_8;
	// TMPro.TextMeshProUGUI CharacterSwipe::_characterIntroduce
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____characterIntroduce_9;
};

struct CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41_StaticFields
{
	// System.Int32 CharacterSwipe::currentCharacter
	int32_t ___currentCharacter_10;
	// System.Single CharacterSwipe::currentCharacterBarValue
	float ___currentCharacterBarValue_11;
};

// CharacterUIManager
struct CharacterUIManager_t5FE02860D0EFE9069A97B7CF3FCED8F592C2692B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CowStateManager
struct CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CowBaseState CowStateManager::currentState
	CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* ___currentState_4;
	// CowIdleState CowStateManager::idleState
	CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B* ___idleState_5;
	// CowMoveState CowStateManager::moveState
	CowMoveState_t2EBC12856C2B207ED73084D011174D04E3B5039A* ___moveState_6;
	// CowAttackState CowStateManager::attackState
	CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801* ___attackState_7;
	// CowHurtState CowStateManager::hurtState
	CowHurtState_t4B0274636C9155C740C6FEC0DB03492AF34E9C98* ___hurtState_8;
	// PlayerDataBaseSO CowStateManager::playerData
	PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* ___playerData_9;
	// FixedJoystick CowStateManager::fixedJoystick
	FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* ___fixedJoystick_10;
	// UnityEngine.Vector3 CowStateManager::fixedJoystickPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fixedJoystickPos_11;
};

// CreatureBase
struct CreatureBase_t0C22685B313DE7B87E042BD5C7C552C6038756F4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CreatureBase::playerTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerTrans_4;
};

// CreatureStateManager
struct CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CreatureBaseState CreatureStateManager::currentState
	CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695* ___currentState_4;
	// CreatureIdleState CreatureStateManager::idleState
	CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619* ___idleState_5;
	// CreatureAttackState CreatureStateManager::attackState
	CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54* ___attackState_6;
	// CreatureHurtState CreatureStateManager::hurtState
	CreatureHurtState_t172F3610E3FE16BC817C34B6FBC77AA4616A2E70* ___hurtState_7;
	// CreatureMoveState CreatureStateManager::moveState
	CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713* ___moveState_8;
	// CreatureDestroyState CreatureStateManager::destroyState
	CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7* ___destroyState_9;
};

// EnemyDrop
struct EnemyDrop_tD042650E8C3C608F95DC2B6F999167D165A87B3C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// EnemySpawn
struct EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] EnemySpawn::_enemy
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____enemy_4;
	// System.Single EnemySpawn::_spawnRate
	float ____spawnRate_5;
	// System.Single EnemySpawn::_minSpawnPos
	float ____minSpawnPos_6;
	// System.Single EnemySpawn::_maxSpawnPos
	float ____maxSpawnPos_7;
	// System.Boolean EnemySpawn::canSpawn
	bool ___canSpawn_8;
	// UnityEngine.Transform EnemySpawn::playerTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerTrans_9;
};

// InfinitePlane
struct InfinitePlane_t1F42D7E4C50033E02922998DDEB2C339B75AAD4F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] InfinitePlane::plane
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___plane_4;
	// UnityEngine.GameObject InfinitePlane::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_5;
	// System.Int32 InfinitePlane::planeSize
	int32_t ___planeSize_6;
	// System.Int32 InfinitePlane::halfTilesX
	int32_t ___halfTilesX_7;
	// System.Int32 InfinitePlane::halfTilesZ
	int32_t ___halfTilesZ_8;
	// UnityEngine.Vector3 InfinitePlane::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_9;
	// System.Collections.Hashtable InfinitePlane::tiles
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___tiles_10;
};

// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Joystick
struct Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input_14;
};

// MChickenStateManager
struct MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MChickenBaseState MChickenStateManager::currentState
	MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* ___currentState_4;
	// MChickenHurtState MChickenStateManager::hurtState
	MChickenHurtState_t8BF3A697D1395C8FB11AC5F1CD4547AB36CD3E34* ___hurtState_5;
	// MChickenMoveState MChickenStateManager::moveState
	MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57* ___moveState_6;
	// CreatureDataBaseSO MChickenStateManager::CreatureData
	CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* ___CreatureData_7;
};

// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MenuManager::menuCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menuCanvas_4;
	// UnityEngine.Transform MenuManager::PlanetSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___PlanetSpawnPoint_5;
	// PlanetDataBaseSO MenuManager::PlanetDataBaseSO
	PlanetDataBaseSO_t917FF6B5CD1F2497D9BA3952206394B1D6A608B7* ___PlanetDataBaseSO_6;
};

// OctopusAttack
struct OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject OctopusAttack::attackObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackObject_4;
};

// OctopusStateManager
struct OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OctopusBaseState OctopusStateManager::currentState
	OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* ___currentState_4;
	// OctopusAttackState OctopusStateManager::attackState
	OctopusAttackState_t42A02556AA17600444DB5F51A0B07559B302BEC4* ___attackState_5;
	// OctopusDestroyState OctopusStateManager::destroyState
	OctopusDestroyState_t2568441834679165291F7B188D4D53DB02426296* ___destroyState_6;
	// OctopusHurtState OctopusStateManager::hurtState
	OctopusHurtState_t6BEDF7BE26F49C6C0B9F250BB98A00EB781BA25D* ___hurtState_7;
	// OctopusMoveState OctopusStateManager::moveState
	OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581* ___moveState_8;
	// OctopusIdleState OctopusStateManager::idleState
	OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD* ___idleState_9;
	// PlayerDataBaseSO OctopusStateManager::playerData
	PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* ___playerData_10;
	// FixedJoystick OctopusStateManager::fixedJoystick
	FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* ___fixedJoystick_11;
	// UnityEngine.Vector3 OctopusStateManager::fixedJoystickPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fixedJoystickPos_12;
};

// PCowStateManager
struct PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PCowBaseState PCowStateManager::currentState
	PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* ___currentState_4;
	// PCowAttackState PCowStateManager::attackState
	PCowAttackState_t56278DBE0D3BCE86671A1AB671FCC7282D325FB3* ___attackState_5;
	// PCowMoveState PCowStateManager::moveState
	PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324* ___moveState_6;
	// PCowChargeState PCowStateManager::chargeState
	PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550* ___chargeState_7;
	// CreatureDataBaseSO PCowStateManager::CreatureData
	CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* ___CreatureData_8;
};

// PanelSwipe
struct PanelSwipe_tBAB802D2617DFE9966CE2DBDC20EE78E667F92DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 PanelSwipe::panelLocation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___panelLocation_4;
	// System.Int32 PanelSwipe::currentChild
	int32_t ___currentChild_5;
	// System.Int32 PanelSwipe::childIndex
	int32_t ___childIndex_6;
	// System.Single PanelSwipe::percentThreshold
	float ___percentThreshold_7;
	// System.Single PanelSwipe::easing
	float ___easing_8;
	// System.Single PanelSwipe::targetSize
	float ___targetSize_9;
};

// PlanetSwipe
struct PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlanetSwipe::scrollBar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scrollBar_4;
	// System.Single PlanetSwipe::scrollPos
	float ___scrollPos_5;
	// System.Single[] PlanetSwipe::pos
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pos_6;
	// PlanetDataBaseSO PlanetSwipe::_planetDataBase
	PlanetDataBaseSO_t917FF6B5CD1F2497D9BA3952206394B1D6A608B7* ____planetDataBase_7;
	// TMPro.TextMeshProUGUI PlanetSwipe::_planetTitle
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____planetTitle_8;
	// TMPro.TextMeshProUGUI PlanetSwipe::_planetIntroduce
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____planetIntroduce_9;
};

struct PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB_StaticFields
{
	// System.Int32 PlanetSwipe::currentPlanet
	int32_t ___currentPlanet_10;
	// System.Single PlanetSwipe::currentPlanetBarValue
	float ___currentPlanetBarValue_11;
};

// PlanetUIManager
struct PlanetUIManager_tE920FB80804965CE123D996D70D0B59ED566E9DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerController/playerDelegate PlayerController::playerState
	playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* ___playerState_4;
	// System.Single PlayerController::forceStrength
	float ___forceStrength_5;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_6;
	// FixedJoystick PlayerController::joystick
	FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* ___joystick_7;
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_8;
	// System.Single PlayerController::attackCD
	float ___attackCD_9;
	// UnityEngine.CapsuleCollider PlayerController::attackCollider
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___attackCollider_10;
};

// PlayerData
struct PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerDataBaseSO PlayerData::Data
	PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* ___Data_4;
};

// PlayerSpawn
struct PlayerSpawn_t1C3802744B7EEF8E68DB64B20695ACD6D2E49D2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform PlayerSpawn::playerSpawnPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerSpawnPos_5;
	// PlayerDataBaseSO PlayerSpawn::playerDataBaseSO
	PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* ___playerDataBaseSO_6;
};

struct PlayerSpawn_t1C3802744B7EEF8E68DB64B20695ACD6D2E49D2D_StaticFields
{
	// System.Int32 PlayerSpawn::currentPlayer
	int32_t ___currentPlayer_4;
};

// RatStateManager
struct RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RatBaseState RatStateManager::currentState
	RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* ___currentState_4;
	// RatAttackState RatStateManager::attackState
	RatAttackState_t8701EF29E555B51D87B09D45754B8FF7605D8BCA* ___attackState_5;
	// RatIdleState RatStateManager::idleState
	RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811* ___idleState_6;
	// RatHurtState RatStateManager::hurtState
	RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9* ___hurtState_7;
	// RatMoveState RatStateManager::moveState
	RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10* ___moveState_8;
	// CreatureDataBaseSO RatStateManager::CreatureData
	CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* ___CreatureData_9;
};

// SceneControl
struct SceneControl_tB5F69E118FF00E7DD7FA6A3BBDD662CF9640F039  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SceneControl_tB5F69E118FF00E7DD7FA6A3BBDD662CF9640F039_StaticFields
{
	// SceneControl SceneControl::Instance
	SceneControl_tB5F69E118FF00E7DD7FA6A3BBDD662CF9640F039* ___Instance_4;
};

// SlimeStateManager
struct SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SlimeBaseState SlimeStateManager::currentState
	SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* ___currentState_4;
	// SlimeMoveState SlimeStateManager::moveState
	SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1* ___moveState_5;
	// SlimeHurtState SlimeStateManager::hurtState
	SlimeHurtState_t3048EC999D84DFBB159DBA214C1B2A0B65B24DFF* ___hurtState_6;
	// CreatureDataBaseSO SlimeStateManager::creatureData
	CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* ___creatureData_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIPointer
struct UIPointer_t071139942DEFBA4BFE3B3522499F198AC04ED51E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FixedJoystick
struct FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6  : public Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_20;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_22;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_23;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_24;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* ___m_OnValueChanged_25;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ContainerRect_26;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_27;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_28;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_PointerDownRepeat_29;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_30;
	// System.Boolean UnityEngine.UI.Scrollbar::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_31;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Character[]
struct CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7  : public RuntimeArray
{
	ALIGN_FIELD (8) Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* m_Items[1];

	inline Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Creature[]
struct CreatureU5BU5D_t8363BB91AE7E8E2E8F2FF3A0411601B42D55F3DA  : public RuntimeArray
{
	ALIGN_FIELD (8) Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* m_Items[1];

	inline Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Creature_t42147A47AEE71D058B155255EE888E7882D89BE2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Creature_t42147A47AEE71D058B155255EE888E7882D89BE2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Planet[]
struct PlanetU5BU5D_tF53108873B1593DB581657406C9E3A4D583B92A9  : public RuntimeArray
{
	ALIGN_FIELD (8) Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* m_Items[1];

	inline Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Player[]
struct PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1  : public RuntimeArray
{
	ALIGN_FIELD (8) Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* m_Items[1];

	inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T SaveSystem::LoadFormJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SaveSystem_LoadFormJson_TisRuntimeObject_mE7ECEE1634D1306D8D932EDD8282195AB2E78A23_gshared (String_t* ___fileName0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared (RuntimeObject* ___t0, int32_t ___ease1, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void EnemySpawn::SpawnWithDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawn_SpawnWithDistance_mB93B3F7856898EC82E6855E45A295659A09A26E7 (EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EnemySpawn::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawn_Spawn_mF3A7D867EC8340717C90497AF373A3A880062D08 (EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void EnemySpawn/<Spawn>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__9__ctor_m6D9BDB99EE6A9CD8365FE940F6209C6814EAB759 (U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.GameObject EnemySpawn::GetEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemySpawn_GetEnemy_mF7A1CA742FAEBBB71A28AB6A72DA616861ADBEBC (EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String SaveSystem::get_CharacterSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SaveSystem_get_CharacterSave_mC2853044B6AE97D02FA80A7BF048B79268C0C454 (const RuntimeMethod* method) ;
// T SaveSystem::LoadFormJson<SaveData>(System.String)
inline SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* SaveSystem_LoadFormJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mE93FA98EFA2B609743C6381B46E87EEFD3DCED0D (String_t* ___fileName0, const RuntimeMethod* method)
{
	return ((  SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* (*) (String_t*, const RuntimeMethod*))SaveSystem_LoadFormJson_TisRuntimeObject_mE7ECEE1634D1306D8D932EDD8282195AB2E78A23_gshared)(___fileName0, method);
}
// Player PlayerDataBaseSO::GetPlayerByJson(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* PlayerDataBaseSO_GetPlayerByJson_mFE38580FCD3A38E61E6E6D874F070AE5CD561D16 (PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Tile::.ctor(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_mCD18E1A48797B42BACBC1C43674A9893B5065450 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___t0, float ___ct1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PlayerController/playerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playerDelegate__ctor_m82ACAB4D8D2ADF27D151758B3A2621CF2B840925 (playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void PlayerController/playerDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void playerDelegate_Invoke_mFA44C083104F42A0D5F79413D76D7344E3B58BC3_inline (playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* __this, const RuntimeMethod* method) ;
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m23B2FBFE52DFF5E60F0DDAF88FC954EE3AF0A92B (Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mB224F6BDC3C0A3E8B6ADA20E7378970A6DDBD164 (Joystick_t6225AC7FD164AD3414FB157CD5769DB31F9AE955* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerController::countTime(System.Single,PlayerController/playerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_countTime_m0D32AF28CE8F535BC988B3C2B269B81C85B70CA8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___setTime0, playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* ___playerDelegate1, const RuntimeMethod* method) ;
// System.Void PlayerController/<countTime>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcountTimeU3Ed__14__ctor_m91050FBBB656149853C63AA4F1D58F800A6B28D9 (U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void CreatureBase::DistanceWithPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBase_DistanceWithPlayer_m4C968A292DAF4F52DA64986218C02D298501AA36 (CreatureBase_t0C22685B313DE7B87E042BD5C7C552C6038756F4* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<PlayerData>()
inline PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* GameObject_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mB26F8DBF011ECCDA105AA4C551AB7F52F9C47805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// System.Single PlayerData::get_attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerData_get_attack_m6BF22244161186C361DA16F2CDAF311CFF1B21DE (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) ;
// Creature CreatureDataBaseSO::GetCreature(CreatureDataBaseSO/Name)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B (CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* __this, int32_t ___name0, const RuntimeMethod* method) ;
// System.Void MChickenStateManager::SwitchState(MChickenBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenStateManager_SwitchState_m8C9C99B6B49B4E73F268AE2E95E991DC4A553EEA (MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* __this, MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* ___creatureBaseState0, const RuntimeMethod* method) ;
// System.Void MChickenBaseState::EnterState(MChickenStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenBaseState_EnterState_m9A46C769AEA8394E7BBC1E9FCFD052FBB19CD46C (MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* __this, MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* ___creature0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Void MChickenBaseState::OnTriggerEnter(MChickenStateManager,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenBaseState_OnTriggerEnter_mF52CF3BF14B13399BE97C4A05B309F022DDE984D (MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* __this, MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* ___creature0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other1, const RuntimeMethod* method) ;
// System.Void MChickenBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenBaseState__ctor_m1FD47EC79D49B5046BD501E5FF615214BD805F66 (MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void MChickenHurtState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenHurtState__ctor_mC616DA7B7F56773BE4F3BD44A8DB1C90E3A928A9 (MChickenHurtState_t8BF3A697D1395C8FB11AC5F1CD4547AB36CD3E34* __this, const RuntimeMethod* method) ;
// System.Void MChickenMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenMoveState__ctor_mBEE23272C52D4A5B136E071556C980D4B5E1E203 (MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57* __this, const RuntimeMethod* method) ;
// System.Void PCowBaseState::EnterState(PCowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowBaseState_EnterState_m62DABB0CA7EB5B12B5EF6E9E458DAE550063F9D7 (PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* __this, PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* ___creature0, const RuntimeMethod* method) ;
// System.Void PCowBaseState::UpdateState(PCowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowBaseState_UpdateState_m37343E6BC3F9C80A3E4261F95353CF1259187A18 (PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* __this, PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* ___creature0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// System.Void PCowStateManager::SwitchState(PCowBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowStateManager_SwitchState_m3C4D9860B76E79A6BB3B54409CF9AE1DC01FC909 (PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* __this, PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* ___creatureBaseState0, const RuntimeMethod* method) ;
// System.Void PCowBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowBaseState__ctor_mBAF9256303C8A1A3B5367E8A086C063B6B1A9FF5 (PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<PlayerData>()
inline PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* Component_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_m1F49B810F7EC19B5C5C43E5FB0F71F215EED386F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void PCowAttackState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowAttackState__ctor_m4D73DE3C6C451B5AB6B31BC4E29326CC53014F66 (PCowAttackState_t56278DBE0D3BCE86671A1AB671FCC7282D325FB3* __this, const RuntimeMethod* method) ;
// System.Void PCowMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowMoveState__ctor_mCB334E1952EA94027759165A47F4002B80D0D768 (PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324* __this, const RuntimeMethod* method) ;
// System.Void PCowChargeState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowChargeState__ctor_mB46CC7365FE58F09C0E2C8E76B1435D6079AF715 (PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550* __this, const RuntimeMethod* method) ;
// System.Void RatStateManager::SwitchState(RatBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatStateManager_SwitchState_m62868816ABCF5BE3CAEC15380F109392E1646D14 (RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* __this, RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* ___creatureBaseState0, const RuntimeMethod* method) ;
// System.Void RatBaseState::EnterState(RatStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatBaseState_EnterState_m9B0574F32E000A62189EE7485B7436AD74878219 (RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* __this, RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* ___creature0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void RatBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatBaseState__ctor_m1C1D251C4B5025CFE3BD3DC1DFA05703DA595230 (RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* __this, const RuntimeMethod* method) ;
// System.Void RatBaseState::OnTriggerEnter(RatStateManager,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatBaseState_OnTriggerEnter_m18C7BBDC10D78263387468F589B64D857AE6BCBE (RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* __this, RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* ___creature0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other1, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void RatAttackState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatAttackState__ctor_mBA27487837E1E5B5BBDCA18A9297685B1A3482DD (RatAttackState_t8701EF29E555B51D87B09D45754B8FF7605D8BCA* __this, const RuntimeMethod* method) ;
// System.Void RatIdleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatIdleState__ctor_m5CE7B2F69461C1DB473C75E3BD6AA620AEEEFEFA (RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811* __this, const RuntimeMethod* method) ;
// System.Void RatHurtState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatHurtState__ctor_mD4A58DCEE2E89DBE99CEB32DCCB04D7973EF12B9 (RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9* __this, const RuntimeMethod* method) ;
// System.Void RatMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatMoveState__ctor_mCAF89CBC8C70283E50EC45702DDA1CC8ACC2DA1A (RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10* __this, const RuntimeMethod* method) ;
// System.Void CreatureBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBaseState__ctor_m502873AFF706911A88BAE938BA706D1A7D0374AB (CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void CreatureStateManager::SwitchState(CreatureBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureStateManager_SwitchState_mD868E409EEB7D0A8E1C8E536F3EC63DF37E054BE (CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* __this, CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695* ___creatureBaseState0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void CreatureIdleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureIdleState__ctor_mB6EDF04A0BEAB7C826ACF78F6B9706701AC0A7C5 (CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619* __this, const RuntimeMethod* method) ;
// System.Void CreatureAttackState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureAttackState__ctor_mD18E417AE274DB7D57EC98B30801B0CAFF47CEA9 (CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54* __this, const RuntimeMethod* method) ;
// System.Void CreatureHurtState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureHurtState__ctor_m1D0D24C177AB84D6B37400E484A6C5BB974A0FCC (CreatureHurtState_t172F3610E3FE16BC817C34B6FBC77AA4616A2E70* __this, const RuntimeMethod* method) ;
// System.Void CreatureMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureMoveState__ctor_mE851885512DB980E9DDCE8389DEFCC1DB7D3CBCF (CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713* __this, const RuntimeMethod* method) ;
// System.Void CreatureDestroyState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureDestroyState__ctor_mF03666B8A59840EAFAE75C9A67BCD1964A6E5818 (CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7* __this, const RuntimeMethod* method) ;
// System.Void SlimeStateManager::SwitchState(SlimeBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeStateManager_SwitchState_m25294565C59DFCF6C13BB34138F0B69270CDB0DA (SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* __this, SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* ___creatureBaseState0, const RuntimeMethod* method) ;
// System.Void SlimeBaseState::EnterState(SlimeStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeBaseState_EnterState_m8326B5756037EDF009BB1A348B16C0E88D60A447 (SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* __this, SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* ___creature0, const RuntimeMethod* method) ;
// System.Void SlimeBaseState::OnTriggerEnter(SlimeStateManager,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeBaseState_OnTriggerEnter_mE4B09A386B788AB7CEC1D8B1803BBCC5179141C2 (SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* __this, SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* ___creature0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other1, const RuntimeMethod* method) ;
// System.Void SlimeBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeBaseState__ctor_m0BFCE4214FE063B55102A49C4E865622E2B63B2F (SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* __this, const RuntimeMethod* method) ;
// System.Void EnemyDrop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDrop__ctor_m1F4C5B7E6D7CCEE2AA113C8C4262048A5346E5F8 (EnemyDrop_tD042650E8C3C608F95DC2B6F999167D165A87B3C* __this, const RuntimeMethod* method) ;
// System.Void EnemyDrop::DropItem(Creature,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDrop_DropItem_m34CA5F3E3E3D45A4E94542E4B500116C5B3470AB (EnemyDrop_tD042650E8C3C608F95DC2B6F999167D165A87B3C* __this, Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* ___creature0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___creatuerTrans1, const RuntimeMethod* method) ;
// System.Void SlimeMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeMoveState__ctor_m17ED11C6E8BED65B61C26ACA76D3B4EB1624855C (SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1* __this, const RuntimeMethod* method) ;
// System.Void SlimeHurtState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeHurtState__ctor_mA7DD4FED81DC4CCC8C043578BFC7A03CBF062D2B (SlimeHurtState_t3048EC999D84DFBB159DBA214C1B2A0B65B24DFF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_anyKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKey_m6FF00BB4F01FA996E2FB3F3727EBC414C8EB2CEB (const RuntimeMethod* method) ;
// Player PlayerDataBaseSO::GetPlayer(PlayerDataBaseSO/Name)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA (PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* __this, int32_t ___name0, const RuntimeMethod* method) ;
// System.Void CowStateManager::SwitchState(CowBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowStateManager_SwitchState_m9B4E3845718AB97B6555263E87BAACF3940BAC97 (CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* __this, CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* ___creatureBaseState0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Collision::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void CowBaseState::EnterState(CowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowBaseState_EnterState_mCDFEA4201440E54C0BF39531221B57A5E6F7D32B (CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, const RuntimeMethod* method) ;
// System.Void CowBaseState::UpdateState(CowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowBaseState_UpdateState_m6D60B3448EDCE3C22DA7D3F8635A1428B8A82C8C (CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, const RuntimeMethod* method) ;
// System.Void CowBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowBaseState__ctor_m11F1D0668640A48C3BF1F97E343F3CAF632249AF (CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CowAttackState::TimeToIdle(CowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CowAttackState_TimeToIdle_mE6CCBE48C1D0F3BF41629B304418B650D995B316 (CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, const RuntimeMethod* method) ;
// System.Void CowAttackState/<TimeToIdle>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeToIdleU3Ed__2__ctor_mB606146C642E562708AEE4E6378BF99A596AA73A (U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void CowIdleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowIdleState__ctor_m6C84C09C3B3AAE9AB9FC762D02C0BCB7B02C20B6 (CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B* __this, const RuntimeMethod* method) ;
// System.Void CowMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowMoveState__ctor_m8356ABA177AB7721966473CFD4147DF8267C5C42 (CowMoveState_t2EBC12856C2B207ED73084D011174D04E3B5039A* __this, const RuntimeMethod* method) ;
// System.Void CowAttackState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowAttackState__ctor_mDA945164AB84598B60E535DCA5194307F05E732F (CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801* __this, const RuntimeMethod* method) ;
// System.Void CowHurtState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowHurtState__ctor_m9F106572B18D8CA8E51AFC4DD59E0A3280889D08 (CowHurtState_t4B0274636C9155C740C6FEC0DB03492AF34E9C98* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator OctopusAttack::Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OctopusAttack_Enabled_m5FEA955FA61D8AC19B3F20010CA086459FAFEBE8 (OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325* __this, const RuntimeMethod* method) ;
// System.Void OctopusAttack/<Enabled>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnabledU3Ed__2__ctor_m5F056ACF3E834F623B3E166FD842F97569F350DC (U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void OctopusStateManager::SwitchState(OctopusBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusStateManager_SwitchState_mCEA63FA9BD601DD3A4D459C1CAACE0E495EB006C (OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* __this, OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* ___creatureBaseState0, const RuntimeMethod* method) ;
// System.Void OctopusBaseState::EnterState(OctopusStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusBaseState_EnterState_m91BC60FB32481B747FC8C1305796A0B88088A936 (OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, const RuntimeMethod* method) ;
// System.Void OctopusBaseState::UpdateState(OctopusStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusBaseState_UpdateState_m7EB708E8E45FF33829A591CDA3199851390B6130 (OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, const RuntimeMethod* method) ;
// System.Void OctopusBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusBaseState__ctor_mB92641B8DE3AA5CFAB061A49B4F94BCD4747F9F7 (OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<OctopusAttack>()
inline OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325* Component_GetComponent_TisOctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325_m981C90A985E96BCDF4C6F764B47BBE0F4B33EB39 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void OctopusAttack::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusAttack_Attack_m9A83B4119C54EB23B5F492657EF51F0653BF0BE1 (OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325* __this, const RuntimeMethod* method) ;
// System.Void OctopusAttackState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusAttackState__ctor_m292A72669A72EB9BEF9240871E42275A9E947930 (OctopusAttackState_t42A02556AA17600444DB5F51A0B07559B302BEC4* __this, const RuntimeMethod* method) ;
// System.Void OctopusDestroyState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusDestroyState__ctor_m1E57B3F4FFE70F7CFEECD06AAE5ADB97271E381C (OctopusDestroyState_t2568441834679165291F7B188D4D53DB02426296* __this, const RuntimeMethod* method) ;
// System.Void OctopusHurtState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusHurtState__ctor_mB2B73F9C672659385A3DF897A2742451BB3BC300 (OctopusHurtState_t6BEDF7BE26F49C6C0B9F250BB98A00EB781BA25D* __this, const RuntimeMethod* method) ;
// System.Void OctopusMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusMoveState__ctor_m763B86230C150E7E7260FCA502FB4660BFA4EB19 (OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581* __this, const RuntimeMethod* method) ;
// System.Void OctopusIdleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusIdleState__ctor_mCECBDF20FE90E149A1051303E6F919EDFCBC2830 (OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1 (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void MenuManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_LoadData_mBDC0CCA4FF7D512B03D89C4B9DA1E57EE9DC01F4 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.String SaveSystem::get_PlanetSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SaveSystem_get_PlanetSave_m403A5F36185482F1D6DC2D1F51D77CED7E88F3A9 (const RuntimeMethod* method) ;
// Planet PlanetDataBaseSO::GetPlanet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* PlanetDataBaseSO_GetPlanet_m8BC90E39F28C981833B078DB20BBF39511F7B733 (PlanetDataBaseSO_t917FF6B5CD1F2497D9BA3952206394B1D6A608B7* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Scrollbar>()
inline Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.UI.Scrollbar::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35 (Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804 (Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___t0, ___ease1, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void CharacterSwipe::UpdatePlanet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSwipe_UpdatePlanet_mF409B6C4E8B7FBC068931D30047B140BE9B80978 (CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41* __this, int32_t ___selectedOption0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// Character CharacterDataBaseSO::GetCharacter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* CharacterDataBaseSO_GetCharacter_m7C35068FBBD1F40FFA8FF2BF318465AB0BA5D8A7 (CharacterDataBaseSO_t4503AE865B4B17C7C15E0DBDA16FB3B7209EF128* __this, int32_t ___index0, const RuntimeMethod* method) ;
// SaveData CharacterUIManager::SavingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* CharacterUIManager_SavingData_m40EDB04AD81572EC4AA90B0904779626C2509E32 (CharacterUIManager_t5FE02860D0EFE9069A97B7CF3FCED8F592C2692B* __this, const RuntimeMethod* method) ;
// System.Void SaveSystem::SaveByJson(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystem_SaveByJson_m9C0E647845DF30DEC0C41D0A0D2F048FAC504140 (String_t* ___fileName0, RuntimeObject* ___data1, const RuntimeMethod* method) ;
// System.Void SaveData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_m7E683A9CD703CB4058EEA6C1BBC22F4EDE2F76E5 (SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator PanelSwipe::SmoothMove(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PanelSwipe_SmoothMove_m7C1748B380C2B2EB92F11FB1C798040A1977681B (PanelSwipe_tBAB802D2617DFE9966CE2DBDC20EE78E667F92DF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPos1, float ___seconds2, const RuntimeMethod* method) ;
// System.Void PanelSwipe/<SmoothMove>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMoveU3Ed__9__ctor_m27D967DC08A8FB5B07C51883D13C4F8388219DDE (U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothStep(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline (float ___from0, float ___to1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void PlanetSwipe::UpdatePlanetInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSwipe_UpdatePlanetInfo_m3911FB591BD00A2E26EC0B06E4106EBD20A40D65 (PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB* __this, int32_t ___selectedOption0, const RuntimeMethod* method) ;
// SaveData PlanetUIManager::SavingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* PlanetUIManager_SavingData_m6FD0AA8CD316325F0DC31C8BA61E89A6A59A7C9F (PlanetUIManager_tE920FB80804965CE123D996D70D0B59ED566E9DA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void CameraFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Start_m99884706C63F385A5C536C8837C14A38D1B6D78D (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void CameraFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Update_mFE010EED058E2CE97530268AC64A2C071D5F853A (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(player != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// transform.position = new Vector3(player.transform.position.x, 0, player.transform.position.z)+offSet;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___player_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___player_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_6, (0.0f), L_10, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___offSet_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_12, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_13, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m113CC547D419EF599BC487F0F44B06BB2D4EE11B (CameraFollow_tBD6591B769F73DC67048F5F58F6472198F4B140E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Int32 CharacterDataBaseSO::get_CharacterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterDataBaseSO_get_CharacterCount_m5D3C069794149284FD51ED03C6941A48E9BF050B (CharacterDataBaseSO_t4503AE865B4B17C7C15E0DBDA16FB3B7209EF128* __this, const RuntimeMethod* method) 
{
	{
		// get { return _character.Length; }
		CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7* L_0 = __this->____character_4;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// Character CharacterDataBaseSO::GetCharacter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* CharacterDataBaseSO_GetCharacter_m7C35068FBBD1F40FFA8FF2BF318465AB0BA5D8A7 (CharacterDataBaseSO_t4503AE865B4B17C7C15E0DBDA16FB3B7209EF128* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// return _character[index];
		CharacterU5BU5D_t0985A3D28A2593F92B2737AC180A00499E8EE2C7* L_0 = __this->____character_4;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void CharacterDataBaseSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterDataBaseSO__ctor_mF6050618DB71143DB1B8B6BA643B080D8F9B380C (CharacterDataBaseSO_t4503AE865B4B17C7C15E0DBDA16FB3B7209EF128* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Character::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Character__ctor_m9D8D6104D9CB19DAE6866ECA929FFB0F2592DD19 (Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 CreatureDataBaseSO::get_CreatureCoun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreatureDataBaseSO_get_CreatureCoun_m2E124196DC909DCE4BD139943848B3BE6E2C6B19 (CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* __this, const RuntimeMethod* method) 
{
	{
		// get { return _creature.Length; }
		CreatureU5BU5D_t8363BB91AE7E8E2E8F2FF3A0411601B42D55F3DA* L_0 = __this->____creature_4;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// Creature CreatureDataBaseSO::GetCreature(CreatureDataBaseSO/Name)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B (CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* __this, int32_t ___name0, const RuntimeMethod* method) 
{
	{
		// return _creature[(int)name];
		CreatureU5BU5D_t8363BB91AE7E8E2E8F2FF3A0411601B42D55F3DA* L_0 = __this->____creature_4;
		int32_t L_1 = ___name0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void CreatureDataBaseSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureDataBaseSO__ctor_mC37B3B548C56AF1592CF82744A7B99270950DBC6 (CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Creature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Creature__ctor_mCEE33E92B1805BD13B762E2AF5495E9221FA5421 (Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void EnemyDrop::DropItem(Creature,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDrop_DropItem_m34CA5F3E3E3D45A4E94542E4B500116C5B3470AB (EnemyDrop_tD042650E8C3C608F95DC2B6F999167D165A87B3C* __this, Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* ___creature0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___creatuerTrans1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int randomCount = Random.Range(1, 101);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)101), NULL);
		V_0 = L_0;
		// Debug.Log(randomCount);
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// for (int i = 0; i < creature.items.Length; i++)
		V_1 = 0;
		goto IL_0063;
	}

IL_0018:
	{
		// if (creature.probability[i] >= randomCount)
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_4 = ___creature0;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___probability_10;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_005f;
		}
	}
	{
		// Vector3 posOffset = new Vector3(Random.Range(-1, 1), 0, Random.Range(-1, 1));
		int32_t L_10;
		L_10 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68((-1), 1, NULL);
		int32_t L_11;
		L_11 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68((-1), 1, NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), ((float)L_10), (0.0f), ((float)L_11), NULL);
		// Instantiate(creature.items[i],creatuerTrans.position+ posOffset, creatuerTrans.rotation);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_12 = ___creature0;
		NullCheck(L_12);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = L_12->___items_9;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = ___creatuerTrans1;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = ___creatuerTrans1;
		NullCheck(L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_16, L_20, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
	}

IL_005f:
	{
		// for (int i = 0; i < creature.items.Length; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0063:
	{
		// for (int i = 0; i < creature.items.Length; i++)
		int32_t L_25 = V_1;
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_26 = ___creature0;
		NullCheck(L_26);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = L_26->___items_9;
		NullCheck(L_27);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EnemyDrop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDrop__ctor_m1F4C5B7E6D7CCEE2AA113C8C4262048A5346E5F8 (EnemyDrop_tD042650E8C3C608F95DC2B6F999167D165A87B3C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemySpawn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawn_Start_mFE4AE6F3B323EA26C81959FD9E7A3C57DF50821B (EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___playerTrans_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerTrans_9), (void*)L_1);
		// }
		return;
	}
}
// System.Void EnemySpawn::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawn_Update_m0B5CEC67E5C575D436C8D9F6312AF4B6C610427E (EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* __this, const RuntimeMethod* method) 
{
	{
		// SpawnWithDistance();
		EnemySpawn_SpawnWithDistance_mB93B3F7856898EC82E6855E45A295659A09A26E7(__this, NULL);
		// }
		return;
	}
}
// System.Void EnemySpawn::SpawnWithDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawn_SpawnWithDistance_mB93B3F7856898EC82E6855E45A295659A09A26E7 (EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* __this, const RuntimeMethod* method) 
{
	{
		// if (canSpawn)
		bool L_0 = __this->___canSpawn_8;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// StartCoroutine(Spawn());
		RuntimeObject* L_1;
		L_1 = EnemySpawn_Spawn_mF3A7D867EC8340717C90497AF373A3A880062D08(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator EnemySpawn::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawn_Spawn_mF3A7D867EC8340717C90497AF373A3A880062D08 (EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559* L_0 = (U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559*)il2cpp_codegen_object_new(U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpawnU3Ed__9__ctor_m6D9BDB99EE6A9CD8365FE940F6209C6814EAB759(L_0, 0, NULL);
		U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// UnityEngine.GameObject EnemySpawn::GetEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemySpawn_GetEnemy_mF7A1CA742FAEBBB71A28AB6A72DA616861ADBEBC (EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* __this, const RuntimeMethod* method) 
{
	{
		// GameObject enemy =  _enemy[Random.Range(0, _enemy.Length)];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->____enemy_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->____enemy_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// return enemy;
		return L_4;
	}
}
// System.Void EnemySpawn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawn__ctor_mE864F50A2078AAD51FD0DA1F402ACD0C19B026C3 (EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* __this, const RuntimeMethod* method) 
{
	{
		// private bool canSpawn = true;
		__this->___canSpawn_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemySpawn/<Spawn>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__9__ctor_m6D9BDB99EE6A9CD8365FE940F6209C6814EAB759 (U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EnemySpawn/<Spawn>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__9_System_IDisposable_Dispose_mC05A6F08BD20D79683A318F001994D4518D8BD99 (U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EnemySpawn/<Spawn>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnU3Ed__9_MoveNext_m698D477918C6D2995D97EBD00C04CB6499CAF0DE (U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0094;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// canSpawn = false;
		EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* L_4 = V_1;
		NullCheck(L_4);
		L_4->___canSpawn_8 = (bool)0;
		// Vector3 enemyPos = new Vector3(Random.Range(_minSpawnPos, _maxSpawnPos), 0, Random.Range(_minSpawnPos, _maxSpawnPos));
		EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->____minSpawnPos_6;
		EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->____maxSpawnPos_7;
		float L_9;
		L_9 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_6, L_8, NULL);
		EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->____minSpawnPos_6;
		EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->____maxSpawnPos_7;
		float L_14;
		L_14 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_11, L_13, NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_9, (0.0f), L_14, NULL);
		// Instantiate(GetEnemy(), enemyPos + playerTrans.transform.position, Quaternion.identity);
		EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* L_15 = V_1;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = EnemySpawn_GetEnemy_mF7A1CA742FAEBBB71A28AB6A72DA616861ADBEBC(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* L_18 = V_1;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18->___playerTrans_9;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_16, L_22, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// yield return new WaitForSeconds(_spawnRate);
		EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* L_25 = V_1;
		NullCheck(L_25);
		float L_26 = L_25->____spawnRate_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_27 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_27, L_26, NULL);
		__this->___U3CU3E2__current_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_27);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0094:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// canSpawn = true;
		EnemySpawn_t993A2A1FD1DACABF56807D35C4A9BA5857EA8089* L_28 = V_1;
		NullCheck(L_28);
		L_28->___canSpawn_8 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object EnemySpawn/<Spawn>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m27A29320BA6BA1C351368468E51730D479A01BDF (U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EnemySpawn/<Spawn>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__9_System_Collections_IEnumerator_Reset_m343F9B0ABA480ED2FF103280DB85A1091BBCB339 (U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnU3Ed__9_System_Collections_IEnumerator_Reset_m343F9B0ABA480ED2FF103280DB85A1091BBCB339_RuntimeMethod_var)));
	}
}
// System.Object EnemySpawn/<Spawn>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnU3Ed__9_System_Collections_IEnumerator_get_Current_m92EC4054F09D16AB1FDCB706D7CBE87BACF2B86E (U3CSpawnU3Ed__9_t5D9CF674851767EC3CFFB8B5B578DD0091F13559* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PlayerSpawn::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawn_Awake_mB149B73836C3FA1E56E92B965FC97AB257A94A61 (PlayerSpawn_t1C3802744B7EEF8E68DB64B20695ACD6D2E49D2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSpawn_t1C3802744B7EEF8E68DB64B20695ACD6D2E49D2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveSystem_LoadFormJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mE93FA98EFA2B609743C6381B46E87EEFD3DCED0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var saveData = SaveSystem.LoadFormJson<SaveData>(SaveSystem.CharacterSave);
		String_t* L_0;
		L_0 = SaveSystem_get_CharacterSave_mC2853044B6AE97D02FA80A7BF048B79268C0C454(NULL);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_1;
		L_1 = SaveSystem_LoadFormJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mE93FA98EFA2B609743C6381B46E87EEFD3DCED0D(L_0, SaveSystem_LoadFormJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mE93FA98EFA2B609743C6381B46E87EEFD3DCED0D_RuntimeMethod_var);
		// currentPlayer = saveData.selectCharacter;
		NullCheck(L_1);
		int32_t L_2 = L_1->___selectCharacter_5;
		((PlayerSpawn_t1C3802744B7EEF8E68DB64B20695ACD6D2E49D2D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSpawn_t1C3802744B7EEF8E68DB64B20695ACD6D2E49D2D_il2cpp_TypeInfo_var))->___currentPlayer_4 = L_2;
		// GameObject player = playerDataBaseSO.GetPlayerByJson(currentPlayer).playerObject;
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_3 = __this->___playerDataBaseSO_6;
		int32_t L_4 = ((PlayerSpawn_t1C3802744B7EEF8E68DB64B20695ACD6D2E49D2D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerSpawn_t1C3802744B7EEF8E68DB64B20695ACD6D2E49D2D_il2cpp_TypeInfo_var))->___currentPlayer_4;
		NullCheck(L_3);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5;
		L_5 = PlayerDataBaseSO_GetPlayerByJson_mFE38580FCD3A38E61E6E6D874F070AE5CD561D16(L_3, L_4, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___playerObject_1;
		// Instantiate(player, playerSpawnPos.position, Quaternion.identity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___playerSpawnPos_5;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_6, L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlayerSpawn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSpawn__ctor_mD3CE754318AD38797C08613798EF2532BBEE8217 (PlayerSpawn_t1C3802744B7EEF8E68DB64B20695ACD6D2E49D2D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Tile::.ctor(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_mCD18E1A48797B42BACBC1C43674A9893B5065450 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___t0, float ___ct1, const RuntimeMethod* method) 
{
	{
		// public Tile(GameObject t, float ct)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// theTile = t;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___t0;
		__this->___theTile_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theTile_0), (void*)L_0);
		// creationTime = ct;
		float L_1 = ___ct1;
		__this->___creationTime_1 = L_1;
		// }
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
// System.Void InfinitePlane::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfinitePlane_Start_mEC43DB2D1955AB81CBB6F5C81847E9F7EB10856D (InfinitePlane_t1F42D7E4C50033E02922998DDEB2C339B75AAD4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral149384106D626B9D6C795802B8A2503035F3A086);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* V_5 = NULL;
	int32_t V_6 = 0;
	{
		// gameObject.transform.position = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// startPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___startPos_9 = L_3;
		// float updateTime = Time.realtimeSinceStartup;
		float L_4;
		L_4 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		V_0 = L_4;
		// for (int x = -halfTilesX; x < halfTilesX; x++)
		int32_t L_5 = __this->___halfTilesX_7;
		V_1 = ((-L_5));
		goto IL_00fa;
	}

IL_0033:
	{
		// for (int z = -halfTilesZ; z < halfTilesZ; z++)
		int32_t L_6 = __this->___halfTilesZ_8;
		V_2 = ((-L_6));
		goto IL_00ea;
	}

IL_0040:
	{
		// Vector3 pos =new Vector3((x*planeSize+startPos.x) ,0 , (z*planeSize+startPos.z));
		int32_t L_7 = V_1;
		int32_t L_8 = __this->___planeSize_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___startPos_9);
		float L_10 = L_9->___x_2;
		int32_t L_11 = V_2;
		int32_t L_12 = __this->___planeSize_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___startPos_9);
		float L_14 = L_13->___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), ((float)il2cpp_codegen_add(((float)((int32_t)il2cpp_codegen_multiply(L_7, L_8))), L_10)), (0.0f), ((float)il2cpp_codegen_add(((float)((int32_t)il2cpp_codegen_multiply(L_11, L_12))), L_14)), NULL);
		// GameObject t = Instantiate(plane[Random.Range(0,plane.Length)], pos, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___plane_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___plane_4;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_16)->max_length)), NULL);
		NullCheck(L_15);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_19, L_20, L_21, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// string tileName = "Tile_" + ((int)(pos.x)).ToString() + "_"+((int)(pos.z)).ToString();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		float L_24 = L_23.___x_2;
		V_6 = il2cpp_codegen_cast_double_to_int<int32_t>(L_24);
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_3;
		float L_27 = L_26.___z_4;
		V_6 = il2cpp_codegen_cast_double_to_int<int32_t>(L_27);
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		String_t* L_29;
		L_29 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral149384106D626B9D6C795802B8A2503035F3A086, L_25, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_28, NULL);
		V_4 = L_29;
		// t.name = tileName;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_22;
		String_t* L_31 = V_4;
		NullCheck(L_30);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_30, L_31, NULL);
		// Tile tile = new Tile(t, updateTime);
		float L_32 = V_0;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_33 = (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*)il2cpp_codegen_object_new(Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Tile__ctor_mCD18E1A48797B42BACBC1C43674A9893B5065450(L_33, L_30, L_32, NULL);
		V_5 = L_33;
		// tiles.Add(tileName,tile);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_34 = __this->___tiles_10;
		String_t* L_35 = V_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_36 = V_5;
		NullCheck(L_34);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(15 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_34, L_35, L_36);
		// for (int z = -halfTilesZ; z < halfTilesZ; z++)
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ea:
	{
		// for (int z = -halfTilesZ; z < halfTilesZ; z++)
		int32_t L_38 = V_2;
		int32_t L_39 = __this->___halfTilesZ_8;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0040;
		}
	}
	{
		// for (int x = -halfTilesX; x < halfTilesX; x++)
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00fa:
	{
		// for (int x = -halfTilesX; x < halfTilesX; x++)
		int32_t L_41 = V_1;
		int32_t L_42 = __this->___halfTilesX_7;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0033;
		}
	}
	{
		// }
		return;
	}
}
// System.Void InfinitePlane::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfinitePlane_Update_m00CBB3C834BE9B63DD0B259E914D6BBAB6FCF212 (InfinitePlane_t1F42D7E4C50033E02922998DDEB2C339B75AAD4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral149384106D626B9D6C795802B8A2503035F3A086);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	{
		// if (player != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0269;
		}
	}
	{
		// int xMove = (int)(player.transform.position.x - startPos.x);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___startPos_9);
		float L_7 = L_6->___x_2;
		// int zMove = (int)(player.transform.position.z - startPos.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___player_5;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___startPos_9);
		float L_13 = L_12->___z_4;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_11, L_13)));
		// if (Mathf.Abs(xMove) >= planeSize || Mathf.Abs(zMove) >= planeSize)
		int32_t L_14;
		L_14 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_5, L_7))), NULL);
		int32_t L_15 = __this->___planeSize_6;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(L_16, NULL);
		int32_t L_18 = __this->___planeSize_6;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0279;
		}
	}

IL_0074:
	{
		// float updateTime = Time.realtimeSinceStartup;
		float L_19;
		L_19 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		V_1 = L_19;
		// int playerX = (int)(Mathf.Floor(player.transform.position.x / planeSize) * planeSize);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___player_5;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___x_2;
		int32_t L_24 = __this->___planeSize_6;
		float L_25;
		L_25 = floorf(((float)(L_23/((float)L_24))));
		int32_t L_26 = __this->___planeSize_6;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_25, ((float)L_26))));
		// int playerZ = (int)(Mathf.Floor(player.transform.position.z / planeSize) * planeSize);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___player_5;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		float L_30 = L_29.___z_4;
		int32_t L_31 = __this->___planeSize_6;
		float L_32;
		L_32 = floorf(((float)(L_30/((float)L_31))));
		int32_t L_33 = __this->___planeSize_6;
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_32, ((float)L_33))));
		// for (int x = -halfTilesX; x < halfTilesX; x++)
		int32_t L_34 = __this->___halfTilesX_7;
		V_5 = ((-L_34));
		goto IL_01c7;
	}

IL_00e0:
	{
		// for (int z = -halfTilesZ; z < halfTilesZ; z++)
		int32_t L_35 = __this->___halfTilesZ_8;
		V_6 = ((-L_35));
		goto IL_01b4;
	}

IL_00ee:
	{
		// Vector3 pos = new Vector3(x * planeSize + playerX, 0, z * planeSize + playerZ);
		int32_t L_36 = V_5;
		int32_t L_37 = __this->___planeSize_6;
		int32_t L_38 = V_2;
		int32_t L_39 = V_6;
		int32_t L_40 = __this->___planeSize_6;
		int32_t L_41 = V_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_36, L_37)), L_38))), (0.0f), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_39, L_40)), L_41))), NULL);
		// string tileName = "Tile_" + ((int)(pos.x)).ToString() + "_" + ((int)(pos.z)).ToString();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_7;
		float L_43 = L_42.___x_2;
		V_9 = il2cpp_codegen_cast_double_to_int<int32_t>(L_43);
		String_t* L_44;
		L_44 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_9), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_7;
		float L_46 = L_45.___z_4;
		V_9 = il2cpp_codegen_cast_double_to_int<int32_t>(L_46);
		String_t* L_47;
		L_47 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_9), NULL);
		String_t* L_48;
		L_48 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral149384106D626B9D6C795802B8A2503035F3A086, L_44, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_47, NULL);
		V_8 = L_48;
		// if (!tiles.ContainsKey(tileName))
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_49 = __this->___tiles_10;
		String_t* L_50 = V_8;
		NullCheck(L_49);
		bool L_51;
		L_51 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(18 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_49, L_50);
		if (L_51)
		{
			goto IL_0196;
		}
	}
	{
		// GameObject t = Instantiate(plane[Random.Range(0, plane.Length)], pos, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_52 = __this->___plane_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_53 = __this->___plane_4;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_53)->max_length)), NULL);
		NullCheck(L_52);
		int32_t L_55 = L_54;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58;
		L_58 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59;
		L_59 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_56, L_57, L_58, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// t.name = tileName;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = L_59;
		String_t* L_61 = V_8;
		NullCheck(L_60);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_60, L_61, NULL);
		// Tile tile = new Tile(t, updateTime);
		float L_62 = V_1;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_63 = (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*)il2cpp_codegen_object_new(Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		Tile__ctor_mCD18E1A48797B42BACBC1C43674A9893B5065450(L_63, L_60, L_62, NULL);
		V_10 = L_63;
		// tiles.Add(tileName, tile);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_64 = __this->___tiles_10;
		String_t* L_65 = V_8;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_66 = V_10;
		NullCheck(L_64);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(15 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_64, L_65, L_66);
		goto IL_01ae;
	}

IL_0196:
	{
		// (tiles[tileName] as Tile).creationTime = updateTime;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_67 = __this->___tiles_10;
		String_t* L_68 = V_8;
		NullCheck(L_67);
		RuntimeObject* L_69;
		L_69 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(20 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_67, L_68);
		float L_70 = V_1;
		NullCheck(((Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*)IsInstClass((RuntimeObject*)L_69, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_il2cpp_TypeInfo_var)));
		((Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*)IsInstClass((RuntimeObject*)L_69, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_il2cpp_TypeInfo_var))->___creationTime_1 = L_70;
	}

IL_01ae:
	{
		// for (int z = -halfTilesZ; z < halfTilesZ; z++)
		int32_t L_71 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_01b4:
	{
		// for (int z = -halfTilesZ; z < halfTilesZ; z++)
		int32_t L_72 = V_6;
		int32_t L_73 = __this->___halfTilesZ_8;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_00ee;
		}
	}
	{
		// for (int x = -halfTilesX; x < halfTilesX; x++)
		int32_t L_74 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_01c7:
	{
		// for (int x = -halfTilesX; x < halfTilesX; x++)
		int32_t L_75 = V_5;
		int32_t L_76 = __this->___halfTilesX_7;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_00e0;
		}
	}
	{
		// Hashtable newTerrian = new Hashtable();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_77 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_77, NULL);
		V_4 = L_77;
		// foreach (Tile tls in tiles.Values)
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_78 = __this->___tiles_10;
		NullCheck(L_78);
		RuntimeObject* L_79;
		L_79 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(26 /* System.Collections.ICollection System.Collections.Hashtable::get_Values() */, L_78);
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_79);
		V_11 = L_80;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0235:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_81 = V_11;
					V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_81, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_82 = V_13;
					if (!L_82)
					{
						goto IL_0249;
					}
				}
				{
					RuntimeObject* L_83 = V_13;
					NullCheck(L_83);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_83);
				}

IL_0249:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_022a_1;
			}

IL_01ef_1:
			{
				// foreach (Tile tls in tiles.Values)
				RuntimeObject* L_84 = V_11;
				NullCheck(L_84);
				RuntimeObject* L_85;
				L_85 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_84);
				V_12 = ((Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*)CastclassClass((RuntimeObject*)L_85, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_il2cpp_TypeInfo_var));
				// if (tls.creationTime != updateTime)
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_86 = V_12;
				NullCheck(L_86);
				float L_87 = L_86->___creationTime_1;
				float L_88 = V_1;
				if ((((float)L_87) == ((float)L_88)))
				{
					goto IL_0215_1;
				}
			}
			{
				// Destroy(tls.theTile);
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_89 = V_12;
				NullCheck(L_89);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90 = L_89->___theTile_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_90, NULL);
				goto IL_022a_1;
			}

IL_0215_1:
			{
				// newTerrian.Add(tls.theTile.name, tls);
				Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_91 = V_4;
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_92 = V_12;
				NullCheck(L_92);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = L_92->___theTile_0;
				NullCheck(L_93);
				String_t* L_94;
				L_94 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_93, NULL);
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_95 = V_12;
				NullCheck(L_91);
				VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(15 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_91, L_94, L_95);
			}

IL_022a_1:
			{
				// foreach (Tile tls in tiles.Values)
				RuntimeObject* L_96 = V_11;
				NullCheck(L_96);
				bool L_97;
				L_97 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_96);
				if (L_97)
				{
					goto IL_01ef_1;
				}
			}
			{
				goto IL_024a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_024a:
	{
		// tiles = newTerrian;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_98 = V_4;
		__this->___tiles_10 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tiles_10), (void*)L_98);
		// startPos = player.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99 = __this->___player_5;
		NullCheck(L_99);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100;
		L_100 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_99, NULL);
		NullCheck(L_100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_100, NULL);
		__this->___startPos_9 = L_101;
		return;
	}

IL_0269:
	{
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102;
		L_102 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_5 = L_102;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_5), (void*)L_102);
	}

IL_0279:
	{
		// }
		return;
	}
}
// System.Void InfinitePlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfinitePlane__ctor_m0B98760AAA3520A674F589D9BA2E7DCEC58A1731 (InfinitePlane_t1F42D7E4C50033E02922998DDEB2C339B75AAD4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int planeSize = 10;
		__this->___planeSize_6 = ((int32_t)10);
		// int halfTilesX = 10;
		__this->___halfTilesX_7 = ((int32_t)10);
		// int halfTilesZ = 10;
		__this->___halfTilesZ_8 = ((int32_t)10);
		// Hashtable tiles =  new Hashtable();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_0, NULL);
		__this->___tiles_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tiles_10), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Item::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_OnTriggerEnter_mC6104DA4B9378B5DE80AED61BACE43D416B5F594 (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m741D59B05082743C60D2F1149112B571E89CAFAF (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Int32 PlanetDataBaseSO::get_PlanetCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlanetDataBaseSO_get_PlanetCount_mFC6A475BF9C7A9F8007CDAB6567C0E5C8FC2B0C7 (PlanetDataBaseSO_t917FF6B5CD1F2497D9BA3952206394B1D6A608B7* __this, const RuntimeMethod* method) 
{
	{
		// get { return _planet.Length; }
		PlanetU5BU5D_tF53108873B1593DB581657406C9E3A4D583B92A9* L_0 = __this->____planet_4;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// Planet PlanetDataBaseSO::GetPlanet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* PlanetDataBaseSO_GetPlanet_m8BC90E39F28C981833B078DB20BBF39511F7B733 (PlanetDataBaseSO_t917FF6B5CD1F2497D9BA3952206394B1D6A608B7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// return _planet[index];
		PlanetU5BU5D_tF53108873B1593DB581657406C9E3A4D583B92A9* L_0 = __this->____planet_4;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void PlanetDataBaseSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetDataBaseSO__ctor_m03064553495C7CBB6EDF5A63D80F46ECB35F7355 (PlanetDataBaseSO_t917FF6B5CD1F2497D9BA3952206394B1D6A608B7* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Planet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planet__ctor_mF8F033510AD3501137A7BBCFD40236A021D1B1A9 (Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m82639826DE098DC447C79B43900C5F2A630B3DC3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_Pattern_Move_m92A49DF0FAB0E0EDC43B6FAE13FA89F58ABF0B66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerState += Pattern_Move;
		playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* L_0 = __this->___playerState_4;
		playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* L_1 = (playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368*)il2cpp_codegen_object_new(playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		playerDelegate__ctor_m82ACAB4D8D2ADF27D151758B3A2621CF2B840925(L_1, __this, (intptr_t)((void*)PlayerController_Pattern_Move_m92A49DF0FAB0E0EDC43B6FAE13FA89F58ABF0B66_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		__this->___playerState_4 = ((playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368*)CastclassSealed((RuntimeObject*)L_2, playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerState_4), (void*)((playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368*)CastclassSealed((RuntimeObject*)L_2, playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m6D906D8B13844542B81CC49BA19760F747CEC8C0 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (playerState != null)
		playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* L_0 = __this->___playerState_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// playerState();
		playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* L_1 = __this->___playerState_4;
		NullCheck(L_1);
		playerDelegate_Invoke_mFA44C083104F42A0D5F79413D76D7344E3B58BC3_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Pattern_Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Pattern_Move_m92A49DF0FAB0E0EDC43B6FAE13FA89F58ABF0B66 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// rb.velocity = new Vector3(joystick.Horizontal * moveSpeed, rb.velocity.y, joystick.Vertical * moveSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_6;
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_1 = __this->___joystick_7;
		NullCheck(L_1);
		float L_2;
		L_2 = Joystick_get_Horizontal_m23B2FBFE52DFF5E60F0DDAF88FC954EE3AF0A92B(L_1, NULL);
		float L_3 = __this->___moveSpeed_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rb_6;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_4, NULL);
		float L_6 = L_5.___y_3;
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_7 = __this->___joystick_7;
		NullCheck(L_7);
		float L_8;
		L_8 = Joystick_get_Vertical_mB224F6BDC3C0A3E8B6ADA20E7378970A6DDBD164(L_7, NULL);
		float L_9 = __this->___moveSpeed_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), ((float)il2cpp_codegen_multiply(L_2, L_3)), L_6, ((float)il2cpp_codegen_multiply(L_8, L_9)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_10, NULL);
		// if (joystick.Horizontal != 0 || joystick.Vertical != 0)
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_11 = __this->___joystick_7;
		NullCheck(L_11);
		float L_12;
		L_12 = Joystick_get_Horizontal_m23B2FBFE52DFF5E60F0DDAF88FC954EE3AF0A92B(L_11, NULL);
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_13 = __this->___joystick_7;
		NullCheck(L_13);
		float L_14;
		L_14 = Joystick_get_Vertical_mB224F6BDC3C0A3E8B6ADA20E7378970A6DDBD164(L_13, NULL);
		if ((((float)L_14) == ((float)(0.0f))))
		{
			goto IL_0083;
		}
	}

IL_0068:
	{
		// transform.rotation = Quaternion.LookRotation(rb.velocity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = __this->___rb_6;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_17, NULL);
		NullCheck(L_15);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_15, L_18, NULL);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void PlayerController::GetDamage(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_GetDamage_mFF41AE33D7DD896D3AB1F76E18B55F737773F3D9 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_Pattern_Move_m92A49DF0FAB0E0EDC43B6FAE13FA89F58ABF0B66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// playerState -= Pattern_Move;
		playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* L_0 = __this->___playerState_4;
		playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* L_1 = (playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368*)il2cpp_codegen_object_new(playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		playerDelegate__ctor_m82ACAB4D8D2ADF27D151758B3A2621CF2B840925(L_1, __this, (intptr_t)((void*)PlayerController_Pattern_Move_m92A49DF0FAB0E0EDC43B6FAE13FA89F58ABF0B66_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		__this->___playerState_4 = ((playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368*)CastclassSealed((RuntimeObject*)L_2, playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerState_4), (void*)((playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368*)CastclassSealed((RuntimeObject*)L_2, playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368_il2cpp_TypeInfo_var)));
		// Vector3 forcePos = new Vector3(creature.transform.position.x-transform.position.x, 0, creature.transform.position.z-transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___creature0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___creature0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___z_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_subtract(L_6, L_9)), (0.0f), ((float)il2cpp_codegen_subtract(L_13, L_16)), NULL);
		// rb.AddForce(-forcePos.normalized * forceStrength *100);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->___rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_18, NULL);
		float L_20 = __this->___forceStrength_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, (100.0f), NULL);
		NullCheck(L_17);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_17, L_22, NULL);
		// StartCoroutine(countTime(0.25f, Pattern_Move));
		playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* L_23 = (playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368*)il2cpp_codegen_object_new(playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		playerDelegate__ctor_m82ACAB4D8D2ADF27D151758B3A2621CF2B840925(L_23, __this, (intptr_t)((void*)PlayerController_Pattern_Move_m92A49DF0FAB0E0EDC43B6FAE13FA89F58ABF0B66_RuntimeMethod_var), NULL);
		RuntimeObject* L_24;
		L_24 = PlayerController_countTime_m0D32AF28CE8F535BC988B3C2B269B81C85B70CA8(__this, (0.25f), L_23, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_25;
		L_25 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_24, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Attack_m7CA8C478D5E8AE7A1DAF1F5B68EC1CFDADD5A0C6 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerController::countTime(System.Single,PlayerController/playerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_countTime_m0D32AF28CE8F535BC988B3C2B269B81C85B70CA8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, float ___setTime0, playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* ___playerDelegate1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8* L_0 = (U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8*)il2cpp_codegen_object_new(U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CcountTimeU3Ed__14__ctor_m91050FBBB656149853C63AA4F1D58F800A6B28D9(L_0, 0, NULL);
		U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8* L_2 = L_1;
		float L_3 = ___setTime0;
		NullCheck(L_2);
		L_2->___setTime_2 = L_3;
		U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8* L_4 = L_2;
		playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* L_5 = ___playerDelegate1;
		NullCheck(L_4);
		L_4->___playerDelegate_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___playerDelegate_4), (void*)L_5);
		return L_4;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void playerDelegate_Invoke_mFA44C083104F42A0D5F79413D76D7344E3B58BC3_Multicast(playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* currentDelegate = reinterpret_cast<playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void playerDelegate_Invoke_mFA44C083104F42A0D5F79413D76D7344E3B58BC3_OpenInst(playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void playerDelegate_Invoke_mFA44C083104F42A0D5F79413D76D7344E3B58BC3_OpenStatic(playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void playerDelegate_Invoke_mFA44C083104F42A0D5F79413D76D7344E3B58BC3_OpenStaticInvoker(playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void playerDelegate_Invoke_mFA44C083104F42A0D5F79413D76D7344E3B58BC3_ClosedStaticInvoker(playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368 (playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void PlayerController/playerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playerDelegate__ctor_m82ACAB4D8D2ADF27D151758B3A2621CF2B840925 (playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&playerDelegate_Invoke_mFA44C083104F42A0D5F79413D76D7344E3B58BC3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&playerDelegate_Invoke_mFA44C083104F42A0D5F79413D76D7344E3B58BC3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&playerDelegate_Invoke_mFA44C083104F42A0D5F79413D76D7344E3B58BC3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&playerDelegate_Invoke_mFA44C083104F42A0D5F79413D76D7344E3B58BC3_Multicast;
}
// System.Void PlayerController/playerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playerDelegate_Invoke_mFA44C083104F42A0D5F79413D76D7344E3B58BC3 (playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PlayerController/playerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* playerDelegate_BeginInvoke_m6AB55ED2FDC518C6B17D7826C059171179613DD1 (playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void PlayerController/playerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playerDelegate_EndInvoke_mC4D0D4BCFEB690D89F113DC3EDDB65C9CC4292C5 (playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController/<countTime>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcountTimeU3Ed__14__ctor_m91050FBBB656149853C63AA4F1D58F800A6B28D9 (U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<countTime>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcountTimeU3Ed__14_System_IDisposable_Dispose_m0F48331074B57E535F32AE0A4FDDD193D96B12F9 (U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<countTime>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CcountTimeU3Ed__14_MoveNext_mD93E00AA83F916E39801578E36048A1D494CB39B (U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(setTime);
		float L_4 = __this->___setTime_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// playerState += playerDelegate;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6 = V_1;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7 = V_1;
		NullCheck(L_7);
		playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* L_8 = L_7->___playerState_4;
		playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* L_9 = __this->___playerDelegate_4;
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_8, L_9, NULL);
		NullCheck(L_6);
		L_6->___playerState_4 = ((playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368*)CastclassSealed((RuntimeObject*)L_10, playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___playerState_4), (void*)((playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368*)CastclassSealed((RuntimeObject*)L_10, playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368_il2cpp_TypeInfo_var)));
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<countTime>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcountTimeU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB457B8139B1B394E61B6E3DA846FC9022ABC8DFC (U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<countTime>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcountTimeU3Ed__14_System_Collections_IEnumerator_Reset_m9910CA9DDAA2E3B122573280B9FB1104BA42790F (U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CcountTimeU3Ed__14_System_Collections_IEnumerator_Reset_m9910CA9DDAA2E3B122573280B9FB1104BA42790F_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<countTime>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcountTimeU3Ed__14_System_Collections_IEnumerator_get_Current_m51736F45DBB3A38EAC64CA64B396D165B345F255 (U3CcountTimeU3Ed__14_t6D693876291365A0C7051AEFAF08FF7F3AD8F6C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Int32 PlayerDataBaseSO::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerDataBaseSO_get_PlayerCount_m0AD2FED9FC022DBFD7B41A04C49B2F4E6DB458A7 (PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return _player.Length; }
		PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* L_0 = __this->____player_4;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// Player PlayerDataBaseSO::GetPlayer(PlayerDataBaseSO/Name)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA (PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* __this, int32_t ___name0, const RuntimeMethod* method) 
{
	{
		// return _player[(int)name];
		PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* L_0 = __this->____player_4;
		int32_t L_1 = ___name0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// Player PlayerDataBaseSO::GetPlayerByJson(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* PlayerDataBaseSO_GetPlayerByJson_mFE38580FCD3A38E61E6E6D874F070AE5CD561D16 (PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// return _player[index];
		PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* L_0 = __this->____player_4;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void PlayerDataBaseSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerDataBaseSO__ctor_m10ECC57CFBDA4DAFFA721D166B1D9B71C8D53766 (PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void CreatureBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBase_Start_mAA064D58E765C82051485143003EB315ADA6DE53 (CreatureBase_t0C22685B313DE7B87E042BD5C7C552C6038756F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___playerTrans_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerTrans_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void CreatureBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBase_Update_m9E3C74DF1E3DDC9AF6BEDA3D74A1F5F70D4D7555 (CreatureBase_t0C22685B313DE7B87E042BD5C7C552C6038756F4* __this, const RuntimeMethod* method) 
{
	{
		// DistanceWithPlayer();
		CreatureBase_DistanceWithPlayer_m4C968A292DAF4F52DA64986218C02D298501AA36(__this, NULL);
		// }
		return;
	}
}
// System.Void CreatureBase::DistanceWithPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBase_DistanceWithPlayer_m4C968A292DAF4F52DA64986218C02D298501AA36 (CreatureBase_t0C22685B313DE7B87E042BD5C7C552C6038756F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float dis = Vector3.Distance(playerTrans.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___playerTrans_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_3, NULL);
		// if (dis > 100)
		if ((!(((float)L_4) > ((float)(100.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		// Destroy(transform.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void CreatureBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBase__ctor_m1A795BD1D6F692D0D0B04CDC50811979AF6B87C6 (CreatureBase_t0C22685B313DE7B87E042BD5C7C552C6038756F4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MChickenBaseState::EnterState(MChickenStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenBaseState_EnterState_m9A46C769AEA8394E7BBC1E9FCFD052FBB19CD46C (MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* __this, MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15D0E8857464F65E61AE3EFCDFD6D22E63EC0B91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40682890B660810D40D0C469ADF290F82DF673D8);
		s_Il2CppMethodInitialized = true;
	}
	MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log(string.Format("<color=#fff000>{0}</color>", creature.currentState + "???"));
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_0 = ___creature0;
		NullCheck(L_0);
		MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* L_1 = L_0->___currentState_4;
		MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral15D0E8857464F65E61AE3EFCDFD6D22E63EC0B91;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral15D0E8857464F65E61AE3EFCDFD6D22E63EC0B91;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_0017:
	{
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_0, _stringLiteral40682890B660810D40D0C469ADF290F82DF673D8, NULL);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(G_B3_1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// }
		return;
	}
}
// System.Void MChickenBaseState::OnTriggerEnter(MChickenStateManager,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenBaseState_OnTriggerEnter_mF52CF3BF14B13399BE97C4A05B309F022DDE984D (MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* __this, MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* ___creature0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mB26F8DBF011ECCDA105AA4C551AB7F52F9C47805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB07D3449BB2C3E5DEA192A50648AD901D78FC600);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (other.gameObject.CompareTag("PlayerAttack"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralB07D3449BB2C3E5DEA192A50648AD901D78FC600, NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		// float damage = other.gameObject.GetComponentInParent<PlayerData>().attack;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_5;
		L_5 = GameObject_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mB26F8DBF011ECCDA105AA4C551AB7F52F9C47805(L_4, GameObject_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mB26F8DBF011ECCDA105AA4C551AB7F52F9C47805_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6;
		L_6 = PlayerData_get_attack_m6BF22244161186C361DA16F2CDAF311CFF1B21DE(L_5, NULL);
		V_0 = L_6;
		// creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.chicken).currentHP -= damage;
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_7 = ___creature0;
		NullCheck(L_7);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_8 = L_7->___CreatureData_7;
		NullCheck(L_8);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_9;
		L_9 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_8, 1, NULL);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_10 = L_9;
		NullCheck(L_10);
		float L_11 = L_10->___currentHP_8;
		float L_12 = V_0;
		NullCheck(L_10);
		L_10->___currentHP_8 = ((float)il2cpp_codegen_subtract(L_11, L_12));
		// creature.SwitchState(creature.hurtState);
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_13 = ___creature0;
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_14 = ___creature0;
		NullCheck(L_14);
		MChickenHurtState_t8BF3A697D1395C8FB11AC5F1CD4547AB36CD3E34* L_15 = L_14->___hurtState_5;
		NullCheck(L_13);
		MChickenStateManager_SwitchState_m8C9C99B6B49B4E73F268AE2E95E991DC4A553EEA(L_13, L_15, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void MChickenBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenBaseState__ctor_m1FD47EC79D49B5046BD501E5FF615214BD805F66 (MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MChickenMoveState::EnterState(MChickenStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenMoveState_EnterState_mD342D26906C9F837B731129301A216D27F245746 (MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57* __this, MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.EnterState(creature);
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_0 = ___creature0;
		MChickenBaseState_EnterState_m9A46C769AEA8394E7BBC1E9FCFD052FBB19CD46C(__this, L_0, NULL);
		// rb = creature.GetComponent<Rigidbody>();
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_1 = ___creature0;
		NullCheck(L_1);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_1, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_1), (void*)L_2);
		// playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		__this->___playerTrans_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerTrans_0), (void*)L_4);
		// }
		return;
	}
}
// System.Void MChickenMoveState::UpdateState(MChickenStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenMoveState_UpdateState_m81CD188DD4DD566DBA42A5A59E79C0BC149C239F (MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57* __this, MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F42835D67B0B8C91CBC6508BF885DD3ACAFFAD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerTrans != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___playerTrans_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rb_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___playerTrans_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_7 = ___creature0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___playerTrans_0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_6, L_10, L_13, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_3, L_14, NULL);
		return;
	}

IL_0054:
	{
		// Debug.Log("NO PlAYER");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6F42835D67B0B8C91CBC6508BF885DD3ACAFFAD0, NULL);
		// }
		return;
	}
}
// System.Void MChickenMoveState::OnTriggerEnter(MChickenStateManager,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenMoveState_OnTriggerEnter_m5E3AE2C0CEAD6D27D08CE371C93A357EFD4FE60A (MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57* __this, MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* ___creature0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other1, const RuntimeMethod* method) 
{
	{
		// base.OnTriggerEnter(creature, other);
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_0 = ___creature0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___other1;
		MChickenBaseState_OnTriggerEnter_mF52CF3BF14B13399BE97C4A05B309F022DDE984D(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MChickenMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenMoveState__ctor_mBEE23272C52D4A5B136E071556C980D4B5E1E203 (MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57* __this, const RuntimeMethod* method) 
{
	{
		MChickenBaseState__ctor_m1FD47EC79D49B5046BD501E5FF615214BD805F66(__this, NULL);
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
// System.Void MChickenHurtState::EnterState(MChickenStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenHurtState_EnterState_m2E8705DA4C1DACE49946928DE5482045A0018346 (MChickenHurtState_t8BF3A697D1395C8FB11AC5F1CD4547AB36CD3E34* __this, MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.chicken).currentHP <= 0)
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_0 = ___creature0;
		NullCheck(L_0);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_1 = L_0->___CreatureData_7;
		NullCheck(L_1);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_2;
		L_2 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_1, 1, NULL);
		NullCheck(L_2);
		float L_3 = L_2->___currentHP_8;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0023;
		}
	}
	{
		// GameObject.Destroy(creature.gameObject);
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_4 = ___creature0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_0023:
	{
		// base.EnterState(creature);
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_6 = ___creature0;
		MChickenBaseState_EnterState_m9A46C769AEA8394E7BBC1E9FCFD052FBB19CD46C(__this, L_6, NULL);
		// creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.chicken).currentHurtCD = creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.chicken).hurtCD;
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_7 = ___creature0;
		NullCheck(L_7);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_8 = L_7->___CreatureData_7;
		NullCheck(L_8);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_9;
		L_9 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_8, 1, NULL);
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_10 = ___creature0;
		NullCheck(L_10);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_11 = L_10->___CreatureData_7;
		NullCheck(L_11);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_12;
		L_12 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_11, 1, NULL);
		NullCheck(L_12);
		float L_13 = L_12->___hurtCD_5;
		NullCheck(L_9);
		L_9->___currentHurtCD_6 = L_13;
		// }
		return;
	}
}
// System.Void MChickenHurtState::UpdateState(MChickenStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenHurtState_UpdateState_mD12039C9E2816730FBE6B7AA0A4BDB62F953EAB3 (MChickenHurtState_t8BF3A697D1395C8FB11AC5F1CD4547AB36CD3E34* __this, MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* ___creature0, const RuntimeMethod* method) 
{
	{
		// if (creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.chicken).currentHurtCD > 0)
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_0 = ___creature0;
		NullCheck(L_0);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_1 = L_0->___CreatureData_7;
		NullCheck(L_1);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_2;
		L_2 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_1, 1, NULL);
		NullCheck(L_2);
		float L_3 = L_2->___currentHurtCD_6;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		// creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.chicken).currentHurtCD -= Time.deltaTime;
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_4 = ___creature0;
		NullCheck(L_4);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_5 = L_4->___CreatureData_7;
		NullCheck(L_5);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_6;
		L_6 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_5, 1, NULL);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_7 = L_6;
		NullCheck(L_7);
		float L_8 = L_7->___currentHurtCD_6;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_7);
		L_7->___currentHurtCD_6 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		return;
	}

IL_0036:
	{
		// creature.SwitchState(creature.moveState);
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_10 = ___creature0;
		MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* L_11 = ___creature0;
		NullCheck(L_11);
		MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57* L_12 = L_11->___moveState_6;
		NullCheck(L_10);
		MChickenStateManager_SwitchState_m8C9C99B6B49B4E73F268AE2E95E991DC4A553EEA(L_10, L_12, NULL);
		// }
		return;
	}
}
// System.Void MChickenHurtState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenHurtState__ctor_mC616DA7B7F56773BE4F3BD44A8DB1C90E3A928A9 (MChickenHurtState_t8BF3A697D1395C8FB11AC5F1CD4547AB36CD3E34* __this, const RuntimeMethod* method) 
{
	{
		MChickenBaseState__ctor_m1FD47EC79D49B5046BD501E5FF615214BD805F66(__this, NULL);
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
// System.Void MChickenStateManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenStateManager_Start_mEE8B0CE5EEFB7E26380B0034EB6ACF04757CB236 (MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* __this, const RuntimeMethod* method) 
{
	{
		// currentState = moveState;
		MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57* L_0 = __this->___moveState_6;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// currentState.EnterState(this);
		MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* L_1 = __this->___currentState_4;
		NullCheck(L_1);
		VirtualActionInvoker1< MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* >::Invoke(4 /* System.Void MChickenBaseState::EnterState(MChickenStateManager) */, L_1, __this);
		// }
		return;
	}
}
// System.Void MChickenStateManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenStateManager_FixedUpdate_m412DB75DF86CD07525D812604A5DD01E5588B668 (MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* __this, const RuntimeMethod* method) 
{
	{
		// if (currentState == null)
		MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* L_0 = __this->___currentState_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// currentState = moveState;
		MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57* L_1 = __this->___moveState_6;
		__this->___currentState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_1);
		return;
	}

IL_0015:
	{
		// currentState.UpdateState(this);
		MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* L_2 = __this->___currentState_4;
		NullCheck(L_2);
		VirtualActionInvoker1< MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* >::Invoke(5 /* System.Void MChickenBaseState::UpdateState(MChickenStateManager) */, L_2, __this);
		// }
		return;
	}
}
// System.Void MChickenStateManager::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenStateManager_OnTriggerEnter_m69E868695CA6B001FB218A04DC4C1253872ADB28 (MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// if (currentState == null)
		MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* L_0 = __this->___currentState_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// currentState = moveState;
		MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57* L_1 = __this->___moveState_6;
		__this->___currentState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_1);
		return;
	}

IL_0015:
	{
		// currentState.OnTriggerEnter(this, other);
		MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* L_2 = __this->___currentState_4;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_2);
		VirtualActionInvoker2< MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* >::Invoke(6 /* System.Void MChickenBaseState::OnTriggerEnter(MChickenStateManager,UnityEngine.Collider) */, L_2, __this, L_3);
		// }
		return;
	}
}
// System.Void MChickenStateManager::SwitchState(MChickenBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenStateManager_SwitchState_m8C9C99B6B49B4E73F268AE2E95E991DC4A553EEA (MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* __this, MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* ___creatureBaseState0, const RuntimeMethod* method) 
{
	{
		// currentState = creatureBaseState;
		MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* L_0 = ___creatureBaseState0;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// creatureBaseState.EnterState(this);
		MChickenBaseState_tEE17CFB9C1E5CCF00E7062F37A6D049E724AF17F* L_1 = ___creatureBaseState0;
		NullCheck(L_1);
		VirtualActionInvoker1< MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* >::Invoke(4 /* System.Void MChickenBaseState::EnterState(MChickenStateManager) */, L_1, __this);
		// }
		return;
	}
}
// System.Void MChickenStateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MChickenStateManager__ctor_m28116836D20CF52DC432B5974898233CDAD73F66 (MChickenStateManager_t3887279DF930D6EE457566D91907058DD6CEA671* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MChickenHurtState_t8BF3A697D1395C8FB11AC5F1CD4547AB36CD3E34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MChickenHurtState hurtState = new MChickenHurtState();
		MChickenHurtState_t8BF3A697D1395C8FB11AC5F1CD4547AB36CD3E34* L_0 = (MChickenHurtState_t8BF3A697D1395C8FB11AC5F1CD4547AB36CD3E34*)il2cpp_codegen_object_new(MChickenHurtState_t8BF3A697D1395C8FB11AC5F1CD4547AB36CD3E34_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MChickenHurtState__ctor_mC616DA7B7F56773BE4F3BD44A8DB1C90E3A928A9(L_0, NULL);
		__this->___hurtState_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hurtState_5), (void*)L_0);
		// public MChickenMoveState moveState = new MChickenMoveState();
		MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57* L_1 = (MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57*)il2cpp_codegen_object_new(MChickenMoveState_t7950EC5D806C3587EB742E170C14428F95231F57_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MChickenMoveState__ctor_mBEE23272C52D4A5B136E071556C980D4B5E1E203(L_1, NULL);
		__this->___moveState_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveState_6), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PCowBaseState::EnterState(PCowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowBaseState_EnterState_m62DABB0CA7EB5B12B5EF6E9E458DAE550063F9D7 (PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* __this, PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CB260CA88D0E5787069D0700B9BC473FD680DFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40682890B660810D40D0C469ADF290F82DF673D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log(string.Format("<color=#ff0000>{0}</color>", creature.currentState + "???"));
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_0 = ___creature0;
		NullCheck(L_0);
		PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* L_1 = L_0->___currentState_4;
		PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral3CB260CA88D0E5787069D0700B9BC473FD680DFC;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral3CB260CA88D0E5787069D0700B9BC473FD680DFC;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_0017:
	{
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_0, _stringLiteral40682890B660810D40D0C469ADF290F82DF673D8, NULL);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(G_B3_1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		__this->___playerTrans_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerTrans_0), (void*)L_7);
		// rb = creature.GetComponent<Rigidbody>();
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_8 = ___creature0;
		NullCheck(L_8);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9;
		L_9 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_8, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_1), (void*)L_9);
		// }
		return;
	}
}
// System.Void PCowBaseState::UpdateState(PCowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowBaseState_UpdateState_m37343E6BC3F9C80A3E4261F95353CF1259187A18 (PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* __this, PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* ___creature0, const RuntimeMethod* method) 
{
	{
		// rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_1;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___playerTrans_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_5 = ___creature0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___playerTrans_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_4, L_8, L_11, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_1, L_12, NULL);
		// }
		return;
	}
}
// System.Void PCowBaseState::OnTriggerEnter(PCowStateManager,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowBaseState_OnTriggerEnter_mCD01C1573EE17B75D077F6DD5A9FFAAE51BBBBEA (PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* __this, PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* ___creature0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PCowBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowBaseState__ctor_mBAF9256303C8A1A3B5367E8A086C063B6B1A9FF5 (PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void PCowMoveState::EnterState(PCowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowMoveState_EnterState_mA310D34B17BE0D6A46DF2B1A1BA27D6CEB534D55 (PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324* __this, PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.EnterState(creature);
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_0 = ___creature0;
		PCowBaseState_EnterState_m62DABB0CA7EB5B12B5EF6E9E458DAE550063F9D7(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void PCowMoveState::UpdateState(PCowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowMoveState_UpdateState_mA2A98B756994391B251BC2EA15A1338893FA63D1 (PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324* __this, PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F42835D67B0B8C91CBC6508BF885DD3ACAFFAD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.UpdateState(creature);
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_0 = ___creature0;
		PCowBaseState_UpdateState_m37343E6BC3F9C80A3E4261F95353CF1259187A18(__this, L_0, NULL);
		// if (playerTrans != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ((PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01*)__this)->___playerTrans_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_00c8;
		}
	}
	{
		// rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = ((PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01*)__this)->___rb_1;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01*)__this)->___playerTrans_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_8 = ___creature0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ((PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01*)__this)->___playerTrans_0;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_7, L_11, L_14, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_4, L_15, NULL);
		// rb.transform.Translate(new Vector3(0, 0, 1 * creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.PCow).moveSpeed * Time.deltaTime));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = ((PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01*)__this)->___rb_1;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_18 = ___creature0;
		NullCheck(L_18);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_19 = L_18->___CreatureData_8;
		NullCheck(L_19);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_20;
		L_20 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_19, 2, NULL);
		NullCheck(L_20);
		float L_21 = L_20->___moveSpeed_1;
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((1.0f), L_21)), L_22)), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_17, L_23, NULL);
		// float distance = Vector3.Distance(playerTrans.position, creature.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ((PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01*)__this)->___playerTrans_0;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_26 = ___creature0;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29;
		L_29 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_25, L_28, NULL);
		// if (distance <= 15 /*&& creature.CreatureData.currentAttackCD <= 0*/)
		if ((!(((float)L_29) <= ((float)(15.0f)))))
		{
			goto IL_00d2;
		}
	}
	{
		// creature.SwitchState(creature.chargeState);
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_30 = ___creature0;
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_31 = ___creature0;
		NullCheck(L_31);
		PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550* L_32 = L_31->___chargeState_7;
		NullCheck(L_30);
		PCowStateManager_SwitchState_m3C4D9860B76E79A6BB3B54409CF9AE1DC01FC909(L_30, L_32, NULL);
		return;
	}

IL_00c8:
	{
		// Debug.Log("NO PlAYER");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6F42835D67B0B8C91CBC6508BF885DD3ACAFFAD0, NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void PCowMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowMoveState__ctor_mCB334E1952EA94027759165A47F4002B80D0D768 (PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324* __this, const RuntimeMethod* method) 
{
	{
		PCowBaseState__ctor_mBAF9256303C8A1A3B5367E8A086C063B6B1A9FF5(__this, NULL);
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
// System.Void PCowChargeState::EnterState(PCowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowChargeState_EnterState_m18D2281F856E8DC3CC6089455C7B2A8590CF3272 (PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550* __this, PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.EnterState(creature);
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_0 = ___creature0;
		PCowBaseState_EnterState_m62DABB0CA7EB5B12B5EF6E9E458DAE550063F9D7(__this, L_0, NULL);
		// charge = creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.PCow).attackCD;
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_1 = ___creature0;
		NullCheck(L_1);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_2 = L_1->___CreatureData_8;
		NullCheck(L_2);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_3;
		L_3 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_2, 2, NULL);
		NullCheck(L_3);
		float L_4 = L_3->___attackCD_3;
		__this->___charge_2 = L_4;
		// }
		return;
	}
}
// System.Void PCowChargeState::UpdateState(PCowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowChargeState_UpdateState_mCA0AEFADCE0F12C55F0151528288752A0AFDB3A8 (PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550* __this, PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.UpdateState(creature);
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_0 = ___creature0;
		PCowBaseState_UpdateState_m37343E6BC3F9C80A3E4261F95353CF1259187A18(__this, L_0, NULL);
		// charge -= Time.deltaTime;
		float L_1 = __this->___charge_2;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___charge_2 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (charge <= 0)
		float L_3 = __this->___charge_2;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		// creature.SwitchState(creature.attackState);
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_4 = ___creature0;
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_5 = ___creature0;
		NullCheck(L_5);
		PCowAttackState_t56278DBE0D3BCE86671A1AB671FCC7282D325FB3* L_6 = L_5->___attackState_5;
		NullCheck(L_4);
		PCowStateManager_SwitchState_m3C4D9860B76E79A6BB3B54409CF9AE1DC01FC909(L_4, L_6, NULL);
	}

IL_0032:
	{
		// if (creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.PCow).currentHP <= 0)
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_7 = ___creature0;
		NullCheck(L_7);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_8 = L_7->___CreatureData_8;
		NullCheck(L_8);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_9;
		L_9 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_8, 2, NULL);
		NullCheck(L_9);
		float L_10 = L_9->___currentHP_8;
		if ((!(((float)L_10) <= ((float)(0.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		// GameObject.Destroy(creature.gameObject  );
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_11 = ___creature0;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_12, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void PCowChargeState::OnTriggerEnter(PCowStateManager,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowChargeState_OnTriggerEnter_m16E3C0C5DD7CAFF988F57053255AAE24C1A1B609 (PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550* __this, PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* ___creature0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collision1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_m1F49B810F7EC19B5C5C43E5FB0F71F215EED386F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB07D3449BB2C3E5DEA192A50648AD901D78FC600);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (collision.gameObject.CompareTag("PlayerAttack"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collision1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralB07D3449BB2C3E5DEA192A50648AD901D78FC600, NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// float damage = collision.GetComponentInParent<PlayerData>().attack;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___collision1;
		NullCheck(L_3);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_4;
		L_4 = Component_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_m1F49B810F7EC19B5C5C43E5FB0F71F215EED386F(L_3, Component_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_m1F49B810F7EC19B5C5C43E5FB0F71F215EED386F_RuntimeMethod_var);
		NullCheck(L_4);
		float L_5;
		L_5 = PlayerData_get_attack_m6BF22244161186C361DA16F2CDAF311CFF1B21DE(L_4, NULL);
		V_0 = L_5;
		// creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.PCow).currentHP -= damage;
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_6 = ___creature0;
		NullCheck(L_6);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_7 = L_6->___CreatureData_8;
		NullCheck(L_7);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_8;
		L_8 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_7, 2, NULL);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_9 = L_8;
		NullCheck(L_9);
		float L_10 = L_9->___currentHP_8;
		float L_11 = V_0;
		NullCheck(L_9);
		L_9->___currentHP_8 = ((float)il2cpp_codegen_subtract(L_10, L_11));
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void PCowChargeState::GetHurt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowChargeState_GetHurt_m1EDF4F521503DFEE26EFCD3692C030C2F91B1AA5 (PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550* __this, float ___damage0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PCowChargeState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowChargeState__ctor_mB46CC7365FE58F09C0E2C8E76B1435D6079AF715 (PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550* __this, const RuntimeMethod* method) 
{
	{
		PCowBaseState__ctor_mBAF9256303C8A1A3B5367E8A086C063B6B1A9FF5(__this, NULL);
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
// System.Void PCowAttackState::EnterState(PCowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowAttackState_EnterState_m43809B41952603D84DE62E03D720F93F6DCD4394 (PCowAttackState_t56278DBE0D3BCE86671A1AB671FCC7282D325FB3* __this, PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.EnterState(creature);
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_0 = ___creature0;
		PCowBaseState_EnterState_m62DABB0CA7EB5B12B5EF6E9E458DAE550063F9D7(__this, L_0, NULL);
		// wait = creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.PCow).attackCD;
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_1 = ___creature0;
		NullCheck(L_1);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_2 = L_1->___CreatureData_8;
		NullCheck(L_2);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_3;
		L_3 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_2, 2, NULL);
		NullCheck(L_3);
		float L_4 = L_3->___attackCD_3;
		__this->___wait_3 = L_4;
		// target = playerTrans.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01*)__this)->___playerTrans_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___target_2 = L_6;
		// rb = creature.GetComponent<Rigidbody>();
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_7 = ___creature0;
		NullCheck(L_7);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8;
		L_8 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_7, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		((PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01*)__this)->___rb_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01*)__this)->___rb_1), (void*)L_8);
		// }
		return;
	}
}
// System.Void PCowAttackState::UpdateState(PCowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowAttackState_UpdateState_m5CF6FB8F6AF62F222B9A96540A059DD25879F036 (PCowAttackState_t56278DBE0D3BCE86671A1AB671FCC7282D325FB3* __this, PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* ___creature0, const RuntimeMethod* method) 
{
	{
		// rb.transform.LookAt(new Vector3(target.x, creature.transform.position.y, target.z));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = ((PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01*)__this)->___rb_1;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___target_2);
		float L_3 = L_2->___x_2;
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_4 = ___creature0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___target_2);
		float L_9 = L_8->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_3, L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_1, L_10, NULL);
		// creature.transform.position = Vector3.MoveTowards(creature.transform.position, target,creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.PCow).moveSpeed*15*Time.deltaTime);
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_11 = ___creature0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_13 = ___creature0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___target_2;
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_17 = ___creature0;
		NullCheck(L_17);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_18 = L_17->___CreatureData_8;
		NullCheck(L_18);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_19;
		L_19 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_18, 2, NULL);
		NullCheck(L_19);
		float L_20 = L_19->___moveSpeed_1;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_15, L_16, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_20, (15.0f))), L_21)), NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_22, NULL);
		// wait -= Time.deltaTime;
		float L_23 = __this->___wait_3;
		float L_24;
		L_24 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___wait_3 = ((float)il2cpp_codegen_subtract(L_23, L_24));
		// if (wait <= 0)
		float L_25 = __this->___wait_3;
		if ((!(((float)L_25) <= ((float)(0.0f)))))
		{
			goto IL_00a4;
		}
	}
	{
		// creature.SwitchState(creature.moveState);
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_26 = ___creature0;
		PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* L_27 = ___creature0;
		NullCheck(L_27);
		PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324* L_28 = L_27->___moveState_6;
		NullCheck(L_26);
		PCowStateManager_SwitchState_m3C4D9860B76E79A6BB3B54409CF9AE1DC01FC909(L_26, L_28, NULL);
	}

IL_00a4:
	{
		// }
		return;
	}
}
// System.Void PCowAttackState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowAttackState__ctor_m4D73DE3C6C451B5AB6B31BC4E29326CC53014F66 (PCowAttackState_t56278DBE0D3BCE86671A1AB671FCC7282D325FB3* __this, const RuntimeMethod* method) 
{
	{
		PCowBaseState__ctor_mBAF9256303C8A1A3B5367E8A086C063B6B1A9FF5(__this, NULL);
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
// System.Void PCowStateManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowStateManager_Start_mB7287201886F8BB39AAACCB857B6788F219AC8A0 (PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* __this, const RuntimeMethod* method) 
{
	{
		// currentState = moveState;
		PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324* L_0 = __this->___moveState_6;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// currentState.EnterState(this);
		PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* L_1 = __this->___currentState_4;
		NullCheck(L_1);
		VirtualActionInvoker1< PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* >::Invoke(4 /* System.Void PCowBaseState::EnterState(PCowStateManager) */, L_1, __this);
		// CreatureData.GetCreature(CreatureDataBaseSO.Name.PCow).currentHP = CreatureData.GetCreature(CreatureDataBaseSO.Name.PCow).maxHP;
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_2 = __this->___CreatureData_8;
		NullCheck(L_2);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_3;
		L_3 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_2, 2, NULL);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_4 = __this->___CreatureData_8;
		NullCheck(L_4);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_5;
		L_5 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_4, 2, NULL);
		NullCheck(L_5);
		float L_6 = L_5->___maxHP_7;
		NullCheck(L_3);
		L_3->___currentHP_8 = L_6;
		// }
		return;
	}
}
// System.Void PCowStateManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowStateManager_FixedUpdate_m9F8155F895DDF8414F56EF67EB73A1BD029D46AF (PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* __this, const RuntimeMethod* method) 
{
	{
		// if (currentState == null)
		PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* L_0 = __this->___currentState_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// currentState = moveState;
		PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324* L_1 = __this->___moveState_6;
		__this->___currentState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_1);
		return;
	}

IL_0015:
	{
		// currentState.UpdateState(this);
		PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* L_2 = __this->___currentState_4;
		NullCheck(L_2);
		VirtualActionInvoker1< PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* >::Invoke(5 /* System.Void PCowBaseState::UpdateState(PCowStateManager) */, L_2, __this);
		// }
		return;
	}
}
// System.Void PCowStateManager::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowStateManager_OnTriggerEnter_mC9C003A4D550FCB4C15E6A88C82078882C1601DC (PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// if (currentState == null)
		PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* L_0 = __this->___currentState_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// currentState = moveState;
		PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324* L_1 = __this->___moveState_6;
		__this->___currentState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_1);
		return;
	}

IL_0015:
	{
		// currentState.OnTriggerEnter(this, other);
		PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* L_2 = __this->___currentState_4;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_2);
		VirtualActionInvoker2< PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* >::Invoke(6 /* System.Void PCowBaseState::OnTriggerEnter(PCowStateManager,UnityEngine.Collider) */, L_2, __this, L_3);
		// }
		return;
	}
}
// System.Void PCowStateManager::SwitchState(PCowBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowStateManager_SwitchState_m3C4D9860B76E79A6BB3B54409CF9AE1DC01FC909 (PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* __this, PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* ___creatureBaseState0, const RuntimeMethod* method) 
{
	{
		// currentState = creatureBaseState;
		PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* L_0 = ___creatureBaseState0;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// creatureBaseState.EnterState(this);
		PCowBaseState_t04E1EDCC551FE750EE2C9CFADB18583FE313FD01* L_1 = ___creatureBaseState0;
		NullCheck(L_1);
		VirtualActionInvoker1< PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* >::Invoke(4 /* System.Void PCowBaseState::EnterState(PCowStateManager) */, L_1, __this);
		// }
		return;
	}
}
// System.Void PCowStateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCowStateManager__ctor_m63E501162C863EB8B2D7CB9CD8D7D19575FCB2D7 (PCowStateManager_tFC3F3B77BD67CE5484A712AB58B8F5F4FFD60F8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCowAttackState_t56278DBE0D3BCE86671A1AB671FCC7282D325FB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PCowAttackState attackState = new PCowAttackState();
		PCowAttackState_t56278DBE0D3BCE86671A1AB671FCC7282D325FB3* L_0 = (PCowAttackState_t56278DBE0D3BCE86671A1AB671FCC7282D325FB3*)il2cpp_codegen_object_new(PCowAttackState_t56278DBE0D3BCE86671A1AB671FCC7282D325FB3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PCowAttackState__ctor_m4D73DE3C6C451B5AB6B31BC4E29326CC53014F66(L_0, NULL);
		__this->___attackState_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackState_5), (void*)L_0);
		// public PCowMoveState moveState = new PCowMoveState();
		PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324* L_1 = (PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324*)il2cpp_codegen_object_new(PCowMoveState_tE46C1FB900C9C5B0D1CC8BAC0A4D7895BD368324_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PCowMoveState__ctor_mCB334E1952EA94027759165A47F4002B80D0D768(L_1, NULL);
		__this->___moveState_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveState_6), (void*)L_1);
		// public PCowChargeState chargeState = new PCowChargeState();
		PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550* L_2 = (PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550*)il2cpp_codegen_object_new(PCowChargeState_tC989139235493F86B9D7C750C14E22F352D2A550_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PCowChargeState__ctor_mB46CC7365FE58F09C0E2C8E76B1435D6079AF715(L_2, NULL);
		__this->___chargeState_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chargeState_7), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RatBaseState::EnterState(RatStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatBaseState_EnterState_m9B0574F32E000A62189EE7485B7436AD74878219 (RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* __this, RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15D0E8857464F65E61AE3EFCDFD6D22E63EC0B91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40682890B660810D40D0C469ADF290F82DF673D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log(string.Format("<color=#fff000>{0}</color>", creature.currentState + "???"));
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_0 = ___creature0;
		NullCheck(L_0);
		RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* L_1 = L_0->___currentState_4;
		RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral15D0E8857464F65E61AE3EFCDFD6D22E63EC0B91;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral15D0E8857464F65E61AE3EFCDFD6D22E63EC0B91;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_0017:
	{
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_0, _stringLiteral40682890B660810D40D0C469ADF290F82DF673D8, NULL);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(G_B3_1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		__this->___playerTrans_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerTrans_0), (void*)L_7);
		// rb = creature.GetComponent<Rigidbody>();
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_8 = ___creature0;
		NullCheck(L_8);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9;
		L_9 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_8, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_1), (void*)L_9);
		// }
		return;
	}
}
// System.Void RatBaseState::OnTriggerEnter(RatStateManager,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatBaseState_OnTriggerEnter_m18C7BBDC10D78263387468F589B64D857AE6BCBE (RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* __this, RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* ___creature0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mB26F8DBF011ECCDA105AA4C551AB7F52F9C47805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB07D3449BB2C3E5DEA192A50648AD901D78FC600);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (other.gameObject.CompareTag("PlayerAttack"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralB07D3449BB2C3E5DEA192A50648AD901D78FC600, NULL);
		if (!L_2)
		{
			goto IL_006b;
		}
	}
	{
		// float damage = other.gameObject.GetComponentInParent<PlayerData>().attack;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_5;
		L_5 = GameObject_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mB26F8DBF011ECCDA105AA4C551AB7F52F9C47805(L_4, GameObject_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mB26F8DBF011ECCDA105AA4C551AB7F52F9C47805_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6;
		L_6 = PlayerData_get_attack_m6BF22244161186C361DA16F2CDAF311CFF1B21DE(L_5, NULL);
		V_0 = L_6;
		// creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.rat).currentHP -= damage;
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_7 = ___creature0;
		NullCheck(L_7);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_8 = L_7->___CreatureData_9;
		NullCheck(L_8);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_9;
		L_9 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_8, 3, NULL);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_10 = L_9;
		NullCheck(L_10);
		float L_11 = L_10->___currentHP_8;
		float L_12 = V_0;
		NullCheck(L_10);
		L_10->___currentHP_8 = ((float)il2cpp_codegen_subtract(L_11, L_12));
		// creature.SwitchState(creature.hurtState);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_13 = ___creature0;
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_14 = ___creature0;
		NullCheck(L_14);
		RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9* L_15 = L_14->___hurtState_7;
		NullCheck(L_13);
		RatStateManager_SwitchState_m62868816ABCF5BE3CAEC15380F109392E1646D14(L_13, L_15, NULL);
		// if (creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.rat).currentHP <= 0)
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_16 = ___creature0;
		NullCheck(L_16);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_17 = L_16->___CreatureData_9;
		NullCheck(L_17);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_18;
		L_18 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_17, 3, NULL);
		NullCheck(L_18);
		float L_19 = L_18->___currentHP_8;
		if ((!(((float)L_19) <= ((float)(0.0f)))))
		{
			goto IL_006b;
		}
	}
	{
		// GameObject.Destroy(creature.gameObject);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_20 = ___creature0;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_21, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void RatBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatBaseState__ctor_m1C1D251C4B5025CFE3BD3DC1DFA05703DA595230 (RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RatIdleState::EnterState(RatStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatIdleState_EnterState_m167325A6BCC1F2D56144670EF395AB330EDF7FF4 (RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811* __this, RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.EnterState(creature);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_0 = ___creature0;
		RatBaseState_EnterState_m9B0574F32E000A62189EE7485B7436AD74878219(__this, L_0, NULL);
		// creature.transform.position += new Vector3(0, -3, 0);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_1 = ___creature0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), (-3.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_5, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_6, NULL);
		// rb.constraints = RigidbodyConstraints.FreezePosition;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = ((RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3*)__this)->___rb_1;
		NullCheck(L_7);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_7, ((int32_t)14), NULL);
		// BoxCollider boxCollider = creature.GetComponent<BoxCollider>();
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_8 = ___creature0;
		NullCheck(L_8);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_9;
		L_9 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(L_8, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		// boxCollider.isTrigger = true;
		NullCheck(L_9);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_9, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void RatIdleState::UpdateState(RatStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatIdleState_UpdateState_m373865394A6DA063B5AD78E4EAC45CDDAABC1B93 (RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811* __this, RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float distance = Vector3.Distance(playerTrans.position, creature.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3*)__this)->___playerTrans_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_2 = ___creature0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		// if (distance <=   10 /*&& creature.CreatureData.currentAttackCD <= 0*/)
		if ((!(((float)L_5) <= ((float)(10.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		// creature.SwitchState(creature.moveState);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_6 = ___creature0;
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_7 = ___creature0;
		NullCheck(L_7);
		RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10* L_8 = L_7->___moveState_8;
		NullCheck(L_6);
		RatStateManager_SwitchState_m62868816ABCF5BE3CAEC15380F109392E1646D14(L_6, L_8, NULL);
		// creature.transform.position += new Vector3(0, 4, 0);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_9 = ___creature0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (0.0f), (4.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_13, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_14, NULL);
		// BoxCollider boxCollider = creature.GetComponent<BoxCollider>();
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_15 = ___creature0;
		NullCheck(L_15);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_16;
		L_16 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(L_15, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		// boxCollider.isTrigger = false;
		NullCheck(L_16);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_16, (bool)0, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void RatIdleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatIdleState__ctor_m5CE7B2F69461C1DB473C75E3BD6AA620AEEEFEFA (RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811* __this, const RuntimeMethod* method) 
{
	{
		RatBaseState__ctor_m1C1D251C4B5025CFE3BD3DC1DFA05703DA595230(__this, NULL);
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
// System.Void RatMoveState::EnterState(RatStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatMoveState_EnterState_m0B8A56B9DA1B60691A9CFB4884B60E8DB070D0EA (RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10* __this, RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.EnterState(creature);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_0 = ___creature0;
		RatBaseState_EnterState_m9B0574F32E000A62189EE7485B7436AD74878219(__this, L_0, NULL);
		// rb.constraints = RigidbodyConstraints.None;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = ((RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3*)__this)->___rb_1;
		NullCheck(L_1);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void RatMoveState::UpdateState(RatStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatMoveState_UpdateState_mE9EC20182FECFF2959F59B3D419D46C9DA4A3663 (RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10* __this, RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F42835D67B0B8C91CBC6508BF885DD3ACAFFAD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerTrans != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3*)__this)->___playerTrans_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0093;
		}
	}
	{
		// rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = ((RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3*)__this)->___rb_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ((RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3*)__this)->___playerTrans_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_7 = ___creature0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ((RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3*)__this)->___playerTrans_0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_6, L_10, L_13, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_3, L_14, NULL);
		// rb.transform.Translate(new Vector3(0, 0, 1 * creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.rat).moveSpeed * Time.deltaTime));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = ((RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3*)__this)->___rb_1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_17 = ___creature0;
		NullCheck(L_17);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_18 = L_17->___CreatureData_9;
		NullCheck(L_18);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_19;
		L_19 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_18, 3, NULL);
		NullCheck(L_19);
		float L_20 = L_19->___moveSpeed_1;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((1.0f), L_20)), L_21)), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_16, L_22, NULL);
		return;
	}

IL_0093:
	{
		// Debug.Log("NO PlAYER");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6F42835D67B0B8C91CBC6508BF885DD3ACAFFAD0, NULL);
		// }
		return;
	}
}
// System.Void RatMoveState::OnTriggerEnter(RatStateManager,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatMoveState_OnTriggerEnter_mD987D025674D3DF797AE3DD6975B0696A2F5D1BA (RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10* __this, RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* ___creature0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other1, const RuntimeMethod* method) 
{
	{
		// base.OnTriggerEnter(creature, other);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_0 = ___creature0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___other1;
		RatBaseState_OnTriggerEnter_m18C7BBDC10D78263387468F589B64D857AE6BCBE(__this, L_0, L_1, NULL);
		// if (creature.CreatureData.GetCreature(CreatureDataBaseSO.Name.rat).currentHP < 0)
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_2 = ___creature0;
		NullCheck(L_2);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_3 = L_2->___CreatureData_9;
		NullCheck(L_3);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_4;
		L_4 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_3, 3, NULL);
		NullCheck(L_4);
		float L_5 = L_4->___currentHP_8;
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		// creature.SwitchState(creature.moveState);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_6 = ___creature0;
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_7 = ___creature0;
		NullCheck(L_7);
		RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10* L_8 = L_7->___moveState_8;
		NullCheck(L_6);
		RatStateManager_SwitchState_m62868816ABCF5BE3CAEC15380F109392E1646D14(L_6, L_8, NULL);
		return;
	}

IL_002d:
	{
		// creature.SwitchState(creature.hurtState);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_9 = ___creature0;
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_10 = ___creature0;
		NullCheck(L_10);
		RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9* L_11 = L_10->___hurtState_7;
		NullCheck(L_9);
		RatStateManager_SwitchState_m62868816ABCF5BE3CAEC15380F109392E1646D14(L_9, L_11, NULL);
		// }
		return;
	}
}
// System.Void RatMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatMoveState__ctor_mCAF89CBC8C70283E50EC45702DDA1CC8ACC2DA1A (RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10* __this, const RuntimeMethod* method) 
{
	{
		RatBaseState__ctor_m1C1D251C4B5025CFE3BD3DC1DFA05703DA595230(__this, NULL);
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
// System.Void RatAttackState::EnterState(RatStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatAttackState_EnterState_mCC3DE5ED55C37248A93F2CA20C316982933772B8 (RatAttackState_t8701EF29E555B51D87B09D45754B8FF7605D8BCA* __this, RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.EnterState(creature);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_0 = ___creature0;
		RatBaseState_EnterState_m9B0574F32E000A62189EE7485B7436AD74878219(__this, L_0, NULL);
		// creature.SwitchState(creature.moveState);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_1 = ___creature0;
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_2 = ___creature0;
		NullCheck(L_2);
		RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10* L_3 = L_2->___moveState_8;
		NullCheck(L_1);
		RatStateManager_SwitchState_m62868816ABCF5BE3CAEC15380F109392E1646D14(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void RatAttackState::UpdateState(RatStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatAttackState_UpdateState_mA4049C5692ED3B1A28CFB62909E0A3512DCD1B91 (RatAttackState_t8701EF29E555B51D87B09D45754B8FF7605D8BCA* __this, RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* ___creature0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RatAttackState_UpdateState_mA4049C5692ED3B1A28CFB62909E0A3512DCD1B91_RuntimeMethod_var)));
	}
}
// System.Void RatAttackState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatAttackState__ctor_mBA27487837E1E5B5BBDCA18A9297685B1A3482DD (RatAttackState_t8701EF29E555B51D87B09D45754B8FF7605D8BCA* __this, const RuntimeMethod* method) 
{
	{
		RatBaseState__ctor_m1C1D251C4B5025CFE3BD3DC1DFA05703DA595230(__this, NULL);
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
// System.Void RatHurtState::EnterState(RatStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatHurtState_EnterState_mF95CD373BC166C0A66D202B209EDE3ECFE3CEEC0 (RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9* __this, RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.EnterState(creature);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_0 = ___creature0;
		RatBaseState_EnterState_m9B0574F32E000A62189EE7485B7436AD74878219(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void RatHurtState::UpdateState(RatStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatHurtState_UpdateState_m8D0D8B1B971F9FE1CDA390842C4F55C1A04CE9E0 (RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9* __this, RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* ___creature0, const RuntimeMethod* method) 
{
	{
		// if (hurtCD > 0)
		float L_0 = __this->___hurtCD_2;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// hurtCD -= Time.deltaTime;
		float L_1 = __this->___hurtCD_2;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___hurtCD_2 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		return;
	}

IL_0020:
	{
		// creature.SwitchState(creature.moveState);
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_3 = ___creature0;
		RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* L_4 = ___creature0;
		NullCheck(L_4);
		RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10* L_5 = L_4->___moveState_8;
		NullCheck(L_3);
		RatStateManager_SwitchState_m62868816ABCF5BE3CAEC15380F109392E1646D14(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void RatHurtState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatHurtState__ctor_mD4A58DCEE2E89DBE99CEB32DCCB04D7973EF12B9 (RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9* __this, const RuntimeMethod* method) 
{
	{
		RatBaseState__ctor_m1C1D251C4B5025CFE3BD3DC1DFA05703DA595230(__this, NULL);
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
// System.Void RatStateManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatStateManager_Start_m417E725E95B050CE9A413504679CBB17307822AE (RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* __this, const RuntimeMethod* method) 
{
	{
		// currentState = idleState;
		RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811* L_0 = __this->___idleState_6;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// currentState.EnterState(this);
		RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* L_1 = __this->___currentState_4;
		NullCheck(L_1);
		VirtualActionInvoker1< RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* >::Invoke(4 /* System.Void RatBaseState::EnterState(RatStateManager) */, L_1, __this);
		// CreatureData.GetCreature(CreatureDataBaseSO.Name.rat).currentHP = CreatureData.GetCreature(CreatureDataBaseSO.Name.rat).maxHP;
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_2 = __this->___CreatureData_9;
		NullCheck(L_2);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_3;
		L_3 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_2, 3, NULL);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_4 = __this->___CreatureData_9;
		NullCheck(L_4);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_5;
		L_5 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_4, 3, NULL);
		NullCheck(L_5);
		float L_6 = L_5->___maxHP_7;
		NullCheck(L_3);
		L_3->___currentHP_8 = L_6;
		// }
		return;
	}
}
// System.Void RatStateManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatStateManager_FixedUpdate_mEF9DE2EB2E0ECDB8DFF9E07C5F0D756312488B5E (RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* __this, const RuntimeMethod* method) 
{
	{
		// if (currentState == null)
		RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* L_0 = __this->___currentState_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// currentState = idleState;
		RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811* L_1 = __this->___idleState_6;
		__this->___currentState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_1);
		return;
	}

IL_0015:
	{
		// currentState.UpdateState(this);
		RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* L_2 = __this->___currentState_4;
		NullCheck(L_2);
		VirtualActionInvoker1< RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* >::Invoke(5 /* System.Void RatBaseState::UpdateState(RatStateManager) */, L_2, __this);
		// }
		return;
	}
}
// System.Void RatStateManager::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatStateManager_OnTriggerEnter_m3504421E45AE804AE96B316B3BC98A99C085418D (RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// if (currentState == null)
		RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* L_0 = __this->___currentState_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// currentState = idleState;
		RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811* L_1 = __this->___idleState_6;
		__this->___currentState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_1);
		return;
	}

IL_0015:
	{
		// currentState.OnTriggerEnter(this, other);
		RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* L_2 = __this->___currentState_4;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_2);
		VirtualActionInvoker2< RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* >::Invoke(6 /* System.Void RatBaseState::OnTriggerEnter(RatStateManager,UnityEngine.Collider) */, L_2, __this, L_3);
		// }
		return;
	}
}
// System.Void RatStateManager::SwitchState(RatBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatStateManager_SwitchState_m62868816ABCF5BE3CAEC15380F109392E1646D14 (RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* __this, RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* ___creatureBaseState0, const RuntimeMethod* method) 
{
	{
		// currentState = creatureBaseState;
		RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* L_0 = ___creatureBaseState0;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// creatureBaseState.EnterState(this);
		RatBaseState_t3F809C266AA47E0F766BD6B64781FB672845C6C3* L_1 = ___creatureBaseState0;
		NullCheck(L_1);
		VirtualActionInvoker1< RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* >::Invoke(4 /* System.Void RatBaseState::EnterState(RatStateManager) */, L_1, __this);
		// }
		return;
	}
}
// System.Void RatStateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RatStateManager__ctor_mF4D673E0D00B13032137B25E8031B7343B73909E (RatStateManager_t5B6EF32BB37A9F5D14435682BAE8403F24409972* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RatAttackState_t8701EF29E555B51D87B09D45754B8FF7605D8BCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RatAttackState attackState = new RatAttackState();
		RatAttackState_t8701EF29E555B51D87B09D45754B8FF7605D8BCA* L_0 = (RatAttackState_t8701EF29E555B51D87B09D45754B8FF7605D8BCA*)il2cpp_codegen_object_new(RatAttackState_t8701EF29E555B51D87B09D45754B8FF7605D8BCA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RatAttackState__ctor_mBA27487837E1E5B5BBDCA18A9297685B1A3482DD(L_0, NULL);
		__this->___attackState_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackState_5), (void*)L_0);
		// public RatIdleState idleState = new RatIdleState();
		RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811* L_1 = (RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811*)il2cpp_codegen_object_new(RatIdleState_tF0E3B24CCCC826D5822DAE20065D3A88E9E5B811_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RatIdleState__ctor_m5CE7B2F69461C1DB473C75E3BD6AA620AEEEFEFA(L_1, NULL);
		__this->___idleState_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___idleState_6), (void*)L_1);
		// public RatHurtState hurtState = new RatHurtState();
		RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9* L_2 = (RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9*)il2cpp_codegen_object_new(RatHurtState_tDEA45A1CF9A9AF30AD804164E94773A4C74A7DA9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RatHurtState__ctor_mD4A58DCEE2E89DBE99CEB32DCCB04D7973EF12B9(L_2, NULL);
		__this->___hurtState_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hurtState_7), (void*)L_2);
		// public RatMoveState moveState = new RatMoveState();
		RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10* L_3 = (RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10*)il2cpp_codegen_object_new(RatMoveState_tAFDF7E243A618E8169F161886678DE9DDC699A10_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RatMoveState__ctor_mCAF89CBC8C70283E50EC45702DDA1CC8ACC2DA1A(L_3, NULL);
		__this->___moveState_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveState_8), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CreatureAttackState::EnterState(CreatureStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureAttackState_EnterState_mC5903025D60292AA668FCF8038E5450B6F1F8982 (CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EDE210EB1CF878D6A0D8DA1893565FA8FE5D1A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Attack EnterState");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0EDE210EB1CF878D6A0D8DA1893565FA8FE5D1A4, NULL);
		// }
		return;
	}
}
// System.Void CreatureAttackState::UpdateState(CreatureStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureAttackState_UpdateState_mCC967CFD73A49BFED7841AE6B578AB68DE3C649B (CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CreatureAttackState::OnCollisionEnter(CreatureStateManager,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureAttackState_OnCollisionEnter_m2D5B31E067688DFA64A5836B28F4AA9D0A2FB3D8 (CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CreatureAttackState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureAttackState__ctor_mD18E417AE274DB7D57EC98B30801B0CAFF47CEA9 (CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54* __this, const RuntimeMethod* method) 
{
	{
		CreatureBaseState__ctor_m502873AFF706911A88BAE938BA706D1A7D0374AB(__this, NULL);
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
// System.Void CreatureBaseState::OnCollisionEnter(CreatureStateManager,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBaseState_OnCollisionEnter_m84E006E036CA4CECD7174B3DC1610909ABC8DAEC (CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.CompareTag("Player"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// creature.SwitchState(creature.attackState);
		CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* L_3 = ___creature0;
		CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* L_4 = ___creature0;
		NullCheck(L_4);
		CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54* L_5 = L_4->___attackState_6;
		NullCheck(L_3);
		CreatureStateManager_SwitchState_mD868E409EEB7D0A8E1C8E536F3EC63DF37E054BE(L_3, L_5, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void CreatureBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureBaseState__ctor_m502873AFF706911A88BAE938BA706D1A7D0374AB (CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void CreatureDestroyState::EnterState(CreatureStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureDestroyState_EnterState_mA2C21E1ABADE75F45242FA19057DBDAF67D34920 (CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD51D3EF50BF94EB49C1E584FD95D81E2198257E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Destory EnterState");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD51D3EF50BF94EB49C1E584FD95D81E2198257E2, NULL);
		// GameObject.Destroy(creature.gameObject);
		CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* L_0 = ___creature0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// }
		return;
	}
}
// System.Void CreatureDestroyState::OnCollisionEnter(CreatureStateManager,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureDestroyState_OnCollisionEnter_m9ECC444704779D69EAC7A44FAF2B3F3FC9ECBDA1 (CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CreatureDestroyState::UpdateState(CreatureStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureDestroyState_UpdateState_mAA8F0EDD653D8890CF374EF3BD1E7C6ADE7FB721 (CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CreatureDestroyState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureDestroyState__ctor_mF03666B8A59840EAFAE75C9A67BCD1964A6E5818 (CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7* __this, const RuntimeMethod* method) 
{
	{
		CreatureBaseState__ctor_m502873AFF706911A88BAE938BA706D1A7D0374AB(__this, NULL);
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
// System.Void CreatureHurtState::EnterState(CreatureStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureHurtState_EnterState_m5B6193DD72E39F4CA6DB3FCCE8DB0AB1F97DB034 (CreatureHurtState_t172F3610E3FE16BC817C34B6FBC77AA4616A2E70* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CreatureHurtState::UpdateState(CreatureStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureHurtState_UpdateState_mD341E6B24D2A8A334407233466E6A00ADB3DDC78 (CreatureHurtState_t172F3610E3FE16BC817C34B6FBC77AA4616A2E70* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CreatureHurtState::OnCollisionEnter(CreatureStateManager,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureHurtState_OnCollisionEnter_m02A249ABA7A25974F532124DE87D25DD74B12950 (CreatureHurtState_t172F3610E3FE16BC817C34B6FBC77AA4616A2E70* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CreatureHurtState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureHurtState__ctor_m1D0D24C177AB84D6B37400E484A6C5BB974A0FCC (CreatureHurtState_t172F3610E3FE16BC817C34B6FBC77AA4616A2E70* __this, const RuntimeMethod* method) 
{
	{
		CreatureBaseState__ctor_m502873AFF706911A88BAE938BA706D1A7D0374AB(__this, NULL);
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
// System.Void CreatureIdleState::EnterState(CreatureStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureIdleState_EnterState_m18B2E16ACEB97F3130DE2124E3BEFC2904CBA3A7 (CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD372C4CD9067BEFD3E25668F77C0D05F136C8A08);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RandomTime = Random.Range(1, 2);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 2, NULL);
		__this->___RandomTime_0 = ((float)L_0);
		// Debug.Log("Idle EnterState");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD372C4CD9067BEFD3E25668F77C0D05F136C8A08, NULL);
		// Debug.Log(RandomTime);
		float L_1 = __this->___RandomTime_0;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void CreatureIdleState::UpdateState(CreatureStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureIdleState_UpdateState_m2E5D1E9756E592AE7F882D9499F48954D298000F (CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6469030139425A33424D68BE2D4A5D5EF2D5A793);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Idle UpdateState");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6469030139425A33424D68BE2D4A5D5EF2D5A793, NULL);
		// RandomTime -= Time.deltaTime;
		float L_0 = __this->___RandomTime_0;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___RandomTime_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (RandomTime <= 0)
		float L_2 = __this->___RandomTime_0;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		// creature.SwitchState(creature.moveState);
		CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* L_3 = ___creature0;
		CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* L_4 = ___creature0;
		NullCheck(L_4);
		CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713* L_5 = L_4->___moveState_8;
		NullCheck(L_3);
		CreatureStateManager_SwitchState_mD868E409EEB7D0A8E1C8E536F3EC63DF37E054BE(L_3, L_5, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void CreatureIdleState::OnCollisionEnter(CreatureStateManager,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureIdleState_OnCollisionEnter_mD176D38DD3FB7B9FDCF3E9DE8D93448EFC8754C2 (CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CreatureIdleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureIdleState__ctor_mB6EDF04A0BEAB7C826ACF78F6B9706701AC0A7C5 (CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619* __this, const RuntimeMethod* method) 
{
	{
		CreatureBaseState__ctor_m502873AFF706911A88BAE938BA706D1A7D0374AB(__this, NULL);
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
// System.Void CreatureMoveState::EnterState(CreatureStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureMoveState_EnterState_m093DE675A8C00A5DCE797FBF962A0BE8D6C895F3 (CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F363EEBD5A6D166EADD7821ADD9B8A2C0F5EBA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Move EnterState");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD5F363EEBD5A6D166EADD7821ADD9B8A2C0F5EBA, NULL);
		// rb = creature.GetComponent<Rigidbody>();
		CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* L_0 = ___creature0;
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_0, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_1), (void*)L_1);
		// playerTrans = GameObject.Find("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		__this->___playerTrans_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerTrans_0), (void*)L_3);
		// }
		return;
	}
}
// System.Void CreatureMoveState::UpdateState(CreatureStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureMoveState_UpdateState_m386A065F150B0C1D4F117532025E1549DE182331 (CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F42835D67B0B8C91CBC6508BF885DD3ACAFFAD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerTrans != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___playerTrans_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_007e;
		}
	}
	{
		// rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y,playerTrans.position.z));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rb_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___playerTrans_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* L_7 = ___creature0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___playerTrans_0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_6, L_10, L_13, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_3, L_14, NULL);
		// rb.transform.Translate(new Vector3(0, 0, 1 * Time.deltaTime));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___rb_1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((1.0f), L_17)), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_16, L_18, NULL);
		return;
	}

IL_007e:
	{
		// Debug.Log("NO PlAYER");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6F42835D67B0B8C91CBC6508BF885DD3ACAFFAD0, NULL);
		// creature.SwitchState(creature.destroyState);
		CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* L_19 = ___creature0;
		CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* L_20 = ___creature0;
		NullCheck(L_20);
		CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7* L_21 = L_20->___destroyState_9;
		NullCheck(L_19);
		CreatureStateManager_SwitchState_mD868E409EEB7D0A8E1C8E536F3EC63DF37E054BE(L_19, L_21, NULL);
		// }
		return;
	}
}
// System.Void CreatureMoveState::OnCollisionEnter(CreatureStateManager,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureMoveState_OnCollisionEnter_m1F89B49C92D9C3F94F6F7A777C2552C1D85ADFB9 (CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713* __this, CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* ___creature0, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4B01CF7C0D2AF8B2E57344DF849CB5C7A5F2C60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// Debug.Log("Attack PlAYER");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF4B01CF7C0D2AF8B2E57344DF849CB5C7A5F2C60, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void CreatureMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureMoveState__ctor_mE851885512DB980E9DDCE8389DEFCC1DB7D3CBCF (CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713* __this, const RuntimeMethod* method) 
{
	{
		CreatureBaseState__ctor_m502873AFF706911A88BAE938BA706D1A7D0374AB(__this, NULL);
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
// System.Void CreatureStateManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureStateManager_Start_m2770B5C1BDFC67D86047805E59CE7F7E7EA72FDD (CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* __this, const RuntimeMethod* method) 
{
	{
		// currentState = idleState;
		CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619* L_0 = __this->___idleState_5;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// currentState.EnterState(this);
		CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695* L_1 = __this->___currentState_4;
		NullCheck(L_1);
		VirtualActionInvoker1< CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* >::Invoke(4 /* System.Void CreatureBaseState::EnterState(CreatureStateManager) */, L_1, __this);
		// }
		return;
	}
}
// System.Void CreatureStateManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureStateManager_FixedUpdate_m74D1191E4FFA9D83BCA60D33BF07746F62C13435 (CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* __this, const RuntimeMethod* method) 
{
	{
		// currentState.UpdateState(this);
		CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695* L_0 = __this->___currentState_4;
		NullCheck(L_0);
		VirtualActionInvoker1< CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* >::Invoke(5 /* System.Void CreatureBaseState::UpdateState(CreatureStateManager) */, L_0, __this);
		// }
		return;
	}
}
// System.Void CreatureStateManager::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureStateManager_OnCollisionEnter_m85E65803AC34C52ED04B90C04BC8F6DC5282B639 (CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	{
		// currentState.OnCollisionEnter(this,collision);
		CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695* L_0 = __this->___currentState_4;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___collision0;
		NullCheck(L_0);
		VirtualActionInvoker2< CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3*, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* >::Invoke(6 /* System.Void CreatureBaseState::OnCollisionEnter(CreatureStateManager,UnityEngine.Collision) */, L_0, __this, L_1);
		// }
		return;
	}
}
// System.Void CreatureStateManager::SwitchState(CreatureBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureStateManager_SwitchState_mD868E409EEB7D0A8E1C8E536F3EC63DF37E054BE (CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* __this, CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695* ___creatureBaseState0, const RuntimeMethod* method) 
{
	{
		// currentState = creatureBaseState;
		CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695* L_0 = ___creatureBaseState0;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// creatureBaseState.EnterState(this);
		CreatureBaseState_tCE686718437CF0744514D39D6AA7CD3861263695* L_1 = ___creatureBaseState0;
		NullCheck(L_1);
		VirtualActionInvoker1< CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* >::Invoke(4 /* System.Void CreatureBaseState::EnterState(CreatureStateManager) */, L_1, __this);
		// }
		return;
	}
}
// System.Void CreatureStateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatureStateManager__ctor_m7B6E6261FB847341AC54B5F0CC8564AA02A0466A (CreatureStateManager_t04EADCFDF68657D7447C62E9BDA1FF53700782F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatureHurtState_t172F3610E3FE16BC817C34B6FBC77AA4616A2E70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CreatureIdleState idleState =new CreatureIdleState();
		CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619* L_0 = (CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619*)il2cpp_codegen_object_new(CreatureIdleState_tB0168FFC3B4DEC9645BCC2DBDA84F95C69704619_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CreatureIdleState__ctor_mB6EDF04A0BEAB7C826ACF78F6B9706701AC0A7C5(L_0, NULL);
		__this->___idleState_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___idleState_5), (void*)L_0);
		// public CreatureAttackState attackState =new CreatureAttackState();
		CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54* L_1 = (CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54*)il2cpp_codegen_object_new(CreatureAttackState_t339D426C591B97C536B7713D6DB6E6005FDAED54_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CreatureAttackState__ctor_mD18E417AE274DB7D57EC98B30801B0CAFF47CEA9(L_1, NULL);
		__this->___attackState_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackState_6), (void*)L_1);
		// public CreatureHurtState hurtState =new CreatureHurtState();
		CreatureHurtState_t172F3610E3FE16BC817C34B6FBC77AA4616A2E70* L_2 = (CreatureHurtState_t172F3610E3FE16BC817C34B6FBC77AA4616A2E70*)il2cpp_codegen_object_new(CreatureHurtState_t172F3610E3FE16BC817C34B6FBC77AA4616A2E70_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CreatureHurtState__ctor_m1D0D24C177AB84D6B37400E484A6C5BB974A0FCC(L_2, NULL);
		__this->___hurtState_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hurtState_7), (void*)L_2);
		// public CreatureMoveState moveState =new CreatureMoveState();
		CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713* L_3 = (CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713*)il2cpp_codegen_object_new(CreatureMoveState_tC307E67E8C67AEE20567095900449AD4C2259713_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CreatureMoveState__ctor_mE851885512DB980E9DDCE8389DEFCC1DB7D3CBCF(L_3, NULL);
		__this->___moveState_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveState_8), (void*)L_3);
		// public CreatureDestroyState destroyState = new CreatureDestroyState();
		CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7* L_4 = (CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7*)il2cpp_codegen_object_new(CreatureDestroyState_t8354D5205FF0EA355747A70339A659B87C1124E7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CreatureDestroyState__ctor_mF03666B8A59840EAFAE75C9A67BCD1964A6E5818(L_4, NULL);
		__this->___destroyState_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___destroyState_9), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SlimeBaseState::EnterState(SlimeStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeBaseState_EnterState_m8326B5756037EDF009BB1A348B16C0E88D60A447 (SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* __this, SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CB260CA88D0E5787069D0700B9BC473FD680DFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40682890B660810D40D0C469ADF290F82DF673D8);
		s_Il2CppMethodInitialized = true;
	}
	SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log(string.Format("<color=#ff0000>{0}</color>", creature.currentState + "???"));
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_0 = ___creature0;
		NullCheck(L_0);
		SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* L_1 = L_0->___currentState_4;
		SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral3CB260CA88D0E5787069D0700B9BC473FD680DFC;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral3CB260CA88D0E5787069D0700B9BC473FD680DFC;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_0017:
	{
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_0, _stringLiteral40682890B660810D40D0C469ADF290F82DF673D8, NULL);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(G_B3_1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// }
		return;
	}
}
// System.Void SlimeBaseState::OnTriggerEnter(SlimeStateManager,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeBaseState_OnTriggerEnter_mE4B09A386B788AB7CEC1D8B1803BBCC5179141C2 (SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* __this, SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* ___creature0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mB26F8DBF011ECCDA105AA4C551AB7F52F9C47805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB07D3449BB2C3E5DEA192A50648AD901D78FC600);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (other.gameObject.CompareTag("PlayerAttack"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralB07D3449BB2C3E5DEA192A50648AD901D78FC600, NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		// float damage = other.gameObject.GetComponentInParent<PlayerData>().attack;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* L_5;
		L_5 = GameObject_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mB26F8DBF011ECCDA105AA4C551AB7F52F9C47805(L_4, GameObject_GetComponentInParent_TisPlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A_mB26F8DBF011ECCDA105AA4C551AB7F52F9C47805_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6;
		L_6 = PlayerData_get_attack_m6BF22244161186C361DA16F2CDAF311CFF1B21DE(L_5, NULL);
		V_0 = L_6;
		// creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).currentHP -= damage;
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_7 = ___creature0;
		NullCheck(L_7);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_8 = L_7->___creatureData_7;
		NullCheck(L_8);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_9;
		L_9 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_8, 0, NULL);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_10 = L_9;
		NullCheck(L_10);
		float L_11 = L_10->___currentHP_8;
		float L_12 = V_0;
		NullCheck(L_10);
		L_10->___currentHP_8 = ((float)il2cpp_codegen_subtract(L_11, L_12));
		// creature.SwitchState(creature.hurtState);
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_13 = ___creature0;
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_14 = ___creature0;
		NullCheck(L_14);
		SlimeHurtState_t3048EC999D84DFBB159DBA214C1B2A0B65B24DFF* L_15 = L_14->___hurtState_6;
		NullCheck(L_13);
		SlimeStateManager_SwitchState_m25294565C59DFCF6C13BB34138F0B69270CDB0DA(L_13, L_15, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void SlimeBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeBaseState__ctor_m0BFCE4214FE063B55102A49C4E865622E2B63B2F (SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void SlimeMoveState::EnterState(SlimeStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeMoveState_EnterState_mE1C032D36B2D73BA38A96F48D742B1F3011F0529 (SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1* __this, SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.EnterState(creature);
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_0 = ___creature0;
		SlimeBaseState_EnterState_m8326B5756037EDF009BB1A348B16C0E88D60A447(__this, L_0, NULL);
		// rb = creature.GetComponent<Rigidbody>();
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_1 = ___creature0;
		NullCheck(L_1);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_1, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_1), (void*)L_2);
		// playerTrans = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		__this->___playerTrans_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerTrans_0), (void*)L_4);
		// }
		return;
	}
}
// System.Void SlimeMoveState::UpdateState(SlimeStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeMoveState_UpdateState_m0DD5A54AC9C549693F227F600F2F31E08CCEC530 (SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1* __this, SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerTrans != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___playerTrans_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0092;
		}
	}
	{
		// rb.transform.LookAt(new Vector3(playerTrans.position.x, creature.transform.position.y, playerTrans.position.z));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rb_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___playerTrans_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_7 = ___creature0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___playerTrans_0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_6, L_10, L_13, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_3, L_14, NULL);
		// rb.transform.Translate(new Vector3(0, 0, 1* creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).moveSpeed * Time.deltaTime));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___rb_1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_17 = ___creature0;
		NullCheck(L_17);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_18 = L_17->___creatureData_7;
		NullCheck(L_18);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_19;
		L_19 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_18, 0, NULL);
		NullCheck(L_19);
		float L_20 = L_19->___moveSpeed_1;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((1.0f), L_20)), L_21)), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_16, L_22, NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void SlimeMoveState::OnTriggerEnter(SlimeStateManager,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeMoveState_OnTriggerEnter_m5907E6A5F6988ED5600837C96E197267E67A5E48 (SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1* __this, SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* ___creature0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other1, const RuntimeMethod* method) 
{
	{
		// base.OnTriggerEnter(creature, other);
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_0 = ___creature0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___other1;
		SlimeBaseState_OnTriggerEnter_mE4B09A386B788AB7CEC1D8B1803BBCC5179141C2(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SlimeMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeMoveState__ctor_m17ED11C6E8BED65B61C26ACA76D3B4EB1624855C (SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1* __this, const RuntimeMethod* method) 
{
	{
		SlimeBaseState__ctor_m0BFCE4214FE063B55102A49C4E865622E2B63B2F(__this, NULL);
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
// System.Void SlimeHurtState::EnterState(SlimeStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeHurtState_EnterState_mEE3AB37B174A21BB20842DF7E31345896EE296A3 (SlimeHurtState_t3048EC999D84DFBB159DBA214C1B2A0B65B24DFF* __this, SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyDrop_tD042650E8C3C608F95DC2B6F999167D165A87B3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).currentHP <= 0)
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_0 = ___creature0;
		NullCheck(L_0);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_1 = L_0->___creatureData_7;
		NullCheck(L_1);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_2;
		L_2 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_1, 0, NULL);
		NullCheck(L_2);
		float L_3 = L_2->___currentHP_8;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		// GameObject.Destroy(creature.gameObject);
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_4 = ___creature0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// EnemyDrop enemyDrop = new EnemyDrop();
		EnemyDrop_tD042650E8C3C608F95DC2B6F999167D165A87B3C* L_6 = (EnemyDrop_tD042650E8C3C608F95DC2B6F999167D165A87B3C*)il2cpp_codegen_object_new(EnemyDrop_tD042650E8C3C608F95DC2B6F999167D165A87B3C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EnemyDrop__ctor_m1F4C5B7E6D7CCEE2AA113C8C4262048A5346E5F8(L_6, NULL);
		// enemyDrop.DropItem(creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime), creature.transform);
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_7 = ___creature0;
		NullCheck(L_7);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_8 = L_7->___creatureData_7;
		NullCheck(L_8);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_9;
		L_9 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_8, 0, NULL);
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_10 = ___creature0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_6);
		EnemyDrop_DropItem_m34CA5F3E3E3D45A4E94542E4B500116C5B3470AB(L_6, L_9, L_11, NULL);
	}

IL_003f:
	{
		// base.EnterState(creature);
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_12 = ___creature0;
		SlimeBaseState_EnterState_m8326B5756037EDF009BB1A348B16C0E88D60A447(__this, L_12, NULL);
		// creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).currentHurtCD = creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).hurtCD;
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_13 = ___creature0;
		NullCheck(L_13);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_14 = L_13->___creatureData_7;
		NullCheck(L_14);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_15;
		L_15 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_14, 0, NULL);
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_16 = ___creature0;
		NullCheck(L_16);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_17 = L_16->___creatureData_7;
		NullCheck(L_17);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_18;
		L_18 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_17, 0, NULL);
		NullCheck(L_18);
		float L_19 = L_18->___hurtCD_5;
		NullCheck(L_15);
		L_15->___currentHurtCD_6 = L_19;
		// }
		return;
	}
}
// System.Void SlimeHurtState::UpdateState(SlimeStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeHurtState_UpdateState_mFF019F58E40775E99F2B96604179EF6C6AC3A321 (SlimeHurtState_t3048EC999D84DFBB159DBA214C1B2A0B65B24DFF* __this, SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* ___creature0, const RuntimeMethod* method) 
{
	{
		// if (creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).currentHurtCD > 0)
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_0 = ___creature0;
		NullCheck(L_0);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_1 = L_0->___creatureData_7;
		NullCheck(L_1);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_2;
		L_2 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_1, 0, NULL);
		NullCheck(L_2);
		float L_3 = L_2->___currentHurtCD_6;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		// creature.creatureData.GetCreature(CreatureDataBaseSO.Name.slime).currentHurtCD -= Time.deltaTime;
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_4 = ___creature0;
		NullCheck(L_4);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_5 = L_4->___creatureData_7;
		NullCheck(L_5);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_6;
		L_6 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_5, 0, NULL);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_7 = L_6;
		NullCheck(L_7);
		float L_8 = L_7->___currentHurtCD_6;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_7);
		L_7->___currentHurtCD_6 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		return;
	}

IL_0036:
	{
		// creature.SwitchState(creature.moveState);
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_10 = ___creature0;
		SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* L_11 = ___creature0;
		NullCheck(L_11);
		SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1* L_12 = L_11->___moveState_5;
		NullCheck(L_10);
		SlimeStateManager_SwitchState_m25294565C59DFCF6C13BB34138F0B69270CDB0DA(L_10, L_12, NULL);
		// }
		return;
	}
}
// System.Void SlimeHurtState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeHurtState__ctor_mA7DD4FED81DC4CCC8C043578BFC7A03CBF062D2B (SlimeHurtState_t3048EC999D84DFBB159DBA214C1B2A0B65B24DFF* __this, const RuntimeMethod* method) 
{
	{
		SlimeBaseState__ctor_m0BFCE4214FE063B55102A49C4E865622E2B63B2F(__this, NULL);
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
// System.Void SlimeStateManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeStateManager_Start_mF56277AE49E24C74BCE59D64EF32A9B284FFF38C (SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* __this, const RuntimeMethod* method) 
{
	{
		// currentState = moveState;
		SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1* L_0 = __this->___moveState_5;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// currentState.EnterState(this);
		SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* L_1 = __this->___currentState_4;
		NullCheck(L_1);
		VirtualActionInvoker1< SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* >::Invoke(4 /* System.Void SlimeBaseState::EnterState(SlimeStateManager) */, L_1, __this);
		// creatureData.GetCreature(CreatureDataBaseSO.Name.slime).currentHP = creatureData.GetCreature(CreatureDataBaseSO.Name.slime).maxHP;
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_2 = __this->___creatureData_7;
		NullCheck(L_2);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_3;
		L_3 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_2, 0, NULL);
		CreatureDataBaseSO_tF22F6127FA3D8E267A560CA12C212317264D2B09* L_4 = __this->___creatureData_7;
		NullCheck(L_4);
		Creature_t42147A47AEE71D058B155255EE888E7882D89BE2* L_5;
		L_5 = CreatureDataBaseSO_GetCreature_m3813D592F00732D960925A0B93605179A960EB6B(L_4, 0, NULL);
		NullCheck(L_5);
		float L_6 = L_5->___maxHP_7;
		NullCheck(L_3);
		L_3->___currentHP_8 = L_6;
		// }
		return;
	}
}
// System.Void SlimeStateManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeStateManager_FixedUpdate_m32C2FEB7E88B966DAE066EE85218E0DA48C37806 (SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* __this, const RuntimeMethod* method) 
{
	{
		// if(currentState == null)
		SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* L_0 = __this->___currentState_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// currentState = moveState;
		SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1* L_1 = __this->___moveState_5;
		__this->___currentState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_1);
		return;
	}

IL_0015:
	{
		// currentState.UpdateState(this);
		SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* L_2 = __this->___currentState_4;
		NullCheck(L_2);
		VirtualActionInvoker1< SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* >::Invoke(5 /* System.Void SlimeBaseState::UpdateState(SlimeStateManager) */, L_2, __this);
		// }
		return;
	}
}
// System.Void SlimeStateManager::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeStateManager_OnTriggerEnter_m0CA4B2E0E04D335CF239ABCDC6113BE38FCB572D (SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// if (currentState == null)
		SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* L_0 = __this->___currentState_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// currentState = moveState;
		SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1* L_1 = __this->___moveState_5;
		__this->___currentState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_1);
		return;
	}

IL_0015:
	{
		// currentState.OnTriggerEnter(this, other);
		SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* L_2 = __this->___currentState_4;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_2);
		VirtualActionInvoker2< SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* >::Invoke(6 /* System.Void SlimeBaseState::OnTriggerEnter(SlimeStateManager,UnityEngine.Collider) */, L_2, __this, L_3);
		// }
		return;
	}
}
// System.Void SlimeStateManager::SwitchState(SlimeBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeStateManager_SwitchState_m25294565C59DFCF6C13BB34138F0B69270CDB0DA (SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* __this, SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* ___creatureBaseState0, const RuntimeMethod* method) 
{
	{
		// currentState = creatureBaseState;
		SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* L_0 = ___creatureBaseState0;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// creatureBaseState.EnterState(this);
		SlimeBaseState_tF438AA919A60939FFA8D70AEF628DFD3A2D7F66A* L_1 = ___creatureBaseState0;
		NullCheck(L_1);
		VirtualActionInvoker1< SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* >::Invoke(4 /* System.Void SlimeBaseState::EnterState(SlimeStateManager) */, L_1, __this);
		// }
		return;
	}
}
// System.Void SlimeStateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlimeStateManager__ctor_m3F692F2AEFC0C013B82A3F016A6C43BC96654A20 (SlimeStateManager_tDD7BDDF33FEBC64A94991558A157F93BD5D6D498* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlimeHurtState_t3048EC999D84DFBB159DBA214C1B2A0B65B24DFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SlimeMoveState moveState = new SlimeMoveState();
		SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1* L_0 = (SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1*)il2cpp_codegen_object_new(SlimeMoveState_tC6A98D7BAE7FFBD992B6757F42C75CDDF5A0D3F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SlimeMoveState__ctor_m17ED11C6E8BED65B61C26ACA76D3B4EB1624855C(L_0, NULL);
		__this->___moveState_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveState_5), (void*)L_0);
		// public SlimeHurtState hurtState = new SlimeHurtState();
		SlimeHurtState_t3048EC999D84DFBB159DBA214C1B2A0B65B24DFF* L_1 = (SlimeHurtState_t3048EC999D84DFBB159DBA214C1B2A0B65B24DFF*)il2cpp_codegen_object_new(SlimeHurtState_t3048EC999D84DFBB159DBA214C1B2A0B65B24DFF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SlimeHurtState__ctor_mA7DD4FED81DC4CCC8C043578BFC7A03CBF062D2B(L_1, NULL);
		__this->___hurtState_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hurtState_6), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CowBaseState::EnterState(CowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowBaseState_EnterState_mCDFEA4201440E54C0BF39531221B57A5E6F7D32B (CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23AE89803DFC0F9BE0030BB1A3578070B6BF437D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40682890B660810D40D0C469ADF290F82DF673D8);
		s_Il2CppMethodInitialized = true;
	}
	CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log(string.Format("<color=#f5f500>{0}</color>", creature.currentState + "???"));
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_0 = ___creature0;
		NullCheck(L_0);
		CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* L_1 = L_0->___currentState_4;
		CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral23AE89803DFC0F9BE0030BB1A3578070B6BF437D;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral23AE89803DFC0F9BE0030BB1A3578070B6BF437D;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_0017:
	{
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_0, _stringLiteral40682890B660810D40D0C469ADF290F82DF673D8, NULL);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(G_B3_1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// rb = creature.GetComponent<Rigidbody>();
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_6 = ___creature0;
		NullCheck(L_6);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7;
		L_7 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_6, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_0), (void*)L_7);
		// }
		return;
	}
}
// System.Void CowBaseState::UpdateState(CowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowBaseState_UpdateState_m6D60B3448EDCE3C22DA7D3F8635A1428B8A82C8C (CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, const RuntimeMethod* method) 
{
	{
		// if (!Input.anyKey && creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentAttackCD <= 0)
		bool L_0;
		L_0 = Input_get_anyKey_m6FF00BB4F01FA996E2FB3F3727EBC414C8EB2CEB(NULL);
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_1 = ___creature0;
		NullCheck(L_1);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_2 = L_1->___playerData_9;
		NullCheck(L_2);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3;
		L_3 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_2, 0, NULL);
		NullCheck(L_3);
		float L_4 = L_3->___currentAttackCD_5;
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		// creature.SwitchState(creature.attackState);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_5 = ___creature0;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_6 = ___creature0;
		NullCheck(L_6);
		CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801* L_7 = L_6->___attackState_7;
		NullCheck(L_5);
		CowStateManager_SwitchState_m9B4E3845718AB97B6555263E87BAACF3940BAC97(L_5, L_7, NULL);
		goto IL_0039;
	}

IL_002d:
	{
		// creature.SwitchState(creature.moveState);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_8 = ___creature0;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_9 = ___creature0;
		NullCheck(L_9);
		CowMoveState_t2EBC12856C2B207ED73084D011174D04E3B5039A* L_10 = L_9->___moveState_6;
		NullCheck(L_8);
		CowStateManager_SwitchState_m9B4E3845718AB97B6555263E87BAACF3940BAC97(L_8, L_10, NULL);
	}

IL_0039:
	{
		// if (creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentAttackCD > 0)
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_11 = ___creature0;
		NullCheck(L_11);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_12 = L_11->___playerData_9;
		NullCheck(L_12);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_13;
		L_13 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_12, 0, NULL);
		NullCheck(L_13);
		float L_14 = L_13->___currentAttackCD_5;
		if ((!(((float)L_14) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		// creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentAttackCD -= Time.deltaTime;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_15 = ___creature0;
		NullCheck(L_15);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_16 = L_15->___playerData_9;
		NullCheck(L_16);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_17;
		L_17 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_16, 0, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_18 = L_17;
		NullCheck(L_18);
		float L_19 = L_18->___currentAttackCD_5;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_18);
		L_18->___currentAttackCD_5 = ((float)il2cpp_codegen_subtract(L_19, L_20));
	}

IL_006e:
	{
		// if (creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentHurtCD > 0)
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_21 = ___creature0;
		NullCheck(L_21);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_22 = L_21->___playerData_9;
		NullCheck(L_22);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_23;
		L_23 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_22, 0, NULL);
		NullCheck(L_23);
		float L_24 = L_23->___currentHurtCD_7;
		if ((!(((float)L_24) > ((float)(0.0f)))))
		{
			goto IL_00a3;
		}
	}
	{
		// creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentHurtCD -= Time.deltaTime;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_25 = ___creature0;
		NullCheck(L_25);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_26 = L_25->___playerData_9;
		NullCheck(L_26);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_27;
		L_27 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_26, 0, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_28 = L_27;
		NullCheck(L_28);
		float L_29 = L_28->___currentHurtCD_7;
		float L_30;
		L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_28);
		L_28->___currentHurtCD_7 = ((float)il2cpp_codegen_subtract(L_29, L_30));
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void CowBaseState::OnCollisionEnter(CowStateManager,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowBaseState_OnCollisionEnter_mE1422C74942657F46AEE396F040D8259F3C9B326 (CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11125E7BF7759B441922E38429970CDF802FFB84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF3EC95BE19EE4CDACEB4F46CB80718584718A8D);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (collision.gameObject.tag == ("EnemyAttack") && creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentHurtCD <= 0)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral11125E7BF7759B441922E38429970CDF802FFB84, NULL);
		if (!L_3)
		{
			goto IL_00bf;
		}
	}
	{
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_4 = ___creature0;
		NullCheck(L_4);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_5 = L_4->___playerData_9;
		NullCheck(L_5);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6;
		L_6 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_5, 0, NULL);
		NullCheck(L_6);
		float L_7 = L_6->___currentHurtCD_7;
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_00bf;
		}
	}
	{
		// Debug.Log("EnemyAttack!!!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCF3EC95BE19EE4CDACEB4F46CB80718584718A8D, NULL);
		// Vector3 forcePos = new Vector3(creature.transform.position.x - collision.transform.position.x, 0, creature.transform.position.z - collision.transform.position.z);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_8 = ___creature0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_12 = ___collision1;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___x_2;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_16 = ___creature0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___z_4;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_20 = ___collision1;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_subtract(L_11, L_15)), (0.0f), ((float)il2cpp_codegen_subtract(L_19, L_23)), NULL);
		// rb.AddForce(forcePos.normalized * 50 * 100);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24 = __this->___rb_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, (50.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, (100.0f), NULL);
		NullCheck(L_24);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_24, L_27, NULL);
		// creature.SwitchState(creature.hurtState);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_28 = ___creature0;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_29 = ___creature0;
		NullCheck(L_29);
		CowHurtState_t4B0274636C9155C740C6FEC0DB03492AF34E9C98* L_30 = L_29->___hurtState_8;
		NullCheck(L_28);
		CowStateManager_SwitchState_m9B4E3845718AB97B6555263E87BAACF3940BAC97(L_28, L_30, NULL);
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void CowBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowBaseState__ctor_m11F1D0668640A48C3BF1F97E343F3CAF632249AF (CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void CowIdleState::EnterState(CowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowIdleState_EnterState_mC51E454DE2E365179E07E971F139BB696555A0B8 (CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.EnterState(creature);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_0 = ___creature0;
		CowBaseState_EnterState_mCDFEA4201440E54C0BF39531221B57A5E6F7D32B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void CowIdleState::UpdateState(CowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowIdleState_UpdateState_m61E4E2A7692A9A85C35EA1C075A70BCA8730184E (CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.UpdateState(creature);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_0 = ___creature0;
		CowBaseState_UpdateState_m6D60B3448EDCE3C22DA7D3F8635A1428B8A82C8C(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void CowIdleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowIdleState__ctor_m6C84C09C3B3AAE9AB9FC762D02C0BCB7B02C20B6 (CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B* __this, const RuntimeMethod* method) 
{
	{
		CowBaseState__ctor_m11F1D0668640A48C3BF1F97E343F3CAF632249AF(__this, NULL);
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
// System.Void CowAttackState::EnterState(CowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowAttackState_EnterState_m8EBB30AF414261A6E992D62EC772CACFE121A975 (CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.EnterState(creature);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_0 = ___creature0;
		CowBaseState_EnterState_mCDFEA4201440E54C0BF39531221B57A5E6F7D32B(__this, L_0, NULL);
		// rb.AddForce(creature.transform.forward* 100);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = ((CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762*)__this)->___rb_0;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_2 = ___creature0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, (100.0f), NULL);
		NullCheck(L_1);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_1, L_5, NULL);
		// creature.StartCoroutine(TimeToIdle(creature));
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_6 = ___creature0;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_7 = ___creature0;
		RuntimeObject* L_8;
		L_8 = CowAttackState_TimeToIdle_mE6CCBE48C1D0F3BF41629B304418B650D995B316(__this, L_7, NULL);
		NullCheck(L_6);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void CowAttackState::UpdateState(CowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowAttackState_UpdateState_m6ADAAC72391DABC19706EC0A348ACF4C33D56601 (CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.UpdateState(creature);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_0 = ___creature0;
		CowBaseState_UpdateState_m6D60B3448EDCE3C22DA7D3F8635A1428B8A82C8C(__this, L_0, NULL);
		// if (creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentAttackCD <= 0)
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_1 = ___creature0;
		NullCheck(L_1);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_2 = L_1->___playerData_9;
		NullCheck(L_2);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3;
		L_3 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_2, 0, NULL);
		NullCheck(L_3);
		float L_4 = L_3->___currentAttackCD_5;
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentAttackCD = creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).attackCD;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_5 = ___creature0;
		NullCheck(L_5);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_6 = L_5->___playerData_9;
		NullCheck(L_6);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_7;
		L_7 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_6, 0, NULL);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_8 = ___creature0;
		NullCheck(L_8);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_9 = L_8->___playerData_9;
		NullCheck(L_9);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_10;
		L_10 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_9, 0, NULL);
		NullCheck(L_10);
		float L_11 = L_10->___attackCD_4;
		NullCheck(L_7);
		L_7->___currentAttackCD_5 = L_11;
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator CowAttackState::TimeToIdle(CowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CowAttackState_TimeToIdle_mE6CCBE48C1D0F3BF41629B304418B650D995B316 (CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9* L_0 = (U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9*)il2cpp_codegen_object_new(U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTimeToIdleU3Ed__2__ctor_mB606146C642E562708AEE4E6378BF99A596AA73A(L_0, 0, NULL);
		U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9* L_1 = L_0;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_2 = ___creature0;
		NullCheck(L_1);
		L_1->___creature_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___creature_2), (void*)L_2);
		return L_1;
	}
}
// System.Void CowAttackState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowAttackState__ctor_mDA945164AB84598B60E535DCA5194307F05E732F (CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801* __this, const RuntimeMethod* method) 
{
	{
		CowBaseState__ctor_m11F1D0668640A48C3BF1F97E343F3CAF632249AF(__this, NULL);
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
// System.Void CowAttackState/<TimeToIdle>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeToIdleU3Ed__2__ctor_mB606146C642E562708AEE4E6378BF99A596AA73A (U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CowAttackState/<TimeToIdle>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeToIdleU3Ed__2_System_IDisposable_Dispose_m5C6A84B11A815B58EF94F80A00C0CA30FAEA4E40 (U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CowAttackState/<TimeToIdle>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimeToIdleU3Ed__2_MoveNext_m714CB93A272732AF5D1C1B115C7DE6C097409188 (U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3707F913551A8841BBAA20ABA0BEBEB064B2FE1C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("TimeToIdle");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3707F913551A8841BBAA20ABA0BEBEB064B2FE1C, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// creature.SwitchState(creature.hurtState);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_4 = __this->___creature_2;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_5 = __this->___creature_2;
		NullCheck(L_5);
		CowHurtState_t4B0274636C9155C740C6FEC0DB03492AF34E9C98* L_6 = L_5->___hurtState_8;
		NullCheck(L_4);
		CowStateManager_SwitchState_m9B4E3845718AB97B6555263E87BAACF3940BAC97(L_4, L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object CowAttackState/<TimeToIdle>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimeToIdleU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1DEDDB40414BC42189455A23B3DCDAD7D261F665 (U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CowAttackState/<TimeToIdle>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimeToIdleU3Ed__2_System_Collections_IEnumerator_Reset_mE9ED1686DC33E9259F6B993627727BCF95293B65 (U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimeToIdleU3Ed__2_System_Collections_IEnumerator_Reset_mE9ED1686DC33E9259F6B993627727BCF95293B65_RuntimeMethod_var)));
	}
}
// System.Object CowAttackState/<TimeToIdle>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimeToIdleU3Ed__2_System_Collections_IEnumerator_get_Current_m7607F5EB793D8E8049BCC1AFA2B43C16DC8F111B (U3CTimeToIdleU3Ed__2_t6DE2D2B8C98569A96D8F0D8084AF282260E9E0F9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void CowMoveState::EnterState(CowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowMoveState_EnterState_m82D3994B352ED13676C5B68B34753546EE95B8D6 (CowMoveState_t2EBC12856C2B207ED73084D011174D04E3B5039A* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.EnterState(creature);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_0 = ___creature0;
		CowBaseState_EnterState_mCDFEA4201440E54C0BF39531221B57A5E6F7D32B(__this, L_0, NULL);
		// _joystick = creature.fixedJoystick;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_1 = ___creature0;
		NullCheck(L_1);
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_2 = L_1->___fixedJoystick_10;
		__this->____joystick_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____joystick_1), (void*)L_2);
		// }
		return;
	}
}
// System.Void CowMoveState::UpdateState(CowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowMoveState_UpdateState_m48B6BD4FEF16D000A38B4DFFFBF374E7EB94B643 (CowMoveState_t2EBC12856C2B207ED73084D011174D04E3B5039A* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.UpdateState(creature);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_0 = ___creature0;
		CowBaseState_UpdateState_m6D60B3448EDCE3C22DA7D3F8635A1428B8A82C8C(__this, L_0, NULL);
		// rb.velocity = new Vector3(creature.fixedJoystick.Horizontal * creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).moveSpeed, rb.velocity.y
		//     , creature.fixedJoystick.Vertical * creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).moveSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = ((CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762*)__this)->___rb_0;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_2 = ___creature0;
		NullCheck(L_2);
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_3 = L_2->___fixedJoystick_10;
		NullCheck(L_3);
		float L_4;
		L_4 = Joystick_get_Horizontal_m23B2FBFE52DFF5E60F0DDAF88FC954EE3AF0A92B(L_3, NULL);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_5 = ___creature0;
		NullCheck(L_5);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_6 = L_5->___playerData_9;
		NullCheck(L_6);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_7;
		L_7 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_6, 0, NULL);
		NullCheck(L_7);
		float L_8 = L_7->___moveSpeed_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = ((CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762*)__this)->___rb_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_9, NULL);
		float L_11 = L_10.___y_3;
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_12 = ___creature0;
		NullCheck(L_12);
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_13 = L_12->___fixedJoystick_10;
		NullCheck(L_13);
		float L_14;
		L_14 = Joystick_get_Vertical_mB224F6BDC3C0A3E8B6ADA20E7378970A6DDBD164(L_13, NULL);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_15 = ___creature0;
		NullCheck(L_15);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_16 = L_15->___playerData_9;
		NullCheck(L_16);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_17;
		L_17 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_16, 0, NULL);
		NullCheck(L_17);
		float L_18 = L_17->___moveSpeed_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), ((float)il2cpp_codegen_multiply(L_4, L_8)), L_11, ((float)il2cpp_codegen_multiply(L_14, L_18)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_1, L_19, NULL);
		// if (_joystick.Horizontal != 0 || _joystick.Vertical != 0)
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_20 = __this->____joystick_1;
		NullCheck(L_20);
		float L_21;
		L_21 = Joystick_get_Horizontal_m23B2FBFE52DFF5E60F0DDAF88FC954EE3AF0A92B(L_20, NULL);
		if ((!(((float)L_21) == ((float)(0.0f)))))
		{
			goto IL_0085;
		}
	}
	{
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_22 = __this->____joystick_1;
		NullCheck(L_22);
		float L_23;
		L_23 = Joystick_get_Vertical_mB224F6BDC3C0A3E8B6ADA20E7378970A6DDBD164(L_22, NULL);
		if ((((float)L_23) == ((float)(0.0f))))
		{
			goto IL_00a0;
		}
	}

IL_0085:
	{
		// creature.transform.rotation = Quaternion.LookRotation(rb.velocity);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_24 = ___creature0;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_26 = ((CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762*)__this)->___rb_0;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_26, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_27, NULL);
		NullCheck(L_25);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_25, L_28, NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void CowMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowMoveState__ctor_m8356ABA177AB7721966473CFD4147DF8267C5C42 (CowMoveState_t2EBC12856C2B207ED73084D011174D04E3B5039A* __this, const RuntimeMethod* method) 
{
	{
		CowBaseState__ctor_m11F1D0668640A48C3BF1F97E343F3CAF632249AF(__this, NULL);
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
// System.Void CowHurtState::EnterState(CowStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowHurtState_EnterState_m0872DE07500DA18308AF4671D84A59F1423FBC4F (CowHurtState_t4B0274636C9155C740C6FEC0DB03492AF34E9C98* __this, CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.EnterState(creature);
		CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* L_0 = ___creature0;
		CowBaseState_EnterState_mCDFEA4201440E54C0BF39531221B57A5E6F7D32B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void CowHurtState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowHurtState__ctor_m9F106572B18D8CA8E51AFC4DD59E0A3280889D08 (CowHurtState_t4B0274636C9155C740C6FEC0DB03492AF34E9C98* __this, const RuntimeMethod* method) 
{
	{
		CowBaseState__ctor_m11F1D0668640A48C3BF1F97E343F3CAF632249AF(__this, NULL);
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
// System.Void CowStateManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowStateManager_Start_m9C473C20B48D82812EC983F0ED06BB5AF4187ABF (CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* __this, const RuntimeMethod* method) 
{
	{
		// currentState = idleState;
		CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B* L_0 = __this->___idleState_5;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).currentAttackCD = playerData.GetPlayer(PlayerDataBaseSO.Name.player_Cow).attackCD;
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_1 = __this->___playerData_9;
		NullCheck(L_1);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_2;
		L_2 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_1, 0, NULL);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_3 = __this->___playerData_9;
		NullCheck(L_3);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4;
		L_4 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_3, 0, NULL);
		NullCheck(L_4);
		float L_5 = L_4->___attackCD_4;
		NullCheck(L_2);
		L_2->___currentAttackCD_5 = L_5;
		// currentState.EnterState(this);
		CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* L_6 = __this->___currentState_4;
		NullCheck(L_6);
		VirtualActionInvoker1< CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* >::Invoke(4 /* System.Void CowBaseState::EnterState(CowStateManager) */, L_6, __this);
		// fixedJoystickPos = fixedJoystick.transform.position;
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_7 = __this->___fixedJoystick_10;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		__this->___fixedJoystickPos_11 = L_9;
		// }
		return;
	}
}
// System.Void CowStateManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowStateManager_FixedUpdate_m0A54B0BBA478795DB8F0B99D12E00FD71A9252A8 (CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* __this, const RuntimeMethod* method) 
{
	{
		// if (currentState == null)
		CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* L_0 = __this->___currentState_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// currentState = idleState;
		CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B* L_1 = __this->___idleState_5;
		__this->___currentState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_1);
		return;
	}

IL_0015:
	{
		// currentState.UpdateState(this);
		CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* L_2 = __this->___currentState_4;
		NullCheck(L_2);
		VirtualActionInvoker1< CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* >::Invoke(5 /* System.Void CowBaseState::UpdateState(CowStateManager) */, L_2, __this);
		// }
		return;
	}
}
// System.Void CowStateManager::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowStateManager_OnCollisionEnter_mD64039E6EAEE50168C1014F3D699405E0F1DA7AE (CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	{
		// if (currentState == null)
		CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* L_0 = __this->___currentState_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// currentState = idleState;
		CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B* L_1 = __this->___idleState_5;
		__this->___currentState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_1);
		return;
	}

IL_0015:
	{
		// currentState.OnCollisionEnter(this, collision);
		CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* L_2 = __this->___currentState_4;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___collision0;
		NullCheck(L_2);
		VirtualActionInvoker2< CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF*, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* >::Invoke(6 /* System.Void CowBaseState::OnCollisionEnter(CowStateManager,UnityEngine.Collision) */, L_2, __this, L_3);
		// }
		return;
	}
}
// System.Void CowStateManager::SwitchState(CowBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowStateManager_SwitchState_m9B4E3845718AB97B6555263E87BAACF3940BAC97 (CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* __this, CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* ___creatureBaseState0, const RuntimeMethod* method) 
{
	{
		// currentState = creatureBaseState;
		CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* L_0 = ___creatureBaseState0;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// creatureBaseState.EnterState(this);
		CowBaseState_tC0E763EDD5B9EC2F5A9D90CA5621181B43454762* L_1 = ___creatureBaseState0;
		NullCheck(L_1);
		VirtualActionInvoker1< CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* >::Invoke(4 /* System.Void CowBaseState::EnterState(CowStateManager) */, L_1, __this);
		// }
		return;
	}
}
// System.Void CowStateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CowStateManager__ctor_m69A7D0EE5217E877FE75F68D603AB3371C0D7732 (CowStateManager_t08FA8A6400DB196349674CC02BB94B17C0E24FFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CowHurtState_t4B0274636C9155C740C6FEC0DB03492AF34E9C98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CowMoveState_t2EBC12856C2B207ED73084D011174D04E3B5039A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CowIdleState idleState = new CowIdleState();
		CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B* L_0 = (CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B*)il2cpp_codegen_object_new(CowIdleState_t3CF1A96A2A62B7E439F1681FFC99F67142CE999B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CowIdleState__ctor_m6C84C09C3B3AAE9AB9FC762D02C0BCB7B02C20B6(L_0, NULL);
		__this->___idleState_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___idleState_5), (void*)L_0);
		// public CowMoveState moveState = new CowMoveState();
		CowMoveState_t2EBC12856C2B207ED73084D011174D04E3B5039A* L_1 = (CowMoveState_t2EBC12856C2B207ED73084D011174D04E3B5039A*)il2cpp_codegen_object_new(CowMoveState_t2EBC12856C2B207ED73084D011174D04E3B5039A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CowMoveState__ctor_m8356ABA177AB7721966473CFD4147DF8267C5C42(L_1, NULL);
		__this->___moveState_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveState_6), (void*)L_1);
		// public CowAttackState attackState = new CowAttackState();
		CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801* L_2 = (CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801*)il2cpp_codegen_object_new(CowAttackState_t3AE6406100EECDF6C553461AD6D5E75690012801_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CowAttackState__ctor_mDA945164AB84598B60E535DCA5194307F05E732F(L_2, NULL);
		__this->___attackState_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackState_7), (void*)L_2);
		// public CowHurtState hurtState = new CowHurtState();
		CowHurtState_t4B0274636C9155C740C6FEC0DB03492AF34E9C98* L_3 = (CowHurtState_t4B0274636C9155C740C6FEC0DB03492AF34E9C98*)il2cpp_codegen_object_new(CowHurtState_t4B0274636C9155C740C6FEC0DB03492AF34E9C98_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CowHurtState__ctor_m9F106572B18D8CA8E51AFC4DD59E0A3280889D08(L_3, NULL);
		__this->___hurtState_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hurtState_8), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OctopusAttack::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusAttack_Attack_m9A83B4119C54EB23B5F492657EF51F0653BF0BE1 (OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0A5CE818AD8FCA268DB009E6FDE5DAD56E43734);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("PlayerAttack!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF0A5CE818AD8FCA268DB009E6FDE5DAD56E43734, NULL);
		// attackObject.GetComponent<CapsuleCollider>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___attackObject_4;
		NullCheck(L_0);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_1;
		L_1 = GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7(L_0, GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var);
		NullCheck(L_1);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_1, (bool)1, NULL);
		// attackObject.GetComponent<MeshRenderer>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___attackObject_4;
		NullCheck(L_2);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3;
		L_3 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_2, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)1, NULL);
		// StartCoroutine(Enabled());
		RuntimeObject* L_4;
		L_4 = OctopusAttack_Enabled_m5FEA955FA61D8AC19B3F20010CA086459FAFEBE8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator OctopusAttack::Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OctopusAttack_Enabled_m5FEA955FA61D8AC19B3F20010CA086459FAFEBE8 (OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97* L_0 = (U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97*)il2cpp_codegen_object_new(U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEnabledU3Ed__2__ctor_m5F056ACF3E834F623B3E166FD842F97569F350DC(L_0, 0, NULL);
		U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void OctopusAttack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusAttack__ctor_mBB8F5FD51D08EC7AA57E93F17BE8AA61523E33BD (OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OctopusAttack/<Enabled>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnabledU3Ed__2__ctor_m5F056ACF3E834F623B3E166FD842F97569F350DC (U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void OctopusAttack/<Enabled>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnabledU3Ed__2_System_IDisposable_Dispose_m785D64C768B318A17A30D8135F64DCDB1A96476E (U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean OctopusAttack/<Enabled>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnabledU3Ed__2_MoveNext_mB4A560A2F98B216D927327EAC89BE37A9387345D (U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4603791C9DB4AF84133FC838B3DD57A3D1178642);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.25f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.25f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("PlayerDontAttack!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4603791C9DB4AF84133FC838B3DD57A3D1178642, NULL);
		// attackObject.GetComponent<MeshRenderer>().enabled = false;
		OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___attackObject_4;
		NullCheck(L_6);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7;
		L_7 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_6, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_7);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)0, NULL);
		// attackObject.GetComponent<CapsuleCollider>().enabled = false;
		OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___attackObject_4;
		NullCheck(L_9);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_10;
		L_10 = GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7(L_9, GameObject_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m7C70BBFE6656C524C87A4A81898C874BA4F035C7_RuntimeMethod_var);
		NullCheck(L_10);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_10, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object OctopusAttack/<Enabled>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnabledU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6E08CC6A439AB09C011D6D8F076452A767F30FEA (U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void OctopusAttack/<Enabled>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnabledU3Ed__2_System_Collections_IEnumerator_Reset_mFDF8855E79075E9DE6B8C52FC35CA2BA491576DF (U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnabledU3Ed__2_System_Collections_IEnumerator_Reset_mFDF8855E79075E9DE6B8C52FC35CA2BA491576DF_RuntimeMethod_var)));
	}
}
// System.Object OctopusAttack/<Enabled>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnabledU3Ed__2_System_Collections_IEnumerator_get_Current_m412114C60DDCC243DBA0D9F5948C936C063DCBC6 (U3CEnabledU3Ed__2_tBDE479B9F932A3A3AA7FBD3DD953EE17C7A07A97* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void OctopusBaseState::EnterState(OctopusStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusBaseState_EnterState_m91BC60FB32481B747FC8C1305796A0B88088A936 (OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40682890B660810D40D0C469ADF290F82DF673D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95DAF4E6A98F3195567255E34A6CD817EA8ADA3A);
		s_Il2CppMethodInitialized = true;
	}
	OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log(string.Format("<color=#f5f5dc>{0}</color>", creature.currentState + "???"));
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_0 = ___creature0;
		NullCheck(L_0);
		OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* L_1 = L_0->___currentState_4;
		OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteral95DAF4E6A98F3195567255E34A6CD817EA8ADA3A;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteral95DAF4E6A98F3195567255E34A6CD817EA8ADA3A;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_0017:
	{
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_0, _stringLiteral40682890B660810D40D0C469ADF290F82DF673D8, NULL);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(G_B3_1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// rb = creature.GetComponent<Rigidbody>();
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_6 = ___creature0;
		NullCheck(L_6);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7;
		L_7 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_6, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_0), (void*)L_7);
		// }
		return;
	}
}
// System.Void OctopusBaseState::UpdateState(OctopusStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusBaseState_UpdateState_m7EB708E8E45FF33829A591CDA3199851390B6130 (OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, const RuntimeMethod* method) 
{
	{
		// if (!Input.anyKey && creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).currentAttackCD <= 0)
		bool L_0;
		L_0 = Input_get_anyKey_m6FF00BB4F01FA996E2FB3F3727EBC414C8EB2CEB(NULL);
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_1 = ___creature0;
		NullCheck(L_1);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_2 = L_1->___playerData_10;
		NullCheck(L_2);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3;
		L_3 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_2, 1, NULL);
		NullCheck(L_3);
		float L_4 = L_3->___currentAttackCD_5;
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		// creature.SwitchState(creature.attackState);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_5 = ___creature0;
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_6 = ___creature0;
		NullCheck(L_6);
		OctopusAttackState_t42A02556AA17600444DB5F51A0B07559B302BEC4* L_7 = L_6->___attackState_5;
		NullCheck(L_5);
		OctopusStateManager_SwitchState_mCEA63FA9BD601DD3A4D459C1CAACE0E495EB006C(L_5, L_7, NULL);
		goto IL_0039;
	}

IL_002d:
	{
		// creature.SwitchState(creature.moveState);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_8 = ___creature0;
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_9 = ___creature0;
		NullCheck(L_9);
		OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581* L_10 = L_9->___moveState_8;
		NullCheck(L_8);
		OctopusStateManager_SwitchState_mCEA63FA9BD601DD3A4D459C1CAACE0E495EB006C(L_8, L_10, NULL);
	}

IL_0039:
	{
		// if (creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).currentAttackCD > 0)
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_11 = ___creature0;
		NullCheck(L_11);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_12 = L_11->___playerData_10;
		NullCheck(L_12);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_13;
		L_13 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_12, 1, NULL);
		NullCheck(L_13);
		float L_14 = L_13->___currentAttackCD_5;
		if ((!(((float)L_14) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		// creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).currentAttackCD -= Time.deltaTime;
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_15 = ___creature0;
		NullCheck(L_15);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_16 = L_15->___playerData_10;
		NullCheck(L_16);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_17;
		L_17 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_16, 1, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_18 = L_17;
		NullCheck(L_18);
		float L_19 = L_18->___currentAttackCD_5;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_18);
		L_18->___currentAttackCD_5 = ((float)il2cpp_codegen_subtract(L_19, L_20));
	}

IL_006e:
	{
		// if (creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).currentHurtCD > 0)
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_21 = ___creature0;
		NullCheck(L_21);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_22 = L_21->___playerData_10;
		NullCheck(L_22);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_23;
		L_23 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_22, 1, NULL);
		NullCheck(L_23);
		float L_24 = L_23->___currentHurtCD_7;
		if ((!(((float)L_24) > ((float)(0.0f)))))
		{
			goto IL_00a3;
		}
	}
	{
		// creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).currentHurtCD -= Time.deltaTime;
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_25 = ___creature0;
		NullCheck(L_25);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_26 = L_25->___playerData_10;
		NullCheck(L_26);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_27;
		L_27 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_26, 1, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_28 = L_27;
		NullCheck(L_28);
		float L_29 = L_28->___currentHurtCD_7;
		float L_30;
		L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_28);
		L_28->___currentHurtCD_7 = ((float)il2cpp_codegen_subtract(L_29, L_30));
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void OctopusBaseState::OnCollisionEnter(OctopusStateManager,UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusBaseState_OnCollisionEnter_m34612750BF05A04BA124AC137F71361D3A6FAF5C (OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11125E7BF7759B441922E38429970CDF802FFB84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF3EC95BE19EE4CDACEB4F46CB80718584718A8D);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (collision.gameObject.tag == ("EnemyAttack") && creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).currentHurtCD <= 0)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral11125E7BF7759B441922E38429970CDF802FFB84, NULL);
		if (!L_3)
		{
			goto IL_00bf;
		}
	}
	{
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_4 = ___creature0;
		NullCheck(L_4);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_5 = L_4->___playerData_10;
		NullCheck(L_5);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6;
		L_6 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_5, 1, NULL);
		NullCheck(L_6);
		float L_7 = L_6->___currentHurtCD_7;
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_00bf;
		}
	}
	{
		// Debug.Log("EnemyAttack!!!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCF3EC95BE19EE4CDACEB4F46CB80718584718A8D, NULL);
		// Vector3 forcePos = new Vector3(creature.transform.position.x - collision.transform.position.x, 0, creature.transform.position.z - collision.transform.position.z);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_8 = ___creature0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_12 = ___collision1;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___x_2;
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_16 = ___creature0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___z_4;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_20 = ___collision1;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_subtract(L_11, L_15)), (0.0f), ((float)il2cpp_codegen_subtract(L_19, L_23)), NULL);
		// rb.AddForce(forcePos.normalized * 50 * 100);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24 = __this->___rb_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, (50.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, (100.0f), NULL);
		NullCheck(L_24);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_24, L_27, NULL);
		// creature.SwitchState(creature.hurtState);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_28 = ___creature0;
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_29 = ___creature0;
		NullCheck(L_29);
		OctopusHurtState_t6BEDF7BE26F49C6C0B9F250BB98A00EB781BA25D* L_30 = L_29->___hurtState_7;
		NullCheck(L_28);
		OctopusStateManager_SwitchState_mCEA63FA9BD601DD3A4D459C1CAACE0E495EB006C(L_28, L_30, NULL);
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void OctopusBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusBaseState__ctor_mB92641B8DE3AA5CFAB061A49B4F94BCD4747F9F7 (OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void OctopusIdleState::EnterState(OctopusStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusIdleState_EnterState_m4DBEC145BCC5B3C1D332BB1EC426AAB52FFDBDA8 (OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.EnterState(creature);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_0 = ___creature0;
		OctopusBaseState_EnterState_m91BC60FB32481B747FC8C1305796A0B88088A936(__this, L_0, NULL);
		// creature.SwitchState(creature.moveState);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_1 = ___creature0;
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_2 = ___creature0;
		NullCheck(L_2);
		OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581* L_3 = L_2->___moveState_8;
		NullCheck(L_1);
		OctopusStateManager_SwitchState_mCEA63FA9BD601DD3A4D459C1CAACE0E495EB006C(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void OctopusIdleState::UpdateState(OctopusStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusIdleState_UpdateState_mBFD111BB132D0DE9FC526295173B34FCD2135111 (OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.UpdateState(creature);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_0 = ___creature0;
		OctopusBaseState_UpdateState_m7EB708E8E45FF33829A591CDA3199851390B6130(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void OctopusIdleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusIdleState__ctor_mCECBDF20FE90E149A1051303E6F919EDFCBC2830 (OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD* __this, const RuntimeMethod* method) 
{
	{
		OctopusBaseState__ctor_mB92641B8DE3AA5CFAB061A49B4F94BCD4747F9F7(__this, NULL);
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
// System.Void OctopusMoveState::EnterState(OctopusStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusMoveState_EnterState_mCFD16EC9B1CEAC134C91A610F60FAF6183EEB12A (OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.EnterState(creature);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_0 = ___creature0;
		OctopusBaseState_EnterState_m91BC60FB32481B747FC8C1305796A0B88088A936(__this, L_0, NULL);
		// _joystick = creature.fixedJoystick;
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_1 = ___creature0;
		NullCheck(L_1);
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_2 = L_1->___fixedJoystick_11;
		__this->____joystick_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____joystick_1), (void*)L_2);
		// rb = creature.gameObject.GetComponent<Rigidbody>();
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_3 = ___creature0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5;
		L_5 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_4, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		((OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728*)__this)->___rb_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728*)__this)->___rb_0), (void*)L_5);
		// }
		return;
	}
}
// System.Void OctopusMoveState::UpdateState(OctopusStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusMoveState_UpdateState_m4F160AFA562C861CBD013C104AE6264967A376CC (OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.UpdateState(creature);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_0 = ___creature0;
		OctopusBaseState_UpdateState_m7EB708E8E45FF33829A591CDA3199851390B6130(__this, L_0, NULL);
		// rb.velocity = new Vector3(creature.fixedJoystick.Horizontal * creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).moveSpeed
		//     , rb.velocity.y, creature.fixedJoystick.Vertical * creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).moveSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = ((OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728*)__this)->___rb_0;
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_2 = ___creature0;
		NullCheck(L_2);
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_3 = L_2->___fixedJoystick_11;
		NullCheck(L_3);
		float L_4;
		L_4 = Joystick_get_Horizontal_m23B2FBFE52DFF5E60F0DDAF88FC954EE3AF0A92B(L_3, NULL);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_5 = ___creature0;
		NullCheck(L_5);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_6 = L_5->___playerData_10;
		NullCheck(L_6);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_7;
		L_7 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_6, 1, NULL);
		NullCheck(L_7);
		float L_8 = L_7->___moveSpeed_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = ((OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728*)__this)->___rb_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_9, NULL);
		float L_11 = L_10.___y_3;
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_12 = ___creature0;
		NullCheck(L_12);
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_13 = L_12->___fixedJoystick_11;
		NullCheck(L_13);
		float L_14;
		L_14 = Joystick_get_Vertical_mB224F6BDC3C0A3E8B6ADA20E7378970A6DDBD164(L_13, NULL);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_15 = ___creature0;
		NullCheck(L_15);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_16 = L_15->___playerData_10;
		NullCheck(L_16);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_17;
		L_17 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_16, 1, NULL);
		NullCheck(L_17);
		float L_18 = L_17->___moveSpeed_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), ((float)il2cpp_codegen_multiply(L_4, L_8)), L_11, ((float)il2cpp_codegen_multiply(L_14, L_18)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_1, L_19, NULL);
		// if (_joystick.Horizontal != 0 || _joystick.Vertical != 0)
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_20 = __this->____joystick_1;
		NullCheck(L_20);
		float L_21;
		L_21 = Joystick_get_Horizontal_m23B2FBFE52DFF5E60F0DDAF88FC954EE3AF0A92B(L_20, NULL);
		if ((!(((float)L_21) == ((float)(0.0f)))))
		{
			goto IL_0085;
		}
	}
	{
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_22 = __this->____joystick_1;
		NullCheck(L_22);
		float L_23;
		L_23 = Joystick_get_Vertical_mB224F6BDC3C0A3E8B6ADA20E7378970A6DDBD164(L_22, NULL);
		if ((((float)L_23) == ((float)(0.0f))))
		{
			goto IL_00a0;
		}
	}

IL_0085:
	{
		// creature.transform.rotation = Quaternion.LookRotation(rb.velocity);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_24 = ___creature0;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_26 = ((OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728*)__this)->___rb_0;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_26, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_27, NULL);
		NullCheck(L_25);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_25, L_28, NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void OctopusMoveState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusMoveState__ctor_m763B86230C150E7E7260FCA502FB4660BFA4EB19 (OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581* __this, const RuntimeMethod* method) 
{
	{
		OctopusBaseState__ctor_mB92641B8DE3AA5CFAB061A49B4F94BCD4747F9F7(__this, NULL);
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
// System.Void OctopusAttackState::EnterState(OctopusStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusAttackState_EnterState_m1378009F3E56D9A9228448BCC22B3FC2301AC8F7 (OctopusAttackState_t42A02556AA17600444DB5F51A0B07559B302BEC4* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.EnterState(creature);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_0 = ___creature0;
		OctopusBaseState_EnterState_m91BC60FB32481B747FC8C1305796A0B88088A936(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void OctopusAttackState::UpdateState(OctopusStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusAttackState_UpdateState_mBB42A9BFFD92A13AB0E3D7AF8865BFD84DF907BB (OctopusAttackState_t42A02556AA17600444DB5F51A0B07559B302BEC4* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325_m981C90A985E96BCDF4C6F764B47BBE0F4B33EB39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.UpdateState(creature);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_0 = ___creature0;
		OctopusBaseState_UpdateState_m7EB708E8E45FF33829A591CDA3199851390B6130(__this, L_0, NULL);
		// if (creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).currentAttackCD <= 0)
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_1 = ___creature0;
		NullCheck(L_1);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_2 = L_1->___playerData_10;
		NullCheck(L_2);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3;
		L_3 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_2, 1, NULL);
		NullCheck(L_3);
		float L_4 = L_3->___currentAttackCD_5;
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		// OctopusAttack octopusAttack = creature.GetComponent<OctopusAttack>();
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_5 = ___creature0;
		NullCheck(L_5);
		OctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325* L_6;
		L_6 = Component_GetComponent_TisOctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325_m981C90A985E96BCDF4C6F764B47BBE0F4B33EB39(L_5, Component_GetComponent_TisOctopusAttack_t8E9637515826933C06A55F80C492EBA451DA7325_m981C90A985E96BCDF4C6F764B47BBE0F4B33EB39_RuntimeMethod_var);
		// octopusAttack.Attack();
		NullCheck(L_6);
		OctopusAttack_Attack_m9A83B4119C54EB23B5F492657EF51F0653BF0BE1(L_6, NULL);
		// creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).currentAttackCD = creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).attackCD;
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_7 = ___creature0;
		NullCheck(L_7);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_8 = L_7->___playerData_10;
		NullCheck(L_8);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_9;
		L_9 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_8, 1, NULL);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_10 = ___creature0;
		NullCheck(L_10);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_11 = L_10->___playerData_10;
		NullCheck(L_11);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_12;
		L_12 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_11, 1, NULL);
		NullCheck(L_12);
		float L_13 = L_12->___attackCD_4;
		NullCheck(L_9);
		L_9->___currentAttackCD_5 = L_13;
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void OctopusAttackState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusAttackState__ctor_m292A72669A72EB9BEF9240871E42275A9E947930 (OctopusAttackState_t42A02556AA17600444DB5F51A0B07559B302BEC4* __this, const RuntimeMethod* method) 
{
	{
		OctopusBaseState__ctor_mB92641B8DE3AA5CFAB061A49B4F94BCD4747F9F7(__this, NULL);
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
// System.Void OctopusHurtState::EnterState(OctopusStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusHurtState_EnterState_mC04999F2332F3388CCA36B1ABE36E01E3F6D5460 (OctopusHurtState_t6BEDF7BE26F49C6C0B9F250BB98A00EB781BA25D* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, const RuntimeMethod* method) 
{
	{
		// base.EnterState(creature);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_0 = ___creature0;
		OctopusBaseState_EnterState_m91BC60FB32481B747FC8C1305796A0B88088A936(__this, L_0, NULL);
		// creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).currentHurtCD = creature.playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).hurtCD;
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_1 = ___creature0;
		NullCheck(L_1);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_2 = L_1->___playerData_10;
		NullCheck(L_2);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3;
		L_3 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_2, 1, NULL);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_4 = ___creature0;
		NullCheck(L_4);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_5 = L_4->___playerData_10;
		NullCheck(L_5);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6;
		L_6 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_5, 1, NULL);
		NullCheck(L_6);
		float L_7 = L_6->___hurtCD_6;
		NullCheck(L_3);
		L_3->___currentHurtCD_7 = L_7;
		// creature.SwitchState(creature.idleState);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_8 = ___creature0;
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_9 = ___creature0;
		NullCheck(L_9);
		OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD* L_10 = L_9->___idleState_9;
		NullCheck(L_8);
		OctopusStateManager_SwitchState_mCEA63FA9BD601DD3A4D459C1CAACE0E495EB006C(L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void OctopusHurtState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusHurtState__ctor_mB2B73F9C672659385A3DF897A2742451BB3BC300 (OctopusHurtState_t6BEDF7BE26F49C6C0B9F250BB98A00EB781BA25D* __this, const RuntimeMethod* method) 
{
	{
		OctopusBaseState__ctor_mB92641B8DE3AA5CFAB061A49B4F94BCD4747F9F7(__this, NULL);
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
// System.Void OctopusDestroyState::EnterState(OctopusStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusDestroyState_EnterState_m6C29A5E93F4129AB954ACDF976826C869CD383D3 (OctopusDestroyState_t2568441834679165291F7B188D4D53DB02426296* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.EnterState(creature);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_0 = ___creature0;
		OctopusBaseState_EnterState_m91BC60FB32481B747FC8C1305796A0B88088A936(__this, L_0, NULL);
		// GameObject.Destroy(creature.gameObject);
		OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* L_1 = ___creature0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// System.Void OctopusDestroyState::UpdateState(OctopusStateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusDestroyState_UpdateState_m9B419262082ECBB8B620653CCACE4A74C78B1CC5 (OctopusDestroyState_t2568441834679165291F7B188D4D53DB02426296* __this, OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* ___creature0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OctopusDestroyState_UpdateState_m9B419262082ECBB8B620653CCACE4A74C78B1CC5_RuntimeMethod_var)));
	}
}
// System.Void OctopusDestroyState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusDestroyState__ctor_m1E57B3F4FFE70F7CFEECD06AAE5ADB97271E381C (OctopusDestroyState_t2568441834679165291F7B188D4D53DB02426296* __this, const RuntimeMethod* method) 
{
	{
		OctopusBaseState__ctor_mB92641B8DE3AA5CFAB061A49B4F94BCD4747F9F7(__this, NULL);
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
// System.Void OctopusStateManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusStateManager_Start_m9AE668D923102C32302F39098A7A2658779E1780 (OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* __this, const RuntimeMethod* method) 
{
	{
		// currentState = idleState;
		OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD* L_0 = __this->___idleState_9;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).currentAttackCD = playerData.GetPlayer(PlayerDataBaseSO.Name.player_Octopus).attackCD;
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_1 = __this->___playerData_10;
		NullCheck(L_1);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_2;
		L_2 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_1, 1, NULL);
		PlayerDataBaseSO_tAB59717F146E9CD89F209D8E049B3AC09EC9C7AD* L_3 = __this->___playerData_10;
		NullCheck(L_3);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4;
		L_4 = PlayerDataBaseSO_GetPlayer_m621611FD3B4E88E517CA8D98D00F434C518ECFEA(L_3, 1, NULL);
		NullCheck(L_4);
		float L_5 = L_4->___attackCD_4;
		NullCheck(L_2);
		L_2->___currentAttackCD_5 = L_5;
		// currentState.EnterState(this);
		OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* L_6 = __this->___currentState_4;
		NullCheck(L_6);
		VirtualActionInvoker1< OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* >::Invoke(4 /* System.Void OctopusBaseState::EnterState(OctopusStateManager) */, L_6, __this);
		// fixedJoystickPos = fixedJoystick.transform.position;
		FixedJoystick_t692858E133712B20B8662BB04F85F48E926089C6* L_7 = __this->___fixedJoystick_11;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		__this->___fixedJoystickPos_12 = L_9;
		// }
		return;
	}
}
// System.Void OctopusStateManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusStateManager_FixedUpdate_m3015F310DFB6CB83B6B96482574275888442BFA9 (OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* __this, const RuntimeMethod* method) 
{
	{
		// if (currentState == null)
		OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* L_0 = __this->___currentState_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// currentState = idleState;
		OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD* L_1 = __this->___idleState_9;
		__this->___currentState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_1);
		return;
	}

IL_0015:
	{
		// currentState.UpdateState(this);
		OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* L_2 = __this->___currentState_4;
		NullCheck(L_2);
		VirtualActionInvoker1< OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* >::Invoke(5 /* System.Void OctopusBaseState::UpdateState(OctopusStateManager) */, L_2, __this);
		// }
		return;
	}
}
// System.Void OctopusStateManager::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusStateManager_OnCollisionEnter_mAE3452A8C5BF9ADE8291214E4A6980A03BB1504F (OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	{
		// if (currentState == null)
		OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* L_0 = __this->___currentState_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// currentState = idleState;
		OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD* L_1 = __this->___idleState_9;
		__this->___currentState_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_1);
		return;
	}

IL_0015:
	{
		// currentState.OnCollisionEnter(this, collision);
		OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* L_2 = __this->___currentState_4;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___collision0;
		NullCheck(L_2);
		VirtualActionInvoker2< OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF*, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* >::Invoke(6 /* System.Void OctopusBaseState::OnCollisionEnter(OctopusStateManager,UnityEngine.Collision) */, L_2, __this, L_3);
		// }
		return;
	}
}
// System.Void OctopusStateManager::SwitchState(OctopusBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusStateManager_SwitchState_mCEA63FA9BD601DD3A4D459C1CAACE0E495EB006C (OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* __this, OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* ___creatureBaseState0, const RuntimeMethod* method) 
{
	{
		// currentState = creatureBaseState;
		OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* L_0 = ___creatureBaseState0;
		__this->___currentState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentState_4), (void*)L_0);
		// creatureBaseState.EnterState(this);
		OctopusBaseState_tDA741820A231640B10185AE2D1D5883744DF9728* L_1 = ___creatureBaseState0;
		NullCheck(L_1);
		VirtualActionInvoker1< OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* >::Invoke(4 /* System.Void OctopusBaseState::EnterState(OctopusStateManager) */, L_1, __this);
		// }
		return;
	}
}
// System.Void OctopusStateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctopusStateManager__ctor_m27539E986D3D9D4E6B76B86B21069799C226E001 (OctopusStateManager_t240B73454617BB3ACE51F0353DB1020F6654B7CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OctopusAttackState_t42A02556AA17600444DB5F51A0B07559B302BEC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OctopusDestroyState_t2568441834679165291F7B188D4D53DB02426296_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OctopusHurtState_t6BEDF7BE26F49C6C0B9F250BB98A00EB781BA25D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public OctopusAttackState attackState = new OctopusAttackState();
		OctopusAttackState_t42A02556AA17600444DB5F51A0B07559B302BEC4* L_0 = (OctopusAttackState_t42A02556AA17600444DB5F51A0B07559B302BEC4*)il2cpp_codegen_object_new(OctopusAttackState_t42A02556AA17600444DB5F51A0B07559B302BEC4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OctopusAttackState__ctor_m292A72669A72EB9BEF9240871E42275A9E947930(L_0, NULL);
		__this->___attackState_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackState_5), (void*)L_0);
		// public OctopusDestroyState destroyState = new OctopusDestroyState();
		OctopusDestroyState_t2568441834679165291F7B188D4D53DB02426296* L_1 = (OctopusDestroyState_t2568441834679165291F7B188D4D53DB02426296*)il2cpp_codegen_object_new(OctopusDestroyState_t2568441834679165291F7B188D4D53DB02426296_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OctopusDestroyState__ctor_m1E57B3F4FFE70F7CFEECD06AAE5ADB97271E381C(L_1, NULL);
		__this->___destroyState_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___destroyState_6), (void*)L_1);
		// public OctopusHurtState hurtState = new OctopusHurtState();
		OctopusHurtState_t6BEDF7BE26F49C6C0B9F250BB98A00EB781BA25D* L_2 = (OctopusHurtState_t6BEDF7BE26F49C6C0B9F250BB98A00EB781BA25D*)il2cpp_codegen_object_new(OctopusHurtState_t6BEDF7BE26F49C6C0B9F250BB98A00EB781BA25D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OctopusHurtState__ctor_mB2B73F9C672659385A3DF897A2742451BB3BC300(L_2, NULL);
		__this->___hurtState_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hurtState_7), (void*)L_2);
		// public OctopusMoveState moveState = new OctopusMoveState();
		OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581* L_3 = (OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581*)il2cpp_codegen_object_new(OctopusMoveState_t12EF59A75B78168C052F208B968DD643A9601581_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OctopusMoveState__ctor_m763B86230C150E7E7260FCA502FB4660BFA4EB19(L_3, NULL);
		__this->___moveState_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveState_8), (void*)L_3);
		// public OctopusIdleState idleState = new OctopusIdleState();
		OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD* L_4 = (OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD*)il2cpp_codegen_object_new(OctopusIdleState_t6CE3D2673CCB9931BFC960E6A0840EEC4F994DBD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OctopusIdleState__ctor_mCECBDF20FE90E149A1051303E6F919EDFCBC2830(L_4, NULL);
		__this->___idleState_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___idleState_9), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBaseState__ctor_mE5192BE5F590AD57CEEC90885F27C210ADA0C09D (PlayerBaseState_t65506B4765A28FA6FB2D59DB238C361559A179EB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single PlayerData::get_attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerData_get_attack_m6BF22244161186C361DA16F2CDAF311CFF1B21DE (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		// public float attack { get { return 1; } } //????n??
		return (1.0f);
	}
}
// System.Void PlayerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData__ctor_mDD79CC7712EAF325215F97832BFE3403DF47DFA8 (PlayerData_t04178AFFCFAF35DA6472B839034F672FFE5EB64A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SaveData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_m7E683A9CD703CB4058EEA6C1BBC22F4EDE2F76E5 (SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String SaveSystem::get_PlanetSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SaveSystem_get_PlanetSave_m403A5F36185482F1D6DC2D1F51D77CED7E88F3A9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C85A85AFC399D037D0D5761734BFE94E1D69856);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string PlanetSave => SCELECT_PLANET;
		return _stringLiteral9C85A85AFC399D037D0D5761734BFE94E1D69856;
	}
}
// System.String SaveSystem::get_CharacterSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SaveSystem_get_CharacterSave_mC2853044B6AE97D02FA80A7BF048B79268C0C454 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A8EDB9A16BFA121CB236EF065327A1AC2313086);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string CharacterSave => SCELECT_CHARACTER;
		return _stringLiteral7A8EDB9A16BFA121CB236EF065327A1AC2313086;
	}
}
// System.Void SaveSystem::SaveByJson(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystem_SaveByJson_m9C0E647845DF30DEC0C41D0A0D2F048FAC504140 (String_t* ___fileName0, RuntimeObject* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var json = JsonUtility.ToJson(data);
		RuntimeObject* L_0 = ___data1;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_0, NULL);
		V_0 = L_1;
		// var path = Path.Combine(Application.persistentDataPath,fileName);
		String_t* L_2;
		L_2 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_3 = ___fileName0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_2, L_3, NULL);
		// File.WriteAllText(path,json);
		String_t* L_5 = V_0;
		File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void SaveSystem::DeleteSaveFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystem_DeleteSaveFile_m5C8831A24FC250D4E8669AFDBE30D33BEFDC3B76 (String_t* ___fileName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EBE2C5EB759A7647A5789816D98142D57FB5BCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var path = Path.Combine (Application.persistentDataPath ,fileName);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1 = ___fileName0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, L_1, NULL);
		// File.Delete(path);
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_2, NULL);
		// Debug.LogWarning("Delete : "+fileName);
		String_t* L_3 = ___fileName0;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4EBE2C5EB759A7647A5789816D98142D57FB5BCC, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_4, NULL);
		// }
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Start_m58062825AA9A256E42311B4A4833E7425589BBDF (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		// LoadData();
		MenuManager_LoadData_mBDC0CCA4FF7D512B03D89C4B9DA1E57EE9DC01F4(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::AddLoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_AddLoadScene_mA8A5E4C813931956E73DC5366698D0F157E0797B (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, String_t* ___scene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(scene, LoadSceneMode.Additive);
		String_t* L_0 = ___scene0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::ChangeScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ChangeScene_m8858E8A6D8F06ECCDA698D636B19FF6AAEC6EB5B (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, String_t* ___scene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(scene);
		String_t* L_0 = ___scene0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_LoadData_mBDC0CCA4FF7D512B03D89C4B9DA1E57EE9DC01F4 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveSystem_LoadFormJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mE93FA98EFA2B609743C6381B46E87EEFD3DCED0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* V_0 = NULL;
	{
		// string planetConst = SaveSystem.PlanetSave; //SaveSystem.const
		String_t* L_0;
		L_0 = SaveSystem_get_PlanetSave_m403A5F36185482F1D6DC2D1F51D77CED7E88F3A9(NULL);
		// var saveData =  SaveSystem.LoadFormJson<SaveData>(planetConst);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_1;
		L_1 = SaveSystem_LoadFormJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mE93FA98EFA2B609743C6381B46E87EEFD3DCED0D(L_0, SaveSystem_LoadFormJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mE93FA98EFA2B609743C6381B46E87EEFD3DCED0D_RuntimeMethod_var);
		V_0 = L_1;
		// Planet planet = PlanetDataBaseSO.GetPlanet(saveData.selectPlanet);
		PlanetDataBaseSO_t917FF6B5CD1F2497D9BA3952206394B1D6A608B7* L_2 = __this->___PlanetDataBaseSO_6;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___selectPlanet_4;
		NullCheck(L_2);
		Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* L_5;
		L_5 = PlanetDataBaseSO_GetPlanet_m8BC90E39F28C981833B078DB20BBF39511F7B733(L_2, L_4, NULL);
		// Instantiate(planet.planetObject, PlanetSpawnPoint.position  , Quaternion.identity);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___planetObject_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___PlanetSpawnPoint_5;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_6, L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m07A22DFDD90E3164393F8BDE06DAEF5AFA786CF2 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SceneControl::ChangeScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControl_ChangeScene_m86BC2C84457E49BF3DDA1F29CB5B327ADF7E4590 (SceneControl_tB5F69E118FF00E7DD7FA6A3BBDD662CF9640F039* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___sceneName0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneControl__ctor_mF7D1FCD6FD64C9D07A7D2C79721CC836269B4851 (SceneControl_tB5F69E118FF00E7DD7FA6A3BBDD662CF9640F039* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CharacterSwipe::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSwipe_Update_m80D65152E7001A4E93B38CC6F010DE500736415C (CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// pos = new float[transform.childCount];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___pos_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pos_6), (void*)L_2);
		// float distance = 1f / (pos.Length - 1f);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___pos_6;
		NullCheck(L_3);
		V_0 = ((float)((1.0f)/((float)il2cpp_codegen_subtract(((float)((int32_t)(((RuntimeArray*)L_3)->max_length))), (1.0f)))));
		// for (int i = 0; i < pos.Length; i++)
		V_1 = 0;
		goto IL_0040;
	}

IL_0030:
	{
		// pos[i] = distance * i;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___pos_6;
		int32_t L_5 = V_1;
		float L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)((float)il2cpp_codegen_multiply(L_6, ((float)L_7))));
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0040:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_9 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___pos_6;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		// if (Input.GetMouseButton(0))
		bool L_11;
		L_11 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		// scrollPos = scrollBar.GetComponent<Scrollbar>().value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___scrollBar_4;
		NullCheck(L_12);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_13;
		L_13 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_12, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		NullCheck(L_13);
		float L_14;
		L_14 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_13, NULL);
		__this->___scrollPos_5 = L_14;
		goto IL_00e0;
	}

IL_006b:
	{
		// for (int i = 0; i < pos.Length; i++)
		V_2 = 0;
		goto IL_00d5;
	}

IL_006f:
	{
		// if (scrollPos < pos[i] + (distance / 2) && scrollPos > pos[i] - distance / 2)
		float L_15 = __this->___scrollPos_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___pos_6;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = V_0;
		if ((!(((float)L_15) < ((float)((float)il2cpp_codegen_add(L_19, ((float)(L_20/(2.0f)))))))))
		{
			goto IL_00d1;
		}
	}
	{
		float L_21 = __this->___scrollPos_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___pos_6;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		float L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		float L_26 = V_0;
		if ((!(((float)L_21) > ((float)((float)il2cpp_codegen_subtract(L_25, ((float)(L_26/(2.0f)))))))))
		{
			goto IL_00d1;
		}
	}
	{
		// scrollBar.GetComponent<Scrollbar>().value = Mathf.Lerp(scrollBar.GetComponent<Scrollbar>().value, pos[i], 0.1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___scrollBar_4;
		NullCheck(L_27);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_28;
		L_28 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_27, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___scrollBar_4;
		NullCheck(L_29);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_30;
		L_30 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_29, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		NullCheck(L_30);
		float L_31;
		L_31 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_30, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = __this->___pos_6;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		float L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		float L_36;
		L_36 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_31, L_35, (0.100000001f), NULL);
		NullCheck(L_28);
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_28, L_36, NULL);
	}

IL_00d1:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00d5:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_38 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = __this->___pos_6;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_006f;
		}
	}

IL_00e0:
	{
		// for (int i = 0; i < pos.Length; i++)
		V_3 = 0;
		goto IL_01e6;
	}

IL_00e7:
	{
		// if (scrollPos < pos[i] + (distance / 2) && scrollPos > pos[i] - distance / 2)
		float L_40 = __this->___scrollPos_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = __this->___pos_6;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		float L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		float L_45 = V_0;
		if ((!(((float)L_40) < ((float)((float)il2cpp_codegen_add(L_44, ((float)(L_45/(2.0f)))))))))
		{
			goto IL_01e2;
		}
	}
	{
		float L_46 = __this->___scrollPos_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47 = __this->___pos_6;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		float L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		float L_51 = V_0;
		if ((!(((float)L_46) > ((float)((float)il2cpp_codegen_subtract(L_50, ((float)(L_51/(2.0f)))))))))
		{
			goto IL_01e2;
		}
	}
	{
		// transform.GetChild(i).DOScale(new Vector2(1.3f, 1.3f), 0.1f).SetEase(Ease.InOutBounce);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_53 = V_3;
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_52, L_53, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_55), (1.29999995f), (1.29999995f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_55, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_57;
		L_57 = ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580(L_54, L_56, (0.100000001f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_58;
		L_58 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_57, ((int32_t)31), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		// transform.GetChild(i).GetComponent<RawImage>().color = Color.white;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_60 = V_3;
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_59, L_60, NULL);
		NullCheck(L_61);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_62;
		L_62 = Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D(L_61, Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63;
		L_63 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_62);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_62, L_63);
		// UpdatePlanet(i);
		int32_t L_64 = V_3;
		CharacterSwipe_UpdatePlanet_mF409B6C4E8B7FBC068931D30047B140BE9B80978(__this, L_64, NULL);
		// currentCharacter = i;
		int32_t L_65 = V_3;
		((CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41_StaticFields*)il2cpp_codegen_static_fields_for(CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41_il2cpp_TypeInfo_var))->___currentCharacter_10 = L_65;
		// for (int a = 0; a < pos.Length; a++)
		V_4 = 0;
		goto IL_01d6;
	}

IL_017c:
	{
		// if (a != i)
		int32_t L_66 = V_4;
		int32_t L_67 = V_3;
		if ((((int32_t)L_66) == ((int32_t)L_67)))
		{
			goto IL_01d0;
		}
	}
	{
		// transform.GetChild(a).DOScale(new Vector2(0.6f, 0.6f), 0.1f).SetEase(Ease.InOutBounce);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_69 = V_4;
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_68, L_69, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_71), (0.600000024f), (0.600000024f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_71, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_73;
		L_73 = ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580(L_70, L_72, (0.100000001f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_74;
		L_74 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_73, ((int32_t)31), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		// transform.GetChild(a).GetComponent<RawImage>().color = Color.gray;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_76 = V_4;
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_75, L_76, NULL);
		NullCheck(L_77);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_78;
		L_78 = Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D(L_77, Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79;
		L_79 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_78);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_78, L_79);
	}

IL_01d0:
	{
		// for (int a = 0; a < pos.Length; a++)
		int32_t L_80 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_01d6:
	{
		// for (int a = 0; a < pos.Length; a++)
		int32_t L_81 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_82 = __this->___pos_6;
		NullCheck(L_82);
		if ((((int32_t)L_81) < ((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length)))))
		{
			goto IL_017c;
		}
	}

IL_01e2:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_01e6:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_84 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = __this->___pos_6;
		NullCheck(L_85);
		if ((((int32_t)L_84) < ((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)))))
		{
			goto IL_00e7;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CharacterSwipe::UpdatePlanet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSwipe_UpdatePlanet_mF409B6C4E8B7FBC068931D30047B140BE9B80978 (CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41* __this, int32_t ___selectedOption0, const RuntimeMethod* method) 
{
	Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* V_0 = NULL;
	{
		// Character  character  = _characterDataBase.GetCharacter(selectedOption);
		CharacterDataBaseSO_t4503AE865B4B17C7C15E0DBDA16FB3B7209EF128* L_0 = __this->____characterDataBase_7;
		int32_t L_1 = ___selectedOption0;
		NullCheck(L_0);
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_2;
		L_2 = CharacterDataBaseSO_GetCharacter_m7C35068FBBD1F40FFA8FF2BF318465AB0BA5D8A7(L_0, L_1, NULL);
		V_0 = L_2;
		// _characterTitle.text = character.characterTitle;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->____characterTitle_8;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___characterTitle_0;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_5);
		// _characterIntroduce.text = character.characterIntroduce;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->____characterIntroduce_9;
		Character_tAF47BB8D49829E1464C3692B366FC33C5B38CD61* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___characterIntroduce_1;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_8);
		// }
		return;
	}
}
// System.Void CharacterSwipe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSwipe__ctor_m52879461476DF09E10A697D865B7BFC005320CD3 (CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CharacterUIManager::SelectCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterUIManager_SelectCharacter_m7A0A851C49FFC014CD01D9E7CA875AE300331C41 (CharacterUIManager_t5FE02860D0EFE9069A97B7CF3FCED8F592C2692B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E538D25AD88E153C305B95581F14918239F2431);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveSystem.SaveByJson(SaveSystem.CharacterSave, SavingData());
		String_t* L_0;
		L_0 = SaveSystem_get_CharacterSave_mC2853044B6AE97D02FA80A7BF048B79268C0C454(NULL);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_1;
		L_1 = CharacterUIManager_SavingData_m40EDB04AD81572EC4AA90B0904779626C2509E32(__this, NULL);
		SaveSystem_SaveByJson_m9C0E647845DF30DEC0C41D0A0D2F048FAC504140(L_0, L_1, NULL);
		// SceneManager.LoadScene("GameScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3E538D25AD88E153C305B95581F14918239F2431, NULL);
		// }
		return;
	}
}
// System.Void CharacterUIManager::GoBackMenu(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterUIManager_GoBackMenu_m5C58A3B7117607E17E1BA248528194008B28456E (CharacterUIManager_t5FE02860D0EFE9069A97B7CF3FCED8F592C2692B* __this, String_t* ___scene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(scene);
		String_t* L_0 = ___scene0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// SaveData CharacterUIManager::SavingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* CharacterUIManager_SavingData_m40EDB04AD81572EC4AA90B0904779626C2509E32 (CharacterUIManager_t5FE02860D0EFE9069A97B7CF3FCED8F592C2692B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var saveData = new SaveData();
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_0 = (SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29*)il2cpp_codegen_object_new(SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SaveData__ctor_m7E683A9CD703CB4058EEA6C1BBC22F4EDE2F76E5(L_0, NULL);
		// saveData.selectCharacter = CharacterSwipe.currentCharacter;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_1 = L_0;
		int32_t L_2 = ((CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41_StaticFields*)il2cpp_codegen_static_fields_for(CharacterSwipe_tE8706413E35AF9CA2F39238438C42366ABD4EB41_il2cpp_TypeInfo_var))->___currentCharacter_10;
		NullCheck(L_1);
		L_1->___selectCharacter_5 = L_2;
		// return saveData;
		return L_1;
	}
}
// System.Void CharacterUIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterUIManager__ctor_mBACB498426A8025EC1EC85D2F0BE3F0EE9A0A73D (CharacterUIManager_t5FE02860D0EFE9069A97B7CF3FCED8F592C2692B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PanelSwipe::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSwipe_Start_m30C56CDED69F6AC4DDBC08FC09697D92588D388F (PanelSwipe_tBAB802D2617DFE9966CE2DBDC20EE78E667F92DF* __this, const RuntimeMethod* method) 
{
	{
		// panelLocation = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___panelLocation_4 = L_1;
		// }
		return;
	}
}
// System.Void PanelSwipe::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSwipe_OnDrag_m4AF76414A0DB0D63F9F9DC139C64AEE18B59993D (PanelSwipe_tBAB802D2617DFE9966CE2DBDC20EE78E667F92DF* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float difference = eventData.pressPosition.x - eventData.position.x;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_0, NULL);
		float L_2 = L_1.___x_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		float L_5 = L_4.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_5));
		// transform.position = panelLocation - new Vector3(difference, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___panelLocation_4;
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_8, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_9, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_10, NULL);
		// }
		return;
	}
}
// System.Void PanelSwipe::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSwipe_OnEndDrag_m30E074B388EE72525C009E65BE548833EB7EA83F (PanelSwipe_tBAB802D2617DFE9966CE2DBDC20EE78E667F92DF* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float percentage = (eventData.pressPosition.x - eventData.position.x) / Screen.width;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_0, NULL);
		float L_2 = L_1.___x_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		float L_5 = L_4.___x_0;
		int32_t L_6;
		L_6 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_2, L_5))/((float)L_6)));
		// if (Mathf.Abs(percentage) >= percentThreshold)
		float L_7 = V_0;
		float L_8;
		L_8 = fabsf(L_7);
		float L_9 = __this->___percentThreshold_7;
		if ((!(((float)L_8) >= ((float)L_9))))
		{
			goto IL_00dc;
		}
	}
	{
		// Vector3 newLocation = panelLocation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___panelLocation_4;
		V_1 = L_10;
		// if(percentage > 0 && currentChild < childIndex)
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_12 = __this->___currentChild_5;
		int32_t L_13 = __this->___childIndex_6;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_007a;
		}
	}
	{
		// newLocation += new Vector3(-Screen.width, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		int32_t L_15;
		L_15 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), ((float)((-L_15))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_16, NULL);
		V_1 = L_17;
		// currentChild++;
		int32_t L_18 = __this->___currentChild_5;
		__this->___currentChild_5 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_00b5;
	}

IL_007a:
	{
		// else if (percentage < 0 && currentChild>1)
		float L_19 = V_0;
		if ((!(((float)L_19) < ((float)(0.0f)))))
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_20 = __this->___currentChild_5;
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_00b5;
		}
	}
	{
		// newLocation += new Vector3(Screen.width, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		int32_t L_22;
		L_22 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)L_22), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_23, NULL);
		V_1 = L_24;
		// currentChild--;
		int32_t L_25 = __this->___currentChild_5;
		__this->___currentChild_5 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_00b5:
	{
		// StartCoroutine(SmoothMove(transform.position, newLocation, easing));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_1;
		float L_29 = __this->___easing_8;
		RuntimeObject* L_30;
		L_30 = PanelSwipe_SmoothMove_m7C1748B380C2B2EB92F11FB1C798040A1977681B(__this, L_27, L_28, L_29, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_31;
		L_31 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_30, NULL);
		// panelLocation = newLocation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_1;
		__this->___panelLocation_4 = L_32;
		return;
	}

IL_00dc:
	{
		// StartCoroutine(SmoothMove(transform.position, panelLocation, easing));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___panelLocation_4;
		float L_36 = __this->___easing_8;
		RuntimeObject* L_37;
		L_37 = PanelSwipe_SmoothMove_m7C1748B380C2B2EB92F11FB1C798040A1977681B(__this, L_34, L_35, L_36, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_38;
		L_38 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_37, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PanelSwipe::SmoothMove(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PanelSwipe_SmoothMove_m7C1748B380C2B2EB92F11FB1C798040A1977681B (PanelSwipe_tBAB802D2617DFE9966CE2DBDC20EE78E667F92DF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPos1, float ___seconds2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0* L_0 = (U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0*)il2cpp_codegen_object_new(U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSmoothMoveU3Ed__9__ctor_m27D967DC08A8FB5B07C51883D13C4F8388219DDE(L_0, 0, NULL);
		U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___startPos0;
		NullCheck(L_2);
		L_2->___startPos_4 = L_3;
		U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0* L_4 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___endPos1;
		NullCheck(L_4);
		L_4->___endPos_5 = L_5;
		U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0* L_6 = L_4;
		float L_7 = ___seconds2;
		NullCheck(L_6);
		L_6->___seconds_2 = L_7;
		return L_6;
	}
}
// System.Void PanelSwipe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSwipe__ctor_mE367F79494FBD2CCE85BCCD348D000917B39CC72 (PanelSwipe_tBAB802D2617DFE9966CE2DBDC20EE78E667F92DF* __this, const RuntimeMethod* method) 
{
	{
		// private int currentChild=3;
		__this->___currentChild_5 = 3;
		// private float percentThreshold = 0.2f;
		__this->___percentThreshold_7 = (0.200000003f);
		// private float easing = 0.5f;
		__this->___easing_8 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PanelSwipe/<SmoothMove>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMoveU3Ed__9__ctor_m27D967DC08A8FB5B07C51883D13C4F8388219DDE (U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PanelSwipe/<SmoothMove>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMoveU3Ed__9_System_IDisposable_Dispose_mE0C0DC44817C5279849ABEB252B236D6F0B818FF (U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PanelSwipe/<SmoothMove>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSmoothMoveU3Ed__9_MoveNext_mA6FC397BFA21115940C0F02C4B6156AE955EB96D (U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PanelSwipe_tBAB802D2617DFE9966CE2DBDC20EE78E667F92DF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PanelSwipe_tBAB802D2617DFE9966CE2DBDC20EE78E667F92DF* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float t = 0;
		__this->___U3CtU3E5__2_6 = (0.0f);
		goto IL_008c;
	}

IL_002b:
	{
		// t += Time.deltaTime / seconds;
		float L_4 = __this->___U3CtU3E5__2_6;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_6 = __this->___seconds_2;
		__this->___U3CtU3E5__2_6 = ((float)il2cpp_codegen_add(L_4, ((float)(L_5/L_6))));
		// transform.position = Vector3.Lerp(startPos, endPos,Mathf.SmoothStep(0,1,t));
		PanelSwipe_tBAB802D2617DFE9966CE2DBDC20EE78E667F92DF* L_7 = V_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___startPos_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___endPos_5;
		float L_11 = __this->___U3CtU3E5__2_6;
		float L_12;
		L_12 = Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline((0.0f), (1.0f), L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_9, L_10, L_12, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_13, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0085:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008c:
	{
		// while (t <= 1.0f)
		float L_14 = __this->___U3CtU3E5__2_6;
		if ((((float)L_14) <= ((float)(1.0f))))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object PanelSwipe/<SmoothMove>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSmoothMoveU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m37F8079A09AC666376BFD7B324F06AAD9D39DC9F (U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PanelSwipe/<SmoothMove>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMoveU3Ed__9_System_Collections_IEnumerator_Reset_mC6980D784EC8ECA1E2D2325EEE5CD2D2E5C8B1DD (U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSmoothMoveU3Ed__9_System_Collections_IEnumerator_Reset_mC6980D784EC8ECA1E2D2325EEE5CD2D2E5C8B1DD_RuntimeMethod_var)));
	}
}
// System.Object PanelSwipe/<SmoothMove>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSmoothMoveU3Ed__9_System_Collections_IEnumerator_get_Current_mF7D443EE52E5BD30C6E44CD90944AB225F71B749 (U3CSmoothMoveU3Ed__9_t7A4DE66B915D42624D034AE8DA1CFC20BAD876B0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PlanetSwipe::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSwipe_Awake_m39A06B238BAB8E6ED64DF422992C903A0DD0D781 (PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveSystem_LoadFormJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mE93FA98EFA2B609743C6381B46E87EEFD3DCED0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* V_0 = NULL;
	{
		// var saveData = SaveSystem.LoadFormJson<SaveData>(SaveSystem.PlanetSave);
		String_t* L_0;
		L_0 = SaveSystem_get_PlanetSave_m403A5F36185482F1D6DC2D1F51D77CED7E88F3A9(NULL);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_1;
		L_1 = SaveSystem_LoadFormJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mE93FA98EFA2B609743C6381B46E87EEFD3DCED0D(L_0, SaveSystem_LoadFormJson_TisSaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_mE93FA98EFA2B609743C6381B46E87EEFD3DCED0D_RuntimeMethod_var);
		V_0 = L_1;
		// scrollBar.GetComponent<Scrollbar>().value = saveData.planetBarValue;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___scrollBar_4;
		NullCheck(L_2);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_3;
		L_3 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_2, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->___planetBarValue_7;
		NullCheck(L_3);
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void PlanetSwipe::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSwipe_Update_m91B3A5BFE94030E621BA18C0048826BB19EE365A (PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// pos = new float[transform.childCount];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___pos_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pos_6), (void*)L_2);
		// float distance = 1f / (pos.Length - 1f);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___pos_6;
		NullCheck(L_3);
		V_0 = ((float)((1.0f)/((float)il2cpp_codegen_subtract(((float)((int32_t)(((RuntimeArray*)L_3)->max_length))), (1.0f)))));
		// for (int i = 0; i < pos.Length; i++)
		V_1 = 0;
		goto IL_0040;
	}

IL_0030:
	{
		// pos[i] = distance * i;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___pos_6;
		int32_t L_5 = V_1;
		float L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)((float)il2cpp_codegen_multiply(L_6, ((float)L_7))));
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0040:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_9 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___pos_6;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		// if (Input.GetMouseButton(0))
		bool L_11;
		L_11 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		// scrollPos = scrollBar.GetComponent<Scrollbar>().value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___scrollBar_4;
		NullCheck(L_12);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_13;
		L_13 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_12, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		NullCheck(L_13);
		float L_14;
		L_14 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_13, NULL);
		__this->___scrollPos_5 = L_14;
		goto IL_00fb;
	}

IL_006e:
	{
		// for (int i = 0; i < pos.Length; i++)
		V_2 = 0;
		goto IL_00ed;
	}

IL_0072:
	{
		// if(scrollPos < pos[i] + (distance/2) && scrollPos > pos[i] - distance / 2)
		float L_15 = __this->___scrollPos_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = __this->___pos_6;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = V_0;
		if ((!(((float)L_15) < ((float)((float)il2cpp_codegen_add(L_19, ((float)(L_20/(2.0f)))))))))
		{
			goto IL_00e9;
		}
	}
	{
		float L_21 = __this->___scrollPos_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___pos_6;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		float L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		float L_26 = V_0;
		if ((!(((float)L_21) > ((float)((float)il2cpp_codegen_subtract(L_25, ((float)(L_26/(2.0f)))))))))
		{
			goto IL_00e9;
		}
	}
	{
		// scrollBar.GetComponent<Scrollbar>().value = Mathf.Lerp(scrollBar.GetComponent<Scrollbar>().value, pos[i], 0.1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___scrollBar_4;
		NullCheck(L_27);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_28;
		L_28 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_27, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___scrollBar_4;
		NullCheck(L_29);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_30;
		L_30 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_29, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		NullCheck(L_30);
		float L_31;
		L_31 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_30, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = __this->___pos_6;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		float L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		float L_36;
		L_36 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_31, L_35, (0.100000001f), NULL);
		NullCheck(L_28);
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_28, L_36, NULL);
		// currentPlanetBarValue = scrollBar.GetComponent<Scrollbar>().value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___scrollBar_4;
		NullCheck(L_37);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_38;
		L_38 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_37, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		NullCheck(L_38);
		float L_39;
		L_39 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_38, NULL);
		((PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB_StaticFields*)il2cpp_codegen_static_fields_for(PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB_il2cpp_TypeInfo_var))->___currentPlanetBarValue_11 = L_39;
	}

IL_00e9:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ed:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_41 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = __this->___pos_6;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0072;
		}
	}

IL_00fb:
	{
		// for (int i = 0; i < pos.Length; i++)
		V_3 = 0;
		goto IL_0201;
	}

IL_0102:
	{
		// if (scrollPos < pos[i] + (distance / 2) && scrollPos > pos[i] - distance / 2)
		float L_43 = __this->___scrollPos_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_44 = __this->___pos_6;
		int32_t L_45 = V_3;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		float L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		float L_48 = V_0;
		if ((!(((float)L_43) < ((float)((float)il2cpp_codegen_add(L_47, ((float)(L_48/(2.0f)))))))))
		{
			goto IL_01fd;
		}
	}
	{
		float L_49 = __this->___scrollPos_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = __this->___pos_6;
		int32_t L_51 = V_3;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		float L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		float L_54 = V_0;
		if ((!(((float)L_49) > ((float)((float)il2cpp_codegen_subtract(L_53, ((float)(L_54/(2.0f)))))))))
		{
			goto IL_01fd;
		}
	}
	{
		// transform.GetChild(i).DOScale(new Vector2(1.3f, 1.3f), 0.1f).SetEase(Ease.InOutBounce);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_56 = V_3;
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_55, L_56, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_58), (1.29999995f), (1.29999995f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_58, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_60;
		L_60 = ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580(L_57, L_59, (0.100000001f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_61;
		L_61 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_60, ((int32_t)31), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		// transform.GetChild(i).GetComponent<RawImage>().color = Color.white;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_63 = V_3;
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_62, L_63, NULL);
		NullCheck(L_64);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_65;
		L_65 = Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D(L_64, Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66;
		L_66 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_65, L_66);
		// currentPlanet = i;
		int32_t L_67 = V_3;
		((PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB_StaticFields*)il2cpp_codegen_static_fields_for(PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB_il2cpp_TypeInfo_var))->___currentPlanet_10 = L_67;
		// UpdatePlanetInfo(i);
		int32_t L_68 = V_3;
		PlanetSwipe_UpdatePlanetInfo_m3911FB591BD00A2E26EC0B06E4106EBD20A40D65(__this, L_68, NULL);
		// for (int a = 0; a < pos.Length; a++)
		V_4 = 0;
		goto IL_01f1;
	}

IL_0197:
	{
		// if (a != i)
		int32_t L_69 = V_4;
		int32_t L_70 = V_3;
		if ((((int32_t)L_69) == ((int32_t)L_70)))
		{
			goto IL_01eb;
		}
	}
	{
		// transform.GetChild(a).DOScale(new Vector2(0.6f, 0.6f), 0.1f).SetEase(Ease.InOutBounce);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_72 = V_4;
		NullCheck(L_71);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_71, L_72, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_74), (0.600000024f), (0.600000024f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_74, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_76;
		L_76 = ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580(L_73, L_75, (0.100000001f), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_77;
		L_77 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_76, ((int32_t)31), TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		// transform.GetChild(a).GetComponent<RawImage>().color = Color.gray;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_79 = V_4;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_78, L_79, NULL);
		NullCheck(L_80);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_81;
		L_81 = Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D(L_80, Component_GetComponent_TisRawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179_m56775E1085C53732A0C2D919F000176C7BC11C3D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_82;
		L_82 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_81);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_81, L_82);
	}

IL_01eb:
	{
		// for (int a = 0; a < pos.Length; a++)
		int32_t L_83 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_01f1:
	{
		// for (int a = 0; a < pos.Length; a++)
		int32_t L_84 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = __this->___pos_6;
		NullCheck(L_85);
		if ((((int32_t)L_84) < ((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)))))
		{
			goto IL_0197;
		}
	}

IL_01fd:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_86 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_0201:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_87 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_88 = __this->___pos_6;
		NullCheck(L_88);
		if ((((int32_t)L_87) < ((int32_t)((int32_t)(((RuntimeArray*)L_88)->max_length)))))
		{
			goto IL_0102;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlanetSwipe::UpdatePlanetInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSwipe_UpdatePlanetInfo_m3911FB591BD00A2E26EC0B06E4106EBD20A40D65 (PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB* __this, int32_t ___selectedOption0, const RuntimeMethod* method) 
{
	Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* V_0 = NULL;
	{
		// Planet planet = _planetDataBase.GetPlanet(selectedOption);
		PlanetDataBaseSO_t917FF6B5CD1F2497D9BA3952206394B1D6A608B7* L_0 = __this->____planetDataBase_7;
		int32_t L_1 = ___selectedOption0;
		NullCheck(L_0);
		Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* L_2;
		L_2 = PlanetDataBaseSO_GetPlanet_m8BC90E39F28C981833B078DB20BBF39511F7B733(L_0, L_1, NULL);
		V_0 = L_2;
		// _planetTitle.text = planet.planetTitle;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->____planetTitle_8;
		Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___planetTitle_0;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_5);
		// _planetIntroduce.text = planet.planetIntroduce;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->____planetIntroduce_9;
		Planet_t258EAE61BD7C033E43293FD06664DFE1839AE8F2* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___planetIntroduce_1;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_8);
		// }
		return;
	}
}
// System.Void PlanetSwipe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetSwipe__ctor_mEC09F6F724CED8ACB2E4E76223507BB6F751F6F8 (PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlanetUIManager::ChangeScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetUIManager_ChangeScene_mCBBEE418B0C5C0A1F8D140CDD5B3B5A5C9ED1C94 (PlanetUIManager_tE920FB80804965CE123D996D70D0B59ED566E9DA* __this, String_t* ___scene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(scene);
		String_t* L_0 = ___scene0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlanetUIManager::SelectPlanet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetUIManager_SelectPlanet_m4E1FFD33E20CFE66259DD0E41B5E03CC03C15EAC (PlanetUIManager_tE920FB80804965CE123D996D70D0B59ED566E9DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE796D8428A31C89F4F32CCE284FFAFEF0A50CAED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveSystem.SaveByJson(SaveSystem.PlanetSave, SavingData());
		String_t* L_0;
		L_0 = SaveSystem_get_PlanetSave_m403A5F36185482F1D6DC2D1F51D77CED7E88F3A9(NULL);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_1;
		L_1 = PlanetUIManager_SavingData_m6FD0AA8CD316325F0DC31C8BA61E89A6A59A7C9F(__this, NULL);
		SaveSystem_SaveByJson_m9C0E647845DF30DEC0C41D0A0D2F048FAC504140(L_0, L_1, NULL);
		// SceneManager.LoadScene("MenuScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralE796D8428A31C89F4F32CCE284FFAFEF0A50CAED, NULL);
		// }
		return;
	}
}
// SaveData PlanetUIManager::SavingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* PlanetUIManager_SavingData_m6FD0AA8CD316325F0DC31C8BA61E89A6A59A7C9F (PlanetUIManager_tE920FB80804965CE123D996D70D0B59ED566E9DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var saveData = new SaveData();
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_0 = (SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29*)il2cpp_codegen_object_new(SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SaveData__ctor_m7E683A9CD703CB4058EEA6C1BBC22F4EDE2F76E5(L_0, NULL);
		// saveData.selectPlanet = PlanetSwipe.currentPlanet;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_1 = L_0;
		int32_t L_2 = ((PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB_StaticFields*)il2cpp_codegen_static_fields_for(PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB_il2cpp_TypeInfo_var))->___currentPlanet_10;
		NullCheck(L_1);
		L_1->___selectPlanet_4 = L_2;
		// saveData.planetBarValue = PlanetSwipe.currentPlanetBarValue;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_3 = L_1;
		float L_4 = ((PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB_StaticFields*)il2cpp_codegen_static_fields_for(PlanetSwipe_t39C5FEEFC7E82325F586607C6CDD6811A2E656CB_il2cpp_TypeInfo_var))->___currentPlanetBarValue_11;
		NullCheck(L_3);
		L_3->___planetBarValue_7 = L_4;
		// return saveData;
		return L_3;
	}
}
// System.Void PlanetUIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanetUIManager__ctor_m14BAF29271D361D23712D1FBB960D4E7BD37BF07 (PlanetUIManager_tE920FB80804965CE123D996D70D0B59ED566E9DA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UIPointer::ClickNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPointer_ClickNext_mC084161F10F15A2F109617592B718F6F5078CB19 (UIPointer_t071139942DEFBA4BFE3B3522499F198AC04ED51E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPointer__ctor_m8439416AE178DEA3F36A0DDAF1B40D581881C22F (UIPointer_t071139942DEFBA4BFE3B3522499F198AC04ED51E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void playerDelegate_Invoke_mFA44C083104F42A0D5F79413D76D7344E3B58BC3_inline (playerDelegate_tF6177C8AF6DCF9A5298E9C4D3AF542E7A6B8F368* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpressPositionU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mEFDC738EB0AA162D71013BDBBDD157B080A8E524_inline (float ___from0, float ___to1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		float L_2 = ___t2;
		float L_3 = ___t2;
		float L_4 = ___t2;
		float L_5 = ___t2;
		float L_6 = ___t2;
		___t2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_2)), L_3)), L_4)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_5)), L_6))));
		float L_7 = ___to1;
		float L_8 = ___t2;
		float L_9 = ___from0;
		float L_10 = ___t2;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_9, ((float)il2cpp_codegen_subtract((1.0f), L_10))))));
		goto IL_0030;
	}

IL_0030:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
