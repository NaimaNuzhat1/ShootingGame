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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
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
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Boss
struct Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35;
// BulletMovement
struct BulletMovement_t3F35F23E35D73AE0EC4D32389BDFDCA6727AB967;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// ButtonScript
struct ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameWon
struct GameWon_tFD8CC92DF92A67104423D051F204F04780F0065F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// GunMode
struct GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InstantiateEnemy
struct InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerControls
struct PlayerControls_t7EFF800E1E7E86137BD4DBD2F5C5D16BD2CA4D77;
// PowerUpRotation
struct PowerUpRotation_t7C735F9591DD1AB71D767D533FEB9EB90DD08C70;
// PowerUpWindow
struct PowerUpWindow_t8267101FBCCD4E0B423AC61137E94BA97AE41EC8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// ResetPref
struct ResetPref_t847D122D9F8DFF861116A1A8A53CAE24679CAE09;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SetActiveScript
struct SetActiveScript_t76914B03C2A846559043BB4F00C26DD587ABB133;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
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
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WaveCounter
struct WaveCounter_t158BBB4A45BBB53252219C66C5B4E118812B41DF;
// brokenTank
struct brokenTank_t1C334C4E0F14C3812606EBA516B6BF20C6CE0415;
// fire
struct fire_t681E11C61B81708A2984605BE72569220ED9CB42;
// gameOver
struct gameOver_t3670402F4842B7D066984C630B08710DA2A6D780;
// powerUp
struct powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Boss/<shoot>d__20
struct U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// Enemy/<animateDeath>d__17
struct U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0;
// GunMode/<shoot>d__14
struct U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94;
// InstantiateEnemy/<instantiateBoss>d__11
struct U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8;
// InstantiateEnemy/<spawnEnemy>d__10
struct U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PowerUpWindow/<powerUpWin>d__5
struct U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E;
// SetActiveScript/<winSet>d__3
struct U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// WaveCounter/<winSet>d__9
struct U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060;
// brokenTank/<destroySelf>d__1
struct U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A;
// powerUp/<p1>d__9
struct U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110;
// powerUp/<p2>d__10
struct U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1;
// powerUp/<spawnPowerUp>d__7
struct U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral024C60BC25F851E8B9F5531CC461C68CD60D3F30;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral0E7EFA0ED0003B428FCBC9960CB1B30023E86238;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3;
IL2CPP_EXTERN_C String_t* _stringLiteral4DF4ED9B0231B8C162513291F4082BDB3766EED2;
IL2CPP_EXTERN_C String_t* _stringLiteral531C6B65E43EE29B542DD7BF42A5EC8FDF3FFEF0;
IL2CPP_EXTERN_C String_t* _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B;
IL2CPP_EXTERN_C String_t* _stringLiteral84B7AF18301C4FCEAF238EFECCD57132EA7A8123;
IL2CPP_EXTERN_C String_t* _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0;
IL2CPP_EXTERN_C String_t* _stringLiteral8E6D77E891CD1BB73AB7DF5172D2FE421111E71A;
IL2CPP_EXTERN_C String_t* _stringLiteral8F4D5C427CFA5FCCBD38E02EBC6722093CAA1EDD;
IL2CPP_EXTERN_C String_t* _stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2;
IL2CPP_EXTERN_C String_t* _stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38;
IL2CPP_EXTERN_C String_t* _stringLiteral987D7BBAB791917E2F55CAA07EE82D3A5ACD8A9D;
IL2CPP_EXTERN_C String_t* _stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6;
IL2CPP_EXTERN_C String_t* _stringLiteralA8ADF54F07975BC53E74F0B2D566CC0D30E553CE;
IL2CPP_EXTERN_C String_t* _stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489;
IL2CPP_EXTERN_C String_t* _stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298;
IL2CPP_EXTERN_C String_t* _stringLiteralB1056C29D0C291EC4721613F0E0B99A27AD52E3A;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBD11843990CBAB91C6E830DA581D13285E25AB8F;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCFDCA766ED2563D2C8C45D917886EBC27FB44886;
IL2CPP_EXTERN_C String_t* _stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982;
IL2CPP_EXTERN_C String_t* _stringLiteralEFA94BB1427D101F2BCDF466C2A353E67C017F39;
IL2CPP_EXTERN_C String_t* _stringLiteralF5288D4644662DCD951D0B06C2797E21DC4E6C40;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFF97AAD111235153D30EDA9E49B8CD09FF5CAD86;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m1B905B41EF4264E9395373B64D57297468EE828C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mB2E2DFC9835043E9EA38AB359AEBDD53CE90A690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CanimateDeathU3Ed__17_System_Collections_IEnumerator_Reset_mB6A4F7C74F6CC8526BDDFD0FC95A2DB4783B99E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CdestroySelfU3Ed__1_System_Collections_IEnumerator_Reset_m4BDFE6C88A0F649BA4A707BE4A1E21887BD19146_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CinstantiateBossU3Ed__11_System_Collections_IEnumerator_Reset_m8BB7F5491F384E2BD5F66DAD5A812ED5F395A056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cp1U3Ed__9_System_Collections_IEnumerator_Reset_mCFFC1FF212CEBAB006D1ED9BBC57E3569BD99FF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cp2U3Ed__10_System_Collections_IEnumerator_Reset_m219FAE9EA4DE5986B1689E8A3659A058A38196C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CpowerUpWinU3Ed__5_System_Collections_IEnumerator_Reset_m591F06AFA2C62400FF7EAE990ECD47E011087D44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CshootU3Ed__14_System_Collections_IEnumerator_Reset_m1AB52F7ED73B04C9D94AD2653C8C11E8CEAB31A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CshootU3Ed__20_System_Collections_IEnumerator_Reset_m3FCC561DD46D486FD997A7BFA32774262DEEB0BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CspawnEnemyU3Ed__10_System_Collections_IEnumerator_Reset_m602DC28100E5E257AB46E1AF1F18660494CA4B1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CspawnPowerUpU3Ed__7_System_Collections_IEnumerator_Reset_m0E45405734C976B4A83E7441B14C5DF01C1A54B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwinSetU3Ed__3_System_Collections_IEnumerator_Reset_m40BBE9449F8C846E6DDD6D14DDB32203DF9C4BB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwinSetU3Ed__9_System_Collections_IEnumerator_Reset_m797B0DEAE5D90B8189CD1A3DA7CC5A626DC2EFE1_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

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
struct Il2CppArrayBounds;

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

// Boss/<shoot>d__20
struct U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5  : public RuntimeObject
{
	// System.Int32 Boss/<shoot>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss/<shoot>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Boss Boss/<shoot>d__20::<>4__this
	Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* ___U3CU3E4__this_2;
};

// Enemy/<animateDeath>d__17
struct U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0  : public RuntimeObject
{
	// System.Int32 Enemy/<animateDeath>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<animateDeath>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Enemy Enemy/<animateDeath>d__17::<>4__this
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___U3CU3E4__this_2;
};

// GunMode/<shoot>d__14
struct U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94  : public RuntimeObject
{
	// System.Int32 GunMode/<shoot>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GunMode/<shoot>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GunMode GunMode/<shoot>d__14::<>4__this
	GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* ___U3CU3E4__this_2;
};

// InstantiateEnemy/<instantiateBoss>d__11
struct U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8  : public RuntimeObject
{
	// System.Int32 InstantiateEnemy/<instantiateBoss>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InstantiateEnemy/<instantiateBoss>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// InstantiateEnemy InstantiateEnemy/<instantiateBoss>d__11::<>4__this
	InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* ___U3CU3E4__this_2;
	// System.Int32 InstantiateEnemy/<instantiateBoss>d__11::<position>5__2
	int32_t ___U3CpositionU3E5__2_3;
};

// InstantiateEnemy/<spawnEnemy>d__10
struct U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7  : public RuntimeObject
{
	// System.Int32 InstantiateEnemy/<spawnEnemy>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InstantiateEnemy/<spawnEnemy>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// InstantiateEnemy InstantiateEnemy/<spawnEnemy>d__10::<>4__this
	InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* ___U3CU3E4__this_2;
};

// PowerUpWindow/<powerUpWin>d__5
struct U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E  : public RuntimeObject
{
	// System.Int32 PowerUpWindow/<powerUpWin>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PowerUpWindow/<powerUpWin>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PowerUpWindow PowerUpWindow/<powerUpWin>d__5::<>4__this
	PowerUpWindow_t8267101FBCCD4E0B423AC61137E94BA97AE41EC8* ___U3CU3E4__this_2;
};

// SetActiveScript/<winSet>d__3
struct U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574  : public RuntimeObject
{
	// System.Int32 SetActiveScript/<winSet>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SetActiveScript/<winSet>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.GameObject SetActiveScript/<winSet>d__3::window
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___window_2;
	// SetActiveScript SetActiveScript/<winSet>d__3::<>4__this
	SetActiveScript_t76914B03C2A846559043BB4F00C26DD587ABB133* ___U3CU3E4__this_3;
};

// WaveCounter/<winSet>d__9
struct U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060  : public RuntimeObject
{
	// System.Int32 WaveCounter/<winSet>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WaveCounter/<winSet>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.GameObject WaveCounter/<winSet>d__9::window
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___window_2;
	// WaveCounter WaveCounter/<winSet>d__9::<>4__this
	WaveCounter_t158BBB4A45BBB53252219C66C5B4E118812B41DF* ___U3CU3E4__this_3;
};

// brokenTank/<destroySelf>d__1
struct U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A  : public RuntimeObject
{
	// System.Int32 brokenTank/<destroySelf>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object brokenTank/<destroySelf>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// brokenTank brokenTank/<destroySelf>d__1::<>4__this
	brokenTank_t1C334C4E0F14C3812606EBA516B6BF20C6CE0415* ___U3CU3E4__this_2;
};

// powerUp/<p1>d__9
struct U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110  : public RuntimeObject
{
	// System.Int32 powerUp/<p1>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object powerUp/<p1>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// powerUp powerUp/<p1>d__9::<>4__this
	powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* ___U3CU3E4__this_2;
};

// powerUp/<p2>d__10
struct U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1  : public RuntimeObject
{
	// System.Int32 powerUp/<p2>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object powerUp/<p2>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// powerUp powerUp/<p2>d__10::<>4__this
	powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* ___U3CU3E4__this_2;
};

// powerUp/<spawnPowerUp>d__7
struct U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6  : public RuntimeObject
{
	// System.Int32 powerUp/<spawnPowerUp>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object powerUp/<spawnPowerUp>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// powerUp powerUp/<spawnPowerUp>d__7::<>4__this
	powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* ___U3CU3E4__this_2;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Boss
struct Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody Boss::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_4;
	// UnityEngine.UI.Slider Boss::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_5;
	// UnityEngine.GameObject Boss::hitPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hitPrefab_6;
	// UnityEngine.GameObject Boss::sliderObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sliderObj_7;
	// UnityEngine.GameObject Boss::healthbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___healthbar_8;
	// UnityEngine.Canvas Boss::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_9;
	// UnityEngine.Vector3 Boss::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_10;
	// System.Single Boss::moveSpeed
	float ___moveSpeed_11;
	// UnityEngine.GameObject Boss::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_12;
	// UnityEngine.GameObject Boss::PlayerScore
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlayerScore_13;
	// TMPro.TMP_Text Boss::score
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___score_14;
	// System.Int32 Boss::count
	int32_t ___count_15;
	// UnityEngine.Animator Boss::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_16;
	// UnityEngine.GameObject Boss::deadBoss
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___deadBoss_17;
	// System.Boolean Boss::wait
	bool ___wait_18;
	// UnityEngine.GameObject Boss::GameWinObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameWinObj_19;
};

// BulletMovement
struct BulletMovement_t3F35F23E35D73AE0EC4D32389BDFDCA6727AB967  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody BulletMovement::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_4;
	// System.Single BulletMovement::force
	float ___force_5;
};

// ButtonScript
struct ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ButtonScript::MainMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MainMenu_4;
	// UnityEngine.GameObject ButtonScript::GameOverWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameOverWindow_5;
	// UnityEngine.UI.Button ButtonScript::autoButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___autoButton_6;
	// UnityEngine.UI.Button ButtonScript::manualButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___manualButton_7;
	// TMPro.TMP_Text ButtonScript::HighScore
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___HighScore_8;
	// TMPro.TMP_Text ButtonScript::Score
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___Score_9;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody Enemy::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_4;
	// UnityEngine.UI.Slider Enemy::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_5;
	// UnityEngine.GameObject Enemy::hitPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hitPrefab_6;
	// UnityEngine.GameObject Enemy::healthbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___healthbar_7;
	// UnityEngine.GameObject Enemy::PlayerScore
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlayerScore_8;
	// UnityEngine.Canvas Enemy::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_9;
	// UnityEngine.Vector3 Enemy::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_10;
	// System.Single Enemy::moveSpeed
	float ___moveSpeed_11;
	// TMPro.TMP_Text Enemy::score
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___score_12;
	// System.Int32 Enemy::count
	int32_t ___count_13;
	// UnityEngine.Animator Enemy::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_14;
	// UnityEngine.GameObject Enemy::brokenTank
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___brokenTank_15;
	// System.Boolean Enemy::isHit
	bool ___isHit_16;
};

