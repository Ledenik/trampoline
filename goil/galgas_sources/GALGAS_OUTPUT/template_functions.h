//---------------------------------------------------------------------------*
//                                                                           *
//                       File 'template_functions.h'                         *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                      june 27th, 2010, at 20h10'19"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef template_functions_ENTITIES_DEFINED
#define template_functions_ENTITIES_DEFINED

//---------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*

#include "system_config.h"
#include "goil_types_root.h"
#include "goil_types_os.h"
#include "goil_basic_types.h"
#include "goil_routines.h"
#include "com_type.h"
#include "goil_semantic_types.h"
#include "goil_types_action.h"
#include "goil_types_task.h"
#include "goil_types_timing_prot.h"
#include "goil_types_resource.h"
#include "cfg_types.h"
#include "goil_types_isr.h"
#include "goil_types_counter.h"
#include "goil_types_scheduletable.h"
#include "goil_types_app.h"
#include "goil_types_networkmessage.h"
#include "template_invocation.h"
#include "template_semantics.h"
#include "goil_env_verification.h"

//---------------------------------------------------------------------------*

class GALGAS_bool ;
class GALGASap_bool ;
class GALGAS_string ;
class GALGASap_string ;
class GALGAS_goilTemplateFieldMap ;
class GALGASap_goilTemplateFieldMap ;
class GALGAS_root_5F_obj ;
class GALGASap_root_5F_obj ;
class GALGAS_stringMap ;
class GALGASap_stringMap ;
class GALGAS_lstring ;
class GALGASap_lstring ;
class GALGAS_tasks_5F_by_5F_type ;
class GALGASap_tasks_5F_by_5F_type ;
class GALGAS_prio_5F_map ;
class GALGASap_prio_5F_map ;
class GALGAS_taskKind ;
class GALGASap_taskKind ;
class GALGAS_goilTemplateFieldMapList ;
class GALGASap_goilTemplateFieldMapList ;
class GALGAS_uint_36__34_ ;
class GALGASap_uint_36__34_ ;
class GALGAS_goilTemplateVariableMap ;
class GALGASap_goilTemplateVariableMap ;
class GALGAS_eventMaskMap ;
class GALGASap_eventMaskMap ;
class GALGAS_action_5F_obj ;
class GALGASap_action_5F_obj ;
class GALGAS_filter_5F_prop_5F_obj ;
class GALGASap_filter_5F_prop_5F_obj ;
class GALGAS_uint ;
class GALGASap_uint ;
class GALGAS_lstringlist ;
class GALGASap_lstringlist ;
class GALGAS_prio_5F_list ;
class GALGASap_prio_5F_list ;
class GALGAS_config ;
class GALGASap_config ;
class GALGAS_trace_5F_method ;
class GALGASap_trace_5F_method ;
class GALGAS_basic_5F_type ;
class GALGASap_basic_5F_type ;
class GALGAS_os_5F_obj ;
class GALGASap_os_5F_obj ;
class GALGAS_luint_36__34_ ;
class GALGASap_luint_36__34_ ;
class GALGAS_lbool ;
class GALGASap_lbool ;
class GALGAS_uint_36__34__5F_class ;
class GALGASap_uint_36__34__5F_class ;
class GALGAS_stringlist ;
class GALGASap_stringlist ;
class GALGAS_prefix_5F_map ;
class GALGASap_prefix_5F_map ;
class GALGAS_stringset ;
class GALGASap_stringset ;
class GALGAS_com ;
class GALGASap_com ;
class GALGAS_task_5F_obj ;
class GALGASap_task_5F_obj ;
class GALGAS_rezlock_5F_map ;
class GALGASap_rezlock_5F_map ;
class GALGAS_resource_5F_map ;
class GALGASap_resource_5F_map ;
class GALGAS_resource_5F_obj ;
class GALGASap_resource_5F_obj ;
class GALGAS_counter_5F_obj ;
class GALGASap_counter_5F_obj ;
class GALGAS_adjustable_5F_obj ;
class GALGASap_adjustable_5F_obj ;
class GALGAS_scheduletable_5F_obj ;
class GALGASap_scheduletable_5F_obj ;
class GALGAS_goilTemplateType ;
class GALGASap_goilTemplateType ;
class GALGAS_goilTemplateValue ;
class GALGASap_goilTemplateValue ;
class GALGAS_object ;
class GALGASap_object ;
class GALGAS_type ;
class GALGASap_type ;
class GALGAS_enumerable ;
class GALGASap_enumerable ;
class GALGAS_class ;
class GALGASap_class ;
class GALGAS_struct ;
class GALGASap_struct ;
class GALGAS_enum ;
class GALGASap_enum ;
class GALGAS_mapproxy ;
class GALGASap_mapproxy ;
class GALGAS_location ;
class GALGASap_location ;
class GALGAS_functionlist ;
class GALGASap_functionlist ;
class GALGAS_function ;
class GALGASap_function ;
class GALGAS_typelist ;
class GALGASap_typelist ;
class GALGAS_objectlist ;
class GALGASap_objectlist ;
class GALGAS_binaryset ;
class GALGASap_binaryset ;
class GALGAS_uint_36__34_list ;
class GALGASap_uint_36__34_list ;
class GALGAS_luint ;
class GALGASap_luint ;
class GALGAS_lsint ;
class GALGASap_lsint ;
class GALGAS_sint ;
class GALGASap_sint ;
class GALGAS_lsint_36__34_ ;
class GALGASap_lsint_36__34_ ;
class GALGAS_sint_36__34_ ;
class GALGASap_sint_36__34_ ;
class GALGAS_lchar ;
class GALGASap_lchar ;
class GALGAS_char ;
class GALGASap_char ;
class GALGAS_ldouble ;
class GALGASap_ldouble ;
class GALGAS_double ;
class GALGASap_double ;
class GALGAS_task_5F_map ;
class GALGASap_task_5F_map ;
class GALGAS_counter_5F_map ;
class GALGASap_counter_5F_map ;
class GALGAS_alarm_5F_map ;
class GALGASap_alarm_5F_map ;
class GALGAS_event_5F_map ;
class GALGASap_event_5F_map ;
class GALGAS_isr_5F_map ;
class GALGASap_isr_5F_map ;
class GALGAS_message_5F_map ;
class GALGASap_message_5F_map ;
class GALGAS_netmess_5F_map ;
class GALGASap_netmess_5F_map ;
class GALGAS_scheduletable_5F_map ;
class GALGASap_scheduletable_5F_map ;
class GALGAS_app_5F_map ;
class GALGASap_app_5F_map ;
class GALGAS_trace ;
class GALGASap_trace ;
class GALGAS_number_5F_set ;
class GALGASap_number_5F_set ;
class GALGAS_imp_5F_type ;
class GALGASap_imp_5F_type ;
class GALGAS_oil_5F_obj ;
class GALGASap_oil_5F_obj ;
class GALGAS_autostart_5F_obj ;
class GALGASap_autostart_5F_obj ;
class GALGAS_event_5F_mask_5F_obj ;
class GALGASap_event_5F_mask_5F_obj ;
class GALGAS_mess_5F_prop_5F_obj ;
class GALGASap_mess_5F_prop_5F_obj ;
class GALGAS_link_5F_obj ;
class GALGASap_link_5F_obj ;
class GALGAS_task_5F_autostart_5F_obj ;
class GALGASap_task_5F_autostart_5F_obj ;
class GALGAS_timing_5F_prot ;
class GALGASap_timing_5F_prot ;
class GALGAS_resource_5F_property_5F_obj ;
class GALGASap_resource_5F_property_5F_obj ;
class GALGAS_counter_5F_driver ;
class GALGASap_counter_5F_driver ;
class GALGAS_counter_5F_type ;
class GALGASap_counter_5F_type ;
class GALGAS_ltgt_5F_sync_5F_obj ;
class GALGASap_ltgt_5F_sync_5F_obj ;
class GALGAS_app_5F_trusted_5F_obj ;
class GALGASap_app_5F_trusted_5F_obj ;
class GALGAS_base_5F_netprop ;
class GALGASap_base_5F_netprop ;
class GALGAS_void_5F_driver ;
class GALGASap_void_5F_driver ;
class GALGAS_os_5F_internal_5F_driver ;
class GALGASap_os_5F_internal_5F_driver ;
class GALGAS_gpt_5F_driver ;
class GALGASap_gpt_5F_driver ;
class GALGAS_void_5F_counter ;
class GALGASap_void_5F_counter ;
class GALGAS_software_5F_counter ;
class GALGASap_software_5F_counter ;
class GALGAS_time_5F_constants ;
class GALGASap_time_5F_constants ;
class GALGAS_hardware_5F_counter ;
class GALGASap_hardware_5F_counter ;
class GALGAS_list ;
class GALGASap_list ;
class GALGAS_sortedlist ;
class GALGASap_sortedlist ;
class GALGAS_map ;
class GALGASap_map ;
class GALGAS_listmap ;
class GALGASap_listmap ;
class GALGAS_data ;
class GALGASap_data ;
class GALGAS_event_5F_mask_5F_void_5F_obj ;
class GALGASap_event_5F_mask_5F_void_5F_obj ;
class GALGAS_event_5F_mask_5F_user_5F_obj ;
class GALGASap_event_5F_mask_5F_user_5F_obj ;
class GALGAS_event_5F_mask_5F_auto_5F_obj ;
class GALGASap_event_5F_mask_5F_auto_5F_obj ;
class GALGAS_void_5F_filter ;
class GALGASap_void_5F_filter ;
class GALGAS_always_5F_filter ;
class GALGASap_always_5F_filter ;
class GALGAS_never_5F_filter ;
class GALGASap_never_5F_filter ;
class GALGAS_maskednewequalsx_5F_filter ;
class GALGASap_maskednewequalsx_5F_filter ;
class GALGAS_maskednewdiffersx_5F_filter ;
class GALGASap_maskednewdiffersx_5F_filter ;
class GALGAS_newisequal_5F_filter ;
class GALGASap_newisequal_5F_filter ;
class GALGAS_newisdifferent_5F_filter ;
class GALGASap_newisdifferent_5F_filter ;
class GALGAS_maskednewequalsmaskedold_5F_filter ;
class GALGASap_maskednewequalsmaskedold_5F_filter ;
class GALGAS_maskednewdiffersmaskedold_5F_filter ;
class GALGASap_maskednewdiffersmaskedold_5F_filter ;
class GALGAS_newiswithin ;
class GALGASap_newiswithin ;
class GALGAS_newisoutside ;
class GALGASap_newisoutside ;
class GALGAS_newisgreater_5F_filter ;
class GALGASap_newisgreater_5F_filter ;
class GALGAS_newislessorequal_5F_filter ;
class GALGASap_newislessorequal_5F_filter ;
class GALGAS_newisless_5F_filter ;
class GALGASap_newisless_5F_filter ;
class GALGAS_newisgreaterorequal_5F_filter ;
class GALGASap_newisgreaterorequal_5F_filter ;
class GALGAS_oneeveryn_5F_filter ;
class GALGASap_oneeveryn_5F_filter ;
class GALGAS_imp_5F_sca_5F_type ;
class GALGASap_imp_5F_sca_5F_type ;
class GALGAS_imp_5F_obj_5F_ref ;
class GALGASap_imp_5F_obj_5F_ref ;
class GALGAS_void_5F_type ;
class GALGASap_void_5F_type ;
class GALGAS_void_5F_link ;
class GALGASap_void_5F_link ;
class GALGAS_true_5F_link ;
class GALGASap_true_5F_link ;
class GALGAS_false_5F_link ;
class GALGASap_false_5F_link ;
class GALGAS_list_5F_uint_33__32_ ;
class GALGASap_list_5F_uint_33__32_ ;
class GALGAS_list_5F_sint_33__32_ ;
class GALGASap_list_5F_sint_33__32_ ;
class GALGAS_list_5F_uint_36__34_ ;
class GALGASap_list_5F_uint_36__34_ ;
class GALGAS_list_5F_sint_36__34_ ;
class GALGASap_list_5F_sint_36__34_ ;
class GALGAS_ident_5F_list ;
class GALGASap_ident_5F_list ;
class GALGAS_goilTemplateTypeList ;
class GALGASap_goilTemplateTypeList ;
class GALGAS_goilTemplateExpressionList ;
class GALGASap_goilTemplateExpressionList ;
class GALGAS_goilTemplateEnumationList ;
class GALGASap_goilTemplateEnumationList ;
class GALGAS_luintlist ;
class GALGASap_luintlist ;
class GALGAS_uintlist ;
class GALGASap_uintlist ;
class GALGAS_ltgt_5F_sync_5F_void ;
class GALGASap_ltgt_5F_sync_5F_void ;
class GALGAS_ltgt_5F_sync_5F_false ;
class GALGASap_ltgt_5F_sync_5F_false ;
class GALGAS_ltgt_5F_sync_5F_true ;
class GALGASap_ltgt_5F_sync_5F_true ;
class GALGAS_ident_5F_map ;
class GALGASap_ident_5F_map ;
class GALGAS_lstringMap ;
class GALGASap_lstringMap ;
class GALGAS_stringset_5F_map ;
class GALGASap_stringset_5F_map ;
class GALGAS_ident_5F_list_5F_map ;
class GALGASap_ident_5F_list_5F_map ;
class GALGAS_implementation_5F_spec ;
class GALGASap_implementation_5F_spec ;
class GALGAS_implementation ;
class GALGASap_implementation ;
class GALGAS_os_5F_imp ;
class GALGASap_os_5F_imp ;
class GALGAS_event_5F_obj ;
class GALGASap_event_5F_obj ;
class GALGAS_event_5F_usage_5F_map ;
class GALGASap_event_5F_usage_5F_map ;
class GALGAS_alarm_5F_obj ;
class GALGASap_alarm_5F_obj ;
class GALGAS_message_5F_obj ;
class GALGASap_message_5F_obj ;
class GALGAS_task_5F_mask ;
class GALGASap_task_5F_mask ;
class GALGAS_linked_5F_resources ;
class GALGASap_linked_5F_resources ;
class GALGAS_cfg_5F_attrs ;
class GALGASap_cfg_5F_attrs ;
class GALGAS_isr_5F_obj ;
class GALGASap_isr_5F_obj ;
class GALGAS_app_5F_obj ;
class GALGASap_app_5F_obj ;
class GALGAS_netmess_5F_obj ;
class GALGASap_netmess_5F_obj ;
class GALGAS_void_5F_mess_5F_prop ;
class GALGASap_void_5F_mess_5F_prop ;
class GALGAS_ssi_5F_mess_5F_prop ;
class GALGASap_ssi_5F_mess_5F_prop ;
class GALGAS_sse_5F_mess_5F_prop ;
class GALGASap_sse_5F_mess_5F_prop ;
class GALGAS_sde_5F_mess_5F_prop ;
class GALGASap_sde_5F_mess_5F_prop ;
class GALGAS_szi_5F_mess_5F_prop ;
class GALGASap_szi_5F_mess_5F_prop ;
class GALGAS_sze_5F_mess_5F_prop ;
class GALGASap_sze_5F_mess_5F_prop ;
class GALGAS_rzi_5F_mess_5F_prop ;
class GALGASap_rzi_5F_mess_5F_prop ;
class GALGAS_rze_5F_mess_5F_prop ;
class GALGASap_rze_5F_mess_5F_prop ;
class GALGAS_rui_5F_mess_5F_prop ;
class GALGASap_rui_5F_mess_5F_prop ;
class GALGAS_rqi_5F_mess_5F_prop ;
class GALGASap_rqi_5F_mess_5F_prop ;
class GALGAS_rue_5F_mess_5F_prop ;
class GALGASap_rue_5F_mess_5F_prop ;
class GALGAS_rqe_5F_mess_5F_prop ;
class GALGASap_rqe_5F_mess_5F_prop ;
class GALGAS_rde_5F_mess_5F_prop ;
class GALGASap_rde_5F_mess_5F_prop ;
class GALGAS_rzs_5F_mess_5F_prop ;
class GALGASap_rzs_5F_mess_5F_prop ;
class GALGAS_uint_33__32__5F_set ;
class GALGASap_uint_33__32__5F_set ;
class GALGAS_sint_33__32__5F_set ;
class GALGASap_sint_33__32__5F_set ;
class GALGAS_uint_36__34__5F_set ;
class GALGASap_uint_36__34__5F_set ;
class GALGAS_sint_36__34__5F_set ;
class GALGASap_sint_36__34__5F_set ;
class GALGAS_float_5F_set ;
class GALGASap_float_5F_set ;
class GALGAS_base_5F_mess ;
class GALGASap_base_5F_mess ;
class GALGAS_action_5F_list ;
class GALGASap_action_5F_list ;
class GALGAS_expiry_5F_point_5F_obj ;
class GALGASap_expiry_5F_point_5F_obj ;
class GALGAS_expiry_5F_point_5F_list ;
class GALGASap_expiry_5F_point_5F_list ;
class GALGAS_resource_5F_property_5F_void_5F_obj ;
class GALGASap_resource_5F_property_5F_void_5F_obj ;
class GALGAS_resource_5F_property_5F_standard_5F_obj ;
class GALGASap_resource_5F_property_5F_standard_5F_obj ;
class GALGAS_resource_5F_property_5F_linked_5F_obj ;
class GALGASap_resource_5F_property_5F_linked_5F_obj ;
class GALGAS_resource_5F_property_5F_internal_5F_obj ;
class GALGASap_resource_5F_property_5F_internal_5F_obj ;
class GALGAS_sint_33__32__5F_empty_5F_set ;
class GALGASap_sint_33__32__5F_empty_5F_set ;
class GALGAS_sint_33__32__5F_range ;
class GALGASap_sint_33__32__5F_range ;
class GALGAS_sint_33__32__5F_list ;
class GALGASap_sint_33__32__5F_list ;
class GALGAS_sint_36__34__5F_empty_5F_set ;
class GALGASap_sint_36__34__5F_empty_5F_set ;
class GALGAS_sint_36__34__5F_range ;
class GALGASap_sint_36__34__5F_range ;
class GALGAS_sint_36__34__5F_list ;
class GALGASap_sint_36__34__5F_list ;
class GALGAS_receiverSortedList ;
class GALGASap_receiverSortedList ;
class GALGAS_receiverReverseSortedList ;
class GALGASap_receiverReverseSortedList ;
class GALGAS_sorted_5F_events ;
class GALGASap_sorted_5F_events ;
class GALGAS_objs_5F_by_5F_prio ;
class GALGASap_objs_5F_by_5F_prio ;
class GALGAS_isr_5F_list ;
class GALGASap_isr_5F_list ;
class GALGAS_counter_5F_by_5F_source ;
class GALGASap_counter_5F_by_5F_source ;
class GALGAS_task_5F_autostart_5F_void ;
class GALGASap_task_5F_autostart_5F_void ;
class GALGAS_task_5F_autostart_5F_false ;
class GALGASap_task_5F_autostart_5F_false ;
class GALGAS_task_5F_autostart_5F_true ;
class GALGASap_task_5F_autostart_5F_true ;
class GALGAS_void_5F_timing_5F_prot ;
class GALGASap_void_5F_timing_5F_prot ;
class GALGAS_false_5F_timing_5F_prot ;
class GALGASap_false_5F_timing_5F_prot ;
class GALGAS_timing_5F_prot_5F_task ;
class GALGASap_timing_5F_prot_5F_task ;
class GALGAS_timing_5F_prot_5F_isr ;
class GALGASap_timing_5F_prot_5F_isr ;
class GALGAS_trace_5F_off ;
class GALGASap_trace_5F_off ;
class GALGAS_trace_5F_on ;
class GALGASap_trace_5F_on ;
class GALGAS_trace_5F_void ;
class GALGASap_trace_5F_void ;
class GALGAS_trace_5F_file ;
class GALGASap_trace_5F_file ;
class GALGAS_uint_33__32__5F_empty_5F_set ;
class GALGASap_uint_33__32__5F_empty_5F_set ;
class GALGAS_uint_33__32__5F_range ;
class GALGASap_uint_33__32__5F_range ;
class GALGAS_uint_33__32__5F_list ;
class GALGASap_uint_33__32__5F_list ;
class GALGAS_uint_36__34__5F_empty_5F_set ;
class GALGASap_uint_36__34__5F_empty_5F_set ;
class GALGAS_uint_36__34__5F_range ;
class GALGASap_uint_36__34__5F_range ;
class GALGAS_uint_36__34__5F_list ;
class GALGASap_uint_36__34__5F_list ;
class GALGAS_nmcallback_5F_action ;
class GALGASap_nmcallback_5F_action ;
class GALGAS_void_5F_action ;
class GALGASap_void_5F_action ;
class GALGAS_setevent_5F_action ;
class GALGASap_setevent_5F_action ;
class GALGAS_activatetask_5F_action ;
class GALGASap_activatetask_5F_action ;
class GALGAS_callback_5F_action ;
class GALGASap_callback_5F_action ;
class GALGAS_flag_5F_action ;
class GALGASap_flag_5F_action ;
class GALGAS_incrementcounter_5F_action ;
class GALGASap_incrementcounter_5F_action ;
class GALGAS_finalize_5F_st_5F_action ;
class GALGASap_finalize_5F_st_5F_action ;
class GALGAS_adjustable_5F_void ;
class GALGASap_adjustable_5F_void ;
class GALGAS_adjustable_5F_false ;
class GALGASap_adjustable_5F_false ;
class GALGAS_adjustable_5F_true ;
class GALGASap_adjustable_5F_true ;
class GALGAS_app_5F_trusted_5F_void ;
class GALGASap_app_5F_trusted_5F_void ;
class GALGAS_app_5F_trusted_5F_false ;
class GALGASap_app_5F_trusted_5F_false ;
class GALGAS_app_5F_trusted_5F_true ;
class GALGASap_app_5F_trusted_5F_true ;
class GALGAS_autostart_5F_void ;
class GALGASap_autostart_5F_void ;
class GALGAS_autostart_5F_false ;
class GALGASap_autostart_5F_false ;
class GALGAS_alarm_5F_autostart_5F_true ;
class GALGASap_alarm_5F_autostart_5F_true ;
class GALGAS_sd_5F_autostart_5F_false ;
class GALGASap_sd_5F_autostart_5F_false ;
class GALGAS_sd_5F_autostart_5F_true ;
class GALGASap_sd_5F_autostart_5F_true ;
class GALGAS_void_5F_netprop ;
class GALGASap_void_5F_netprop ;
class GALGAS_static_5F_netprop ;
class GALGASap_static_5F_netprop ;
class GALGAS_dynamic_5F_netprop ;
class GALGASap_dynamic_5F_netprop ;
class GALGAS_zero_5F_netprop ;
class GALGASap_zero_5F_netprop ;
class GALGAS_no_5F_linker ;
class GALGASap_no_5F_linker ;
class GALGAS_yes_5F_linker ;
class GALGASap_yes_5F_linker ;
class GALGAS_memmap_5F_false ;
class GALGASap_memmap_5F_false ;
class GALGAS_memmap_5F_true ;
class GALGASap_memmap_5F_true ;
class GALGAS_void ;
class GALGASap_void ;
class GALGAS_uint_33__32__5F_class ;
class GALGASap_uint_33__32__5F_class ;
class GALGAS_sint_33__32__5F_class ;
class GALGASap_sint_33__32__5F_class ;
class GALGAS_sint_36__34__5F_class ;
class GALGASap_sint_36__34__5F_class ;
class GALGAS_float_5F_class ;
class GALGASap_float_5F_class ;
class GALGAS_string_5F_class ;
class GALGASap_string_5F_class ;
class GALGAS_bool_5F_class ;
class GALGASap_bool_5F_class ;
class GALGAS_attrs ;
class GALGASap_attrs ;
class GALGAS_interrupts ;
class GALGASap_interrupts ;
class GALGAS_void_5F_bool_5F_class ;
class GALGASap_void_5F_bool_5F_class ;
class GALGAS_auto_5F_bool_5F_class ;
class GALGASap_auto_5F_bool_5F_class ;
class GALGAS_void_5F_float_5F_class ;
class GALGASap_void_5F_float_5F_class ;
class GALGAS_float_5F_empty_5F_set ;
class GALGASap_float_5F_empty_5F_set ;
class GALGAS_uint_33__32__5F_type ;
class GALGASap_uint_33__32__5F_type ;
class GALGAS_sint_33__32__5F_type ;
class GALGASap_sint_33__32__5F_type ;
class GALGAS_uint_36__34__5F_type ;
class GALGASap_uint_36__34__5F_type ;
class GALGAS_sint_36__34__5F_type ;
class GALGASap_sint_36__34__5F_type ;
class GALGAS_sd_5F_autostart_5F_synchron ;
class GALGASap_sd_5F_autostart_5F_synchron ;
class GALGAS_sd_5F_autostart_5F_relative ;
class GALGASap_sd_5F_autostart_5F_relative ;
class GALGAS_sd_5F_autostart_5F_absolute ;
class GALGASap_sd_5F_autostart_5F_absolute ;
class GALGAS_void_5F_sint_33__32__5F_class ;
class GALGASap_void_5F_sint_33__32__5F_class ;
class GALGAS_auto_5F_sint_33__32__5F_class ;
class GALGASap_auto_5F_sint_33__32__5F_class ;
class GALGAS_void_5F_sint_36__34__5F_class ;
class GALGASap_void_5F_sint_36__34__5F_class ;
class GALGAS_auto_5F_sint_36__34__5F_class ;
class GALGASap_auto_5F_sint_36__34__5F_class ;
class GALGAS_void_5F_string_5F_class ;
class GALGASap_void_5F_string_5F_class ;
class GALGAS_auto_5F_string_5F_class ;
class GALGASap_auto_5F_string_5F_class ;
class GALGAS_void_5F_uint_33__32__5F_class ;
class GALGASap_void_5F_uint_33__32__5F_class ;
class GALGAS_auto_5F_uint_33__32__5F_class ;
class GALGASap_auto_5F_uint_33__32__5F_class ;
class GALGAS_void_5F_uint_36__34__5F_class ;
class GALGASap_void_5F_uint_36__34__5F_class ;
class GALGAS_auto_5F_uint_36__34__5F_class ;
class GALGASap_auto_5F_uint_36__34__5F_class ;

//---------------------------------------------------------------------------*
//                                                                           *
//                            Routine 'trueFalse'                            *
//                                                                           *
//---------------------------------------------------------------------------*

GALGASap_string function_trueFalse (GALGASap_bool & constinArgument0,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                              Routine 'yesNo'                              *
//                                                                           *
//---------------------------------------------------------------------------*

GALGASap_string function_yesNo (GALGASap_bool & constinArgument0,
                                C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                            Routine 'TRUEFALSE'                            *
//                                                                           *
//---------------------------------------------------------------------------*

GALGASap_string function_TRUEFALSE (GALGASap_bool & constinArgument0,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

#endif
