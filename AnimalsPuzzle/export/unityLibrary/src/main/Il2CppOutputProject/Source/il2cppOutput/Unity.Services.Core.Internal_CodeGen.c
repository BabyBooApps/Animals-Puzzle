#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Unity.Services.Core.Telemetry.Internal.IDiagnostics::SendDiagnostic(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000002 Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory::Create(System.String)
// 0x00000003 System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendGaugeMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000004 System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendHistogramMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000005 System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000006 Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Telemetry.Internal.IMetricsFactory::Create(System.String)
// 0x00000007 System.String Unity.Services.Core.Environments.Internal.IEnvironments::get_Current()
// 0x00000008 System.String Unity.Services.Core.Configuration.Internal.ICloudProjectId::GetCloudProjectId()
// 0x00000009 System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String)
// 0x0000000A System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_keepWaiting()
extern void AsyncOperationBase_get_keepWaiting_mA5C59C7B9164015B04F3653329FD905A743D507F (void);
// 0x0000000B System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_IsCompleted()
// 0x0000000C System.Boolean Unity.Services.Core.Internal.TaskAsyncOperation::get_IsCompleted()
extern void TaskAsyncOperation_get_IsCompleted_mE8E514DC0AF426E20D123189A8166B0536A5BB0A (void);
// 0x0000000D System.Void Unity.Services.Core.Internal.TaskAsyncOperation::SetScheduler()
extern void TaskAsyncOperation_SetScheduler_m3DAA8E75D48B5977ED724AF4F5637FBD73199FBC (void);
// 0x0000000E System.Void Unity.Services.Core.Internal.CoreLogger::LogWarning(System.Object)
extern void CoreLogger_LogWarning_m0ADFEA332A24159D7EBDE589D840C9F563736073 (void);
// 0x0000000F System.Void Unity.Services.Core.Internal.CoreLogger::LogError(System.Object)
extern void CoreLogger_LogError_mC9B6F1572E693EEAE0A8C72A539C8E75AD967D8E (void);
// 0x00000010 System.Void Unity.Services.Core.Internal.CoreLogger::LogException(System.Exception)
extern void CoreLogger_LogException_m7129C6F678E086232211CBC0347F2300D0A42F3C (void);
// 0x00000011 System.Void Unity.Services.Core.Internal.CircularDependencyException::.ctor()
extern void CircularDependencyException__ctor_m4C48FC29A6765759CEF10843D5A98C43F100B2E2 (void);
// 0x00000012 System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.ComponentRegistry::get_ComponentTypeHashToInstance()
extern void ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20 (void);
// 0x00000013 System.Void Unity.Services.Core.Internal.ComponentRegistry::.ctor()
extern void ComponentRegistry__ctor_m97BABC74F8A6513A5E39250E6CA5C891B6C03F53 (void);
// 0x00000014 System.Void Unity.Services.Core.Internal.ComponentRegistry::RegisterServiceComponent(TComponent)
// 0x00000015 TComponent Unity.Services.Core.Internal.ComponentRegistry::GetServiceComponent()
// 0x00000016 System.Boolean Unity.Services.Core.Internal.ComponentRegistry::IsComponentTypeRegistered(System.Int32)
extern void ComponentRegistry_IsComponentTypeRegistered_m71D21117B9314CB1CA28F75B0246E215888228F8 (void);
// 0x00000017 System.Void Unity.Services.Core.Internal.ComponentRegistry::ResetProvidedComponents(System.Collections.Generic.IDictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
extern void ComponentRegistry_ResetProvidedComponents_m58F818C1716DBB973137A543DE880D24E2F25908 (void);
// 0x00000018 System.Void Unity.Services.Core.Internal.IComponentRegistry::RegisterServiceComponent(TComponent)
// 0x00000019 TComponent Unity.Services.Core.Internal.IComponentRegistry::GetServiceComponent()
// 0x0000001A System.Void Unity.Services.Core.Internal.IComponentRegistry::ResetProvidedComponents(System.Collections.Generic.IDictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
// 0x0000001B Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.LockedComponentRegistry::get_Registry()
extern void LockedComponentRegistry_get_Registry_m2170B5DB74B027249B53D07BF8A05D530956F941 (void);
// 0x0000001C System.Void Unity.Services.Core.Internal.LockedComponentRegistry::.ctor(Unity.Services.Core.Internal.IComponentRegistry)
extern void LockedComponentRegistry__ctor_m3630AF00C5DA0EC485544F72503B50D95E871BE1 (void);
// 0x0000001D System.Void Unity.Services.Core.Internal.LockedComponentRegistry::RegisterServiceComponent(TComponent)
// 0x0000001E TComponent Unity.Services.Core.Internal.LockedComponentRegistry::GetServiceComponent()
// 0x0000001F System.Void Unity.Services.Core.Internal.LockedComponentRegistry::ResetProvidedComponents(System.Collections.Generic.IDictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
extern void LockedComponentRegistry_ResetProvidedComponents_mA0A7565D5FB2DA9D4938EE1631E60AF9AA4F293D (void);
// 0x00000020 Unity.Services.Core.Internal.CorePackageRegistry Unity.Services.Core.Internal.CorePackageRegistry::get_Instance()
extern void CorePackageRegistry_get_Instance_m9D9D57AF47C2D9C332C67F69AF4E0121E3352DE0 (void);
// 0x00000021 System.Void Unity.Services.Core.Internal.CorePackageRegistry::set_Instance(Unity.Services.Core.Internal.CorePackageRegistry)
extern void CorePackageRegistry_set_Instance_m6C3A91DBA565146E5F0447848A497F4823B545C3 (void);
// 0x00000022 Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CorePackageRegistry::get_Registry()
extern void CorePackageRegistry_get_Registry_m6E57F342E4F5F394B7453CC81CD3512805909FE5 (void);
// 0x00000023 System.Void Unity.Services.Core.Internal.CorePackageRegistry::set_Registry(Unity.Services.Core.Internal.IPackageRegistry)
extern void CorePackageRegistry_set_Registry_m582970875E935248441CC95D6B1FBC4939461F1A (void);
// 0x00000024 System.Void Unity.Services.Core.Internal.CorePackageRegistry::.ctor()
extern void CorePackageRegistry__ctor_mE38657AA57ECBFFD6FB3550D8BE9D75BB987EB4D (void);
// 0x00000025 Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CorePackageRegistry::Register(TPackage)
// 0x00000026 System.Void Unity.Services.Core.Internal.CorePackageRegistry::Lock()
extern void CorePackageRegistry_Lock_m4C3243DA139AB0398555E608BFB5AFEBF2BFE2A1 (void);
// 0x00000027 System.Void Unity.Services.Core.Internal.CoreRegistration::.ctor(Unity.Services.Core.Internal.IPackageRegistry,System.Int32)
extern void CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1 (void);
// 0x00000028 Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::DependsOn()
// 0x00000029 Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::OptionallyDependsOn()
// 0x0000002A Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent()
// 0x0000002B Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
extern void CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2 (void);
// 0x0000002C System.Void Unity.Services.Core.Internal.CoreRegistry::set_Instance(Unity.Services.Core.Internal.CoreRegistry)
extern void CoreRegistry_set_Instance_mBFC9CEE6661027ED4103B95A82ABD453555803D7 (void);
// 0x0000002D Unity.Services.Core.ServicesType Unity.Services.Core.Internal.CoreRegistry::get_Type()
extern void CoreRegistry_get_Type_m4AF53950970280B903127A44FAD55A3D299732C0 (void);
// 0x0000002E System.Void Unity.Services.Core.Internal.CoreRegistry::set_Type(Unity.Services.Core.ServicesType)
extern void CoreRegistry_set_Type_m3A381E447C027551608E66912DBD90EB6A1260A5 (void);
// 0x0000002F Unity.Services.Core.InitializationOptions Unity.Services.Core.Internal.CoreRegistry::get_Options()
extern void CoreRegistry_get_Options_m38BF83E7ADFB48E1F4D00E33287EE500159E4B1A (void);
// 0x00000030 System.Void Unity.Services.Core.Internal.CoreRegistry::set_Options(Unity.Services.Core.InitializationOptions)
extern void CoreRegistry_set_Options_m9024B165E3C573BF8EE213B71ADAEADB3FB5EBB3 (void);
// 0x00000031 Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::get_PackageRegistry()
extern void CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063 (void);
// 0x00000032 System.Void Unity.Services.Core.Internal.CoreRegistry::set_PackageRegistry(Unity.Services.Core.Internal.IPackageRegistry)
extern void CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B (void);
// 0x00000033 Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::get_ComponentRegistry()
extern void CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13 (void);
// 0x00000034 System.Void Unity.Services.Core.Internal.CoreRegistry::set_ComponentRegistry(Unity.Services.Core.Internal.IComponentRegistry)
extern void CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E (void);
// 0x00000035 System.Void Unity.Services.Core.Internal.CoreRegistry::set_ServiceRegistry(Unity.Services.Core.Internal.IServiceRegistry)
extern void CoreRegistry_set_ServiceRegistry_m5CF74C0F9167102E8822DC0D31886F3E8C3ED62C (void);
// 0x00000036 System.Void Unity.Services.Core.Internal.CoreRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry,Unity.Services.Core.ServicesType,System.String)
extern void CoreRegistry__ctor_mBA92BC251BFE18FBCD0333205685EE7CC74985AF (void);
// 0x00000037 Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage(TPackage)
// 0x00000038 System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent(TComponent)
// 0x00000039 TComponent Unity.Services.Core.Internal.CoreRegistry::GetServiceComponent()
// 0x0000003A System.Void Unity.Services.Core.Internal.CoreRegistry::LockComponentRegistration()
extern void CoreRegistry_LockComponentRegistration_mB4ED90ED4F7621588195C9922C9A669C69C831BC (void);
// 0x0000003B System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::.ctor(Unity.Services.Core.Internal.CoreRegistry,System.Collections.Generic.List`1<System.Int32>)
extern void CoreRegistryInitializer__ctor_mBE9C46715DF41A8B1CF31CCAC9166A212318B156 (void);
// 0x0000003C System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>> Unity.Services.Core.Internal.CoreRegistryInitializer::InitializeRegistryAsync()
extern void CoreRegistryInitializer_InitializeRegistryAsync_m3E1030C1B0E033F76CF20DC208555AB915C62BF8 (void);
// 0x0000003D System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m6F552D21A7795194E9AB8D5D042CF8D7B3975EE9 (void);
// 0x0000003E System.Threading.Tasks.Task Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__TryInitializePackageAsync|0(Unity.Services.Core.Internal.IInitializablePackage)
extern void U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0_m56337B98B3CFDB562165FEE8B41F8987D91B7327 (void);
// 0x0000003F Unity.Services.Core.Internal.IInitializablePackage Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__GetPackageAt|1(System.Int32)
extern void U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__GetPackageAtU7C1_m68BD38748C7FE0D2105C0AB91F6F8E5737F8D016 (void);
// 0x00000040 System.Threading.Tasks.Task Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__InitializePackageAsync|2(Unity.Services.Core.Internal.IInitializablePackage)
extern void U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2_mC20491738C6723C6B9764C2DB7CDC60E5DE58D07 (void);
// 0x00000041 System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__Fail|3()
extern void U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__FailU7C3_m8321C5FB6E23B64251E2A4538955AB5EA21C0930 (void);
// 0x00000042 System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::MoveNext()
extern void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_MoveNext_m5E60799930DE5F81F77BBABBF177E4BF259BEE52 (void);
// 0x00000043 System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_SetStateMachine_m0D4B0934A0549E32EB5FED93883CC1F3E413EEB7 (void);
// 0x00000044 System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__InitializePackageAsync|2>d::MoveNext()
extern void U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_MoveNext_mD50EA2630E535CD8F34B81DA0D1495B0E49D68CD (void);
// 0x00000045 System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__InitializePackageAsync|2>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_SetStateMachine_m0DA4074FB9A4DC91EC6F02AA576C0ABBF12CDC74 (void);
// 0x00000046 System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::MoveNext()
extern void U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23 (void);
// 0x00000047 System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeRegistryAsyncU3Ed__3_SetStateMachine_m2129B81BA5F7EE6BA5AAFB086161A32FBECDE5E2 (void);
// 0x00000048 System.Void Unity.Services.Core.Internal.DependencyTree::.ctor()
extern void DependencyTree__ctor_mE8C447ED9582DA0A52E5F5294B424C67641AFA1C (void);
// 0x00000049 System.Void Unity.Services.Core.Internal.DependencyTree::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>,System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
extern void DependencyTree__ctor_mE33E7D31398C9CB414DFAA3F000033C0F5C2D928 (void);
// 0x0000004A System.Void Unity.Services.Core.Internal.DependencyTreeSortFailedException::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>,System.Exception)
extern void DependencyTreeSortFailedException__ctor_m20BA3EA58FC55FCFCE5F857FA9A2EC228473891B (void);
// 0x0000004B System.String Unity.Services.Core.Internal.DependencyTreeSortFailedException::CreateExceptionMessage(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>,System.Exception)
extern void DependencyTreeSortFailedException_CreateExceptionMessage_m076D757C6C201D22949EEAFEB546DA673BFD3301 (void);
// 0x0000004C System.String Unity.Services.Core.Internal.DependencyTreeExtensions::ToJson(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
extern void DependencyTreeExtensions_ToJson_m7BB4E9D6A8686F3DB3BB4AE8CDA0F5126BE2FC0C (void);
// 0x0000004D System.Boolean Unity.Services.Core.Internal.DependencyTreeExtensions::IsOptional(Unity.Services.Core.Internal.DependencyTree,System.Int32)
extern void DependencyTreeExtensions_IsOptional_m291995614CC4AA79B75123A32569FF7194759FB7 (void);
// 0x0000004E System.Boolean Unity.Services.Core.Internal.DependencyTreeExtensions::IsProvided(Unity.Services.Core.Internal.DependencyTree,System.Int32)
extern void DependencyTreeExtensions_IsProvided_m5CF82CE2D83F9EED333ABC06783E1902E30EA86A (void);
// 0x0000004F Newtonsoft.Json.Linq.JObject Unity.Services.Core.Internal.DependencyTreeExtensions::GetPackageJObject(Unity.Services.Core.Internal.DependencyTree,System.Int32)
extern void DependencyTreeExtensions_GetPackageJObject_m2D3CA37C10CFAE312157DA12D6BD189FE6C41F65 (void);
// 0x00000050 Newtonsoft.Json.Linq.JObject Unity.Services.Core.Internal.DependencyTreeExtensions::GetComponentJObject(Unity.Services.Core.Internal.DependencyTree,System.Int32)
extern void DependencyTreeExtensions_GetComponentJObject_mF466234CAEE808134510C6D6D29CCFB6D7EEF4B5 (void);
// 0x00000051 System.String Unity.Services.Core.Internal.DependencyTreeExtensions::GetComponentIdentifier(Unity.Services.Core.Internal.IServiceComponent)
extern void DependencyTreeExtensions_GetComponentIdentifier_mA42A0F2ED2930B38CD6BD6ADB5EB4564B1888CAD (void);
// 0x00000052 System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
extern void DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7 (void);
// 0x00000053 System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortRegisteredPackagesIntoTarget()
extern void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831 (void);
// 0x00000054 System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependenciesFromTree()
extern void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183 (void);
// 0x00000055 System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependencies(System.Collections.Generic.IList`1<System.Int32>)
extern void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B (void);
// 0x00000056 System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Int32)
extern void DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C (void);
// 0x00000057 System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D (void);
// 0x00000058 System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::MarkPackage(System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark)
extern void DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31 (void);
// 0x00000059 System.Collections.Generic.IReadOnlyCollection`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashes()
extern void DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653 (void);
// 0x0000005A System.Int32 Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashFor(System.Int32)
extern void DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634 (void);
// 0x0000005B System.Collections.Generic.IEnumerable`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetDependencyTypeHashesFor(System.Int32)
extern void DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF (void);
// 0x0000005C System.Int32 Unity.Services.Core.Internal.HashException::get_Hash()
extern void HashException_get_Hash_mFCB1368E904EFFF479EB757C721CBB832D50E023 (void);
// 0x0000005D System.Void Unity.Services.Core.Internal.HashException::.ctor(System.Int32,System.String)
extern void HashException__ctor_m5FBEC719A3F7F72B31F0C78070EB4D3129BFDA5B (void);
// 0x0000005E System.Void Unity.Services.Core.Internal.HashException::.ctor(System.Int32,System.String,System.Exception)
extern void HashException__ctor_m945EE76429F8A65F885AD4F0AADAC0DD9BC01655 (void);
// 0x0000005F System.Void Unity.Services.Core.Internal.DependencyTreePackageHashException::.ctor(System.Int32,System.String)
extern void DependencyTreePackageHashException__ctor_m923C53FC638F20CEC12103AF32A773C7164D0E33 (void);
// 0x00000060 System.Void Unity.Services.Core.Internal.DependencyTreePackageHashException::.ctor(System.Int32,System.String,System.Exception)
extern void DependencyTreePackageHashException__ctor_m5BF0D7C8B38D9F1E14F2AB38FB5D420528DB10E7 (void);
// 0x00000061 System.Void Unity.Services.Core.Internal.DependencyTreeComponentHashException::.ctor(System.Int32,System.String)
extern void DependencyTreeComponentHashException__ctor_mAE32DD2275602F7BC17EE37475304781149BCBC4 (void);
// 0x00000062 System.Threading.Tasks.Task Unity.Services.Core.Internal.IInitializablePackage::Initialize(Unity.Services.Core.Internal.CoreRegistry)
// 0x00000063 System.Threading.Tasks.Task Unity.Services.Core.Internal.IInitializablePackageV2::InitializeInstanceAsync(Unity.Services.Core.Internal.CoreRegistry)
// 0x00000064 System.Type Unity.Services.Core.Internal.MissingComponent::get_IntendedType()
extern void MissingComponent_get_IntendedType_m97B07B28AD54A741B376A917DCE3635E9479CB59 (void);
// 0x00000065 System.Void Unity.Services.Core.Internal.MissingComponent::.ctor(System.Type)
extern void MissingComponent__ctor_m2D280CE147B980C7656E897F5F237EB2A50A517B (void);
// 0x00000066 System.Void Unity.Services.Core.Internal.PackageInitializationInfo::.ctor()
extern void PackageInitializationInfo__ctor_mA13323855BBE265A977A230EE6F62B586D9C84D4 (void);
// 0x00000067 Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree()
// 0x00000068 Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.IPackageRegistry::RegisterPackage(TPackage)
// 0x00000069 System.Void Unity.Services.Core.Internal.IPackageRegistry::RegisterDependency(System.Int32)
// 0x0000006A System.Void Unity.Services.Core.Internal.IPackageRegistry::RegisterOptionalDependency(System.Int32)
// 0x0000006B System.Void Unity.Services.Core.Internal.IPackageRegistry::RegisterProvision(System.Int32)
// 0x0000006C Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.LockedPackageRegistry::get_Registry()
extern void LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A (void);
// 0x0000006D System.Void Unity.Services.Core.Internal.LockedPackageRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry)
extern void LockedPackageRegistry__ctor_m98CE0389216302BCF17DF91BC8B76CAA121D8927 (void);
// 0x0000006E Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.LockedPackageRegistry::get_Tree()
extern void LockedPackageRegistry_get_Tree_m29C509F6076AB2B4910AA7E2413385AD3523123D (void);
// 0x0000006F Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.LockedPackageRegistry::RegisterPackage(TPackage)
// 0x00000070 System.Void Unity.Services.Core.Internal.LockedPackageRegistry::RegisterDependency(System.Int32)
// 0x00000071 System.Void Unity.Services.Core.Internal.LockedPackageRegistry::RegisterOptionalDependency(System.Int32)
// 0x00000072 System.Void Unity.Services.Core.Internal.LockedPackageRegistry::RegisterProvision(System.Int32)
// 0x00000073 Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.PackageRegistry::get_Tree()
extern void PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B (void);
// 0x00000074 System.Void Unity.Services.Core.Internal.PackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
extern void PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C (void);
// 0x00000075 System.Void Unity.Services.Core.Internal.PackageRegistry::.ctor(Unity.Services.Core.Internal.DependencyTree)
extern void PackageRegistry__ctor_m42324D73BCB367393F2C200E417CA235BDB91330 (void);
// 0x00000076 Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.PackageRegistry::RegisterPackage(TPackage)
// 0x00000077 System.Void Unity.Services.Core.Internal.PackageRegistry::RegisterDependency(System.Int32)
// 0x00000078 System.Void Unity.Services.Core.Internal.PackageRegistry::RegisterOptionalDependency(System.Int32)
// 0x00000079 System.Void Unity.Services.Core.Internal.PackageRegistry::RegisterProvision(System.Int32)
// 0x0000007A System.Void Unity.Services.Core.Internal.PackageRegistry::AddComponentDependencyToPackage(System.Int32,System.Int32)
extern void PackageRegistry_AddComponentDependencyToPackage_m930F30EC365AAEE8596E7458AD8C86E73D445812 (void);
// 0x0000007B System.Void Unity.Services.Core.Internal.ServiceRegistry::.ctor()
extern void ServiceRegistry__ctor_m0C9FF2F4ED6D103192DFFADB0174890826DCC18E (void);
// 0x0000007C Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::get_Instance()
extern void CoreDiagnostics_get_Instance_m190590CB1205EE50B22E6BA144371BD3976C0963 (void);
// 0x0000007D System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_Instance(Unity.Services.Core.Internal.CoreDiagnostics)
extern void CoreDiagnostics_set_Instance_mFEA5BC5137F5C737B49419FA33F79339B1D43F2C (void);
// 0x0000007E System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_DiagnosticsComponentProvider(Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider)
extern void CoreDiagnostics_set_DiagnosticsComponentProvider_m4980F8DAE6FC5015B00AB0A083327BDAB8F8A5B3 (void);
// 0x0000007F System.Void Unity.Services.Core.Internal.CoreDiagnostics::.ctor()
extern void CoreDiagnostics__ctor_mFCD549A6812E3CEAB8A7E42B75A777F9061B3330 (void);
// 0x00000080 System.Void Unity.Services.Core.Internal.CoreMetrics::set_Instance(Unity.Services.Core.Internal.CoreMetrics)
extern void CoreMetrics_set_Instance_mC18703DE5A475E77CBA000AA1602A2A9305AEFD2 (void);
// 0x00000081 System.Void Unity.Services.Core.Internal.CoreMetrics::.ctor()
extern void CoreMetrics__ctor_mF17592A929926B30C9FC2D17569B55740B15D7D2 (void);
// 0x00000082 System.Void Unity.Services.Core.Internal.UnityServicesInitializer::CreateStaticInstance()
extern void UnityServicesInitializer_CreateStaticInstance_m11C921F54756626B2102628C99180975D8907EB9 (void);
// 0x00000083 System.Void Unity.Services.Core.Internal.UnityServicesInitializer::EnableServicesInitializationAsync()
extern void UnityServicesInitializer_EnableServicesInitializationAsync_m16A565849C8E0FC0A11F2ADE7AA87B6EAA29B890 (void);
// 0x00000084 System.Void Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::MoveNext()
extern void U3CEnableServicesInitializationAsyncU3Ed__1_MoveNext_mE98AC7044CBFAF74DE70A249383A271C2018B81E (void);
// 0x00000085 System.Void Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CEnableServicesInitializationAsyncU3Ed__1_SetStateMachine_mF049794791F6718DA52FC0A1861464C37CBBD553 (void);
// 0x00000086 Unity.Services.Core.ServicesInitializationState Unity.Services.Core.Internal.UnityServicesInternal::get_State()
extern void UnityServicesInternal_get_State_mDBBCB10039E6F2A9E04A054AD914C7204E5D39D4 (void);
// 0x00000087 System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_State(Unity.Services.Core.ServicesInitializationState)
extern void UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4 (void);
// 0x00000088 Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.UnityServicesInternal::get_Registry()
extern void UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4 (void);
// 0x00000089 System.Void Unity.Services.Core.Internal.UnityServicesInternal::.ctor(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.Internal.CoreMetrics,Unity.Services.Core.Internal.CoreDiagnostics)
extern void UnityServicesInternal__ctor_mDA89BB80FC660F4AAE12F656B10C5A3EAB719252 (void);
// 0x0000008A System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::InitializeAsync(Unity.Services.Core.InitializationOptions)
extern void UnityServicesInternal_InitializeAsync_m964BF1654D9A647F2216029243F3CB1ED6F600C4 (void);
// 0x0000008B System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::HasRequestedInitialization()
extern void UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03 (void);
// 0x0000008C System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::InitializeServicesAsync()
extern void UnityServicesInternal_InitializeServicesAsync_mD1A530783D1BAC5937E64849348EFFCD3B26AB9E (void);
// 0x0000008D System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::EnableInitializationAsync()
extern void UnityServicesInternal_EnableInitializationAsync_m55FC6F901CD841698285288DA3F2AC772F2B7E35 (void);
// 0x0000008E System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::<InitializeAsync>g__HasInitializationFailed|19_0()
extern void UnityServicesInternal_U3CInitializeAsyncU3Eg__HasInitializationFailedU7C19_0_mB2307E67A9F90AB4A77573EA6B400FFF96458C0A (void);
// 0x0000008F System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__19::MoveNext()
extern void U3CInitializeAsyncU3Ed__19_MoveNext_m7AFB4839B4E9FA4F8BB3EA34EABDD0B1F68CA6DA (void);
// 0x00000090 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeAsyncU3Ed__19_SetStateMachine_m6314E1E5F87506D2AAEE6875D9C8466712157B3F (void);
// 0x00000091 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::.ctor()
extern void U3CU3Ec__DisplayClass22_0__ctor_mDBB05CBB8FBBCD2F03D5B8743AFC609009C0CCEC (void);
// 0x00000092 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__SortPackages|0()
extern void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SortPackagesU7C0_m3EF4EFD7DF837E39D66E554ED45A6057383A3162 (void);
// 0x00000093 System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__InitializePackagesAsync|1()
extern void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1_mEE77880AC081204F2488D583F410718E26B285FA (void);
// 0x00000094 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__FailServicesInitialization|2(System.Exception)
extern void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__FailServicesInitializationU7C2_mBFC7350F4146AB29FE8C595C05249A3595824B04 (void);
// 0x00000095 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__SucceedServicesInitialization|3()
extern void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SucceedServicesInitializationU7C3_m405CF9855B1CEED7DF649B633CB7F269244F15A3 (void);
// 0x00000096 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::MoveNext()
extern void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_MoveNext_m1A0F587F4E5C48CFBB69476DC6FF0E8D71A8C89E (void);
// 0x00000097 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_SetStateMachine_mAAD9750957C9D2A753833C40E201F4141C56143D (void);
// 0x00000098 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::MoveNext()
extern void U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B (void);
// 0x00000099 System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInitializeServicesAsyncU3Ed__22_SetStateMachine_mFC5FA0E2CD3782B01DA1B4624BD5E80D966BFF33 (void);
// 0x0000009A System.Void Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__25::MoveNext()
extern void U3CEnableInitializationAsyncU3Ed__25_MoveNext_mDD855653BC14915A8D38F78ABDE3C3B44AE1ADD3 (void);
// 0x0000009B System.Void Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CEnableInitializationAsyncU3Ed__25_SetStateMachine_m6AC925AA5E8A235D126A0AE1BD10BADE6DF9CAC6 (void);
// 0x0000009C TDictionary Unity.Services.Core.Internal.DictionaryExtensions::MergeAllowOverride(TDictionary,System.Collections.Generic.IDictionary`2<TKey,TValue>)
// 0x0000009D System.Boolean Unity.Services.Core.Internal.DictionaryExtensions::ValueEquals(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IDictionary`2<TKey,TValue>)
// 0x0000009E System.Boolean Unity.Services.Core.Internal.DictionaryExtensions::ValueEquals(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IDictionary`2<TKey,TValue>,TComparer)
// 0x0000009F System.Boolean Unity.Services.Core.Internal.UnityWebRequestUtils::HasSucceeded(UnityEngine.Networking.UnityWebRequest)
extern void UnityWebRequestUtils_HasSucceeded_m06CCE15DA3423C35C7629483DD6BEB166AE4C32D (void);
// 0x000000A0 System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Internal.UnityWebRequestUtils::GetTextAsync(System.String)
extern void UnityWebRequestUtils_GetTextAsync_m2503C3E630F795B5151BBD61295F45AE38AD7EC2 (void);
// 0x000000A1 System.Void Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m075F5F3DE1F9440556035D45480BD01F7A8932C1 (void);
// 0x000000A2 System.Void Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0::<GetTextAsync>g__CompleteFetchTaskOnRequestCompleted|0(UnityEngine.AsyncOperation)
extern void U3CU3Ec__DisplayClass2_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_mFF438AD39102AD7C40D5BB5BE65A4E3AD3AFE759 (void);
// 0x000000A3 T Unity.Services.Core.Internal.Serialization.IJsonSerializer::DeserializeObject(System.String)
// 0x000000A4 System.Void Unity.Services.Core.Internal.Serialization.NewtonsoftSerializer::.ctor(Newtonsoft.Json.JsonSerializerSettings)
extern void NewtonsoftSerializer__ctor_mB0CCDC64B219681F77D699C1E806E595491B1875 (void);
// 0x000000A5 System.Void Unity.Services.Core.Internal.Serialization.NewtonsoftSerializer::.ctor(Newtonsoft.Json.JsonSerializer)
extern void NewtonsoftSerializer__ctor_mE05B438480C96C31986036D084A95025C5E5D563 (void);
// 0x000000A6 T Unity.Services.Core.Internal.Serialization.NewtonsoftSerializer::DeserializeObject(System.String)
static Il2CppMethodPointer s_methodPointers[166] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AsyncOperationBase_get_keepWaiting_mA5C59C7B9164015B04F3653329FD905A743D507F,
	NULL,
	TaskAsyncOperation_get_IsCompleted_mE8E514DC0AF426E20D123189A8166B0536A5BB0A,
	TaskAsyncOperation_SetScheduler_m3DAA8E75D48B5977ED724AF4F5637FBD73199FBC,
	CoreLogger_LogWarning_m0ADFEA332A24159D7EBDE589D840C9F563736073,
	CoreLogger_LogError_mC9B6F1572E693EEAE0A8C72A539C8E75AD967D8E,
	CoreLogger_LogException_m7129C6F678E086232211CBC0347F2300D0A42F3C,
	CircularDependencyException__ctor_m4C48FC29A6765759CEF10843D5A98C43F100B2E2,
	ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20,
	ComponentRegistry__ctor_m97BABC74F8A6513A5E39250E6CA5C891B6C03F53,
	NULL,
	NULL,
	ComponentRegistry_IsComponentTypeRegistered_m71D21117B9314CB1CA28F75B0246E215888228F8,
	ComponentRegistry_ResetProvidedComponents_m58F818C1716DBB973137A543DE880D24E2F25908,
	NULL,
	NULL,
	NULL,
	LockedComponentRegistry_get_Registry_m2170B5DB74B027249B53D07BF8A05D530956F941,
	LockedComponentRegistry__ctor_m3630AF00C5DA0EC485544F72503B50D95E871BE1,
	NULL,
	NULL,
	LockedComponentRegistry_ResetProvidedComponents_mA0A7565D5FB2DA9D4938EE1631E60AF9AA4F293D,
	CorePackageRegistry_get_Instance_m9D9D57AF47C2D9C332C67F69AF4E0121E3352DE0,
	CorePackageRegistry_set_Instance_m6C3A91DBA565146E5F0447848A497F4823B545C3,
	CorePackageRegistry_get_Registry_m6E57F342E4F5F394B7453CC81CD3512805909FE5,
	CorePackageRegistry_set_Registry_m582970875E935248441CC95D6B1FBC4939461F1A,
	CorePackageRegistry__ctor_mE38657AA57ECBFFD6FB3550D8BE9D75BB987EB4D,
	NULL,
	CorePackageRegistry_Lock_m4C3243DA139AB0398555E608BFB5AFEBF2BFE2A1,
	CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1,
	NULL,
	NULL,
	NULL,
	CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2,
	CoreRegistry_set_Instance_mBFC9CEE6661027ED4103B95A82ABD453555803D7,
	CoreRegistry_get_Type_m4AF53950970280B903127A44FAD55A3D299732C0,
	CoreRegistry_set_Type_m3A381E447C027551608E66912DBD90EB6A1260A5,
	CoreRegistry_get_Options_m38BF83E7ADFB48E1F4D00E33287EE500159E4B1A,
	CoreRegistry_set_Options_m9024B165E3C573BF8EE213B71ADAEADB3FB5EBB3,
	CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063,
	CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B,
	CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13,
	CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E,
	CoreRegistry_set_ServiceRegistry_m5CF74C0F9167102E8822DC0D31886F3E8C3ED62C,
	CoreRegistry__ctor_mBA92BC251BFE18FBCD0333205685EE7CC74985AF,
	NULL,
	NULL,
	NULL,
	CoreRegistry_LockComponentRegistration_mB4ED90ED4F7621588195C9922C9A669C69C831BC,
	CoreRegistryInitializer__ctor_mBE9C46715DF41A8B1CF31CCAC9166A212318B156,
	CoreRegistryInitializer_InitializeRegistryAsync_m3E1030C1B0E033F76CF20DC208555AB915C62BF8,
	U3CU3Ec__DisplayClass3_0__ctor_m6F552D21A7795194E9AB8D5D042CF8D7B3975EE9,
	U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0_m56337B98B3CFDB562165FEE8B41F8987D91B7327,
	U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__GetPackageAtU7C1_m68BD38748C7FE0D2105C0AB91F6F8E5737F8D016,
	U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2_mC20491738C6723C6B9764C2DB7CDC60E5DE58D07,
	U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__FailU7C3_m8321C5FB6E23B64251E2A4538955AB5EA21C0930,
	U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_MoveNext_m5E60799930DE5F81F77BBABBF177E4BF259BEE52,
	U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_SetStateMachine_m0D4B0934A0549E32EB5FED93883CC1F3E413EEB7,
	U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_MoveNext_mD50EA2630E535CD8F34B81DA0D1495B0E49D68CD,
	U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_SetStateMachine_m0DA4074FB9A4DC91EC6F02AA576C0ABBF12CDC74,
	U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23,
	U3CInitializeRegistryAsyncU3Ed__3_SetStateMachine_m2129B81BA5F7EE6BA5AAFB086161A32FBECDE5E2,
	DependencyTree__ctor_mE8C447ED9582DA0A52E5F5294B424C67641AFA1C,
	DependencyTree__ctor_mE33E7D31398C9CB414DFAA3F000033C0F5C2D928,
	DependencyTreeSortFailedException__ctor_m20BA3EA58FC55FCFCE5F857FA9A2EC228473891B,
	DependencyTreeSortFailedException_CreateExceptionMessage_m076D757C6C201D22949EEAFEB546DA673BFD3301,
	DependencyTreeExtensions_ToJson_m7BB4E9D6A8686F3DB3BB4AE8CDA0F5126BE2FC0C,
	DependencyTreeExtensions_IsOptional_m291995614CC4AA79B75123A32569FF7194759FB7,
	DependencyTreeExtensions_IsProvided_m5CF82CE2D83F9EED333ABC06783E1902E30EA86A,
	DependencyTreeExtensions_GetPackageJObject_m2D3CA37C10CFAE312157DA12D6BD189FE6C41F65,
	DependencyTreeExtensions_GetComponentJObject_mF466234CAEE808134510C6D6D29CCFB6D7EEF4B5,
	DependencyTreeExtensions_GetComponentIdentifier_mA42A0F2ED2930B38CD6BD6ADB5EB4564B1888CAD,
	DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7,
	DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831,
	DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183,
	DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B,
	DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C,
	DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D,
	DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31,
	DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653,
	DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634,
	DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF,
	HashException_get_Hash_mFCB1368E904EFFF479EB757C721CBB832D50E023,
	HashException__ctor_m5FBEC719A3F7F72B31F0C78070EB4D3129BFDA5B,
	HashException__ctor_m945EE76429F8A65F885AD4F0AADAC0DD9BC01655,
	DependencyTreePackageHashException__ctor_m923C53FC638F20CEC12103AF32A773C7164D0E33,
	DependencyTreePackageHashException__ctor_m5BF0D7C8B38D9F1E14F2AB38FB5D420528DB10E7,
	DependencyTreeComponentHashException__ctor_mAE32DD2275602F7BC17EE37475304781149BCBC4,
	NULL,
	NULL,
	MissingComponent_get_IntendedType_m97B07B28AD54A741B376A917DCE3635E9479CB59,
	MissingComponent__ctor_m2D280CE147B980C7656E897F5F237EB2A50A517B,
	PackageInitializationInfo__ctor_mA13323855BBE265A977A230EE6F62B586D9C84D4,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A,
	LockedPackageRegistry__ctor_m98CE0389216302BCF17DF91BC8B76CAA121D8927,
	LockedPackageRegistry_get_Tree_m29C509F6076AB2B4910AA7E2413385AD3523123D,
	NULL,
	NULL,
	NULL,
	NULL,
	PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B,
	PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C,
	PackageRegistry__ctor_m42324D73BCB367393F2C200E417CA235BDB91330,
	NULL,
	NULL,
	NULL,
	NULL,
	PackageRegistry_AddComponentDependencyToPackage_m930F30EC365AAEE8596E7458AD8C86E73D445812,
	ServiceRegistry__ctor_m0C9FF2F4ED6D103192DFFADB0174890826DCC18E,
	CoreDiagnostics_get_Instance_m190590CB1205EE50B22E6BA144371BD3976C0963,
	CoreDiagnostics_set_Instance_mFEA5BC5137F5C737B49419FA33F79339B1D43F2C,
	CoreDiagnostics_set_DiagnosticsComponentProvider_m4980F8DAE6FC5015B00AB0A083327BDAB8F8A5B3,
	CoreDiagnostics__ctor_mFCD549A6812E3CEAB8A7E42B75A777F9061B3330,
	CoreMetrics_set_Instance_mC18703DE5A475E77CBA000AA1602A2A9305AEFD2,
	CoreMetrics__ctor_mF17592A929926B30C9FC2D17569B55740B15D7D2,
	UnityServicesInitializer_CreateStaticInstance_m11C921F54756626B2102628C99180975D8907EB9,
	UnityServicesInitializer_EnableServicesInitializationAsync_m16A565849C8E0FC0A11F2ADE7AA87B6EAA29B890,
	U3CEnableServicesInitializationAsyncU3Ed__1_MoveNext_mE98AC7044CBFAF74DE70A249383A271C2018B81E,
	U3CEnableServicesInitializationAsyncU3Ed__1_SetStateMachine_mF049794791F6718DA52FC0A1861464C37CBBD553,
	UnityServicesInternal_get_State_mDBBCB10039E6F2A9E04A054AD914C7204E5D39D4,
	UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4,
	UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4,
	UnityServicesInternal__ctor_mDA89BB80FC660F4AAE12F656B10C5A3EAB719252,
	UnityServicesInternal_InitializeAsync_m964BF1654D9A647F2216029243F3CB1ED6F600C4,
	UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03,
	UnityServicesInternal_InitializeServicesAsync_mD1A530783D1BAC5937E64849348EFFCD3B26AB9E,
	UnityServicesInternal_EnableInitializationAsync_m55FC6F901CD841698285288DA3F2AC772F2B7E35,
	UnityServicesInternal_U3CInitializeAsyncU3Eg__HasInitializationFailedU7C19_0_mB2307E67A9F90AB4A77573EA6B400FFF96458C0A,
	U3CInitializeAsyncU3Ed__19_MoveNext_m7AFB4839B4E9FA4F8BB3EA34EABDD0B1F68CA6DA,
	U3CInitializeAsyncU3Ed__19_SetStateMachine_m6314E1E5F87506D2AAEE6875D9C8466712157B3F,
	U3CU3Ec__DisplayClass22_0__ctor_mDBB05CBB8FBBCD2F03D5B8743AFC609009C0CCEC,
	U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SortPackagesU7C0_m3EF4EFD7DF837E39D66E554ED45A6057383A3162,
	U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1_mEE77880AC081204F2488D583F410718E26B285FA,
	U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__FailServicesInitializationU7C2_mBFC7350F4146AB29FE8C595C05249A3595824B04,
	U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SucceedServicesInitializationU7C3_m405CF9855B1CEED7DF649B633CB7F269244F15A3,
	U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_MoveNext_m1A0F587F4E5C48CFBB69476DC6FF0E8D71A8C89E,
	U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_SetStateMachine_mAAD9750957C9D2A753833C40E201F4141C56143D,
	U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B,
	U3CInitializeServicesAsyncU3Ed__22_SetStateMachine_mFC5FA0E2CD3782B01DA1B4624BD5E80D966BFF33,
	U3CEnableInitializationAsyncU3Ed__25_MoveNext_mDD855653BC14915A8D38F78ABDE3C3B44AE1ADD3,
	U3CEnableInitializationAsyncU3Ed__25_SetStateMachine_m6AC925AA5E8A235D126A0AE1BD10BADE6DF9CAC6,
	NULL,
	NULL,
	NULL,
	UnityWebRequestUtils_HasSucceeded_m06CCE15DA3423C35C7629483DD6BEB166AE4C32D,
	UnityWebRequestUtils_GetTextAsync_m2503C3E630F795B5151BBD61295F45AE38AD7EC2,
	U3CU3Ec__DisplayClass2_0__ctor_m075F5F3DE1F9440556035D45480BD01F7A8932C1,
	U3CU3Ec__DisplayClass2_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_mFF438AD39102AD7C40D5BB5BE65A4E3AD3AFE759,
	NULL,
	NewtonsoftSerializer__ctor_mB0CCDC64B219681F77D699C1E806E595491B1875,
	NewtonsoftSerializer__ctor_mE05B438480C96C31986036D084A95025C5E5D563,
	NULL,
};
extern void CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1_AdjustorThunk (void);
extern void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_MoveNext_m5E60799930DE5F81F77BBABBF177E4BF259BEE52_AdjustorThunk (void);
extern void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_SetStateMachine_m0D4B0934A0549E32EB5FED93883CC1F3E413EEB7_AdjustorThunk (void);
extern void U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_MoveNext_mD50EA2630E535CD8F34B81DA0D1495B0E49D68CD_AdjustorThunk (void);
extern void U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_SetStateMachine_m0DA4074FB9A4DC91EC6F02AA576C0ABBF12CDC74_AdjustorThunk (void);
extern void U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23_AdjustorThunk (void);
extern void U3CInitializeRegistryAsyncU3Ed__3_SetStateMachine_m2129B81BA5F7EE6BA5AAFB086161A32FBECDE5E2_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634_AdjustorThunk (void);
extern void DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF_AdjustorThunk (void);
extern void U3CEnableServicesInitializationAsyncU3Ed__1_MoveNext_mE98AC7044CBFAF74DE70A249383A271C2018B81E_AdjustorThunk (void);
extern void U3CEnableServicesInitializationAsyncU3Ed__1_SetStateMachine_mF049794791F6718DA52FC0A1861464C37CBBD553_AdjustorThunk (void);
extern void U3CInitializeAsyncU3Ed__19_MoveNext_m7AFB4839B4E9FA4F8BB3EA34EABDD0B1F68CA6DA_AdjustorThunk (void);
extern void U3CInitializeAsyncU3Ed__19_SetStateMachine_m6314E1E5F87506D2AAEE6875D9C8466712157B3F_AdjustorThunk (void);
extern void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_MoveNext_m1A0F587F4E5C48CFBB69476DC6FF0E8D71A8C89E_AdjustorThunk (void);
extern void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_SetStateMachine_mAAD9750957C9D2A753833C40E201F4141C56143D_AdjustorThunk (void);
extern void U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B_AdjustorThunk (void);
extern void U3CInitializeServicesAsyncU3Ed__22_SetStateMachine_mFC5FA0E2CD3782B01DA1B4624BD5E80D966BFF33_AdjustorThunk (void);
extern void U3CEnableInitializationAsyncU3Ed__25_MoveNext_mDD855653BC14915A8D38F78ABDE3C3B44AE1ADD3_AdjustorThunk (void);
extern void U3CEnableInitializationAsyncU3Ed__25_SetStateMachine_m6AC925AA5E8A235D126A0AE1BD10BADE6DF9CAC6_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[27] = 
{
	{ 0x06000027, CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1_AdjustorThunk },
	{ 0x06000042, U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_MoveNext_m5E60799930DE5F81F77BBABBF177E4BF259BEE52_AdjustorThunk },
	{ 0x06000043, U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_SetStateMachine_m0D4B0934A0549E32EB5FED93883CC1F3E413EEB7_AdjustorThunk },
	{ 0x06000044, U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_MoveNext_mD50EA2630E535CD8F34B81DA0D1495B0E49D68CD_AdjustorThunk },
	{ 0x06000045, U3CU3CInitializeRegistryAsyncU3Eg__InitializePackageAsyncU7C2U3Ed_SetStateMachine_m0DA4074FB9A4DC91EC6F02AA576C0ABBF12CDC74_AdjustorThunk },
	{ 0x06000046, U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23_AdjustorThunk },
	{ 0x06000047, U3CInitializeRegistryAsyncU3Ed__3_SetStateMachine_m2129B81BA5F7EE6BA5AAFB086161A32FBECDE5E2_AdjustorThunk },
	{ 0x06000052, DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7_AdjustorThunk },
	{ 0x06000053, DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831_AdjustorThunk },
	{ 0x06000054, DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183_AdjustorThunk },
	{ 0x06000055, DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B_AdjustorThunk },
	{ 0x06000056, DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C_AdjustorThunk },
	{ 0x06000057, DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D_AdjustorThunk },
	{ 0x06000058, DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31_AdjustorThunk },
	{ 0x06000059, DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653_AdjustorThunk },
	{ 0x0600005A, DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634_AdjustorThunk },
	{ 0x0600005B, DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF_AdjustorThunk },
	{ 0x06000084, U3CEnableServicesInitializationAsyncU3Ed__1_MoveNext_mE98AC7044CBFAF74DE70A249383A271C2018B81E_AdjustorThunk },
	{ 0x06000085, U3CEnableServicesInitializationAsyncU3Ed__1_SetStateMachine_mF049794791F6718DA52FC0A1861464C37CBBD553_AdjustorThunk },
	{ 0x0600008F, U3CInitializeAsyncU3Ed__19_MoveNext_m7AFB4839B4E9FA4F8BB3EA34EABDD0B1F68CA6DA_AdjustorThunk },
	{ 0x06000090, U3CInitializeAsyncU3Ed__19_SetStateMachine_m6314E1E5F87506D2AAEE6875D9C8466712157B3F_AdjustorThunk },
	{ 0x06000096, U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_MoveNext_m1A0F587F4E5C48CFBB69476DC6FF0E8D71A8C89E_AdjustorThunk },
	{ 0x06000097, U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_SetStateMachine_mAAD9750957C9D2A753833C40E201F4141C56143D_AdjustorThunk },
	{ 0x06000098, U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B_AdjustorThunk },
	{ 0x06000099, U3CInitializeServicesAsyncU3Ed__22_SetStateMachine_mFC5FA0E2CD3782B01DA1B4624BD5E80D966BFF33_AdjustorThunk },
	{ 0x0600009A, U3CEnableInitializationAsyncU3Ed__25_MoveNext_mDD855653BC14915A8D38F78ABDE3C3B44AE1ADD3_AdjustorThunk },
	{ 0x0600009B, U3CEnableInitializationAsyncU3Ed__25_SetStateMachine_m6AC925AA5E8A235D126A0AE1BD10BADE6DF9CAC6_AdjustorThunk },
};
static const int32_t s_InvokerIndices[166] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4395,
	0,
	4395,
	7033,
	6908,
	6908,
	6908,
	4569,
	4464,
	4569,
	0,
	0,
	2659,
	3736,
	0,
	0,
	0,
	4464,
	3736,
	0,
	0,
	3736,
	7005,
	6908,
	4464,
	3736,
	4569,
	0,
	4569,
	2145,
	0,
	0,
	0,
	7005,
	6908,
	4441,
	3716,
	4464,
	3736,
	4464,
	3736,
	4464,
	3736,
	3736,
	1212,
	0,
	0,
	0,
	4569,
	2149,
	4464,
	4569,
	3322,
	3320,
	3322,
	4569,
	4569,
	3736,
	4569,
	3736,
	4569,
	3736,
	4569,
	895,
	1230,
	5686,
	6168,
	5972,
	5972,
	6165,
	6165,
	6683,
	2149,
	4569,
	4569,
	3736,
	3716,
	3736,
	1964,
	4464,
	3111,
	3320,
	4441,
	1983,
	1177,
	1983,
	1177,
	1983,
	0,
	0,
	4464,
	3736,
	4569,
	0,
	0,
	0,
	0,
	0,
	4464,
	3736,
	4464,
	0,
	0,
	0,
	0,
	4464,
	3736,
	3736,
	0,
	0,
	0,
	0,
	1964,
	4569,
	7005,
	6908,
	3736,
	4569,
	6908,
	4569,
	7033,
	7033,
	4569,
	3736,
	4441,
	3716,
	4464,
	1230,
	3322,
	4395,
	4464,
	4464,
	4395,
	4569,
	3736,
	4569,
	4569,
	4464,
	3736,
	4569,
	4569,
	3736,
	4569,
	3736,
	4569,
	3736,
	0,
	0,
	0,
	6494,
	6683,
	4569,
	3736,
	0,
	3736,
	3736,
	0,
};
static const Il2CppTokenRangePair s_rgctxIndices[18] = 
{
	{ 0x06000014, { 0, 3 } },
	{ 0x06000015, { 3, 2 } },
	{ 0x0600001E, { 5, 1 } },
	{ 0x06000025, { 6, 1 } },
	{ 0x06000028, { 7, 1 } },
	{ 0x06000029, { 8, 1 } },
	{ 0x0600002A, { 9, 1 } },
	{ 0x06000037, { 10, 1 } },
	{ 0x06000038, { 11, 1 } },
	{ 0x06000039, { 12, 1 } },
	{ 0x06000076, { 13, 2 } },
	{ 0x06000077, { 15, 1 } },
	{ 0x06000078, { 16, 1 } },
	{ 0x06000079, { 17, 1 } },
	{ 0x0600009C, { 18, 10 } },
	{ 0x0600009D, { 28, 3 } },
	{ 0x0600009E, { 31, 14 } },
	{ 0x060000A6, { 45, 2 } },
};
extern const uint32_t g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19;
extern const uint32_t g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19;
extern const Il2CppRGCTXConstrainedData g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3;
extern const uint32_t g_rgctx_TComponent_t0CE1B3A4E22EC0D1C5C58C75BCC12B399C511E0C;
extern const uint32_t g_rgctx_TComponent_t0CE1B3A4E22EC0D1C5C58C75BCC12B399C511E0C;
extern const uint32_t g_rgctx_IComponentRegistry_GetServiceComponent_TisTComponent_t96B8B334A174C61ACF2F00AC2D36DA82EFF89D93_m49E36B01B9275916714436B280553CD140C85156;
extern const uint32_t g_rgctx_IPackageRegistry_RegisterPackage_TisTPackage_tD9C5D9B459B225940045E7933443C8B783656397_mC535DC040374F4E5C9752240EC89757EF6460FC7;
extern const uint32_t g_rgctx_IPackageRegistry_RegisterDependency_TisT_tF7329CEE248A45B379F2D9B9C20F1C509D5AC5BE_mAD6891506B8D0C6E17D74F7C8BB210301F897701;
extern const uint32_t g_rgctx_IPackageRegistry_RegisterOptionalDependency_TisT_tCCF33AF0BF9585F8C54899E9E6F8D47870BAFE99_m70E798148F7356F9EE77CBC9C904A07D27D7AA4F;
extern const uint32_t g_rgctx_IPackageRegistry_RegisterProvision_TisT_tAF2C20D6116F2B37117D32E592CC2526F3C66387_mB4B584384E95C9C399D4C4F0099A378683FD9F3C;
extern const uint32_t g_rgctx_IPackageRegistry_RegisterPackage_TisTPackage_t1F53D662DD7D083035D429593DB6417C7D00B466_m263AC8BBE177344DE7192B249E8EB1582607BF42;
extern const uint32_t g_rgctx_IComponentRegistry_RegisterServiceComponent_TisTComponent_t85B70181FD308155E7F16AE3674AFFD3CADCCC5B_mB9D0C705AE4607805AB4E3AADD0D1A95EEBA7693;
extern const uint32_t g_rgctx_IComponentRegistry_GetServiceComponent_TisTComponent_tD5C669B09D7578B0D96C43ADD96195C237A26343_m14AD4DCAA8DFFB5BBC39FAD1072B05CD971B93F3;
extern const uint32_t g_rgctx_TPackage_tBB906B0EDE41FEF2C415DB07176611363FF605A8;
extern const uint32_t g_rgctx_TPackage_tBB906B0EDE41FEF2C415DB07176611363FF605A8;
extern const uint32_t g_rgctx_TComponent_t238DC5B730435DEF358B69AF16052E2640F2DDAC;
extern const uint32_t g_rgctx_TComponent_t0A42BC7DB4D3931FC95421414239D0563923E6A3;
extern const uint32_t g_rgctx_TComponent_t4EAFE06D169C0A9F5CEA93DA71BFAF9901F32E5E;
extern const uint32_t g_rgctx_IEnumerable_1_t0054CA7812EA9EB48A93C0ECB6C72ADB4EBE1982;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mF75A892F34C72F44CB3BE51719A01B01C8F17819;
extern const uint32_t g_rgctx_IEnumerator_1_t6236748848A5632DFD186C6A3470C96922406DF5;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m297021CD3C7C2CFEFB3884ABECE09DFFD61B9649;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Key_m7E9CBD2AA582BF58E8AC08FB4C3D23FB5D36A4FC;
extern const uint32_t g_rgctx_KeyValuePair_2_tD5CC9E76B152764680BDFB703EAD3F05934C0FBD;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Value_m41435BD3EFCEA1D74342808B791447E327121C23;
extern const uint32_t g_rgctx_TDictionary_tE4D86954848B8FB9C3446EABF72C614BBFF9753C;
extern const uint32_t g_rgctx_IDictionary_2_t2D8409E060ED515C7006E9D709774D39F10B147E;
extern const Il2CppRGCTXConstrainedData g_rgctx_TDictionary_tE4D86954848B8FB9C3446EABF72C614BBFF9753C_IDictionary_2_set_Item_m961DD5D72BFEDD7568922EBDAA6758DAD60866C3;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m2B515C1B320E5CF36AA0050682E82CF5D5F9505B;
extern const uint32_t g_rgctx_EqualityComparer_1_t5165A8B3DD812ADBE683BB1D468FA111379D3234;
extern const uint32_t g_rgctx_DictionaryExtensions_ValueEquals_TisTKey_tA2C259308CDF9A6EED83D5F966E768D2262AEC84_TisTValue_tFFD2E87CCEA33ABE7EDA245CE4C29800C97B9536_TisEqualityComparer_1_t5165A8B3DD812ADBE683BB1D468FA111379D3234_m54C6A5F72E426D42E1BE5401EA21DD7B61A83114;
extern const uint32_t g_rgctx_ICollection_1_tB8CC21E0BBDAB20953D7473CF7ECCF43D669E46B;
extern const uint32_t g_rgctx_ICollection_1_get_Count_m67990A458BE4D71990AA7C9B848A0F9BFAAB0383;
extern const uint32_t g_rgctx_IEnumerable_1_t4AF8B1594094E1F7080DDEDC88B9333E1933F23B;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m9C274231A6AF975F87804E7EDEA765E232E475ED;
extern const uint32_t g_rgctx_IEnumerator_1_t34C8B82973DA853C2784A1C4F0D0A6AE383D8109;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m2DBEC56F7F27495EA24036517B4246A9BCC48FF7;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Key_mA735C5CED8E2598473BCEB99D54850D0511F6D61;
extern const uint32_t g_rgctx_KeyValuePair_2_t2EC318B3EA197895957BB5F90C7D21AAF0D3FCE0;
extern const uint32_t g_rgctx_IDictionary_2_tE50C0FFEC6D79EA185C75DF597327CE3215AF873;
extern const uint32_t g_rgctx_IDictionary_2_TryGetValue_m97A2BBE1D3AF3F8E8B4631B336F80294FE44DF1B;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Value_m252C3B5B863E19A3A4D80B124F3621915BE6216D;
extern const uint32_t g_rgctx_TComparer_t37AE823B42E889BD9778EDC5EC070CFC6076773B;
extern const uint32_t g_rgctx_IEqualityComparer_1_tD30141587EFB392D4D6E72E7DABE192E2E12570D;
extern const Il2CppRGCTXConstrainedData g_rgctx_TComparer_t37AE823B42E889BD9778EDC5EC070CFC6076773B_IEqualityComparer_1_Equals_m7030F970691161B6AA17EA1ED96D96361311E07B;
extern const uint32_t g_rgctx_T_tBDB8A6248728F08906FC932161F22916F6D0F4AA;
extern const uint32_t g_rgctx_T_tBDB8A6248728F08906FC932161F22916F6D0F4AA;
static const Il2CppRGCTXDefinition s_rgctxValues[47] = 
{
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TComponent_t023831A30B470AB24FFA7F336E6DA44C483CFB19_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t0CE1B3A4E22EC0D1C5C58C75BCC12B399C511E0C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TComponent_t0CE1B3A4E22EC0D1C5C58C75BCC12B399C511E0C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IComponentRegistry_GetServiceComponent_TisTComponent_t96B8B334A174C61ACF2F00AC2D36DA82EFF89D93_m49E36B01B9275916714436B280553CD140C85156 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPackageRegistry_RegisterPackage_TisTPackage_tD9C5D9B459B225940045E7933443C8B783656397_mC535DC040374F4E5C9752240EC89757EF6460FC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPackageRegistry_RegisterDependency_TisT_tF7329CEE248A45B379F2D9B9C20F1C509D5AC5BE_mAD6891506B8D0C6E17D74F7C8BB210301F897701 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPackageRegistry_RegisterOptionalDependency_TisT_tCCF33AF0BF9585F8C54899E9E6F8D47870BAFE99_m70E798148F7356F9EE77CBC9C904A07D27D7AA4F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPackageRegistry_RegisterProvision_TisT_tAF2C20D6116F2B37117D32E592CC2526F3C66387_mB4B584384E95C9C399D4C4F0099A378683FD9F3C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPackageRegistry_RegisterPackage_TisTPackage_t1F53D662DD7D083035D429593DB6417C7D00B466_m263AC8BBE177344DE7192B249E8EB1582607BF42 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IComponentRegistry_RegisterServiceComponent_TisTComponent_t85B70181FD308155E7F16AE3674AFFD3CADCCC5B_mB9D0C705AE4607805AB4E3AADD0D1A95EEBA7693 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IComponentRegistry_GetServiceComponent_TisTComponent_tD5C669B09D7578B0D96C43ADD96195C237A26343_m14AD4DCAA8DFFB5BBC39FAD1072B05CD971B93F3 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TPackage_tBB906B0EDE41FEF2C415DB07176611363FF605A8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TPackage_tBB906B0EDE41FEF2C415DB07176611363FF605A8 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t238DC5B730435DEF358B69AF16052E2640F2DDAC },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t0A42BC7DB4D3931FC95421414239D0563923E6A3 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TComponent_t4EAFE06D169C0A9F5CEA93DA71BFAF9901F32E5E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t0054CA7812EA9EB48A93C0ECB6C72ADB4EBE1982 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mF75A892F34C72F44CB3BE51719A01B01C8F17819 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t6236748848A5632DFD186C6A3470C96922406DF5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m297021CD3C7C2CFEFB3884ABECE09DFFD61B9649 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Key_m7E9CBD2AA582BF58E8AC08FB4C3D23FB5D36A4FC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_KeyValuePair_2_tD5CC9E76B152764680BDFB703EAD3F05934C0FBD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Value_m41435BD3EFCEA1D74342808B791447E327121C23 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TDictionary_tE4D86954848B8FB9C3446EABF72C614BBFF9753C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IDictionary_2_t2D8409E060ED515C7006E9D709774D39F10B147E },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TDictionary_tE4D86954848B8FB9C3446EABF72C614BBFF9753C_IDictionary_2_set_Item_m961DD5D72BFEDD7568922EBDAA6758DAD60866C3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_m2B515C1B320E5CF36AA0050682E82CF5D5F9505B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t5165A8B3DD812ADBE683BB1D468FA111379D3234 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DictionaryExtensions_ValueEquals_TisTKey_tA2C259308CDF9A6EED83D5F966E768D2262AEC84_TisTValue_tFFD2E87CCEA33ABE7EDA245CE4C29800C97B9536_TisEqualityComparer_1_t5165A8B3DD812ADBE683BB1D468FA111379D3234_m54C6A5F72E426D42E1BE5401EA21DD7B61A83114 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_tB8CC21E0BBDAB20953D7473CF7ECCF43D669E46B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_get_Count_m67990A458BE4D71990AA7C9B848A0F9BFAAB0383 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t4AF8B1594094E1F7080DDEDC88B9333E1933F23B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m9C274231A6AF975F87804E7EDEA765E232E475ED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t34C8B82973DA853C2784A1C4F0D0A6AE383D8109 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m2DBEC56F7F27495EA24036517B4246A9BCC48FF7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Key_mA735C5CED8E2598473BCEB99D54850D0511F6D61 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_KeyValuePair_2_t2EC318B3EA197895957BB5F90C7D21AAF0D3FCE0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IDictionary_2_tE50C0FFEC6D79EA185C75DF597327CE3215AF873 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IDictionary_2_TryGetValue_m97A2BBE1D3AF3F8E8B4631B336F80294FE44DF1B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Value_m252C3B5B863E19A3A4D80B124F3621915BE6216D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TComparer_t37AE823B42E889BD9778EDC5EC070CFC6076773B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_tD30141587EFB392D4D6E72E7DABE192E2E12570D },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TComparer_t37AE823B42E889BD9778EDC5EC070CFC6076773B_IEqualityComparer_1_Equals_m7030F970691161B6AA17EA1ED96D96361311E07B },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tBDB8A6248728F08906FC932161F22916F6D0F4AA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tBDB8A6248728F08906FC932161F22916F6D0F4AA },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Services_Core_Internal_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Services_Core_Internal_CodeGenModule = 
{
	"Unity.Services.Core.Internal.dll",
	166,
	s_methodPointers,
	27,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	18,
	s_rgctxIndices,
	47,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