// GameWon
struct GameWon_tFD8CC92DF92A67104423D051F204F04780F0065F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameWon::WinWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WinWindow_4;
	// UnityEngine.GameObject GameWon::BackgorundMusic
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BackgorundMusic_5;
	// UnityEngine.AudioClip GameWon::audio
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audio_6;
	// TMPro.TMP_Text GameWon::Score
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___Score_7;
	// TMPro.TMP_Text GameWon::HighScore
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___HighScore_8;
};

// GunMode
struct GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GunMode::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_4;
	// UnityEngine.GameObject GunMode::muzzlePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___muzzlePrefab_5;
	// UnityEngine.GameObject GunMode::tank
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tank_6;
	// UnityEngine.UI.Button GunMode::shootButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___shootButton_7;
	// UnityEngine.Rigidbody GunMode::tankRB
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___tankRB_8;
	// UnityEngine.GameObject GunMode::gunMode
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gunMode_9;
	// UnityEngine.Vector3 GunMode::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_10;
	// System.String GunMode::Mode
	String_t* ___Mode_11;
	// System.Boolean GunMode::wait
	bool ___wait_12;
	// System.Boolean GunMode::auto
	bool ___auto_13;
	// System.Int32 GunMode::bulletCount
	int32_t ___bulletCount_14;
};

// InstantiateEnemy
struct InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] InstantiateEnemy::enemy
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemy_4;
	// System.Single[] InstantiateEnemy::positions
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___positions_5;
	// System.Boolean InstantiateEnemy::isSpawning
	bool ___isSpawning_6;
	// System.Single InstantiateEnemy::waitTime
	float ___waitTime_7;
	// TMPro.TMP_Text InstantiateEnemy::score
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___score_8;
	// System.Boolean InstantiateEnemy::isActive
	bool ___isActive_9;
	// UnityEngine.GameObject InstantiateEnemy::boss
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boss_10;
	// System.Boolean InstantiateEnemy::spawBoss
	bool ___spawBoss_11;
};

// PlayerControls
struct PlayerControls_t7EFF800E1E7E86137BD4DBD2F5C5D16BD2CA4D77  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody PlayerControls::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_4;
	// UnityEngine.Vector3 PlayerControls::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_5;
	// UnityEngine.UI.Slider PlayerControls::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_6;
	// UnityEngine.GameObject PlayerControls::healthbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___healthbar_7;
	// UnityEngine.GameObject PlayerControls::PlayerScore
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlayerScore_8;
	// UnityEngine.Canvas PlayerControls::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_9;
	// UnityEngine.Vector2 PlayerControls::startTouchPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startTouchPosition_10;
	// UnityEngine.Vector2 PlayerControls::endTouchPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endTouchPosition_11;
};

// PowerUpRotation
struct PowerUpRotation_t7C735F9591DD1AB71D767D533FEB9EB90DD08C70  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PowerUpRotation::rotationSpeed
	float ___rotationSpeed_4;
	// System.Boolean PowerUpRotation::reverse
	bool ___reverse_5;
};

// PowerUpWindow
struct PowerUpWindow_t8267101FBCCD4E0B423AC61137E94BA97AE41EC8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text PowerUpWindow::powerUpText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___powerUpText_4;
	// UnityEngine.GameObject PowerUpWindow::powerUpWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___powerUpWindow_5;
	// System.Boolean PowerUpWindow::isSpawning
	bool ___isSpawning_6;
};

// ResetPref
struct ResetPref_t847D122D9F8DFF861116A1A8A53CAE24679CAE09  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SetActiveScript
struct SetActiveScript_t76914B03C2A846559043BB4F00C26DD587ABB133  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SetActiveScript::isActive
	bool ___isActive_4;
	// UnityEngine.GameObject SetActiveScript::waveWin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___waveWin_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WaveCounter
struct WaveCounter_t158BBB4A45BBB53252219C66C5B4E118812B41DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject WaveCounter::waveWin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___waveWin_4;
	// UnityEngine.GameObject WaveCounter::startWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___startWindow_5;
	// TMPro.TMP_Text WaveCounter::score
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___score_6;
	// TMPro.TMP_Text WaveCounter::waveCounter
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___waveCounter_7;
	// System.Boolean WaveCounter::isActive
	bool ___isActive_8;
	// System.Boolean WaveCounter::isEnabled
	bool ___isEnabled_9;
	// System.Single WaveCounter::moveSpeed
	float ___moveSpeed_10;
};

// brokenTank
struct brokenTank_t1C334C4E0F14C3812606EBA516B6BF20C6CE0415  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// fire
struct fire_t681E11C61B81708A2984605BE72569220ED9CB42  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single fire::lifeTime
	float ___lifeTime_4;
};

// gameOver
struct gameOver_t3670402F4842B7D066984C630B08710DA2A6D780  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject gameOver::gameOverWin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameOverWin_4;
	// TMPro.TMP_Text gameOver::score
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___score_5;
	// TMPro.TMP_Text gameOver::Hscore
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___Hscore_6;
	// UnityEngine.GameObject gameOver::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_7;
	// UnityEngine.GameObject gameOver::tank
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tank_8;
};

// powerUp
struct powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject powerUp::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_4;
	// UnityEngine.GameObject powerUp::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_5;
	// System.Single[] powerUp::positions
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___positions_6;
	// System.Boolean powerUp::isSpawning
	bool ___isSpawning_7;
	// System.String[] powerUp::tags
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tags_8;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
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

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
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
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* Component_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m1B905B41EF4264E9395373B64D57297468EE828C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Boss::shootClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_shootClick_m9DA6B13AC281BB0256FE855262BCA3837E9E4A82 (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Boss::shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_shoot_m662C614774525D9BCC87A5728E933543FCB63B9C (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Boss/<shoot>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshootU3Ed__20__ctor_m44E3B0DABF2D40249DA6A021CAAF34817EFAA762 (U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator brokenTank::destroySelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* brokenTank_destroySelf_mE91656E2CE83C71CA2928F71ABB47B0EA3459C70 (brokenTank_t1C334C4E0F14C3812606EBA516B6BF20C6CE0415* __this, const RuntimeMethod* method) ;
// System.Void brokenTank/<destroySelf>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdestroySelfU3Ed__1__ctor_m62605A61461B2EB4342FC49E50CE936C492ADCE9 (U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___key0, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m4A9B511E92C8BDEBB64D9B2557126FB030895A4D (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Enemy::animateDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_animateDeath_m127FB27AC3635549C2D675CA74E09F263B858563 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Void Enemy/<animateDeath>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CanimateDeathU3Ed__17__ctor_m844DC37EADC7A300C4769F0E3B64C08FA8D74FF6 (U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void gameOver::onGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameOver_onGameOver_m170C5B2E501CF711B585E1A795E05D22BDE425B0 (gameOver_t3670402F4842B7D066984C630B08710DA2A6D780* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_m7687D47AE64203DB76AC6754EC276DFFD0DFAB0E (const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GunMode::shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GunMode_shoot_mCB029F43249E4584C9AC43239222582AA6B894AF (GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* __this, const RuntimeMethod* method) ;
// System.Void GunMode/<shoot>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshootU3Ed__14__ctor_mB0BA6AAF372822E5BCD3323159A87E51CCECA9E7 (U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GunMode::shootClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunMode_shootClick_m5340ACCE8E815F9A67317081F6435E751ED2EA35 (GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB (String_t* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator InstantiateEnemy::spawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstantiateEnemy_spawnEnemy_m74F67742E687CEF7658A8122011790416A28A635 (InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator InstantiateEnemy::instantiateBoss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstantiateEnemy_instantiateBoss_m7DD1713BCC44AE18199C913D511378BD7FD3B2BA (InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* __this, const RuntimeMethod* method) ;
// System.Void InstantiateEnemy/<spawnEnemy>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnEnemyU3Ed__10__ctor_m0F03D9FD9BB3F13567DA9BAE016476111A7B5238 (U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void InstantiateEnemy/<instantiateBoss>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CinstantiateBossU3Ed__11__ctor_m4AA7A5FBCE252AD889F1E5FC2DC690E653A56867 (U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285 (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator powerUp::spawnPowerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* powerUp_spawnPowerUp_mA09F601FE646532D2119220EEE69EB66C52C7BF3 (powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* __this, const RuntimeMethod* method) ;
// System.Void powerUp/<spawnPowerUp>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnPowerUpU3Ed__7__ctor_mAA4F5B9AE31527C328507E1BC1E3FCEC21886A82 (U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator powerUp::p1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* powerUp_p1_m63EDCDB3F9752BAC5DEAE2FB148568B1F786E3EE (powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator powerUp::p2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* powerUp_p2_mD43C14D86210E7D9B3AF35EFEC7B2F369AC1D015 (powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void powerUp/<p1>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cp1U3Ed__9__ctor_m686F453316DA7127E68D54F37E57C498CE3F1DF8 (U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void powerUp/<p2>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cp2U3Ed__10__ctor_mCCB242E2CBCA97AF1B09C8BA7D5ABAE7C4F2D131 (U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mB2E2DFC9835043E9EA38AB359AEBDD53CE90A690 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Collections.IEnumerator PowerUpWindow::powerUpWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PowerUpWindow_powerUpWin_m9E186D4292AE71E2C6C29835A0E5247E03D321B7 (PowerUpWindow_t8267101FBCCD4E0B423AC61137E94BA97AE41EC8* __this, const RuntimeMethod* method) ;
// System.Void PowerUpWindow/<powerUpWin>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpowerUpWinU3Ed__5__ctor_m6C15871730492DFD1383B459E7B30D35C528DE59 (U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SetActiveScript::winSet(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetActiveScript_winSet_mC079FB6232B78E7256E77CDCDE310BF90CD4518F (SetActiveScript_t76914B03C2A846559043BB4F00C26DD587ABB133* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___window0, const RuntimeMethod* method) ;
// System.Void SetActiveScript/<winSet>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwinSetU3Ed__3__ctor_mD4AE2E7047A60A7D08ECD43140B42CC6DCFDAEF9 (U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WaveCounter::winSet(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaveCounter_winSet_m812E096403A7F566E081AD1B504ADDDD00AB1F8B (WaveCounter_t158BBB4A45BBB53252219C66C5B4E118812B41DF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___window0, const RuntimeMethod* method) ;
// System.Void WaveCounter/<winSet>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwinSetU3Ed__9__ctor_mDC2838CAD64E3C58220ACBB65CED7173F496E499 (U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
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
// System.Void Boss::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_OnEnable_m1FD186C971DA902A1BD1F69972515AE37A397D07 (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m1B905B41EF4264E9395373B64D57297468EE828C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFDCA766ED2563D2C8C45D917886EBC27FB44886);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_16), (void*)L_0);
		// rb = gameObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_1, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_2);
		// healthbar = gameObject.transform.Find("Healthbar").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, _stringLiteralCFDCA766ED2563D2C8C45D917886EBC27FB44886, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		__this->___healthbar_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___healthbar_8), (void*)L_6);
		// canvas = healthbar.GetComponent<Canvas>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___healthbar_8;
		NullCheck(L_7);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_8;
		L_8 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_7, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		__this->___canvas_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_9), (void*)L_8);
		// slider = canvas.GetComponentInChildren<Slider>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_9 = __this->___canvas_9;
		NullCheck(L_9);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10;
		L_10 = Component_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m1B905B41EF4264E9395373B64D57297468EE828C(L_9, Component_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m1B905B41EF4264E9395373B64D57297468EE828C_RuntimeMethod_var);
		__this->___slider_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_5), (void*)L_10);
		// canvas.worldCamera = Camera.main;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_11 = __this->___canvas_9;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_11);
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(L_11, L_12, NULL);
		// PlayerScore = GameObject.Find("Score");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, NULL);
		__this->___PlayerScore_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PlayerScore_13), (void*)L_13);
		// score = PlayerScore.GetComponent<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___PlayerScore_13;
		NullCheck(L_14);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_15;
		L_15 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_14, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		__this->___score_14 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_14), (void*)L_15);
		// count=Int32.Parse(score.text);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_16 = __this->___score_14;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_16);
		int32_t L_18;
		L_18 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_17, NULL);
		__this->___count_15 = L_18;
		// }
		return;
	}
}
// System.Void Boss::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_FixedUpdate_mB1C258973287C1772BBD854CB2133C98F0179BBE (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string p1Active = PlayerPrefs.GetString("P1", "InActive");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489, _stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6, NULL);
		// if (p1Active == "InActive")
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6, NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// rb.velocity = transform.right * moveSpeed;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rb_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_3, NULL);
		float L_5 = __this->___moveSpeed_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		NullCheck(L_2);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_2, L_6, NULL);
	}

IL_003c:
	{
		// shootClick();
		Boss_shootClick_m9DA6B13AC281BB0256FE855262BCA3837E9E4A82(__this, NULL);
		// position = rb.position;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___rb_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_7, NULL);
		__this->___position_10 = L_8;
		// }
		return;
	}
}
// System.Void Boss::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_OnCollisionEnter_m739325C72536B1EEF9BC2EC9B119AB22E9D0940E (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD11843990CBAB91C6E830DA581D13285E25AB8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA94BB1427D101F2BCDF466C2A353E67C017F39);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (collision.gameObject.CompareTag("Bullet") && collision.gameObject.name!="EnemyBullet(Clone)")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, NULL);
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___collision0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		bool L_6;
		L_6 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_5, _stringLiteralBD11843990CBAB91C6E830DA581D13285E25AB8F, NULL);
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		// slider.value -= 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___slider_5;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = L_7;
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_8, ((float)il2cpp_codegen_subtract(L_9, (1.0f))));
		// count++;
		int32_t L_10 = __this->___count_15;
		__this->___count_15 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// score.text = count.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11 = __this->___score_14;
		int32_t* L_12 = (&__this->___count_15);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_12, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_11, L_13);
	}

