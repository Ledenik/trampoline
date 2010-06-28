//---------------------------------------------------------------------------*
//                                                                           *
//                           File 'tasks_verif.h'                            *
//                 Generated by version GALGAS_BETA_VERSION                  *
//                      june 27th, 2010, at 20h10'20"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef tasks_verif_ENTITIES_DEFINED
#define tasks_verif_ENTITIES_DEFINED

//---------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*

#include "goil_types_task.h"
#include "goil_basic_types.h"
#include "goil_types_timing_prot.h"
#include "goil_types_resource.h"
#include "goil_routines.h"
#include "cfg_types.h"

//---------------------------------------------------------------------------*

class GALGAS_task_5F_map ;
class GALGASap_task_5F_map ;
class GALGAS_task_5F_obj ;
class GALGASap_task_5F_obj ;
class GALGAS_basic_5F_type ;
class GALGASap_basic_5F_type ;
class GALGAS_string ;
class GALGASap_string ;
class GALGAS_uint ;
class GALGASap_uint ;
class GALGAS_uint_36__34_ ;
class GALGASap_uint_36__34_ ;
class GALGAS_luint_36__34_ ;
class GALGASap_luint_36__34_ ;
class GALGAS_lstring ;
class GALGASap_lstring ;
class GALGAS_lbool ;
class GALGASap_lbool ;
class GALGAS_bool ;
class GALGASap_bool ;
class GALGAS_uint_36__34__5F_class ;
class GALGASap_uint_36__34__5F_class ;
class GALGAS_rezlock_5F_map ;
class GALGASap_rezlock_5F_map ;
class GALGAS_resource_5F_map ;
class GALGASap_resource_5F_map ;
class GALGAS_resource_5F_obj ;
class GALGASap_resource_5F_obj ;
class GALGAS_stringlist ;
class GALGASap_stringlist ;
class GALGAS_prefix_5F_map ;
class GALGASap_prefix_5F_map ;
class GALGAS_stringset ;
class GALGASap_stringset ;
class GALGAS_lstringlist ;
class GALGASap_lstringlist ;
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
class GALGAS_task_5F_autostart_5F_obj ;
class GALGASap_task_5F_autostart_5F_obj ;
class GALGAS_number_5F_set ;
class GALGASap_number_5F_set ;
class GALGAS_imp_5F_type ;
class GALGASap_imp_5F_type ;
class GALGAS_oil_5F_obj ;
class GALGASap_oil_5F_obj ;
class GALGAS_autostart_5F_obj ;
class GALGASap_autostart_5F_obj ;
class GALGAS_timing_5F_prot ;
class GALGASap_timing_5F_prot ;
class GALGAS_config ;
class GALGASap_config ;
class GALGAS_resource_5F_property_5F_obj ;
class GALGASap_resource_5F_property_5F_obj ;
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
class GALGAS_imp_5F_sca_5F_type ;
class GALGASap_imp_5F_sca_5F_type ;
class GALGAS_imp_5F_obj_5F_ref ;
class GALGASap_imp_5F_obj_5F_ref ;
class GALGAS_void_5F_type ;
class GALGASap_void_5F_type ;
class GALGAS_prio_5F_list ;
class GALGASap_prio_5F_list ;
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
class GALGAS_luintlist ;
class GALGASap_luintlist ;
class GALGAS_uintlist ;
class GALGASap_uintlist ;
class GALGAS_task_5F_mask ;
class GALGASap_task_5F_mask ;
class GALGAS_prio_5F_map ;
class GALGASap_prio_5F_map ;
class GALGAS_ident_5F_map ;
class GALGASap_ident_5F_map ;
class GALGAS_stringMap ;
class GALGASap_stringMap ;
class GALGAS_lstringMap ;
class GALGASap_lstringMap ;
class GALGAS_stringset_5F_map ;
class GALGASap_stringset_5F_map ;
class GALGAS_ident_5F_list_5F_map ;
class GALGASap_ident_5F_list_5F_map ;
class GALGAS_linked_5F_resources ;
class GALGASap_linked_5F_resources ;
class GALGAS_cfg_5F_attrs ;
class GALGASap_cfg_5F_attrs ;
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
class GALGAS_objs_5F_by_5F_prio ;
class GALGASap_objs_5F_by_5F_prio ;
class GALGAS_tasks_5F_by_5F_type ;
class GALGASap_tasks_5F_by_5F_type ;
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
class GALGAS_autostart_5F_void ;
class GALGASap_autostart_5F_void ;
class GALGAS_autostart_5F_false ;
class GALGASap_autostart_5F_false ;
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
//                        Routine 'tasks_well_formed'                        *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_tasks_5F_well_5F_formed (GALGASap_task_5F_map constinArgument0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

#endif