IL_0064:
	{
		// if (slider.value <= 0)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___slider_5;
		NullCheck(L_14);
		float L_15;
		L_15 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_14);
		if ((!(((float)L_15) <= ((float)(0.0f)))))
		{
			goto IL_00d8;
		}
	}
	{
		// Instantiate(deadBoss, position, Quaternion.Euler(0f, 90f, 0f));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___deadBoss_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___position_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (90.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_16, L_17, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// PlayerPrefs.SetString("Won", "true");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralEFA94BB1427D101F2BCDF466C2A353E67C017F39, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		// GameObject[] objs = GameObject.FindGameObjectsWithTag("Finish");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20;
		L_20 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, NULL);
		// foreach (var obj in objs)
		V_0 = L_20;
		V_1 = 0;
		goto IL_00c7;
	}

IL_00ba:
	{
		// foreach (var obj in objs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		// obj.SetActive(false);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00c7:
	{
		// foreach (var obj in objs)
		int32_t L_26 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_00ba;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_28, NULL);
	}

IL_00d8:
	{
		// if (collision.gameObject.CompareTag("Finish"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_29 = ___collision0;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_29, NULL);
		NullCheck(L_30);
		bool L_31;
		L_31 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_30, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, NULL);
		if (!L_31)
		{
			goto IL_00f5;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_32, NULL);
	}

IL_00f5:
	{
		// }
		return;
	}
}
// System.Void Boss::shootClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss_shootClick_m9DA6B13AC281BB0256FE855262BCA3837E9E4A82 (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject[] bullets = GameObject.FindGameObjectsWithTag("Bullet");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, NULL);
		// int bulletCount = bullets.Length;
		NullCheck(L_0);
		// if (bulletCount <= 5 && wait == false)
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) > ((int32_t)5)))
		{
			goto IL_0024;
		}
	}
	{
		bool L_1 = __this->___wait_18;
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		// StartCoroutine(shoot());
		RuntimeObject* L_2;
		L_2 = Boss_shoot_m662C614774525D9BCC87A5728E933543FCB63B9C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Boss::shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss_shoot_m662C614774525D9BCC87A5728E933543FCB63B9C (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5* L_0 = (U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5*)il2cpp_codegen_object_new(U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CshootU3Ed__20__ctor_m44E3B0DABF2D40249DA6A021CAAF34817EFAA762(L_0, 0, NULL);
		U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Boss::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss__ctor_m000CFB50E293CE96995ADD0E5395D4B830DF7EAF (Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* __this, const RuntimeMethod* method) 
{
	{
		// float moveSpeed = 3f;
		__this->___moveSpeed_11 = (3.0f);
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
// System.Void Boss/<shoot>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshootU3Ed__20__ctor_m44E3B0DABF2D40249DA6A021CAAF34817EFAA762 (U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Boss/<shoot>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshootU3Ed__20_System_IDisposable_Dispose_m68E1CE5FC76D88A9BD5F088218AABF687FDC3A41 (U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Boss/<shoot>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CshootU3Ed__20_MoveNext_m66F8B6C6638C53EDA5E8D49C1E8D3C34AE9DF767 (U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5* __this, const RuntimeMethod* method) 
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
	Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// wait = true;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_4 = V_1;
		NullCheck(L_4);
		L_4->___wait_18 = (bool)1;
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Instantiate(bullet, new Vector3(position.x, 1.56363797f, position.z),Quaternion.Euler(0f,180f,0f));
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___bullet_12;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_8 = V_1;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&L_8->___position_10);
		float L_10 = L_9->___x_2;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_11 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&L_11->___position_10);
		float L_13 = L_12->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_10, (1.56363797f), L_13, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (180.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_7, L_14, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// wait = false;
		Boss_t4DBE208D2EA8221CCAD7D974BD8069279DB7CC35* L_17 = V_1;
		NullCheck(L_17);
		L_17->___wait_18 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Boss/<shoot>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CshootU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5D14352659F7D94C096578F8C97C2B9208C087AF (U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Boss/<shoot>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshootU3Ed__20_System_Collections_IEnumerator_Reset_m3FCC561DD46D486FD997A7BFA32774262DEEB0BB (U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CshootU3Ed__20_System_Collections_IEnumerator_Reset_m3FCC561DD46D486FD997A7BFA32774262DEEB0BB_RuntimeMethod_var)));
	}
}
// System.Object Boss/<shoot>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CshootU3Ed__20_System_Collections_IEnumerator_get_Current_m2F747C4ACB7F0D90C0CAA3758EDFB02DA079D51D (U3CshootU3Ed__20_tB15D9E29DC638762D49F3C5CDD130D76F6E019C5* __this, const RuntimeMethod* method) 
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
// System.Void brokenTank::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void brokenTank_OnEnable_mE479B00034B26B09DE43473EFA453E242DDC214A (brokenTank_t1C334C4E0F14C3812606EBA516B6BF20C6CE0415* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(destroySelf());
		RuntimeObject* L_0;
		L_0 = brokenTank_destroySelf_mE91656E2CE83C71CA2928F71ABB47B0EA3459C70(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator brokenTank::destroySelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* brokenTank_destroySelf_mE91656E2CE83C71CA2928F71ABB47B0EA3459C70 (brokenTank_t1C334C4E0F14C3812606EBA516B6BF20C6CE0415* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A* L_0 = (U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A*)il2cpp_codegen_object_new(U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CdestroySelfU3Ed__1__ctor_m62605A61461B2EB4342FC49E50CE936C492ADCE9(L_0, 0, NULL);
		U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void brokenTank::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void brokenTank__ctor_m17CC5ED2FF61321A8AABDDFBD2DE359187B13738 (brokenTank_t1C334C4E0F14C3812606EBA516B6BF20C6CE0415* __this, const RuntimeMethod* method) 
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
// System.Void brokenTank/<destroySelf>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdestroySelfU3Ed__1__ctor_m62605A61461B2EB4342FC49E50CE936C492ADCE9 (U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void brokenTank/<destroySelf>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdestroySelfU3Ed__1_System_IDisposable_Dispose_m3B5D18627CA281AD66712167E2F9C2A98E7E7C03 (U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean brokenTank/<destroySelf>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CdestroySelfU3Ed__1_MoveNext_m970DF7AD1B4AF86F12EAD39C8E3728BCFA19C59F (U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	brokenTank_t1C334C4E0F14C3812606EBA516B6BF20C6CE0415* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		brokenTank_t1C334C4E0F14C3812606EBA516B6BF20C6CE0415* L_1 = __this->___U3CU3E4__this_2;
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
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(gameObject);
		brokenTank_t1C334C4E0F14C3812606EBA516B6BF20C6CE0415* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object brokenTank/<destroySelf>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CdestroySelfU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF69EF64A7FB95773D74D796CEA6883133F7225FC (U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void brokenTank/<destroySelf>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CdestroySelfU3Ed__1_System_Collections_IEnumerator_Reset_m4BDFE6C88A0F649BA4A707BE4A1E21887BD19146 (U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CdestroySelfU3Ed__1_System_Collections_IEnumerator_Reset_m4BDFE6C88A0F649BA4A707BE4A1E21887BD19146_RuntimeMethod_var)));
	}
}
// System.Object brokenTank/<destroySelf>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CdestroySelfU3Ed__1_System_Collections_IEnumerator_get_Current_m4B50B0757740AC6320664A1D8C77ED27F9A07F60 (U3CdestroySelfU3Ed__1_t0EEC7E1C43239ED925B7AF16972A18B311533E0A* __this, const RuntimeMethod* method) 
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
// System.Void BulletMovement::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletMovement_OnEnable_mB9758273FB47A40E0904783138A252EAE8857765 (BulletMovement_t3F35F23E35D73AE0EC4D32389BDFDCA6727AB967* __this, const RuntimeMethod* method) 
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
		__this->___rb_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_0);
		// rb.AddForce(transform.forward * force);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		float L_4 = __this->___force_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_1);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_1, L_5, NULL);
		// }
		return;
	}
}
// System.Void BulletMovement::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletMovement_OnCollisionEnter_m60835E87E18C2BC3167EE917B02EFF114BEF6A60 (BulletMovement_t3F35F23E35D73AE0EC4D32389BDFDCA6727AB967* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8ADF54F07975BC53E74F0B2D566CC0D30E553CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD11843990CBAB91C6E830DA581D13285E25AB8F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Boundry") || collision.gameObject.CompareTag("Bullet"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteralA8ADF54F07975BC53E74F0B2D566CC0D30E553CE, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___collision0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_4, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}

IL_0024:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
	}

IL_002f:
	{
		// if (collision.gameObject.CompareTag("Enemy") && this.name!="EnemyBullet(Clone)")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_7 = ___collision0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_8, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		bool L_11;
		L_11 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_10, _stringLiteralBD11843990CBAB91C6E830DA581D13285E25AB8F, NULL);
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_12, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void BulletMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletMovement__ctor_mD5DFBA6355AB306AFF5247CD3F1A6683000BA3B6 (BulletMovement_t3F35F23E35D73AE0EC4D32389BDFDCA6727AB967* __this, const RuntimeMethod* method) 
{
	{
		// float force = 1000f;
		__this->___force_5 = (1000.0f);
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
// System.Void ButtonScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_Start_m8B6809AE1C4A4E3B431BBC17203BE7FE8C23DFBC (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HighScore.text = PlayerPrefs.GetString("HighScore", "0");
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___HighScore_8;
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void ButtonScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_Update_mC431CC6750CD25E81253BED68877702C3228F8C7 (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84B7AF18301C4FCEAF238EFECCD57132EA7A8123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5288D4644662DCD951D0B06C2797E21DC4E6C40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF97AAD111235153D30EDA9E49B8CD09FF5CAD86);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		// string Mode = PlayerPrefs.GetString("Mode","Manual");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(_stringLiteralFF97AAD111235153D30EDA9E49B8CD09FF5CAD86, _stringLiteralF5288D4644662DCD951D0B06C2797E21DC4E6C40, NULL);
		// if (Mode == "Auto")
		String_t* L_1 = L_0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral84B7AF18301C4FCEAF238EFECCD57132EA7A8123, NULL);
		G_B1_0 = L_1;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_003e;
		}
	}
	{
		// autoButton.image.enabled = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___autoButton_6;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_3, NULL);
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
		// manualButton.image.enabled = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___manualButton_7;
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_5, NULL);
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		G_B2_0 = G_B1_0;
	}

IL_003e:
	{
		// if (Mode == "Manual")
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(G_B2_0, _stringLiteralF5288D4644662DCD951D0B06C2797E21DC4E6C40, NULL);
		if (!L_7)
		{
			goto IL_006c;
		}
	}
	{
		// autoButton.image.enabled = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___autoButton_6;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_8, NULL);
		NullCheck(L_9);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, (bool)0, NULL);
		// manualButton.image.enabled = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___manualButton_7;
		NullCheck(L_10);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11;
		L_11 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_10, NULL);
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)1, NULL);
	}

IL_006c:
	{
		// int result = Int32.Parse(Score.text);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_12 = __this->___Score_9;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_12);
		int32_t L_14;
		L_14 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_13, NULL);
		// int high = Int32.Parse(HighScore.text);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_15 = __this->___HighScore_8;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_15);
		int32_t L_17;
		L_17 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_16, NULL);
		V_0 = L_17;
		// if (result > high)
		int32_t L_18 = V_0;
		if ((((int32_t)L_14) <= ((int32_t)L_18)))
		{
			goto IL_00a5;
		}
	}
	{
		// PlayerPrefs.SetString("HighScore", Score.text);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_19 = __this->___Score_9;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_19);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, L_20, NULL);
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void ButtonScript::onPlayClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_onPlayClicked_m9BB33DF59BF09C3798843287D0E5F42C4DEF886C (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	{
		// MainMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MainMenu_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::onRetryClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_onRetryClick_m9DC632971058022D9AA96DDF39F5EFA7B9A4D08A (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameOverWindow.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___GameOverWindow_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::onQuitClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_onQuitClicked_mEA717B77F4469414D83513C343F1DD04658CAFFF (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::manualClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_manualClicked_m27F8169E72B5549EC03ED0939B2E2BA03C824B86 (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E6D77E891CD1BB73AB7DF5172D2FE421111E71A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5288D4644662DCD951D0B06C2797E21DC4E6C40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF97AAD111235153D30EDA9E49B8CD09FF5CAD86);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Manuak Clicked");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8E6D77E891CD1BB73AB7DF5172D2FE421111E71A, NULL);
		// PlayerPrefs.SetString("Mode", "Manual");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralFF97AAD111235153D30EDA9E49B8CD09FF5CAD86, _stringLiteralF5288D4644662DCD951D0B06C2797E21DC4E6C40, NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::autoClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_autoClicked_m1169F04BEB51CBC617F5E34F615E0FA17CD2C02C (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84B7AF18301C4FCEAF238EFECCD57132EA7A8123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF97AAD111235153D30EDA9E49B8CD09FF5CAD86);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("Mode", "Auto");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralFF97AAD111235153D30EDA9E49B8CD09FF5CAD86, _stringLiteral84B7AF18301C4FCEAF238EFECCD57132EA7A8123, NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::onContinueClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_onContinueClicked_m75F07D91CE1B6227F1131051881677161A019E27 (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B, NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript__ctor_m8877AA5F1151123B36B4513BD26E3547494C3FB8 (ButtonScript_t2941A7ECA4C66A13E86D78F14169E89857C0D026* __this, const RuntimeMethod* method) 
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
// System.Void Enemy::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnEnable_m2ABE6B2A5E1E193C6F9C780D165B75A1D9C9E140 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m1B905B41EF4264E9395373B64D57297468EE828C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFDCA766ED2563D2C8C45D917886EBC27FB44886);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_14), (void*)L_0);
		// rb = gameObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_1, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_2);
		// healthbar = gameObject.transform.Find("Healthbar").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, _stringLiteralCFDCA766ED2563D2C8C45D917886EBC27FB44886, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		__this->___healthbar_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___healthbar_7), (void*)L_6);
		// canvas = healthbar.GetComponent<Canvas>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___healthbar_7;
		NullCheck(L_7);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_8;
		L_8 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_7, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		__this->___canvas_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_9), (void*)L_8);
		// slider = canvas.GetComponentInChildren<Slider>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_9 = __this->___canvas_9;
		NullCheck(L_9);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10;
		L_10 = Component_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m1B905B41EF4264E9395373B64D57297468EE828C(L_9, Component_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m1B905B41EF4264E9395373B64D57297468EE828C_RuntimeMethod_var);
		__this->___slider_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_5), (void*)L_10);
		// canvas.worldCamera = Camera.main;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_11 = __this->___canvas_9;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_11);
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(L_11, L_12, NULL);
		// PlayerScore = GameObject.Find("Score");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, NULL);
		__this->___PlayerScore_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PlayerScore_8), (void*)L_13);
		// score = PlayerScore.GetComponent<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___PlayerScore_8;
		NullCheck(L_14);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_15;
		L_15 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_14, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		__this->___score_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_12), (void*)L_15);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_m4149CFC3AC081AF0D654D9BDB6BC9B5540CE03D8 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral024C60BC25F851E8B9F5531CC461C68CD60D3F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982);
		s_Il2CppMethodInitialized = true;
	}
	{
		// count = Int32.Parse(score.text);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___score_12;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_0);
		int32_t L_2;
		L_2 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_1, NULL);
		__this->___count_13 = L_2;
		// string wave = PlayerPrefs.GetString("Wave");
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral024C60BC25F851E8B9F5531CC461C68CD60D3F30, NULL);
		// moveSpeed=PlayerPrefs.GetFloat("MoveSpeed", 3f);
		float L_4;
		L_4 = PlayerPrefs_GetFloat_m4A9B511E92C8BDEBB64D9B2557126FB030895A4D(_stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982, (3.0f), NULL);
		__this->___moveSpeed_11 = L_4;
		// Debug.Log("MoveSpeed" + moveSpeed);
		float* L_5 = (&__this->___moveSpeed_11);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// }
		return;
	}
}
// System.Void Enemy::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FixedUpdate_mC96E5B789335D23FC34546AD504EEBB0F054490B (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string p1Active = PlayerPrefs.GetString("P1", "InActive");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489, _stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6, NULL);
		// if (p1Active == "InActive")
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6, NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// rb.velocity = transform.forward * moveSpeed;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rb_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		float L_5 = __this->___moveSpeed_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		NullCheck(L_2);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_2, L_6, NULL);
	}

IL_003c:
	{
		// position = rb.position;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___rb_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_7, NULL);
		__this->___position_10 = L_8;
		// }
		return;
	}
}
// System.Void Enemy::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnCollisionEnter_mA8E3F644B8068B1BA5496C6AD2E43A65EBA978DB (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string boss = PlayerPrefs.GetString("Boss");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2, NULL);
		// if (collision.gameObject.CompareTag("Bullet"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___collision0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_2, _stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// slider.value -= 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___slider_5;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, ((float)il2cpp_codegen_subtract(L_6, (1.0f))));
	}

IL_0034:
	{
		// if (slider.value <= 0)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___slider_5;
		NullCheck(L_7);
		float L_8;
		L_8 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_7);
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		// if (isHit == false){
		bool L_9 = __this->___isHit_16;
		if (L_9)
		{
			goto IL_0072;
		}
	}
	{
		// Instantiate(hitPrefab, position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___hitPrefab_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___position_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_10, L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// StartCoroutine(animateDeath());
		RuntimeObject* L_14;
		L_14 = Enemy_animateDeath_m127FB27AC3635549C2D675CA74E09F263B858563(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_15;
		L_15 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_14, NULL);
	}

IL_0072:
	{
		// if (collision.gameObject.CompareTag("Finish"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_16 = ___collision0;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_16, NULL);
		NullCheck(L_17);
		bool L_18;
		L_18 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_17, _stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, NULL);
		if (!L_18)
		{
			goto IL_008f;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_19, NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Enemy::animateDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_animateDeath_m127FB27AC3635549C2D675CA74E09F263B858563 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0* L_0 = (U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0*)il2cpp_codegen_object_new(U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CanimateDeathU3Ed__17__ctor_m844DC37EADC7A300C4769F0E3B64C08FA8D74FF6(L_0, 0, NULL);
		U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// float moveSpeed = 3f;
		__this->___moveSpeed_11 = (3.0f);
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
// System.Void Enemy/<animateDeath>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CanimateDeathU3Ed__17__ctor_m844DC37EADC7A300C4769F0E3B64C08FA8D74FF6 (U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Enemy/<animateDeath>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CanimateDeathU3Ed__17_System_IDisposable_Dispose_m7A23BA238E96BE9BA2746359E2FD36B2979FF36E (U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Enemy/<animateDeath>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CanimateDeathU3Ed__17_MoveNext_mEC672585939A1D35B50D10C4320C493FB6A22C7C (U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isHit = true;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_4 = V_1;
		NullCheck(L_4);
		L_4->___isHit_16 = (bool)1;
		// count++;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_5 = V_1;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___count_13;
		NullCheck(L_5);
		L_5->___count_13 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// if (animator)
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_8 = V_1;
		NullCheck(L_8);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = L_8->___animator_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		// animator.SetBool("isDead", true);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_11 = V_1;
		NullCheck(L_11);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = L_11->___animator_14;
		NullCheck(L_12);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_12, _stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298, (bool)1, NULL);
		goto IL_00ac;
	}

IL_0056:
	{
		// count += 2;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_13 = V_1;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___count_13;
		NullCheck(L_13);
		L_13->___count_13 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		// score.text = count.ToString();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_16 = V_1;
		NullCheck(L_16);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_17 = L_16->___score_12;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_18 = V_1;
		NullCheck(L_18);
		int32_t* L_19 = (&L_18->___count_13);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_20);
		// gameObject.SetActive(false);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_21 = V_1;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// Instantiate(brokenTank, position, Quaternion.Euler(0f, 180, 0f));
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_23 = V_1;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23->___brokenTank_15;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_25 = V_1;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = L_25->___position_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (180.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_24, L_26, L_27, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
	}

IL_00ac:
	{
		// score.text = count.ToString();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_29 = V_1;
		NullCheck(L_29);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_30 = L_29->___score_12;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_31 = V_1;
		NullCheck(L_31);
		int32_t* L_32 = (&L_31->___count_13);
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_32, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_30, L_33);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_34 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_34, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_34);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00db:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(gameObject);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_35 = V_1;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_36, NULL);
		// isHit = false;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_37 = V_1;
		NullCheck(L_37);
		L_37->___isHit_16 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<animateDeath>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CanimateDeathU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAB5EA9367C7B80EFB7C0E9BB3B698274C94FEB55 (U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Enemy/<animateDeath>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CanimateDeathU3Ed__17_System_Collections_IEnumerator_Reset_mB6A4F7C74F6CC8526BDDFD0FC95A2DB4783B99E3 (U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CanimateDeathU3Ed__17_System_Collections_IEnumerator_Reset_mB6A4F7C74F6CC8526BDDFD0FC95A2DB4783B99E3_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<animateDeath>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CanimateDeathU3Ed__17_System_Collections_IEnumerator_get_Current_mAADD43547E06AA93380948C2518270DC5358654C (U3CanimateDeathU3Ed__17_t9A2C56867E0F9A6EE5CBF0A4A2D250F98A2D3DD0* __this, const RuntimeMethod* method) 
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
// System.Void fire::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fire_Awake_m1E0D3C4ED92FDEDBBBBEB5A1AAA2E58BE2666B3A (fire_t681E11C61B81708A2984605BE72569220ED9CB42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this.gameObject, lifeTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_1 = __this->___lifeTime_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void fire::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fire__ctor_m3336CE3A6910C1E508B4090B96DD12CBFBDF471B (fire_t681E11C61B81708A2984605BE72569220ED9CB42* __this, const RuntimeMethod* method) 
{
	{
		// public float lifeTime = 2.0f;
		__this->___lifeTime_4 = (2.0f);
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
// System.Void gameOver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameOver_Start_m967FC334A8E25A5B9B9688B0563FD54461380C17 (gameOver_t3670402F4842B7D066984C630B08710DA2A6D780* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void gameOver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameOver_Update_m3A02E965006741CB312EE01E76DE9D33DD710377 (gameOver_t3670402F4842B7D066984C630B08710DA2A6D780* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayerPrefs.GetString("GameOver")=="true")
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, NULL);
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// onGameOver();
		gameOver_onGameOver_m170C5B2E501CF711B585E1A795E05D22BDE425B0(__this, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void gameOver::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameOver_OnTriggerEnter_m3913FFEFC6EEB63B1294F037F494CF0A3A7DEE31 (gameOver_t3670402F4842B7D066984C630B08710DA2A6D780* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA94BB1427D101F2BCDF466C2A353E67C017F39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayerPrefs.GetString("Won")!="true")
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteralEFA94BB1427D101F2BCDF466C2A353E67C017F39, NULL);
		bool L_1;
		L_1 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// if (other.CompareTag("Enemy"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// onGameOver();
		gameOver_onGameOver_m170C5B2E501CF711B585E1A795E05D22BDE425B0(__this, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void gameOver::onGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameOver_onGameOver_m170C5B2E501CF711B585E1A795E05D22BDE425B0 (gameOver_t3670402F4842B7D066984C630B08710DA2A6D780* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// gameOverWin.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameOverWin_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// gameOverWin.GetComponent<AudioSource>().Play();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___gameOverWin_4;
		NullCheck(L_1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_1, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// GameObject[] objs = GameObject.FindGameObjectsWithTag("Finish");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3;
		L_3 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral7591C6B2C207685CBD36BB3D5ED56CC4ADA8FBD5, NULL);
		// foreach (var obj in objs)
		V_1 = L_3;
		V_2 = 0;
		goto IL_0038;
	}

IL_002b:
	{
		// foreach (var obj in objs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// obj.SetActive(false);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0038:
	{
		// foreach (var obj in objs)
		int32_t L_9 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_002b;
		}
	}
	{
		// player.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___player_7;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// tank.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___tank_8;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_m7687D47AE64203DB76AC6754EC276DFFD0DFAB0E(NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// int result = Int32.Parse(score.text);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_13 = __this->___score_5;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_13);
		int32_t L_15;
		L_15 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_14, NULL);
		// int high = Int32.Parse(Hscore.text);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_16 = __this->___Hscore_6;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_16);
		int32_t L_18;
		L_18 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_17, NULL);
		V_0 = L_18;
		// if (result > high)
		int32_t L_19 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)L_19)))
		{
			goto IL_0099;
		}
	}
	{
		// PlayerPrefs.SetString("HighScore", score.text);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_20 = __this->___score_5;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_20);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, L_21, NULL);
	}

IL_0099:
	{
		// GameObject[] enemiesActive = GameObject.FindGameObjectsWithTag("Enemy");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22;
		L_22 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		// foreach (GameObject enemy in enemiesActive)
		V_1 = L_22;
		V_2 = 0;
		goto IL_00b4;
	}

IL_00a8:
	{
		// foreach (GameObject enemy in enemiesActive)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		// Destroy(enemy);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_26, NULL);
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00b4:
	{
		// foreach (GameObject enemy in enemiesActive)
		int32_t L_28 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_29 = V_1;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00a8;
		}
	}
	{
		// }
		return;
	}
}
// System.Void gameOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameOver__ctor_mF000B3A3ADDC9EA1205A7DE6F857541BE373B537 (gameOver_t3670402F4842B7D066984C630B08710DA2A6D780* __this, const RuntimeMethod* method) 
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
// System.Void GameWon::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameWon_OnEnable_m8D96782A29E70C7BD3859ADF1ECE93FA53BA45B7 (GameWon_tFD8CC92DF92A67104423D051F204F04780F0065F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Score.text = PlayerPrefs.GetString("Score", "0");
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___Score_7;
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void GameWon::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameWon_LateUpdate_mAA234119B2B2653AA3FF3B6A9BF53F616167F58B (GameWon_tFD8CC92DF92A67104423D051F204F04780F0065F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA94BB1427D101F2BCDF466C2A353E67C017F39);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (PlayerPrefs.GetString("Won") == "true")
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteralEFA94BB1427D101F2BCDF466C2A353E67C017F39, NULL);
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (!L_1)
		{
			goto IL_00a5;
		}
	}
	{
		// WinWindow.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___WinWindow_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// AudioSource src = BackgorundMusic.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___BackgorundMusic_5;
		NullCheck(L_3);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_3, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		// src.clip = audio;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = __this->___audio_6;
		NullCheck(L_5);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_5, L_6, NULL);
		// src.Play();
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_m7687D47AE64203DB76AC6754EC276DFFD0DFAB0E(NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// int result = Int32.Parse(Score.text);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___Score_7;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_7);
		int32_t L_9;
		L_9 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_8, NULL);
		// int high = Int32.Parse(HighScore.text);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10 = __this->___HighScore_8;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_10);
		int32_t L_12;
		L_12 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_11, NULL);
		V_0 = L_12;
		// if (result > high)
		int32_t L_13 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)L_13)))
		{
			goto IL_0084;
		}
	}
	{
		// PlayerPrefs.SetString("HighScore", Score.text);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_14 = __this->___Score_7;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_14);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, L_15, NULL);
	}

IL_0084:
	{
		// GameObject[] enemiesActive = GameObject.FindGameObjectsWithTag("Enemy");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16;
		L_16 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		// foreach (GameObject enemy in enemiesActive)
		V_1 = L_16;
		V_2 = 0;
		goto IL_009f;
	}

IL_0093:
	{
		// foreach (GameObject enemy in enemiesActive)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		// Destroy(enemy);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_20, NULL);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_009f:
	{
		// foreach (GameObject enemy in enemiesActive)
		int32_t L_22 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0093;
		}
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void GameWon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameWon__ctor_mEF35C7C4F484EDB14DE5DC272D66CC2DD23A4B8A (GameWon_tFD8CC92DF92A67104423D051F204F04780F0065F* __this, const RuntimeMethod* method) 
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
// System.Void GunMode::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunMode_Start_m46F5F01BE11878D4D6F0A4F843287A4C676B14DD (GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tankRB = tank.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tank_6;
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_0, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___tankRB_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tankRB_8), (void*)L_1);
		// wait = false;
		__this->___wait_12 = (bool)0;
		// }
		return;
	}
}
// System.Void GunMode::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunMode_Update_mB80BB3A53706E356126C4CACAD5767832DCE0123 (GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84B7AF18301C4FCEAF238EFECCD57132EA7A8123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5288D4644662DCD951D0B06C2797E21DC4E6C40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF97AAD111235153D30EDA9E49B8CD09FF5CAD86);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Mode = PlayerPrefs.GetString("Mode", "Manual");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(_stringLiteralFF97AAD111235153D30EDA9E49B8CD09FF5CAD86, _stringLiteralF5288D4644662DCD951D0B06C2797E21DC4E6C40, NULL);
		__this->___Mode_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Mode_11), (void*)L_0);
		// if (Mode == "Auto")
		String_t* L_1 = __this->___Mode_11;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral84B7AF18301C4FCEAF238EFECCD57132EA7A8123, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// auto = true;
		__this->___auto_13 = (bool)1;
	}

IL_002e:
	{
		// if (Mode == "Manual")
		String_t* L_3 = __this->___Mode_11;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralF5288D4644662DCD951D0B06C2797E21DC4E6C40, NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// auto = false;
		__this->___auto_13 = (bool)0;
	}

IL_0047:
	{
		// position = tankRB.position;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___tankRB_8;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_5, NULL);
		__this->___position_10 = L_6;
		// }
		return;
	}
}
// System.Void GunMode::shootClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunMode_shootClick_m5340ACCE8E815F9A67317081F6435E751ED2EA35 (GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	{
		// GameObject[] bullets = GameObject.FindGameObjectsWithTag("Bullet");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral87EC9E6B1D53FB72E3610EE8D1FBACA5F8D07BB0, NULL);
		V_0 = L_0;
		// if (bullets != null)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// bulletCount = bullets.Length;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		NullCheck(L_2);
		__this->___bulletCount_14 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_0020;
	}

IL_0019:
	{
		// bulletCount = 0;
		__this->___bulletCount_14 = 0;
	}

IL_0020:
	{
		// if (bulletCount <= 5 && wait == false)
		int32_t L_3 = __this->___bulletCount_14;
		if ((((int32_t)L_3) > ((int32_t)5)))
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = __this->___wait_12;
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		// StartCoroutine(shoot());
		RuntimeObject* L_5;
		L_5 = GunMode_shoot_mCB029F43249E4584C9AC43239222582AA6B894AF(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GunMode::shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GunMode_shoot_mCB029F43249E4584C9AC43239222582AA6B894AF (GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94* L_0 = (U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94*)il2cpp_codegen_object_new(U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CshootU3Ed__14__ctor_mB0BA6AAF372822E5BCD3323159A87E51CCECA9E7(L_0, 0, NULL);
		U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GunMode::manualClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunMode_manualClicked_mE3A743E7FBF9ED468499997A66A22FE70557744F (GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5288D4644662DCD951D0B06C2797E21DC4E6C40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF97AAD111235153D30EDA9E49B8CD09FF5CAD86);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("Mode", "Manual");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralFF97AAD111235153D30EDA9E49B8CD09FF5CAD86, _stringLiteralF5288D4644662DCD951D0B06C2797E21DC4E6C40, NULL);
		// auto = false;
		__this->___auto_13 = (bool)0;
		// }
		return;
	}
}
// System.Void GunMode::autoClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunMode_autoClicked_m90788CE77108607AA08EC9BD1FDD3A547A401025 (GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84B7AF18301C4FCEAF238EFECCD57132EA7A8123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF97AAD111235153D30EDA9E49B8CD09FF5CAD86);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("Mode", "Auto");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralFF97AAD111235153D30EDA9E49B8CD09FF5CAD86, _stringLiteral84B7AF18301C4FCEAF238EFECCD57132EA7A8123, NULL);
		// auto = true;
		__this->___auto_13 = (bool)1;
		// }
		return;
	}
}
// System.Void GunMode::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunMode_OnTriggerStay_mA74FBBBB3D80725AEDF0EBC07CDB56E47F1100DE (GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (auto == true && other.gameObject.CompareTag("Enemy"))
		bool L_0 = __this->___auto_13;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___other0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// if (wait == false)
		bool L_4 = __this->___wait_12;
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		// shootClick();
		GunMode_shootClick_m5340ACCE8E815F9A67317081F6435E751ED2EA35(__this, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void GunMode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunMode__ctor_mA897654899B3FA96772B9A129DC0F124D4E8907B (GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* __this, const RuntimeMethod* method) 
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
// System.Void GunMode/<shoot>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshootU3Ed__14__ctor_mB0BA6AAF372822E5BCD3323159A87E51CCECA9E7 (U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GunMode/<shoot>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshootU3Ed__14_System_IDisposable_Dispose_m9A5828140315E70F205DBAB24CC7DF648C93EDE3 (U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GunMode/<shoot>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CshootU3Ed__14_MoveNext_mE283B23805F86F000B87780C94C3B8BBF99195A2 (U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5288D4644662DCD951D0B06C2797E21DC4E6C40);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_006e;
			}
			case 2:
			{
				goto IL_008c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float speed = PlayerPrefs.GetFloat("P2");
		float L_3;
		L_3 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38, NULL);
		V_2 = L_3;
		// wait = true;
		GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* L_4 = V_1;
		NullCheck(L_4);
		L_4->___wait_12 = (bool)1;
		// if (bulletCount == 0 || Mode == "Manual")
		GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bulletCount_14;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->___Mode_11;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteralF5288D4644662DCD951D0B06C2797E21DC4E6C40, NULL);
		if (!L_9)
		{
			goto IL_0077;
		}
	}

IL_0055:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_006e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0093;
	}

IL_0077:
	{
		// yield return new WaitForSeconds(speed);
		float L_11 = V_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_12 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_12, L_11, NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_008c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0093:
	{
		// Instantiate(bullet, new Vector3(position.x, 1.56363797f, -17.63f), Quaternion.identity);
		GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___bullet_4;
		GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* L_15 = V_1;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&L_15->___position_10);
		float L_17 = L_16->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), L_17, (1.56363797f), (-17.6299992f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Instantiate(muzzlePrefab, new Vector3(position.x, 1.56363797f, -17f), Quaternion.identity);
		GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* L_21 = V_1;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = L_21->___muzzlePrefab_5;
		GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* L_23 = V_1;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&L_23->___position_10);
		float L_25 = L_24->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), L_25, (1.56363797f), (-17.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_22, L_26, L_27, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// wait = false;
		GunMode_t62EAD7A06F57C16384623A319261EF4174716A5A* L_29 = V_1;
		NullCheck(L_29);
		L_29->___wait_12 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object GunMode/<shoot>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CshootU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m59740933344435D68F6E61ABA7FCEDA35E2A0834 (U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GunMode/<shoot>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshootU3Ed__14_System_Collections_IEnumerator_Reset_m1AB52F7ED73B04C9D94AD2653C8C11E8CEAB31A3 (U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CshootU3Ed__14_System_Collections_IEnumerator_Reset_m1AB52F7ED73B04C9D94AD2653C8C11E8CEAB31A3_RuntimeMethod_var)));
	}
}
// System.Object GunMode/<shoot>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CshootU3Ed__14_System_Collections_IEnumerator_get_Current_m695213FEBD579228220CB245361A2AA31B60F7A0 (U3CshootU3Ed__14_t3294F3FBE2FFCE6E6FA5008E858E315303CA8E94* __this, const RuntimeMethod* method) 
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
// System.Void InstantiateEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateEnemy_Start_m231834AEDB247FF2D727147C440435C1AEE3A5A3 (InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InstantiateEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateEnemy_Update_mD28F4C403A7E899766AD6E09EF4535DB4EEE6C54 (InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral024C60BC25F851E8B9F5531CC461C68CD60D3F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E7EFA0ED0003B428FCBC9960CB1B30023E86238);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string check = PlayerPrefs.GetString("Boss");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2, NULL);
		// string wave = PlayerPrefs.GetString("Wave");
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral024C60BC25F851E8B9F5531CC461C68CD60D3F30, NULL);
		V_0 = L_1;
		// if (!check.Equals("true"))
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (L_2)
		{
			goto IL_00b6;
		}
	}
	{
		// if (wave == "true" && isActive == false)
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (!L_4)
		{
			goto IL_006e;
		}
	}
	{
		bool L_5 = __this->___isActive_9;
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		// isActive = true;
		__this->___isActive_9 = (bool)1;
		// waitTime -= 0.3f;
		float L_6 = __this->___waitTime_7;
		__this->___waitTime_7 = ((float)il2cpp_codegen_subtract(L_6, (0.300000012f)));
		// Debug.Log("WAIT TIME:" + waitTime);
		float* L_7 = (&__this->___waitTime_7);
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0E7EFA0ED0003B428FCBC9960CB1B30023E86238, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		goto IL_0082;
	}

IL_006e:
	{
		// else if(wave == "false")
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		// isActive = false;
		__this->___isActive_9 = (bool)0;
	}

IL_0082:
	{
		// if (!isSpawning)
		bool L_12 = __this->___isSpawning_6;
		if (L_12)
		{
			goto IL_00dd;
		}
	}
	{
		// string p1 = PlayerPrefs.GetString("P1");
		String_t* L_13;
		L_13 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489, NULL);
		// if (p1 == "InActive")
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6, NULL);
		if (!L_14)
		{
			goto IL_00dd;
		}
	}
	{
		// isSpawning = true; //Yep, we're going to spawn
		__this->___isSpawning_6 = (bool)1;
		// StartCoroutine(spawnEnemy());
		RuntimeObject* L_15;
		L_15 = InstantiateEnemy_spawnEnemy_m74F67742E687CEF7658A8122011790416A28A635(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_15, NULL);
		goto IL_00dd;
	}

IL_00b6:
	{
		// waitTime = 2.2f;
		__this->___waitTime_7 = (2.20000005f);
		// if (!spawBoss)
		bool L_17 = __this->___spawBoss_11;
		if (L_17)
		{
			goto IL_00dd;
		}
	}
	{
		// StartCoroutine(instantiateBoss());
		RuntimeObject* L_18;
		L_18 = InstantiateEnemy_instantiateBoss_m7DD1713BCC44AE18199C913D511378BD7FD3B2BA(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_19;
		L_19 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_18, NULL);
		// spawBoss = true;
		__this->___spawBoss_11 = (bool)1;
	}

IL_00dd:
	{
		// if (!isSpawning)
		bool L_20 = __this->___isSpawning_6;
		if (L_20)
		{
			goto IL_010f;
		}
	}
	{
		// string p1 = PlayerPrefs.GetString("P1");
		String_t* L_21;
		L_21 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489, NULL);
		// if (p1 == "InActive")
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6, NULL);
		if (!L_22)
		{
			goto IL_010f;
		}
	}
	{
		// isSpawning = true; //Yep, we're going to spawn
		__this->___isSpawning_6 = (bool)1;
		// StartCoroutine(spawnEnemy());
		RuntimeObject* L_23;
		L_23 = InstantiateEnemy_spawnEnemy_m74F67742E687CEF7658A8122011790416A28A635(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_24;
		L_24 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_23, NULL);
	}

IL_010f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator InstantiateEnemy::spawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstantiateEnemy_spawnEnemy_m74F67742E687CEF7658A8122011790416A28A635 (InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7* L_0 = (U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7*)il2cpp_codegen_object_new(U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CspawnEnemyU3Ed__10__ctor_m0F03D9FD9BB3F13567DA9BAE016476111A7B5238(L_0, 0, NULL);
		U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator InstantiateEnemy::instantiateBoss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstantiateEnemy_instantiateBoss_m7DD1713BCC44AE18199C913D511378BD7FD3B2BA (InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8* L_0 = (U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8*)il2cpp_codegen_object_new(U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CinstantiateBossU3Ed__11__ctor_m4AA7A5FBCE252AD889F1E5FC2DC690E653A56867(L_0, 0, NULL);
		U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void InstantiateEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateEnemy__ctor_m4BC0E1877401F6A5B035BA0993E5E73A4F1462A1 (InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float[] positions = { -3.5f, 0, 3.5f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(-3.5f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)(3.5f));
		__this->___positions_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positions_5), (void*)L_2);
		// float waitTime = 2.8f;
		__this->___waitTime_7 = (2.79999995f);
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
// System.Void InstantiateEnemy/<spawnEnemy>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnEnemyU3Ed__10__ctor_m0F03D9FD9BB3F13567DA9BAE016476111A7B5238 (U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InstantiateEnemy/<spawnEnemy>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnEnemyU3Ed__10_System_IDisposable_Dispose_m4A8DEE6A4E1C6DF76BD567FD13748794629B5629 (U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InstantiateEnemy/<spawnEnemy>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CspawnEnemyU3Ed__10_MoveNext_mA7EADFE3EA1A41244DB2749FE3C817D28395E515 (U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7* __this, const RuntimeMethod* method) 
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
	InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* L_1 = __this->___U3CU3E4__this_2;
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
		// yield return new WaitForSeconds(waitTime);
		InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___waitTime_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int index = UnityEngine.Random.Range(0, 3);
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 3, NULL);
		V_2 = L_7;
		// int position = UnityEngine.Random.Range(0, 3);
		int32_t L_8;
		L_8 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 3, NULL);
		V_3 = L_8;
		// Instantiate(enemy[index], new Vector3(positions[position], 0f, 16.3f), Quaternion.Euler(0f, 180, 0f));
		InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* L_9 = V_1;
		NullCheck(L_9);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = L_9->___enemy_4;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* L_14 = V_1;
		NullCheck(L_14);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = L_14->___positions_5;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		float L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_18, (0.0f), (16.2999992f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (180.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_13, L_19, L_20, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// isSpawning = false;
		InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* L_22 = V_1;
		NullCheck(L_22);
		L_22->___isSpawning_6 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object InstantiateEnemy/<spawnEnemy>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CspawnEnemyU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD31A48AFEB35F8C7CD4FDB68135AE9C72E8B5E9A (U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InstantiateEnemy/<spawnEnemy>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnEnemyU3Ed__10_System_Collections_IEnumerator_Reset_m602DC28100E5E257AB46E1AF1F18660494CA4B1B (U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CspawnEnemyU3Ed__10_System_Collections_IEnumerator_Reset_m602DC28100E5E257AB46E1AF1F18660494CA4B1B_RuntimeMethod_var)));
	}
}
// System.Object InstantiateEnemy/<spawnEnemy>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CspawnEnemyU3Ed__10_System_Collections_IEnumerator_get_Current_m076587001AEDA0434840A089090CE6CE2B664317 (U3CspawnEnemyU3Ed__10_t0208A9FD6A2716C186B01E5A52DECAC6F245FFC7* __this, const RuntimeMethod* method) 
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
// System.Void InstantiateEnemy/<instantiateBoss>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CinstantiateBossU3Ed__11__ctor_m4AA7A5FBCE252AD889F1E5FC2DC690E653A56867 (U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InstantiateEnemy/<instantiateBoss>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CinstantiateBossU3Ed__11_System_IDisposable_Dispose_mA0393092D1A9F5744413BB9232E110C9119BFF48 (U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InstantiateEnemy/<instantiateBoss>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CinstantiateBossU3Ed__11_MoveNext_m706AA13F023CF32A10FBBDEDC634526057543B78 (U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8* __this, const RuntimeMethod* method) 
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
	InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int position = UnityEngine.Random.Range(0, 3);
		int32_t L_4;
		L_4 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 3, NULL);
		__this->___U3CpositionU3E5__2_3 = L_4;
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0044:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Instantiate(boss, new Vector3(positions[position], 1.05f, 16.3f), Quaternion.Euler(0f, 90f, 0f));
		InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___boss_10;
		InstantiateEnemy_t840CBC8E1519254DB63C4293EAA44B8C4B5D2E9A* L_8 = V_1;
		NullCheck(L_8);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = L_8->___positions_5;
		int32_t L_10 = __this->___U3CpositionU3E5__2_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_12, (1.04999995f), (16.2999992f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (90.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_7, L_13, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object InstantiateEnemy/<instantiateBoss>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CinstantiateBossU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1C219F820C9350F7AE0E592F90EC3A1FC8F11D77 (U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InstantiateEnemy/<instantiateBoss>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CinstantiateBossU3Ed__11_System_Collections_IEnumerator_Reset_m8BB7F5491F384E2BD5F66DAD5A812ED5F395A056 (U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CinstantiateBossU3Ed__11_System_Collections_IEnumerator_Reset_m8BB7F5491F384E2BD5F66DAD5A812ED5F395A056_RuntimeMethod_var)));
	}
}
// System.Object InstantiateEnemy/<instantiateBoss>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CinstantiateBossU3Ed__11_System_Collections_IEnumerator_get_Current_m0F3967D2EA24A62680A524C6ED16B0D4C4860AAE (U3CinstantiateBossU3Ed__11_tFE78824893E163A2204ED15E2D8A6766EAC6D3A8* __this, const RuntimeMethod* method) 
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
// System.Void PlayerControls::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_Start_m31F1265A18F322E8BCD0379BA4ECB57479776660 (PlayerControls_t7EFF800E1E7E86137BD4DBD2F5C5D16BD2CA4D77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m1B905B41EF4264E9395373B64D57297468EE828C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFDCA766ED2563D2C8C45D917886EBC27FB44886);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = gameObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_0, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___rb_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_1);
		// healthbar = gameObject.transform.Find("Healthbar").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteralCFDCA766ED2563D2C8C45D917886EBC27FB44886, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		__this->___healthbar_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___healthbar_7), (void*)L_5);
		// canvas = healthbar.GetComponent<Canvas>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___healthbar_7;
		NullCheck(L_6);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7;
		L_7 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_6, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		__this->___canvas_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_9), (void*)L_7);
		// slider = canvas.GetComponentInChildren<Slider>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_8 = __this->___canvas_9;
		NullCheck(L_8);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9;
		L_9 = Component_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m1B905B41EF4264E9395373B64D57297468EE828C(L_8, Component_GetComponentInChildren_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m1B905B41EF4264E9395373B64D57297468EE828C_RuntimeMethod_var);
		__this->___slider_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_6), (void*)L_9);
		// position = new Vector3(0f, 0.779999971f, -17.63f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (0.779999971f), (-17.6299992f), /*hidden argument*/NULL);
		__this->___position_5 = L_10;
		// rb.MovePosition(position);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->___rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___position_5;
		NullCheck(L_11);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void PlayerControls::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_Update_m1FB8C4FBC7768E727B22A107B203C853DBECCC44 (PlayerControls_t7EFF800E1E7E86137BD4DBD2F5C5D16BD2CA4D77* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == UnityEngine.TouchPhase.Began)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		// startTouchPosition = Input.GetTouch(0).position;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_3;
		L_3 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		__this->___startTouchPosition_10 = L_4;
	}

IL_002c:
	{
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == UnityEngine.TouchPhase.Ended)
		int32_t L_5;
		L_5 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_00bc;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_6;
		L_6 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_00bc;
		}
	}
	{
		// endTouchPosition = Input.GetTouch(0).position;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_8;
		L_8 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		__this->___endTouchPosition_11 = L_9;
		// Vector2 inputVector = endTouchPosition - startTouchPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___endTouchPosition_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___startTouchPosition_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_10, L_11, NULL);
		V_1 = L_12;
		// if (Mathf.Abs(inputVector.x) > Mathf.Abs(inputVector.y))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		float L_14 = L_13.___x_0;
		float L_15;
		L_15 = fabsf(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_1;
		float L_17 = L_16.___y_1;
		float L_18;
		L_18 = fabsf(L_17);
		if ((!(((float)L_15) > ((float)L_18))))
		{
			goto IL_00bc;
		}
	}
	{
		// if (inputVector.x > 0 )
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_1;
		float L_20 = L_19.___x_0;
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_00a8;
		}
	}
	{
		// position.x += 3.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___position_5);
		float* L_22 = (&L_21->___x_2);
		float* L_23 = L_22;
		float L_24 = *((float*)L_23);
		*((float*)L_23) = (float)((float)il2cpp_codegen_add(L_24, (3.5f)));
		return;
	}

IL_00a8:
	{
		// position.x -= 3.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&__this->___position_5);
		float* L_26 = (&L_25->___x_2);
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		*((float*)L_27) = (float)((float)il2cpp_codegen_subtract(L_28, (3.5f)));
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void PlayerControls::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_LateUpdate_m48E4C835B934013970DBE0EF8457B2338FD94C00 (PlayerControls_t7EFF800E1E7E86137BD4DBD2F5C5D16BD2CA4D77* __this, const RuntimeMethod* method) 
{
	{
		// if (position.x >= -3.5 && position.x <= 3.5)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___position_5);
		float L_1 = L_0->___x_2;
		if ((!(((double)((double)L_1)) >= ((double)(-3.5)))))
		{
			goto IL_0040;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___position_5);
		float L_3 = L_2->___x_2;
		if ((!(((double)((double)L_3)) <= ((double)(3.5)))))
		{
			goto IL_0040;
		}
	}
	{
		// rb.MovePosition(position);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___position_5;
		NullCheck(L_4);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_4, L_5, NULL);
		return;
	}

IL_0040:
	{
		// if (position.x >= 3.5)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___position_5);
		float L_7 = L_6->___x_2;
		if ((!(((double)((double)L_7)) >= ((double)(3.5)))))
		{
			goto IL_0068;
		}
	}
	{
		// position.x = 3.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___position_5);
		L_8->___x_2 = (3.5f);
		return;
	}

IL_0068:
	{
		// else if (position.x <= -3.5)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___position_5);
		float L_10 = L_9->___x_2;
		if ((!(((double)((double)L_10)) <= ((double)(-3.5)))))
		{
			goto IL_008f;
		}
	}
	{
		// position.x = -3.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___position_5);
		L_11->___x_2 = (-3.5f);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void PlayerControls::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls_OnCollisionEnter_m84462695C3F1E1F81138AE8942E78A9191C6893B (PlayerControls_t7EFF800E1E7E86137BD4DBD2F5C5D16BD2CA4D77* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD11843990CBAB91C6E830DA581D13285E25AB8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.name=="EnemyBullet(Clone)" )
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralBD11843990CBAB91C6E830DA581D13285E25AB8F, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// slider.value -= 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___slider_6;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, ((float)il2cpp_codegen_subtract(L_6, (1.0f))));
	}

IL_002e:
	{
		// if (slider.value <= 0)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___slider_6;
		NullCheck(L_7);
		float L_8;
		L_8 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_7);
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		// PlayerPrefs.SetString("GameOver", "true");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void PlayerControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControls__ctor_m332F79A4E651845074B3ABFAEF8F6F3604244309 (PlayerControls_t7EFF800E1E7E86137BD4DBD2F5C5D16BD2CA4D77* __this, const RuntimeMethod* method) 
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
// System.Void powerUp::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void powerUp_Start_m1F67D969CED3B5870863F91211E7B9505A89DEF2 (powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("P1", "InActive");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489, _stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6, NULL);
		// PlayerPrefs.SetFloat("P2", 0.8f);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38, (0.800000012f), NULL);
		// }
		return;
	}
}
// System.Void powerUp::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void powerUp_Update_m4132CCDDC7B6F930C9E4BBA5C058CD8846A2F38D (powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* __this, const RuntimeMethod* method) 
{
	{
		// if (!isSpawning)
		bool L_0 = __this->___isSpawning_7;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// isSpawning = true; //Yep, we're going to spawn
		__this->___isSpawning_7 = (bool)1;
		// StartCoroutine(spawnPowerUp());
		RuntimeObject* L_1;
		L_1 = powerUp_spawnPowerUp_mA09F601FE646532D2119220EEE69EB66C52C7BF3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator powerUp::spawnPowerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* powerUp_spawnPowerUp_mA09F601FE646532D2119220EEE69EB66C52C7BF3 (powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6* L_0 = (U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6*)il2cpp_codegen_object_new(U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CspawnPowerUpU3Ed__7__ctor_mAA4F5B9AE31527C328507E1BC1E3FCEC21886A82(L_0, 0, NULL);
		U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void powerUp::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void powerUp_OnCollisionEnter_m6FF5DA567AEBD57427D1695B0D73CBCB463EBD1C (powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3 zero = new Vector3(0f, 0f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// Debug.Log(gameObject.tag);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// if (collision.gameObject.CompareTag("Player")) {
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___collision0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_4, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_5)
		{
			goto IL_008a;
		}
	}
	{
		// if (gameObject.CompareTag("P1"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_6, _stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489, NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		// StartCoroutine(p1());
		RuntimeObject* L_8;
		L_8 = powerUp_p1_m63EDCDB3F9752BAC5DEAE2FB148568B1F786E3EE(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
	}

IL_0056:
	{
		// if (gameObject.CompareTag("P2"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_10, _stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38, NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		// StartCoroutine(p2());
		RuntimeObject* L_12;
		L_12 = powerUp_p2_mD43C14D86210E7D9B3AF35EFEC7B2F369AC1D015(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
	}

IL_0075:
	{
		// gameObject.transform.localScale = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_15);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_15, L_16, NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator powerUp::p1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* powerUp_p1_m63EDCDB3F9752BAC5DEAE2FB148568B1F786E3EE (powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110* L_0 = (U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110*)il2cpp_codegen_object_new(U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cp1U3Ed__9__ctor_m686F453316DA7127E68D54F37E57C498CE3F1DF8(L_0, 0, NULL);
		U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator powerUp::p2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* powerUp_p2_mD43C14D86210E7D9B3AF35EFEC7B2F369AC1D015 (powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1* L_0 = (U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1*)il2cpp_codegen_object_new(U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cp2U3Ed__10__ctor_mCCB242E2CBCA97AF1B09C8BA7D5ABAE7C4F2D131(L_0, 0, NULL);
		U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void powerUp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void powerUp__ctor_m654AB297EBF65B36485C05D3C4E0B679C92BCAEA (powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float[] positions = { -3.5f, 0, 3.5f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(-3.5f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)(3.5f));
		__this->___positions_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positions_6), (void*)L_2);
		// string[] tags = { "P1", "P2"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38);
		__this->___tags_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tags_8), (void*)L_5);
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
// System.Void powerUp/<spawnPowerUp>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnPowerUpU3Ed__7__ctor_mAA4F5B9AE31527C328507E1BC1E3FCEC21886A82 (U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void powerUp/<spawnPowerUp>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnPowerUpU3Ed__7_System_IDisposable_Dispose_mFC40C639553EEDA1AD7622C6119B25DF13A93D4F (U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean powerUp/<spawnPowerUp>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CspawnPowerUpU3Ed__7_MoveNext_mECE65B7C74F50FAEA3241CF501231BAA2DE70A95 (U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6* __this, const RuntimeMethod* method) 
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
	powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* L_1 = __this->___U3CU3E4__this_2;
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
		// yield return new WaitForSeconds(31);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (31.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int index = Random.Range(0, 2);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		V_2 = L_5;
		// int position = Random.Range(0, 3);
		int32_t L_6;
		L_6 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 3, NULL);
		V_3 = L_6;
		// if (player.transform.position.x == positions[position])
		powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___player_5;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* L_12 = V_1;
		NullCheck(L_12);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = L_12->___positions_6;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		float L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((!(((float)L_11) == ((float)L_16))))
		{
			goto IL_0073;
		}
	}
	{
		// position = (position + 1) % 3;
		int32_t L_17 = V_3;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_17, 1))%3));
	}

IL_0073:
	{
		// Instantiate(prefab, new Vector3(positions[position], 1f, -17.3f), Quaternion.Euler(0f, 180, 0f));
		powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* L_18 = V_1;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = L_18->___prefab_4;
		powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* L_20 = V_1;
		NullCheck(L_20);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = L_20->___positions_6;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		float L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), L_24, (1.0f), (-17.2999992f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (180.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_19, L_25, L_26, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// prefab.tag = tags[index];
		powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* L_28 = V_1;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = L_28->___prefab_4;
		powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* L_30 = V_1;
		NullCheck(L_30);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30->___tags_8;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		String_t* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_29, L_34, NULL);
		// isSpawning = false;
		powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* L_35 = V_1;
		NullCheck(L_35);
		L_35->___isSpawning_7 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object powerUp/<spawnPowerUp>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CspawnPowerUpU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC0D0E86B5A4C35A34D3D200FE580CE46D924A645 (U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void powerUp/<spawnPowerUp>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnPowerUpU3Ed__7_System_Collections_IEnumerator_Reset_m0E45405734C976B4A83E7441B14C5DF01C1A54B2 (U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CspawnPowerUpU3Ed__7_System_Collections_IEnumerator_Reset_m0E45405734C976B4A83E7441B14C5DF01C1A54B2_RuntimeMethod_var)));
	}
}
// System.Object powerUp/<spawnPowerUp>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CspawnPowerUpU3Ed__7_System_Collections_IEnumerator_get_Current_mFE528D21C55BB3DB68D7C78D31A17AA206CECA74 (U3CspawnPowerUpU3Ed__7_t39CB0492D252E134DF38504CC01F37290D8C79C6* __this, const RuntimeMethod* method) 
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
// System.Void powerUp/<p1>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cp1U3Ed__9__ctor_m686F453316DA7127E68D54F37E57C498CE3F1DF8 (U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void powerUp/<p1>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cp1U3Ed__9_System_IDisposable_Dispose_mBCC9F603EBD9B8B06A1FECEF3CB403A9D7BB8F51 (U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean powerUp/<p1>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cp1U3Ed__9_MoveNext_m9E945548F5C622F44BFE86E042695AC97C4F3D1E (U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F4D5C427CFA5FCCBD38E02EBC6722093CAA1EDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1056C29D0C291EC4721613F0E0B99A27AD52E3A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0071;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlayerPrefs.SetString("P1", "Active");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489, _stringLiteral8F4D5C427CFA5FCCBD38E02EBC6722093CAA1EDD, NULL);
		// GameObject[] enemy = GameObject.FindGameObjectsWithTag("Enemy");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4;
		L_4 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		// foreach (var  e in enemy)
		V_2 = L_4;
		V_3 = 0;
		goto IL_0052;
	}

IL_003c:
	{
		// foreach (var  e in enemy)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// Rigidbody rb = e.GetComponent<Rigidbody>();
		NullCheck(L_8);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9;
		L_9 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_8, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// rb.velocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_9);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_9, L_10, NULL);
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0052:
	{
		// foreach (var  e in enemy)
		int32_t L_12 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = V_2;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_003c;
		}
	}
	{
		// yield return new WaitForSeconds(6);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_14 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_14, (6.0f), NULL);
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0071:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlayerPrefs.SetString("P1", "InActive");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489, _stringLiteralA07D054DF5954C380AF49FFB68B7FBDA0458F7B6, NULL);
		// Debug.Log("Time Ended:"+PlayerPrefs.GetString("P1"));
		String_t* L_15;
		L_15 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB1056C29D0C291EC4721613F0E0B99A27AD52E3A, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_16, NULL);
		// Destroy(gameObject);
		powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* L_17 = V_1;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_18, NULL);
		// }
		return (bool)0;
	}
}
// System.Object powerUp/<p1>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cp1U3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2BE82AD6DA383E1009604964B986CA9E5DB7CC53 (U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void powerUp/<p1>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cp1U3Ed__9_System_Collections_IEnumerator_Reset_mCFFC1FF212CEBAB006D1ED9BBC57E3569BD99FF6 (U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cp1U3Ed__9_System_Collections_IEnumerator_Reset_mCFFC1FF212CEBAB006D1ED9BBC57E3569BD99FF6_RuntimeMethod_var)));
	}
}
// System.Object powerUp/<p1>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cp1U3Ed__9_System_Collections_IEnumerator_get_Current_m7AC36CAE67A2B7473A2572907040BCFAB10FD949 (U3Cp1U3Ed__9_t182CA7DC9BAD88DE4E158A35A2906442E8CF5110* __this, const RuntimeMethod* method) 
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
// System.Void powerUp/<p2>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cp2U3Ed__10__ctor_mCCB242E2CBCA97AF1B09C8BA7D5ABAE7C4F2D131 (U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void powerUp/<p2>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cp2U3Ed__10_System_IDisposable_Dispose_m7387D97732005B19B3272DF5F37F6D1FA66B69C7 (U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean powerUp/<p2>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cp2U3Ed__10_MoveNext_m1C6D9E973FE9B88C59D62BBA0A04E3D224C83B01 (U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0046;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlayerPrefs.SetFloat("P2", 0.3f);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38, (0.300000012f), NULL);
		// yield return new WaitForSeconds(5);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlayerPrefs.SetFloat("P2", 0.8f);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38, (0.800000012f), NULL);
		// Destroy(gameObject);
		powerUp_t3384F3A7409C27D734EBC4FF5FA24C283B5E65C0* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object powerUp/<p2>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cp2U3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m38F14CC9EE4246058DD55E352AD8A15193A3B8CB (U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void powerUp/<p2>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cp2U3Ed__10_System_Collections_IEnumerator_Reset_m219FAE9EA4DE5986B1689E8A3659A058A38196C5 (U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cp2U3Ed__10_System_Collections_IEnumerator_Reset_m219FAE9EA4DE5986B1689E8A3659A058A38196C5_RuntimeMethod_var)));
	}
}
// System.Object powerUp/<p2>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cp2U3Ed__10_System_Collections_IEnumerator_get_Current_mEEFB58AA808994F0A9DB8D7E774CE0BD1FC8DAD0 (U3Cp2U3Ed__10_tA3A0C687046D742B684B9B6AC94F6ADB7F5BE4D1* __this, const RuntimeMethod* method) 
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
// System.Void PowerUpRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUpRotation_Update_m1B9C5D996962CC938155D166F2EA8FA66F392E41 (PowerUpRotation_t7C735F9591DD1AB71D767D533FEB9EB90DD08C70* __this, const RuntimeMethod* method) 
{
	{
		// if(this.reverse)
		bool L_0 = __this->___reverse_5;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		// transform.Rotate(new Vector3(0f,0f,1f) * Time.deltaTime * this.rotationSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		float L_5 = __this->___rotationSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		NullCheck(L_1);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_1, L_6, NULL);
		return;
	}

IL_003d:
	{
		// transform.Rotate(new Vector3(0f,0f,1f) * Time.deltaTime * this.rotationSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		float L_11 = __this->___rotationSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		NullCheck(L_7);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_7, L_12, NULL);
		// }
		return;
	}
}
// System.Void PowerUpRotation::SetRotationSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUpRotation_SetRotationSpeed_m0A3CBDED92A0FC0574A58D9591CB7B8485C04F8C (PowerUpRotation_t7C735F9591DD1AB71D767D533FEB9EB90DD08C70* __this, float ___speed0, const RuntimeMethod* method) 
{
	{
		// this.rotationSpeed = speed;
		float L_0 = ___speed0;
		__this->___rotationSpeed_4 = L_0;
		// }
		return;
	}
}
// System.Void PowerUpRotation::SetReverse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUpRotation_SetReverse_m4EA2F5F9E739AFF4CB0443C1087875E5D2883D7B (PowerUpRotation_t7C735F9591DD1AB71D767D533FEB9EB90DD08C70* __this, bool ___reverse0, const RuntimeMethod* method) 
{
	{
		// this.reverse = reverse;
		bool L_0 = ___reverse0;
		__this->___reverse_5 = L_0;
		// }
		return;
	}
}
// System.Void PowerUpRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUpRotation__ctor_m8FB9772A0EF9A38FDBECE6C860334EF0A11C5569 (PowerUpRotation_t7C735F9591DD1AB71D767D533FEB9EB90DD08C70* __this, const RuntimeMethod* method) 
{
	{
		// public float rotationSpeed = 99.0f;
		__this->___rotationSpeed_4 = (99.0f);
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
// System.Void PowerUpWindow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUpWindow_Start_m1ADE463A1E4C545AA3213E39510135CE04807642 (PowerUpWindow_t8267101FBCCD4E0B423AC61137E94BA97AE41EC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mB2E2DFC9835043E9EA38AB359AEBDD53CE90A690_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// powerUpText = powerUpWindow.GetComponentInChildren<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___powerUpWindow_5;
		NullCheck(L_0);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1;
		L_1 = GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mB2E2DFC9835043E9EA38AB359AEBDD53CE90A690(L_0, GameObject_GetComponentInChildren_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mB2E2DFC9835043E9EA38AB359AEBDD53CE90A690_RuntimeMethod_var);
		__this->___powerUpText_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___powerUpText_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void PowerUpWindow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUpWindow_Update_m944D56268050561FFAD11EF4BD872A0A4A5D13EF (PowerUpWindow_t8267101FBCCD4E0B423AC61137E94BA97AE41EC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DF4ED9B0231B8C162513291F4082BDB3766EED2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral531C6B65E43EE29B542DD7BF42A5EC8FDF3FFEF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F4D5C427CFA5FCCBD38E02EBC6722093CAA1EDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string p1 = PlayerPrefs.GetString("P1");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489, NULL);
		// if (p1 == "Active" && !isSpawning)
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral8F4D5C427CFA5FCCBD38E02EBC6722093CAA1EDD, NULL);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		bool L_2 = __this->___isSpawning_6;
		if (L_2)
		{
			goto IL_0042;
		}
	}
	{
		// powerUpText.text = "Freeze Enemy for 5 seconds";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___powerUpText_4;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, _stringLiteral4DF4ED9B0231B8C162513291F4082BDB3766EED2);
		// isSpawning = true;
		__this->___isSpawning_6 = (bool)1;
		// StartCoroutine(powerUpWin());
		RuntimeObject* L_4;
		L_4 = PowerUpWindow_powerUpWin_m9E186D4292AE71E2C6C29835A0E5247E03D321B7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
	}

IL_0042:
	{
		// float p2 = PlayerPrefs.GetFloat("P2");
		float L_6;
		L_6 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38, NULL);
		// if (p2==0.3f&& !isSpawning)
		if ((!(((float)L_6) == ((float)(0.300000012f)))))
		{
			goto IL_007f;
		}
	}
	{
		bool L_7 = __this->___isSpawning_6;
		if (L_7)
		{
			goto IL_007f;
		}
	}
	{
		// powerUpText.text = "Shoot Speed increased for 5 Seconds!";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = __this->___powerUpText_4;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, _stringLiteral531C6B65E43EE29B542DD7BF42A5EC8FDF3FFEF0);
		// isSpawning = true;
		__this->___isSpawning_6 = (bool)1;
		// StartCoroutine(powerUpWin());
		RuntimeObject* L_9;
		L_9 = PowerUpWindow_powerUpWin_m9E186D4292AE71E2C6C29835A0E5247E03D321B7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PowerUpWindow::powerUpWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PowerUpWindow_powerUpWin_m9E186D4292AE71E2C6C29835A0E5247E03D321B7 (PowerUpWindow_t8267101FBCCD4E0B423AC61137E94BA97AE41EC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E* L_0 = (U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E*)il2cpp_codegen_object_new(U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CpowerUpWinU3Ed__5__ctor_m6C15871730492DFD1383B459E7B30D35C528DE59(L_0, 0, NULL);
		U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PowerUpWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUpWindow__ctor_mC58B1CB99C35236FEE17F284FC9718FB89D2DDA0 (PowerUpWindow_t8267101FBCCD4E0B423AC61137E94BA97AE41EC8* __this, const RuntimeMethod* method) 
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
// System.Void PowerUpWindow/<powerUpWin>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpowerUpWinU3Ed__5__ctor_m6C15871730492DFD1383B459E7B30D35C528DE59 (U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PowerUpWindow/<powerUpWin>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpowerUpWinU3Ed__5_System_IDisposable_Dispose_m22056B4E82BDA1A84880E05FEB75A3875B203EE9 (U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PowerUpWindow/<powerUpWin>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CpowerUpWinU3Ed__5_MoveNext_m1939C8275AAFEA661ABB407CF33324A9A16DE0CC (U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PowerUpWindow_t8267101FBCCD4E0B423AC61137E94BA97AE41EC8* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PowerUpWindow_t8267101FBCCD4E0B423AC61137E94BA97AE41EC8* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_004e;
			}
			case 2:
			{
				goto IL_007a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// powerUpWindow.SetActive(true);
		PowerUpWindow_t8267101FBCCD4E0B423AC61137E94BA97AE41EC8* L_3 = V_1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___powerUpWindow_5;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// powerUpWindow.SetActive(false);
		PowerUpWindow_t8267101FBCCD4E0B423AC61137E94BA97AE41EC8* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___powerUpWindow_5;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_007a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isSpawning = false;
		PowerUpWindow_t8267101FBCCD4E0B423AC61137E94BA97AE41EC8* L_9 = V_1;
		NullCheck(L_9);
		L_9->___isSpawning_6 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PowerUpWindow/<powerUpWin>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CpowerUpWinU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9BDD1DEB7D731360A8C8F158087C3E4230BD6004 (U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PowerUpWindow/<powerUpWin>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpowerUpWinU3Ed__5_System_Collections_IEnumerator_Reset_m591F06AFA2C62400FF7EAE990ECD47E011087D44 (U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CpowerUpWinU3Ed__5_System_Collections_IEnumerator_Reset_m591F06AFA2C62400FF7EAE990ECD47E011087D44_RuntimeMethod_var)));
	}
}
// System.Object PowerUpWindow/<powerUpWin>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CpowerUpWinU3Ed__5_System_Collections_IEnumerator_get_Current_m53E76442AF6507005432ED2B3BADB11F84860342 (U3CpowerUpWinU3Ed__5_t5205EAF3D7456D87902400D950C87254D848379E* __this, const RuntimeMethod* method) 
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
// System.Void ResetPref::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetPref_Start_m5B5D8C9DE8D914CF97EFB6AEA6B75195E0A43F04 (ResetPref_t847D122D9F8DFF861116A1A8A53CAE24679CAE09* __this, const RuntimeMethod* method) 
{
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_m7687D47AE64203DB76AC6754EC276DFFD0DFAB0E(NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
// System.Void ResetPref::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetPref_Update_m686C7C5B31FAB8ADDE00831F201FB7604B6E2B28 (ResetPref_t847D122D9F8DFF861116A1A8A53CAE24679CAE09* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ResetPref::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetPref__ctor_m170E70738FB7E37041E2517E15F67E3B04229DE0 (ResetPref_t847D122D9F8DFF861116A1A8A53CAE24679CAE09* __this, const RuntimeMethod* method) 
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
// System.Void SetActiveScript::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActiveScript_OnEnable_m3D61275CC753261BBBA0D15DD064F36E548B754E (SetActiveScript_t76914B03C2A846559043BB4F00C26DD587ABB133* __this, const RuntimeMethod* method) 
{
	{
		// if(!isActive)
		bool L_0 = __this->___isActive_4;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// StartCoroutine(winSet(gameObject));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RuntimeObject* L_2;
		L_2 = SetActiveScript_winSet_mC079FB6232B78E7256E77CDCDE310BF90CD4518F(__this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
	}

IL_001b:
	{
		// isActive = true;
		__this->___isActive_4 = (bool)1;
		// }
		return;
	}
}
// System.Collections.IEnumerator SetActiveScript::winSet(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetActiveScript_winSet_mC079FB6232B78E7256E77CDCDE310BF90CD4518F (SetActiveScript_t76914B03C2A846559043BB4F00C26DD587ABB133* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___window0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574* L_0 = (U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574*)il2cpp_codegen_object_new(U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CwinSetU3Ed__3__ctor_mD4AE2E7047A60A7D08ECD43140B42CC6DCFDAEF9(L_0, 0, NULL);
		U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___window0;
		NullCheck(L_2);
		L_2->___window_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___window_2), (void*)L_3);
		return L_2;
	}
}
// System.Void SetActiveScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActiveScript__ctor_mCF0AFBE22B0AC5D779E724C1380B6D125B0AF6DC (SetActiveScript_t76914B03C2A846559043BB4F00C26DD587ABB133* __this, const RuntimeMethod* method) 
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
// System.Void SetActiveScript/<winSet>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwinSetU3Ed__3__ctor_mD4AE2E7047A60A7D08ECD43140B42CC6DCFDAEF9 (U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SetActiveScript/<winSet>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwinSetU3Ed__3_System_IDisposable_Dispose_m367CC7B89E61A51D4622D790506097E05A007F8C (U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SetActiveScript/<winSet>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwinSetU3Ed__3_MoveNext_m8CDC89604E8B213CF074F5FA2DBF74A320C0AA6D (U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SetActiveScript_t76914B03C2A846559043BB4F00C26DD587ABB133* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SetActiveScript_t76914B03C2A846559043BB4F00C26DD587ABB133* L_1 = __this->___U3CU3E4__this_3;
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
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// window.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___window_2;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// window.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___window_2;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// waveWin.SetActive(true);
		SetActiveScript_t76914B03C2A846559043BB4F00C26DD587ABB133* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___waveWin_5;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SetActiveScript/<winSet>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CwinSetU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEFA0421B20A0FD7B135B3080878CB93679D1822A (U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SetActiveScript/<winSet>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwinSetU3Ed__3_System_Collections_IEnumerator_Reset_m40BBE9449F8C846E6DDD6D14DDB32203DF9C4BB2 (U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CwinSetU3Ed__3_System_Collections_IEnumerator_Reset_m40BBE9449F8C846E6DDD6D14DDB32203DF9C4BB2_RuntimeMethod_var)));
	}
}
// System.Object SetActiveScript/<winSet>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CwinSetU3Ed__3_System_Collections_IEnumerator_get_Current_m2B4105D5C916BDC55F390C538F152213416E1E29 (U3CwinSetU3Ed__3_t943E8434995C32A3AFAB10C9E9E842ED34D79574* __this, const RuntimeMethod* method) 
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
// System.Void WaveCounter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveCounter_OnEnable_m2D314683AA983A65DDEF582036C740B2FACD134C (WaveCounter_t158BBB4A45BBB53252219C66C5B4E118812B41DF* __this, const RuntimeMethod* method) 
{
	{
		// isEnabled = true;
		__this->___isEnabled_9 = (bool)1;
		// }
		return;
	}
}
// System.Void WaveCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveCounter_Update_mB7BE6D94532E97591A19B253D3AE6CBB40C82279 (WaveCounter_t158BBB4A45BBB53252219C66C5B4E118812B41DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral024C60BC25F851E8B9F5531CC461C68CD60D3F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral987D7BBAB791917E2F55CAA07EE82D3A5ACD8A9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int result = Int32.Parse(score.text)/20 +1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___score_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_0);
		int32_t L_2;
		L_2 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_2/((int32_t)20))), 1));
		// int counter = Int32.Parse(waveCounter.text);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___waveCounter_7;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_3);
		int32_t L_5;
		L_5 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_4, NULL);
		V_1 = L_5;
		// if (result >counter && !isActive)
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0096;
		}
	}
	{
		bool L_8 = __this->___isActive_8;
		if (L_8)
		{
			goto IL_0096;
		}
	}
	{
		// PlayerPrefs.SetString("Wave", "true");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral024C60BC25F851E8B9F5531CC461C68CD60D3F30, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		// isActive = true;
		__this->___isActive_8 = (bool)1;
		// moveSpeed += 0.25f;
		float L_9 = __this->___moveSpeed_10;
		__this->___moveSpeed_10 = ((float)il2cpp_codegen_add(L_9, (0.25f)));
		// PlayerPrefs.SetFloat("MoveSpeed", moveSpeed);
		float L_10 = __this->___moveSpeed_10;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982, L_10, NULL);
		// counter++;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// waveCounter.text = counter.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_12 = __this->___waveCounter_7;
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_13);
		// StartCoroutine(winSet(waveWin));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___waveWin_4;
		RuntimeObject* L_15;
		L_15 = WaveCounter_winSet_m812E096403A7F566E081AD1B504ADDDD00AB1F8B(__this, L_14, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_15, NULL);
		goto IL_00b0;
	}

IL_0096:
	{
		// else if (result <= counter)
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) > ((int32_t)L_18)))
		{
			goto IL_00b0;
		}
	}
	{
		// PlayerPrefs.SetString("Wave", "false");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral024C60BC25F851E8B9F5531CC461C68CD60D3F30, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		// isActive = false;
		__this->___isActive_8 = (bool)0;
	}

IL_00b0:
	{
		// if(counter==5)
		int32_t L_19 = V_1;
		if ((!(((uint32_t)L_19) == ((uint32_t)5))))
		{
			goto IL_00e2;
		}
	}
	{
		// PlayerPrefs.SetString("Boss","true");
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		// PlayerPrefs.SetString("Score", score.text);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_20 = __this->___score_6;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_20);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, L_21, NULL);
		// SceneManager.LoadScene("BossLevel");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral987D7BBAB791917E2F55CAA07EE82D3A5ACD8A9D, NULL);
	}

IL_00e2:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator WaveCounter::winSet(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaveCounter_winSet_m812E096403A7F566E081AD1B504ADDDD00AB1F8B (WaveCounter_t158BBB4A45BBB53252219C66C5B4E118812B41DF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___window0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060* L_0 = (U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060*)il2cpp_codegen_object_new(U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CwinSetU3Ed__9__ctor_mDC2838CAD64E3C58220ACBB65CED7173F496E499(L_0, 0, NULL);
		U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___window0;
		NullCheck(L_2);
		L_2->___window_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___window_2), (void*)L_3);
		return L_2;
	}
}
// System.Void WaveCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveCounter__ctor_mAC6125E913D8B18C0AF7D5D68F2356500153BD81 (WaveCounter_t158BBB4A45BBB53252219C66C5B4E118812B41DF* __this, const RuntimeMethod* method) 
{
	{
		// float moveSpeed = 3f;
		__this->___moveSpeed_10 = (3.0f);
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
// System.Void WaveCounter/<winSet>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwinSetU3Ed__9__ctor_mDC2838CAD64E3C58220ACBB65CED7173F496E499 (U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WaveCounter/<winSet>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwinSetU3Ed__9_System_IDisposable_Dispose_m3AF0B4F62F802FFAA09B32C00498A04A668A2A74 (U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WaveCounter/<winSet>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwinSetU3Ed__9_MoveNext_mCC769937B60715523C84791E014B46A59F5613E6 (U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WaveCounter_t158BBB4A45BBB53252219C66C5B4E118812B41DF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WaveCounter_t158BBB4A45BBB53252219C66C5B4E118812B41DF* L_1 = __this->___U3CU3E4__this_3;
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
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// window.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___window_2;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// window.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___window_2;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// isActive = true;
		WaveCounter_t158BBB4A45BBB53252219C66C5B4E118812B41DF* L_7 = V_1;
		NullCheck(L_7);
		L_7->___isActive_8 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object WaveCounter/<winSet>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CwinSetU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCCD468F604D8F3AF696D0677A6F13353570D5931 (U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WaveCounter/<winSet>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwinSetU3Ed__9_System_Collections_IEnumerator_Reset_m797B0DEAE5D90B8189CD1A3DA7CC5A626DC2EFE1 (U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CwinSetU3Ed__9_System_Collections_IEnumerator_Reset_m797B0DEAE5D90B8189CD1A3DA7CC5A626DC2EFE1_RuntimeMethod_var)));
	}
}
// System.Object WaveCounter/<winSet>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CwinSetU3Ed__9_System_Collections_IEnumerator_get_Current_m0F0A440E71F95F0AE0923D33A56A01B46DCF6491 (U3CwinSetU3Ed__9_t38EF82EECEBE876CE8595347A5CEF2154C33D060* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
